// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GA20191120_H_
#define ALIBABACLOUD_GA20191120_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ga20191120 {
class AddEntriesToAclRequestAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> entry{};
  shared_ptr<string> entryDescription{};

  AddEntriesToAclRequestAclEntries() {}

  explicit AddEntriesToAclRequestAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    if (entryDescription) {
      res["EntryDescription"] = boost::any(*entryDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
    if (m.find("EntryDescription") != m.end() && !m["EntryDescription"].empty()) {
      entryDescription = make_shared<string>(boost::any_cast<string>(m["EntryDescription"]));
    }
  }


  virtual ~AddEntriesToAclRequestAclEntries() = default;
};
class AddEntriesToAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<vector<AddEntriesToAclRequestAclEntries>> aclEntries{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  AddEntriesToAclRequest() {}

  explicit AddEntriesToAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<AddEntriesToAclRequestAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEntriesToAclRequestAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<AddEntriesToAclRequestAclEntries>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~AddEntriesToAclRequest() = default;
};
class AddEntriesToAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> aclId{};

  AddEntriesToAclResponseBody() {}

  explicit AddEntriesToAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
  }


  virtual ~AddEntriesToAclResponseBody() = default;
};
class AddEntriesToAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddEntriesToAclResponseBody> body{};

  AddEntriesToAclResponse() {}

  explicit AddEntriesToAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddEntriesToAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEntriesToAclResponseBody>(model1);
      }
    }
  }


  virtual ~AddEntriesToAclResponse() = default;
};
class AssociateAclsWithListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  AssociateAclsWithListenerRequest() {}

  explicit AssociateAclsWithListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~AssociateAclsWithListenerRequest() = default;
};
class AssociateAclsWithListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<string> listenerId{};

  AssociateAclsWithListenerResponseBody() {}

  explicit AssociateAclsWithListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~AssociateAclsWithListenerResponseBody() = default;
};
class AssociateAclsWithListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateAclsWithListenerResponseBody> body{};

  AssociateAclsWithListenerResponse() {}

  explicit AssociateAclsWithListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateAclsWithListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateAclsWithListenerResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateAclsWithListenerResponse() = default;
};
class AssociateAdditionalCertificatesWithListenerRequestCertificates : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> domain{};

  AssociateAdditionalCertificatesWithListenerRequestCertificates() {}

  explicit AssociateAdditionalCertificatesWithListenerRequestCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerRequestCertificates() = default;
};
class AssociateAdditionalCertificatesWithListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>> certificates{};

  AssociateAdditionalCertificatesWithListenerRequest() {}

  explicit AssociateAdditionalCertificatesWithListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<AssociateAdditionalCertificatesWithListenerRequestCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateAdditionalCertificatesWithListenerRequestCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>>(expect1);
      }
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerRequest() = default;
};
class AssociateAdditionalCertificatesWithListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> listenerId{};

  AssociateAdditionalCertificatesWithListenerResponseBody() {}

  explicit AssociateAdditionalCertificatesWithListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerResponseBody() = default;
};
class AssociateAdditionalCertificatesWithListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateAdditionalCertificatesWithListenerResponseBody> body{};

  AssociateAdditionalCertificatesWithListenerResponse() {}

  explicit AssociateAdditionalCertificatesWithListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateAdditionalCertificatesWithListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateAdditionalCertificatesWithListenerResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerResponse() = default;
};
class AttachDdosToAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> ddosId{};
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> regionId{};

  AttachDdosToAcceleratorRequest() {}

  explicit AttachDdosToAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (ddosId) {
      res["DdosId"] = boost::any(*ddosId);
    }
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("DdosId") != m.end() && !m["DdosId"].empty()) {
      ddosId = make_shared<string>(boost::any_cast<string>(m["DdosId"]));
    }
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachDdosToAcceleratorRequest() = default;
};
class AttachDdosToAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ddosId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> gaId{};

  AttachDdosToAcceleratorResponseBody() {}

  explicit AttachDdosToAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosId) {
      res["DdosId"] = boost::any(*ddosId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (gaId) {
      res["GaId"] = boost::any(*gaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosId") != m.end() && !m["DdosId"].empty()) {
      ddosId = make_shared<string>(boost::any_cast<string>(m["DdosId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("GaId") != m.end() && !m["GaId"].empty()) {
      gaId = make_shared<string>(boost::any_cast<string>(m["GaId"]));
    }
  }


  virtual ~AttachDdosToAcceleratorResponseBody() = default;
};
class AttachDdosToAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachDdosToAcceleratorResponseBody> body{};

  AttachDdosToAcceleratorResponse() {}

  explicit AttachDdosToAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachDdosToAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachDdosToAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~AttachDdosToAcceleratorResponse() = default;
};
class AttachLogStoreToEndpointGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> slsProjectName{};
  shared_ptr<string> slsLogStoreName{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> slsRegionId{};
  shared_ptr<vector<string>> endpointGroupIds{};
  shared_ptr<string> clientToken{};

  AttachLogStoreToEndpointGroupRequest() {}

  explicit AttachLogStoreToEndpointGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (slsProjectName) {
      res["SlsProjectName"] = boost::any(*slsProjectName);
    }
    if (slsLogStoreName) {
      res["SlsLogStoreName"] = boost::any(*slsLogStoreName);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (slsRegionId) {
      res["SlsRegionId"] = boost::any(*slsRegionId);
    }
    if (endpointGroupIds) {
      res["EndpointGroupIds"] = boost::any(*endpointGroupIds);
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
    if (m.find("SlsProjectName") != m.end() && !m["SlsProjectName"].empty()) {
      slsProjectName = make_shared<string>(boost::any_cast<string>(m["SlsProjectName"]));
    }
    if (m.find("SlsLogStoreName") != m.end() && !m["SlsLogStoreName"].empty()) {
      slsLogStoreName = make_shared<string>(boost::any_cast<string>(m["SlsLogStoreName"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("SlsRegionId") != m.end() && !m["SlsRegionId"].empty()) {
      slsRegionId = make_shared<string>(boost::any_cast<string>(m["SlsRegionId"]));
    }
    if (m.find("EndpointGroupIds") != m.end() && !m["EndpointGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~AttachLogStoreToEndpointGroupRequest() = default;
};
class AttachLogStoreToEndpointGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachLogStoreToEndpointGroupResponseBody() {}

  explicit AttachLogStoreToEndpointGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachLogStoreToEndpointGroupResponseBody() = default;
};
class AttachLogStoreToEndpointGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachLogStoreToEndpointGroupResponseBody> body{};

  AttachLogStoreToEndpointGroupResponse() {}

  explicit AttachLogStoreToEndpointGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachLogStoreToEndpointGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachLogStoreToEndpointGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AttachLogStoreToEndpointGroupResponse() = default;
};
class BandwidthPackageAddAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> acceleratorId{};

  BandwidthPackageAddAcceleratorRequest() {}

  explicit BandwidthPackageAddAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~BandwidthPackageAddAcceleratorRequest() = default;
};
class BandwidthPackageAddAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> accelerators{};
  shared_ptr<string> bandwidthPackageId{};

  BandwidthPackageAddAcceleratorResponseBody() {}

  explicit BandwidthPackageAddAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accelerators) {
      res["Accelerators"] = boost::any(*accelerators);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Accelerators") != m.end() && !m["Accelerators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Accelerators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Accelerators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accelerators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
  }


  virtual ~BandwidthPackageAddAcceleratorResponseBody() = default;
};
class BandwidthPackageAddAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BandwidthPackageAddAcceleratorResponseBody> body{};

  BandwidthPackageAddAcceleratorResponse() {}

  explicit BandwidthPackageAddAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BandwidthPackageAddAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BandwidthPackageAddAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~BandwidthPackageAddAcceleratorResponse() = default;
};
class BandwidthPackageRemoveAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> acceleratorId{};

  BandwidthPackageRemoveAcceleratorRequest() {}

  explicit BandwidthPackageRemoveAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~BandwidthPackageRemoveAcceleratorRequest() = default;
};
class BandwidthPackageRemoveAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> accelerators{};
  shared_ptr<string> bandwidthPackageId{};

  BandwidthPackageRemoveAcceleratorResponseBody() {}

  explicit BandwidthPackageRemoveAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accelerators) {
      res["Accelerators"] = boost::any(*accelerators);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Accelerators") != m.end() && !m["Accelerators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Accelerators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Accelerators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accelerators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
  }


  virtual ~BandwidthPackageRemoveAcceleratorResponseBody() = default;
};
class BandwidthPackageRemoveAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BandwidthPackageRemoveAcceleratorResponseBody> body{};

  BandwidthPackageRemoveAcceleratorResponse() {}

  explicit BandwidthPackageRemoveAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BandwidthPackageRemoveAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BandwidthPackageRemoveAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~BandwidthPackageRemoveAcceleratorResponse() = default;
};
class ConfigEndpointProbeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> endpointGroupId{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> probeProtocol{};
  shared_ptr<string> probePort{};
  shared_ptr<string> enable{};

  ConfigEndpointProbeRequest() {}

  explicit ConfigEndpointProbeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (probeProtocol) {
      res["ProbeProtocol"] = boost::any(*probeProtocol);
    }
    if (probePort) {
      res["ProbePort"] = boost::any(*probePort);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ProbeProtocol") != m.end() && !m["ProbeProtocol"].empty()) {
      probeProtocol = make_shared<string>(boost::any_cast<string>(m["ProbeProtocol"]));
    }
    if (m.find("ProbePort") != m.end() && !m["ProbePort"].empty()) {
      probePort = make_shared<string>(boost::any_cast<string>(m["ProbePort"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<string>(boost::any_cast<string>(m["Enable"]));
    }
  }


  virtual ~ConfigEndpointProbeRequest() = default;
};
class ConfigEndpointProbeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigEndpointProbeResponseBody() {}

  explicit ConfigEndpointProbeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigEndpointProbeResponseBody() = default;
};
class ConfigEndpointProbeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConfigEndpointProbeResponseBody> body{};

  ConfigEndpointProbeResponse() {}

  explicit ConfigEndpointProbeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConfigEndpointProbeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigEndpointProbeResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigEndpointProbeResponse() = default;
};
class CreateAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> name{};
  shared_ptr<long> duration{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> spec{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> autoUseCoupon{};

  CreateAcceleratorRequest() {}

  explicit CreateAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoUseCoupon) {
      res["AutoUseCoupon"] = boost::any(*autoUseCoupon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoUseCoupon") != m.end() && !m["AutoUseCoupon"].empty()) {
      autoUseCoupon = make_shared<string>(boost::any_cast<string>(m["AutoUseCoupon"]));
    }
  }


  virtual ~CreateAcceleratorRequest() = default;
};
class CreateAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> acceleratorId{};

  CreateAcceleratorResponseBody() {}

  explicit CreateAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
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
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~CreateAcceleratorResponseBody() = default;
};
class CreateAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAcceleratorResponseBody> body{};

  CreateAcceleratorResponse() {}

  explicit CreateAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAcceleratorResponse() = default;
};
class CreateAclRequestAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> entry{};
  shared_ptr<string> entryDescription{};

  CreateAclRequestAclEntries() {}

  explicit CreateAclRequestAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    if (entryDescription) {
      res["EntryDescription"] = boost::any(*entryDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
    if (m.find("EntryDescription") != m.end() && !m["EntryDescription"].empty()) {
      entryDescription = make_shared<string>(boost::any_cast<string>(m["EntryDescription"]));
    }
  }


  virtual ~CreateAclRequestAclEntries() = default;
};
class CreateAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> aclName{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<vector<CreateAclRequestAclEntries>> aclEntries{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  CreateAclRequest() {}

  explicit CreateAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<CreateAclRequestAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAclRequestAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<CreateAclRequestAclEntries>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~CreateAclRequest() = default;
};
class CreateAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> aclId{};

  CreateAclResponseBody() {}

  explicit CreateAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
  }


  virtual ~CreateAclResponseBody() = default;
};
class CreateAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAclResponseBody> body{};

  CreateAclResponse() {}

  explicit CreateAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAclResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAclResponse() = default;
};
class CreateBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> duration{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> type{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> autoUseCoupon{};
  shared_ptr<long> ratio{};
  shared_ptr<string> billingType{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> cbnGeographicRegionIdA{};
  shared_ptr<string> cbnGeographicRegionIdB{};

  CreateBandwidthPackageRequest() {}

  explicit CreateBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (autoUseCoupon) {
      res["AutoUseCoupon"] = boost::any(*autoUseCoupon);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (cbnGeographicRegionIdA) {
      res["CbnGeographicRegionIdA"] = boost::any(*cbnGeographicRegionIdA);
    }
    if (cbnGeographicRegionIdB) {
      res["CbnGeographicRegionIdB"] = boost::any(*cbnGeographicRegionIdB);
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
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("AutoUseCoupon") != m.end() && !m["AutoUseCoupon"].empty()) {
      autoUseCoupon = make_shared<string>(boost::any_cast<string>(m["AutoUseCoupon"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<long>(boost::any_cast<long>(m["Ratio"]));
    }
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CbnGeographicRegionIdA") != m.end() && !m["CbnGeographicRegionIdA"].empty()) {
      cbnGeographicRegionIdA = make_shared<string>(boost::any_cast<string>(m["CbnGeographicRegionIdA"]));
    }
    if (m.find("CbnGeographicRegionIdB") != m.end() && !m["CbnGeographicRegionIdB"].empty()) {
      cbnGeographicRegionIdB = make_shared<string>(boost::any_cast<string>(m["CbnGeographicRegionIdB"]));
    }
  }


  virtual ~CreateBandwidthPackageRequest() = default;
};
class CreateBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> orderId{};

  CreateBandwidthPackageResponseBody() {}

  explicit CreateBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
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
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateBandwidthPackageResponseBody() = default;
};
class CreateBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBandwidthPackageResponseBody> body{};

  CreateBandwidthPackageResponse() {}

  explicit CreateBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBandwidthPackageResponse() = default;
};
class CreateEndpointGroupRequestEndpointConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<bool> enableClientIPPreservation{};
  shared_ptr<long> weight{};
  shared_ptr<string> endpoint{};

  CreateEndpointGroupRequestEndpointConfigurations() {}

  explicit CreateEndpointGroupRequestEndpointConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (enableClientIPPreservation) {
      res["EnableClientIPPreservation"] = boost::any(*enableClientIPPreservation);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("EnableClientIPPreservation") != m.end() && !m["EnableClientIPPreservation"].empty()) {
      enableClientIPPreservation = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservation"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
  }


  virtual ~CreateEndpointGroupRequestEndpointConfigurations() = default;
};
class CreateEndpointGroupRequestPortOverrides : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<long> endpointPort{};

  CreateEndpointGroupRequestPortOverrides() {}

  explicit CreateEndpointGroupRequestPortOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (endpointPort) {
      res["EndpointPort"] = boost::any(*endpointPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("EndpointPort") != m.end() && !m["EndpointPort"].empty()) {
      endpointPort = make_shared<long>(boost::any_cast<long>(m["EndpointPort"]));
    }
  }


  virtual ~CreateEndpointGroupRequestPortOverrides() = default;
};
class CreateEndpointGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> endpointGroupRegion{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> trafficPercentage{};
  shared_ptr<long> healthCheckIntervalSeconds{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<long> healthCheckPort{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> thresholdCount{};
  shared_ptr<vector<CreateEndpointGroupRequestEndpointConfigurations>> endpointConfigurations{};
  shared_ptr<string> endpointRequestProtocol{};
  shared_ptr<string> endpointGroupType{};
  shared_ptr<vector<CreateEndpointGroupRequestPortOverrides>> portOverrides{};
  shared_ptr<bool> healthCheckEnabled{};

  CreateEndpointGroupRequest() {}

  explicit CreateEndpointGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endpointGroupRegion) {
      res["EndpointGroupRegion"] = boost::any(*endpointGroupRegion);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (trafficPercentage) {
      res["TrafficPercentage"] = boost::any(*trafficPercentage);
    }
    if (healthCheckIntervalSeconds) {
      res["HealthCheckIntervalSeconds"] = boost::any(*healthCheckIntervalSeconds);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckPort) {
      res["HealthCheckPort"] = boost::any(*healthCheckPort);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (thresholdCount) {
      res["ThresholdCount"] = boost::any(*thresholdCount);
    }
    if (endpointConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointConfigurations"] = boost::any(temp1);
    }
    if (endpointRequestProtocol) {
      res["EndpointRequestProtocol"] = boost::any(*endpointRequestProtocol);
    }
    if (endpointGroupType) {
      res["EndpointGroupType"] = boost::any(*endpointGroupType);
    }
    if (portOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*portOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortOverrides"] = boost::any(temp1);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndpointGroupRegion") != m.end() && !m["EndpointGroupRegion"].empty()) {
      endpointGroupRegion = make_shared<string>(boost::any_cast<string>(m["EndpointGroupRegion"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("TrafficPercentage") != m.end() && !m["TrafficPercentage"].empty()) {
      trafficPercentage = make_shared<long>(boost::any_cast<long>(m["TrafficPercentage"]));
    }
    if (m.find("HealthCheckIntervalSeconds") != m.end() && !m["HealthCheckIntervalSeconds"].empty()) {
      healthCheckIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["HealthCheckIntervalSeconds"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckPort") != m.end() && !m["HealthCheckPort"].empty()) {
      healthCheckPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckPort"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("ThresholdCount") != m.end() && !m["ThresholdCount"].empty()) {
      thresholdCount = make_shared<long>(boost::any_cast<long>(m["ThresholdCount"]));
    }
    if (m.find("EndpointConfigurations") != m.end() && !m["EndpointConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointConfigurations"].type()) {
        vector<CreateEndpointGroupRequestEndpointConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEndpointGroupRequestEndpointConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointConfigurations = make_shared<vector<CreateEndpointGroupRequestEndpointConfigurations>>(expect1);
      }
    }
    if (m.find("EndpointRequestProtocol") != m.end() && !m["EndpointRequestProtocol"].empty()) {
      endpointRequestProtocol = make_shared<string>(boost::any_cast<string>(m["EndpointRequestProtocol"]));
    }
    if (m.find("EndpointGroupType") != m.end() && !m["EndpointGroupType"].empty()) {
      endpointGroupType = make_shared<string>(boost::any_cast<string>(m["EndpointGroupType"]));
    }
    if (m.find("PortOverrides") != m.end() && !m["PortOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["PortOverrides"].type()) {
        vector<CreateEndpointGroupRequestPortOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEndpointGroupRequestPortOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portOverrides = make_shared<vector<CreateEndpointGroupRequestPortOverrides>>(expect1);
      }
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
  }


  virtual ~CreateEndpointGroupRequest() = default;
};
class CreateEndpointGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupId{};
  shared_ptr<string> requestId{};

  CreateEndpointGroupResponseBody() {}

  explicit CreateEndpointGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEndpointGroupResponseBody() = default;
};
class CreateEndpointGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEndpointGroupResponseBody> body{};

  CreateEndpointGroupResponse() {}

  explicit CreateEndpointGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEndpointGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEndpointGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEndpointGroupResponse() = default;
};
class CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> endpoint{};

  CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations() {}

  explicit CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
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
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
  }


  virtual ~CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations() = default;
};
class CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<long> endpointPort{};

  CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides() {}

  explicit CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (endpointPort) {
      res["EndpointPort"] = boost::any(*endpointPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("EndpointPort") != m.end() && !m["EndpointPort"].empty()) {
      endpointPort = make_shared<long>(boost::any_cast<long>(m["EndpointPort"]));
    }
  }


  virtual ~CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides() = default;
};
class CreateEndpointGroupsRequestEndpointGroupConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupName{};
  shared_ptr<string> endpointGroupDescription{};
  shared_ptr<string> endpointGroupRegion{};
  shared_ptr<long> trafficPercentage{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<long> healthCheckIntervalSeconds{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<long> healthCheckPort{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> thresholdCount{};
  shared_ptr<vector<CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations>> endpointConfigurations{};
  shared_ptr<string> endpointRequestProtocol{};
  shared_ptr<string> endpointGroupType{};
  shared_ptr<vector<CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides>> portOverrides{};
  shared_ptr<bool> enableClientIPPreservationToa{};
  shared_ptr<bool> enableClientIPPreservationProxyProtocol{};

  CreateEndpointGroupsRequestEndpointGroupConfigurations() {}

  explicit CreateEndpointGroupsRequestEndpointGroupConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupName) {
      res["EndpointGroupName"] = boost::any(*endpointGroupName);
    }
    if (endpointGroupDescription) {
      res["EndpointGroupDescription"] = boost::any(*endpointGroupDescription);
    }
    if (endpointGroupRegion) {
      res["EndpointGroupRegion"] = boost::any(*endpointGroupRegion);
    }
    if (trafficPercentage) {
      res["TrafficPercentage"] = boost::any(*trafficPercentage);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckIntervalSeconds) {
      res["HealthCheckIntervalSeconds"] = boost::any(*healthCheckIntervalSeconds);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckPort) {
      res["HealthCheckPort"] = boost::any(*healthCheckPort);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (thresholdCount) {
      res["ThresholdCount"] = boost::any(*thresholdCount);
    }
    if (endpointConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointConfigurations"] = boost::any(temp1);
    }
    if (endpointRequestProtocol) {
      res["EndpointRequestProtocol"] = boost::any(*endpointRequestProtocol);
    }
    if (endpointGroupType) {
      res["EndpointGroupType"] = boost::any(*endpointGroupType);
    }
    if (portOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*portOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortOverrides"] = boost::any(temp1);
    }
    if (enableClientIPPreservationToa) {
      res["EnableClientIPPreservationToa"] = boost::any(*enableClientIPPreservationToa);
    }
    if (enableClientIPPreservationProxyProtocol) {
      res["EnableClientIPPreservationProxyProtocol"] = boost::any(*enableClientIPPreservationProxyProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupName") != m.end() && !m["EndpointGroupName"].empty()) {
      endpointGroupName = make_shared<string>(boost::any_cast<string>(m["EndpointGroupName"]));
    }
    if (m.find("EndpointGroupDescription") != m.end() && !m["EndpointGroupDescription"].empty()) {
      endpointGroupDescription = make_shared<string>(boost::any_cast<string>(m["EndpointGroupDescription"]));
    }
    if (m.find("EndpointGroupRegion") != m.end() && !m["EndpointGroupRegion"].empty()) {
      endpointGroupRegion = make_shared<string>(boost::any_cast<string>(m["EndpointGroupRegion"]));
    }
    if (m.find("TrafficPercentage") != m.end() && !m["TrafficPercentage"].empty()) {
      trafficPercentage = make_shared<long>(boost::any_cast<long>(m["TrafficPercentage"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckIntervalSeconds") != m.end() && !m["HealthCheckIntervalSeconds"].empty()) {
      healthCheckIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["HealthCheckIntervalSeconds"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckPort") != m.end() && !m["HealthCheckPort"].empty()) {
      healthCheckPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckPort"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("ThresholdCount") != m.end() && !m["ThresholdCount"].empty()) {
      thresholdCount = make_shared<long>(boost::any_cast<long>(m["ThresholdCount"]));
    }
    if (m.find("EndpointConfigurations") != m.end() && !m["EndpointConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointConfigurations"].type()) {
        vector<CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointConfigurations = make_shared<vector<CreateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations>>(expect1);
      }
    }
    if (m.find("EndpointRequestProtocol") != m.end() && !m["EndpointRequestProtocol"].empty()) {
      endpointRequestProtocol = make_shared<string>(boost::any_cast<string>(m["EndpointRequestProtocol"]));
    }
    if (m.find("EndpointGroupType") != m.end() && !m["EndpointGroupType"].empty()) {
      endpointGroupType = make_shared<string>(boost::any_cast<string>(m["EndpointGroupType"]));
    }
    if (m.find("PortOverrides") != m.end() && !m["PortOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["PortOverrides"].type()) {
        vector<CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portOverrides = make_shared<vector<CreateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides>>(expect1);
      }
    }
    if (m.find("EnableClientIPPreservationToa") != m.end() && !m["EnableClientIPPreservationToa"].empty()) {
      enableClientIPPreservationToa = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservationToa"]));
    }
    if (m.find("EnableClientIPPreservationProxyProtocol") != m.end() && !m["EnableClientIPPreservationProxyProtocol"].empty()) {
      enableClientIPPreservationProxyProtocol = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservationProxyProtocol"]));
    }
  }


  virtual ~CreateEndpointGroupsRequestEndpointGroupConfigurations() = default;
};
class CreateEndpointGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<vector<CreateEndpointGroupsRequestEndpointGroupConfigurations>> endpointGroupConfigurations{};

  CreateEndpointGroupsRequest() {}

  explicit CreateEndpointGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (endpointGroupConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointGroupConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointGroupConfigurations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("EndpointGroupConfigurations") != m.end() && !m["EndpointGroupConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointGroupConfigurations"].type()) {
        vector<CreateEndpointGroupsRequestEndpointGroupConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointGroupConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEndpointGroupsRequestEndpointGroupConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointGroupConfigurations = make_shared<vector<CreateEndpointGroupsRequestEndpointGroupConfigurations>>(expect1);
      }
    }
  }


  virtual ~CreateEndpointGroupsRequest() = default;
};
class CreateEndpointGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> endpointGroupIds{};

  CreateEndpointGroupsResponseBody() {}

  explicit CreateEndpointGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (endpointGroupIds) {
      res["EndpointGroupIds"] = boost::any(*endpointGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EndpointGroupIds") != m.end() && !m["EndpointGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateEndpointGroupsResponseBody() = default;
};
class CreateEndpointGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEndpointGroupsResponseBody> body{};

  CreateEndpointGroupsResponse() {}

  explicit CreateEndpointGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEndpointGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEndpointGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEndpointGroupsResponse() = default;
};
class CreateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig() {}

  explicit CreateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig() = default;
};
class CreateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  CreateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig() {}

  explicit CreateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig() = default;
};
class CreateForwardingRulesRequestForwardingRulesRuleConditions : public Darabonba::Model {
public:
  shared_ptr<string> ruleConditionType{};
  shared_ptr<CreateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig> pathConfig{};
  shared_ptr<CreateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig> hostConfig{};

  CreateForwardingRulesRequestForwardingRulesRuleConditions() {}

  explicit CreateForwardingRulesRequestForwardingRulesRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleConditionType) {
      res["RuleConditionType"] = boost::any(*ruleConditionType);
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleConditionType") != m.end() && !m["RuleConditionType"].empty()) {
      ruleConditionType = make_shared<string>(boost::any_cast<string>(m["RuleConditionType"]));
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        CreateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<CreateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        CreateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<CreateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig>(model1);
      }
    }
  }


  virtual ~CreateForwardingRulesRequestForwardingRulesRuleConditions() = default;
};
class CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupId{};

  CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
  }


  virtual ~CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig() {}

  explicit CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig() = default;
};
class CreateForwardingRulesRequestForwardingRulesRuleActions : public Darabonba::Model {
public:
  shared_ptr<long> order{};
  shared_ptr<string> ruleActionType{};
  shared_ptr<CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig> forwardGroupConfig{};

  CreateForwardingRulesRequestForwardingRulesRuleActions() {}

  explicit CreateForwardingRulesRequestForwardingRulesRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<CreateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig>(model1);
      }
    }
  }


  virtual ~CreateForwardingRulesRequestForwardingRulesRuleActions() = default;
};
class CreateForwardingRulesRequestForwardingRules : public Darabonba::Model {
public:
  shared_ptr<long> priority{};
  shared_ptr<vector<CreateForwardingRulesRequestForwardingRulesRuleConditions>> ruleConditions{};
  shared_ptr<vector<CreateForwardingRulesRequestForwardingRulesRuleActions>> ruleActions{};
  shared_ptr<string> forwardingRuleName{};

  CreateForwardingRulesRequestForwardingRules() {}

  explicit CreateForwardingRulesRequestForwardingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (forwardingRuleName) {
      res["ForwardingRuleName"] = boost::any(*forwardingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<CreateForwardingRulesRequestForwardingRulesRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateForwardingRulesRequestForwardingRulesRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<CreateForwardingRulesRequestForwardingRulesRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<CreateForwardingRulesRequestForwardingRulesRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateForwardingRulesRequestForwardingRulesRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<CreateForwardingRulesRequestForwardingRulesRuleActions>>(expect1);
      }
    }
    if (m.find("ForwardingRuleName") != m.end() && !m["ForwardingRuleName"].empty()) {
      forwardingRuleName = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleName"]));
    }
  }


  virtual ~CreateForwardingRulesRequestForwardingRules() = default;
};
class CreateForwardingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<vector<CreateForwardingRulesRequestForwardingRules>> forwardingRules{};

  CreateForwardingRulesRequest() {}

  explicit CreateForwardingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (forwardingRules) {
      vector<boost::any> temp1;
      for(auto item1:*forwardingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardingRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ForwardingRules") != m.end() && !m["ForwardingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardingRules"].type()) {
        vector<CreateForwardingRulesRequestForwardingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateForwardingRulesRequestForwardingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardingRules = make_shared<vector<CreateForwardingRulesRequestForwardingRules>>(expect1);
      }
    }
  }


  virtual ~CreateForwardingRulesRequest() = default;
};
class CreateForwardingRulesResponseBodyForwardingRules : public Darabonba::Model {
public:
  shared_ptr<string> forwardingRuleId{};

  CreateForwardingRulesResponseBodyForwardingRules() {}

  explicit CreateForwardingRulesResponseBodyForwardingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardingRuleId) {
      res["ForwardingRuleId"] = boost::any(*forwardingRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardingRuleId") != m.end() && !m["ForwardingRuleId"].empty()) {
      forwardingRuleId = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleId"]));
    }
  }


  virtual ~CreateForwardingRulesResponseBodyForwardingRules() = default;
};
class CreateForwardingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateForwardingRulesResponseBodyForwardingRules>> forwardingRules{};

  CreateForwardingRulesResponseBody() {}

  explicit CreateForwardingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (forwardingRules) {
      vector<boost::any> temp1;
      for(auto item1:*forwardingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardingRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ForwardingRules") != m.end() && !m["ForwardingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardingRules"].type()) {
        vector<CreateForwardingRulesResponseBodyForwardingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateForwardingRulesResponseBodyForwardingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardingRules = make_shared<vector<CreateForwardingRulesResponseBodyForwardingRules>>(expect1);
      }
    }
  }


  virtual ~CreateForwardingRulesResponseBody() = default;
};
class CreateForwardingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateForwardingRulesResponseBody> body{};

  CreateForwardingRulesResponse() {}

  explicit CreateForwardingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateForwardingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateForwardingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateForwardingRulesResponse() = default;
};
class CreateIpSetsRequestAccelerateRegion : public Darabonba::Model {
public:
  shared_ptr<string> accelerateRegionId{};
  shared_ptr<string> ipVersion{};
  shared_ptr<long> bandwidth{};

  CreateIpSetsRequestAccelerateRegion() {}

  explicit CreateIpSetsRequestAccelerateRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerateRegionId) {
      res["AccelerateRegionId"] = boost::any(*accelerateRegionId);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccelerateRegionId") != m.end() && !m["AccelerateRegionId"].empty()) {
      accelerateRegionId = make_shared<string>(boost::any_cast<string>(m["AccelerateRegionId"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
  }


  virtual ~CreateIpSetsRequestAccelerateRegion() = default;
};
class CreateIpSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<vector<CreateIpSetsRequestAccelerateRegion>> accelerateRegion{};

  CreateIpSetsRequest() {}

  explicit CreateIpSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (accelerateRegion) {
      vector<boost::any> temp1;
      for(auto item1:*accelerateRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccelerateRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("AccelerateRegion") != m.end() && !m["AccelerateRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["AccelerateRegion"].type()) {
        vector<CreateIpSetsRequestAccelerateRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccelerateRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIpSetsRequestAccelerateRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accelerateRegion = make_shared<vector<CreateIpSetsRequestAccelerateRegion>>(expect1);
      }
    }
  }


  virtual ~CreateIpSetsRequest() = default;
};
class CreateIpSetsResponseBodyIpSets : public Darabonba::Model {
public:
  shared_ptr<string> accelerateRegionId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> ipSetId{};

  CreateIpSetsResponseBodyIpSets() {}

  explicit CreateIpSetsResponseBodyIpSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerateRegionId) {
      res["AccelerateRegionId"] = boost::any(*accelerateRegionId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (ipSetId) {
      res["IpSetId"] = boost::any(*ipSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccelerateRegionId") != m.end() && !m["AccelerateRegionId"].empty()) {
      accelerateRegionId = make_shared<string>(boost::any_cast<string>(m["AccelerateRegionId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("IpSetId") != m.end() && !m["IpSetId"].empty()) {
      ipSetId = make_shared<string>(boost::any_cast<string>(m["IpSetId"]));
    }
  }


  virtual ~CreateIpSetsResponseBodyIpSets() = default;
};
class CreateIpSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateIpSetsResponseBodyIpSets>> ipSets{};
  shared_ptr<string> acceleratorId{};

  CreateIpSetsResponseBody() {}

  explicit CreateIpSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ipSets) {
      vector<boost::any> temp1;
      for(auto item1:*ipSets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpSets"] = boost::any(temp1);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IpSets") != m.end() && !m["IpSets"].empty()) {
      if (typeid(vector<boost::any>) == m["IpSets"].type()) {
        vector<CreateIpSetsResponseBodyIpSets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpSets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIpSetsResponseBodyIpSets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipSets = make_shared<vector<CreateIpSetsResponseBodyIpSets>>(expect1);
      }
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~CreateIpSetsResponseBody() = default;
};
class CreateIpSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIpSetsResponseBody> body{};

  CreateIpSetsResponse() {}

  explicit CreateIpSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIpSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIpSetsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIpSetsResponse() = default;
};
class CreateListenerRequestPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> fromPort{};
  shared_ptr<long> toPort{};

  CreateListenerRequestPortRanges() {}

  explicit CreateListenerRequestPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromPort) {
      res["FromPort"] = boost::any(*fromPort);
    }
    if (toPort) {
      res["ToPort"] = boost::any(*toPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromPort") != m.end() && !m["FromPort"].empty()) {
      fromPort = make_shared<long>(boost::any_cast<long>(m["FromPort"]));
    }
    if (m.find("ToPort") != m.end() && !m["ToPort"].empty()) {
      toPort = make_shared<long>(boost::any_cast<long>(m["ToPort"]));
    }
  }


  virtual ~CreateListenerRequestPortRanges() = default;
};
class CreateListenerRequestCertificates : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateListenerRequestCertificates() {}

  explicit CreateListenerRequestCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateListenerRequestCertificates() = default;
};
class CreateListenerRequestXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<bool> XForwardedForGaIdEnabled{};
  shared_ptr<bool> XForwardedForGaApEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForPortEnabled{};
  shared_ptr<bool> XRealIpEnabled{};

  CreateListenerRequestXForwardedForConfig() {}

  explicit CreateListenerRequestXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForGaIdEnabled) {
      res["XForwardedForGaIdEnabled"] = boost::any(*XForwardedForGaIdEnabled);
    }
    if (XForwardedForGaApEnabled) {
      res["XForwardedForGaApEnabled"] = boost::any(*XForwardedForGaApEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForPortEnabled) {
      res["XForwardedForPortEnabled"] = boost::any(*XForwardedForPortEnabled);
    }
    if (XRealIpEnabled) {
      res["XRealIpEnabled"] = boost::any(*XRealIpEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForGaIdEnabled") != m.end() && !m["XForwardedForGaIdEnabled"].empty()) {
      XForwardedForGaIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaIdEnabled"]));
    }
    if (m.find("XForwardedForGaApEnabled") != m.end() && !m["XForwardedForGaApEnabled"].empty()) {
      XForwardedForGaApEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaApEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForPortEnabled") != m.end() && !m["XForwardedForPortEnabled"].empty()) {
      XForwardedForPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForPortEnabled"]));
    }
    if (m.find("XRealIpEnabled") != m.end() && !m["XRealIpEnabled"].empty()) {
      XRealIpEnabled = make_shared<bool>(boost::any_cast<bool>(m["XRealIpEnabled"]));
    }
  }


  virtual ~CreateListenerRequestXForwardedForConfig() = default;
};
class CreateListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> clientAffinity{};
  shared_ptr<string> protocol{};
  shared_ptr<bool> proxyProtocol{};
  shared_ptr<vector<CreateListenerRequestPortRanges>> portRanges{};
  shared_ptr<vector<CreateListenerRequestCertificates>> certificates{};
  shared_ptr<CreateListenerRequestXForwardedForConfig> XForwardedForConfig{};
  shared_ptr<string> securityPolicyId{};

  CreateListenerRequest() {}

  explicit CreateListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (clientAffinity) {
      res["ClientAffinity"] = boost::any(*clientAffinity);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (proxyProtocol) {
      res["ProxyProtocol"] = boost::any(*proxyProtocol);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ClientAffinity") != m.end() && !m["ClientAffinity"].empty()) {
      clientAffinity = make_shared<string>(boost::any_cast<string>(m["ClientAffinity"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ProxyProtocol") != m.end() && !m["ProxyProtocol"].empty()) {
      proxyProtocol = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocol"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<CreateListenerRequestPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerRequestPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<CreateListenerRequestPortRanges>>(expect1);
      }
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<CreateListenerRequestCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerRequestCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<CreateListenerRequestCertificates>>(expect1);
      }
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        CreateListenerRequestXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<CreateListenerRequestXForwardedForConfig>(model1);
      }
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~CreateListenerRequest() = default;
};
class CreateListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> listenerId{};

  CreateListenerResponseBody() {}

  explicit CreateListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~CreateListenerResponseBody() = default;
};
class CreateListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateListenerResponseBody> body{};

  CreateListenerResponse() {}

  explicit CreateListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateListenerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateListenerResponse() = default;
};
class CreateSpareIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<vector<string>> spareIps{};

  CreateSpareIpsRequest() {}

  explicit CreateSpareIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (spareIps) {
      res["SpareIps"] = boost::any(*spareIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("SpareIps") != m.end() && !m["SpareIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpareIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpareIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      spareIps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateSpareIpsRequest() = default;
};
class CreateSpareIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateSpareIpsResponseBody() {}

  explicit CreateSpareIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSpareIpsResponseBody() = default;
};
class CreateSpareIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSpareIpsResponseBody> body{};

  CreateSpareIpsResponse() {}

  explicit CreateSpareIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSpareIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSpareIpsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSpareIpsResponse() = default;
};
class DeleteAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> acceleratorId{};

  DeleteAcceleratorRequest() {}

  explicit DeleteAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~DeleteAcceleratorRequest() = default;
};
class DeleteAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> acceleratorId{};

  DeleteAcceleratorResponseBody() {}

  explicit DeleteAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~DeleteAcceleratorResponseBody() = default;
};
class DeleteAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAcceleratorResponseBody> body{};

  DeleteAcceleratorResponse() {}

  explicit DeleteAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAcceleratorResponse() = default;
};
class DeleteAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  DeleteAclRequest() {}

  explicit DeleteAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~DeleteAclRequest() = default;
};
class DeleteAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> aclId{};

  DeleteAclResponseBody() {}

  explicit DeleteAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
  }


  virtual ~DeleteAclResponseBody() = default;
};
class DeleteAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAclResponseBody> body{};

  DeleteAclResponse() {}

  explicit DeleteAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAclResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAclResponse() = default;
};
class DeleteBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> clientToken{};

  DeleteBandwidthPackageRequest() {}

  explicit DeleteBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
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
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~DeleteBandwidthPackageRequest() = default;
};
class DeleteBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bandwidthPackageId{};

  DeleteBandwidthPackageResponseBody() {}

  explicit DeleteBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
  }


  virtual ~DeleteBandwidthPackageResponseBody() = default;
};
class DeleteBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBandwidthPackageResponseBody> body{};

  DeleteBandwidthPackageResponse() {}

  explicit DeleteBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBandwidthPackageResponse() = default;
};
class DeleteEndpointGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> endpointGroupId{};

  DeleteEndpointGroupRequest() {}

  explicit DeleteEndpointGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
  }


  virtual ~DeleteEndpointGroupRequest() = default;
};
class DeleteEndpointGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEndpointGroupResponseBody() {}

  explicit DeleteEndpointGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEndpointGroupResponseBody() = default;
};
class DeleteEndpointGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEndpointGroupResponseBody> body{};

  DeleteEndpointGroupResponse() {}

  explicit DeleteEndpointGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEndpointGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEndpointGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEndpointGroupResponse() = default;
};
class DeleteEndpointGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> endpointGroupIds{};

  DeleteEndpointGroupsRequest() {}

  explicit DeleteEndpointGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (endpointGroupIds) {
      res["EndpointGroupIds"] = boost::any(*endpointGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EndpointGroupIds") != m.end() && !m["EndpointGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteEndpointGroupsRequest() = default;
};
class DeleteEndpointGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEndpointGroupsResponseBody() {}

  explicit DeleteEndpointGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEndpointGroupsResponseBody() = default;
};
class DeleteEndpointGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEndpointGroupsResponseBody> body{};

  DeleteEndpointGroupsResponse() {}

  explicit DeleteEndpointGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEndpointGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEndpointGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEndpointGroupsResponse() = default;
};
class DeleteForwardingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> forwardingRuleIds{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};

  DeleteForwardingRulesRequest() {}

  explicit DeleteForwardingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (forwardingRuleIds) {
      res["ForwardingRuleIds"] = boost::any(*forwardingRuleIds);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ForwardingRuleIds") != m.end() && !m["ForwardingRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ForwardingRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ForwardingRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      forwardingRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~DeleteForwardingRulesRequest() = default;
};
class DeleteForwardingRulesResponseBodyForwardingRules : public Darabonba::Model {
public:
  shared_ptr<string> forwardingRuleId{};

  DeleteForwardingRulesResponseBodyForwardingRules() {}

  explicit DeleteForwardingRulesResponseBodyForwardingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardingRuleId) {
      res["ForwardingRuleId"] = boost::any(*forwardingRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardingRuleId") != m.end() && !m["ForwardingRuleId"].empty()) {
      forwardingRuleId = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleId"]));
    }
  }


  virtual ~DeleteForwardingRulesResponseBodyForwardingRules() = default;
};
class DeleteForwardingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteForwardingRulesResponseBodyForwardingRules>> forwardingRules{};
  shared_ptr<string> requestId{};

  DeleteForwardingRulesResponseBody() {}

  explicit DeleteForwardingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardingRules) {
      vector<boost::any> temp1;
      for(auto item1:*forwardingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardingRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardingRules") != m.end() && !m["ForwardingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardingRules"].type()) {
        vector<DeleteForwardingRulesResponseBodyForwardingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteForwardingRulesResponseBodyForwardingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardingRules = make_shared<vector<DeleteForwardingRulesResponseBodyForwardingRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteForwardingRulesResponseBody() = default;
};
class DeleteForwardingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteForwardingRulesResponseBody> body{};

  DeleteForwardingRulesResponse() {}

  explicit DeleteForwardingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteForwardingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteForwardingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteForwardingRulesResponse() = default;
};
class DeleteIpSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> ipSetId{};

  DeleteIpSetRequest() {}

  explicit DeleteIpSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (ipSetId) {
      res["IpSetId"] = boost::any(*ipSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("IpSetId") != m.end() && !m["IpSetId"].empty()) {
      ipSetId = make_shared<string>(boost::any_cast<string>(m["IpSetId"]));
    }
  }


  virtual ~DeleteIpSetRequest() = default;
};
class DeleteIpSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpSetResponseBody() {}

  explicit DeleteIpSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpSetResponseBody() = default;
};
class DeleteIpSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteIpSetResponseBody> body{};

  DeleteIpSetResponse() {}

  explicit DeleteIpSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpSetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpSetResponse() = default;
};
class DeleteIpSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> ipSetIds{};

  DeleteIpSetsRequest() {}

  explicit DeleteIpSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ipSetIds) {
      res["IpSetIds"] = boost::any(*ipSetIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IpSetIds") != m.end() && !m["IpSetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpSetIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpSetIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipSetIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteIpSetsRequest() = default;
};
class DeleteIpSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpSetsResponseBody() {}

  explicit DeleteIpSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpSetsResponseBody() = default;
};
class DeleteIpSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteIpSetsResponseBody> body{};

  DeleteIpSetsResponse() {}

  explicit DeleteIpSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpSetsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpSetsResponse() = default;
};
class DeleteListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};

  DeleteListenerRequest() {}

  explicit DeleteListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~DeleteListenerRequest() = default;
};
class DeleteListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteListenerResponseBody() {}

  explicit DeleteListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteListenerResponseBody() = default;
};
class DeleteListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteListenerResponseBody> body{};

  DeleteListenerResponse() {}

  explicit DeleteListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteListenerResponse() = default;
};
class DeleteSpareIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<vector<string>> spareIps{};

  DeleteSpareIpsRequest() {}

  explicit DeleteSpareIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (spareIps) {
      res["SpareIps"] = boost::any(*spareIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("SpareIps") != m.end() && !m["SpareIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpareIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpareIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      spareIps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteSpareIpsRequest() = default;
};
class DeleteSpareIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSpareIpsResponseBody() {}

  explicit DeleteSpareIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSpareIpsResponseBody() = default;
};
class DeleteSpareIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSpareIpsResponseBody> body{};

  DeleteSpareIpsResponse() {}

  explicit DeleteSpareIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSpareIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSpareIpsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSpareIpsResponse() = default;
};
class DescribeAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> acceleratorId{};

  DescribeAcceleratorRequest() {}

  explicit DescribeAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~DescribeAcceleratorRequest() = default;
};
class DescribeAcceleratorResponseBodyCrossDomainBandwidthPackage : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> instanceId{};

  DescribeAcceleratorResponseBodyCrossDomainBandwidthPackage() {}

  explicit DescribeAcceleratorResponseBodyCrossDomainBandwidthPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeAcceleratorResponseBodyCrossDomainBandwidthPackage() = default;
};
class DescribeAcceleratorResponseBodyBasicBandwidthPackage : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> instanceId{};

  DescribeAcceleratorResponseBodyBasicBandwidthPackage() {}

  explicit DescribeAcceleratorResponseBodyBasicBandwidthPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeAcceleratorResponseBodyBasicBandwidthPackage() = default;
};
class DescribeAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ddosId{};
  shared_ptr<string> dnsName{};
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<long> createTime{};
  shared_ptr<DescribeAcceleratorResponseBodyCrossDomainBandwidthPackage> crossDomainBandwidthPackage{};
  shared_ptr<string> secondDnsName{};
  shared_ptr<string> name{};
  shared_ptr<DescribeAcceleratorResponseBodyBasicBandwidthPackage> basicBandwidthPackage{};
  shared_ptr<string> state{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> cenId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> spec{};
  shared_ptr<string> acceleratorId{};

  DescribeAcceleratorResponseBody() {}

  explicit DescribeAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosId) {
      res["DdosId"] = boost::any(*ddosId);
    }
    if (dnsName) {
      res["DnsName"] = boost::any(*dnsName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossDomainBandwidthPackage) {
      res["CrossDomainBandwidthPackage"] = crossDomainBandwidthPackage ? boost::any(crossDomainBandwidthPackage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secondDnsName) {
      res["SecondDnsName"] = boost::any(*secondDnsName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (basicBandwidthPackage) {
      res["BasicBandwidthPackage"] = basicBandwidthPackage ? boost::any(basicBandwidthPackage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosId") != m.end() && !m["DdosId"].empty()) {
      ddosId = make_shared<string>(boost::any_cast<string>(m["DdosId"]));
    }
    if (m.find("DnsName") != m.end() && !m["DnsName"].empty()) {
      dnsName = make_shared<string>(boost::any_cast<string>(m["DnsName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CrossDomainBandwidthPackage") != m.end() && !m["CrossDomainBandwidthPackage"].empty()) {
      if (typeid(map<string, boost::any>) == m["CrossDomainBandwidthPackage"].type()) {
        DescribeAcceleratorResponseBodyCrossDomainBandwidthPackage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CrossDomainBandwidthPackage"]));
        crossDomainBandwidthPackage = make_shared<DescribeAcceleratorResponseBodyCrossDomainBandwidthPackage>(model1);
      }
    }
    if (m.find("SecondDnsName") != m.end() && !m["SecondDnsName"].empty()) {
      secondDnsName = make_shared<string>(boost::any_cast<string>(m["SecondDnsName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BasicBandwidthPackage") != m.end() && !m["BasicBandwidthPackage"].empty()) {
      if (typeid(map<string, boost::any>) == m["BasicBandwidthPackage"].type()) {
        DescribeAcceleratorResponseBodyBasicBandwidthPackage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BasicBandwidthPackage"]));
        basicBandwidthPackage = make_shared<DescribeAcceleratorResponseBodyBasicBandwidthPackage>(model1);
      }
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~DescribeAcceleratorResponseBody() = default;
};
class DescribeAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAcceleratorResponseBody> body{};

  DescribeAcceleratorResponse() {}

  explicit DescribeAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAcceleratorResponse() = default;
};
class DescribeBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bandwidthPackageId{};

  DescribeBandwidthPackageRequest() {}

  explicit DescribeBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
  }


  virtual ~DescribeBandwidthPackageRequest() = default;
};
class DescribeBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cbnGeographicRegionIdB{};
  shared_ptr<string> cbnGeographicRegionIdA{};
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> accelerators{};
  shared_ptr<string> state{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> billingType{};
  shared_ptr<long> ratio{};

  DescribeBandwidthPackageResponseBody() {}

  explicit DescribeBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cbnGeographicRegionIdB) {
      res["CbnGeographicRegionIdB"] = boost::any(*cbnGeographicRegionIdB);
    }
    if (cbnGeographicRegionIdA) {
      res["CbnGeographicRegionIdA"] = boost::any(*cbnGeographicRegionIdA);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (accelerators) {
      res["Accelerators"] = boost::any(*accelerators);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CbnGeographicRegionIdB") != m.end() && !m["CbnGeographicRegionIdB"].empty()) {
      cbnGeographicRegionIdB = make_shared<string>(boost::any_cast<string>(m["CbnGeographicRegionIdB"]));
    }
    if (m.find("CbnGeographicRegionIdA") != m.end() && !m["CbnGeographicRegionIdA"].empty()) {
      cbnGeographicRegionIdA = make_shared<string>(boost::any_cast<string>(m["CbnGeographicRegionIdA"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Accelerators") != m.end() && !m["Accelerators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Accelerators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Accelerators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accelerators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<long>(boost::any_cast<long>(m["Ratio"]));
    }
  }


  virtual ~DescribeBandwidthPackageResponseBody() = default;
};
class DescribeBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBandwidthPackageResponseBody> body{};

  DescribeBandwidthPackageResponse() {}

  explicit DescribeBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBandwidthPackageResponse() = default;
};
class DescribeEndpointGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> endpointGroupId{};

  DescribeEndpointGroupRequest() {}

  explicit DescribeEndpointGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
  }


  virtual ~DescribeEndpointGroupRequest() = default;
};
class DescribeEndpointGroupResponseBodyEndpointConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<bool> enableClientIPPreservation{};
  shared_ptr<long> weight{};
  shared_ptr<string> probeProtocol{};
  shared_ptr<string> endpoint{};
  shared_ptr<long> probePort{};

  DescribeEndpointGroupResponseBodyEndpointConfigurations() {}

  explicit DescribeEndpointGroupResponseBodyEndpointConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (enableClientIPPreservation) {
      res["EnableClientIPPreservation"] = boost::any(*enableClientIPPreservation);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (probeProtocol) {
      res["ProbeProtocol"] = boost::any(*probeProtocol);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (probePort) {
      res["ProbePort"] = boost::any(*probePort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("EnableClientIPPreservation") != m.end() && !m["EnableClientIPPreservation"].empty()) {
      enableClientIPPreservation = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservation"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("ProbeProtocol") != m.end() && !m["ProbeProtocol"].empty()) {
      probeProtocol = make_shared<string>(boost::any_cast<string>(m["ProbeProtocol"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ProbePort") != m.end() && !m["ProbePort"].empty()) {
      probePort = make_shared<long>(boost::any_cast<long>(m["ProbePort"]));
    }
  }


  virtual ~DescribeEndpointGroupResponseBodyEndpointConfigurations() = default;
};
class DescribeEndpointGroupResponseBodyPortOverrides : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<long> endpointPort{};

  DescribeEndpointGroupResponseBodyPortOverrides() {}

  explicit DescribeEndpointGroupResponseBodyPortOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (endpointPort) {
      res["EndpointPort"] = boost::any(*endpointPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("EndpointPort") != m.end() && !m["EndpointPort"].empty()) {
      endpointPort = make_shared<long>(boost::any_cast<long>(m["EndpointPort"]));
    }
  }


  virtual ~DescribeEndpointGroupResponseBodyPortOverrides() = default;
};
class DescribeEndpointGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> healthCheckIntervalSeconds{};
  shared_ptr<long> trafficPercentage{};
  shared_ptr<string> endpointGroupId{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> endpointGroupIpList{};
  shared_ptr<vector<string>> endpointGroupUnconfirmedIpList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<long> thresholdCount{};
  shared_ptr<string> name{};
  shared_ptr<string> endpointGroupRegion{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> state{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> healthCheckPort{};
  shared_ptr<vector<DescribeEndpointGroupResponseBodyEndpointConfigurations>> endpointConfigurations{};
  shared_ptr<vector<DescribeEndpointGroupResponseBodyPortOverrides>> portOverrides{};
  shared_ptr<string> endpointRequestProtocol{};
  shared_ptr<string> endpointGroupType{};
  shared_ptr<vector<string>> forwardingRuleIds{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> slsRegion{};
  shared_ptr<string> slsProjectName{};
  shared_ptr<string> slsLogStoreName{};
  shared_ptr<string> accessLogSwitch{};
  shared_ptr<bool> enableAccessLog{};
  shared_ptr<bool> healthCheckEnabled{};

  DescribeEndpointGroupResponseBody() {}

  explicit DescribeEndpointGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckIntervalSeconds) {
      res["HealthCheckIntervalSeconds"] = boost::any(*healthCheckIntervalSeconds);
    }
    if (trafficPercentage) {
      res["TrafficPercentage"] = boost::any(*trafficPercentage);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endpointGroupIpList) {
      res["EndpointGroupIpList"] = boost::any(*endpointGroupIpList);
    }
    if (endpointGroupUnconfirmedIpList) {
      res["EndpointGroupUnconfirmedIpList"] = boost::any(*endpointGroupUnconfirmedIpList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (thresholdCount) {
      res["ThresholdCount"] = boost::any(*thresholdCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (endpointGroupRegion) {
      res["EndpointGroupRegion"] = boost::any(*endpointGroupRegion);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthCheckPort) {
      res["HealthCheckPort"] = boost::any(*healthCheckPort);
    }
    if (endpointConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointConfigurations"] = boost::any(temp1);
    }
    if (portOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*portOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortOverrides"] = boost::any(temp1);
    }
    if (endpointRequestProtocol) {
      res["EndpointRequestProtocol"] = boost::any(*endpointRequestProtocol);
    }
    if (endpointGroupType) {
      res["EndpointGroupType"] = boost::any(*endpointGroupType);
    }
    if (forwardingRuleIds) {
      res["ForwardingRuleIds"] = boost::any(*forwardingRuleIds);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (slsRegion) {
      res["SlsRegion"] = boost::any(*slsRegion);
    }
    if (slsProjectName) {
      res["SlsProjectName"] = boost::any(*slsProjectName);
    }
    if (slsLogStoreName) {
      res["SlsLogStoreName"] = boost::any(*slsLogStoreName);
    }
    if (accessLogSwitch) {
      res["AccessLogSwitch"] = boost::any(*accessLogSwitch);
    }
    if (enableAccessLog) {
      res["EnableAccessLog"] = boost::any(*enableAccessLog);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckIntervalSeconds") != m.end() && !m["HealthCheckIntervalSeconds"].empty()) {
      healthCheckIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["HealthCheckIntervalSeconds"]));
    }
    if (m.find("TrafficPercentage") != m.end() && !m["TrafficPercentage"].empty()) {
      trafficPercentage = make_shared<long>(boost::any_cast<long>(m["TrafficPercentage"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndpointGroupIpList") != m.end() && !m["EndpointGroupIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndpointGroupUnconfirmedIpList") != m.end() && !m["EndpointGroupUnconfirmedIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupUnconfirmedIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupUnconfirmedIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupUnconfirmedIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("ThresholdCount") != m.end() && !m["ThresholdCount"].empty()) {
      thresholdCount = make_shared<long>(boost::any_cast<long>(m["ThresholdCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("EndpointGroupRegion") != m.end() && !m["EndpointGroupRegion"].empty()) {
      endpointGroupRegion = make_shared<string>(boost::any_cast<string>(m["EndpointGroupRegion"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthCheckPort") != m.end() && !m["HealthCheckPort"].empty()) {
      healthCheckPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckPort"]));
    }
    if (m.find("EndpointConfigurations") != m.end() && !m["EndpointConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointConfigurations"].type()) {
        vector<DescribeEndpointGroupResponseBodyEndpointConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndpointGroupResponseBodyEndpointConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointConfigurations = make_shared<vector<DescribeEndpointGroupResponseBodyEndpointConfigurations>>(expect1);
      }
    }
    if (m.find("PortOverrides") != m.end() && !m["PortOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["PortOverrides"].type()) {
        vector<DescribeEndpointGroupResponseBodyPortOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndpointGroupResponseBodyPortOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portOverrides = make_shared<vector<DescribeEndpointGroupResponseBodyPortOverrides>>(expect1);
      }
    }
    if (m.find("EndpointRequestProtocol") != m.end() && !m["EndpointRequestProtocol"].empty()) {
      endpointRequestProtocol = make_shared<string>(boost::any_cast<string>(m["EndpointRequestProtocol"]));
    }
    if (m.find("EndpointGroupType") != m.end() && !m["EndpointGroupType"].empty()) {
      endpointGroupType = make_shared<string>(boost::any_cast<string>(m["EndpointGroupType"]));
    }
    if (m.find("ForwardingRuleIds") != m.end() && !m["ForwardingRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ForwardingRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ForwardingRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      forwardingRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("SlsRegion") != m.end() && !m["SlsRegion"].empty()) {
      slsRegion = make_shared<string>(boost::any_cast<string>(m["SlsRegion"]));
    }
    if (m.find("SlsProjectName") != m.end() && !m["SlsProjectName"].empty()) {
      slsProjectName = make_shared<string>(boost::any_cast<string>(m["SlsProjectName"]));
    }
    if (m.find("SlsLogStoreName") != m.end() && !m["SlsLogStoreName"].empty()) {
      slsLogStoreName = make_shared<string>(boost::any_cast<string>(m["SlsLogStoreName"]));
    }
    if (m.find("AccessLogSwitch") != m.end() && !m["AccessLogSwitch"].empty()) {
      accessLogSwitch = make_shared<string>(boost::any_cast<string>(m["AccessLogSwitch"]));
    }
    if (m.find("EnableAccessLog") != m.end() && !m["EnableAccessLog"].empty()) {
      enableAccessLog = make_shared<bool>(boost::any_cast<bool>(m["EnableAccessLog"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
  }


  virtual ~DescribeEndpointGroupResponseBody() = default;
};
class DescribeEndpointGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEndpointGroupResponseBody> body{};

  DescribeEndpointGroupResponse() {}

  explicit DescribeEndpointGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEndpointGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEndpointGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEndpointGroupResponse() = default;
};
class DescribeIpSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> ipSetId{};

  DescribeIpSetRequest() {}

  explicit DescribeIpSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ipSetId) {
      res["IpSetId"] = boost::any(*ipSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IpSetId") != m.end() && !m["IpSetId"].empty()) {
      ipSetId = make_shared<string>(boost::any_cast<string>(m["IpSetId"]));
    }
  }


  virtual ~DescribeIpSetRequest() = default;
};
class DescribeIpSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ipSetId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> state{};
  shared_ptr<long> bandwidth{};
  shared_ptr<vector<string>> ipAddressList{};
  shared_ptr<string> accelerateRegionId{};
  shared_ptr<string> acceleratorId{};

  DescribeIpSetResponseBody() {}

  explicit DescribeIpSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipSetId) {
      res["IpSetId"] = boost::any(*ipSetId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (ipAddressList) {
      res["IpAddressList"] = boost::any(*ipAddressList);
    }
    if (accelerateRegionId) {
      res["AccelerateRegionId"] = boost::any(*accelerateRegionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpSetId") != m.end() && !m["IpSetId"].empty()) {
      ipSetId = make_shared<string>(boost::any_cast<string>(m["IpSetId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("IpAddressList") != m.end() && !m["IpAddressList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddressList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddressList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddressList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AccelerateRegionId") != m.end() && !m["AccelerateRegionId"].empty()) {
      accelerateRegionId = make_shared<string>(boost::any_cast<string>(m["AccelerateRegionId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~DescribeIpSetResponseBody() = default;
};
class DescribeIpSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIpSetResponseBody> body{};

  DescribeIpSetResponse() {}

  explicit DescribeIpSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeIpSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpSetResponse() = default;
};
class DescribeListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> listenerId{};

  DescribeListenerRequest() {}

  explicit DescribeListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~DescribeListenerRequest() = default;
};
class DescribeListenerResponseBodyPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> fromPort{};
  shared_ptr<long> toPort{};

  DescribeListenerResponseBodyPortRanges() {}

  explicit DescribeListenerResponseBodyPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromPort) {
      res["FromPort"] = boost::any(*fromPort);
    }
    if (toPort) {
      res["ToPort"] = boost::any(*toPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromPort") != m.end() && !m["FromPort"].empty()) {
      fromPort = make_shared<long>(boost::any_cast<long>(m["FromPort"]));
    }
    if (m.find("ToPort") != m.end() && !m["ToPort"].empty()) {
      toPort = make_shared<long>(boost::any_cast<long>(m["ToPort"]));
    }
  }


  virtual ~DescribeListenerResponseBodyPortRanges() = default;
};
class DescribeListenerResponseBodyBackendPorts : public Darabonba::Model {
public:
  shared_ptr<string> fromPort{};
  shared_ptr<string> toPort{};

  DescribeListenerResponseBodyBackendPorts() {}

  explicit DescribeListenerResponseBodyBackendPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromPort) {
      res["FromPort"] = boost::any(*fromPort);
    }
    if (toPort) {
      res["ToPort"] = boost::any(*toPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromPort") != m.end() && !m["FromPort"].empty()) {
      fromPort = make_shared<string>(boost::any_cast<string>(m["FromPort"]));
    }
    if (m.find("ToPort") != m.end() && !m["ToPort"].empty()) {
      toPort = make_shared<string>(boost::any_cast<string>(m["ToPort"]));
    }
  }


  virtual ~DescribeListenerResponseBodyBackendPorts() = default;
};
class DescribeListenerResponseBodyCertificates : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> id{};

  DescribeListenerResponseBodyCertificates() {}

  explicit DescribeListenerResponseBodyCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeListenerResponseBodyCertificates() = default;
};
class DescribeListenerResponseBodyRelatedAcls : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> status{};

  DescribeListenerResponseBodyRelatedAcls() {}

  explicit DescribeListenerResponseBodyRelatedAcls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeListenerResponseBodyRelatedAcls() = default;
};
class DescribeListenerResponseBodyXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<bool> XForwardedForGaIdEnabled{};
  shared_ptr<bool> XForwardedForGaApEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForPortEnabled{};
  shared_ptr<bool> XRealIpEnabled{};

  DescribeListenerResponseBodyXForwardedForConfig() {}

  explicit DescribeListenerResponseBodyXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForGaIdEnabled) {
      res["XForwardedForGaIdEnabled"] = boost::any(*XForwardedForGaIdEnabled);
    }
    if (XForwardedForGaApEnabled) {
      res["XForwardedForGaApEnabled"] = boost::any(*XForwardedForGaApEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForPortEnabled) {
      res["XForwardedForPortEnabled"] = boost::any(*XForwardedForPortEnabled);
    }
    if (XRealIpEnabled) {
      res["XRealIpEnabled"] = boost::any(*XRealIpEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForGaIdEnabled") != m.end() && !m["XForwardedForGaIdEnabled"].empty()) {
      XForwardedForGaIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaIdEnabled"]));
    }
    if (m.find("XForwardedForGaApEnabled") != m.end() && !m["XForwardedForGaApEnabled"].empty()) {
      XForwardedForGaApEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaApEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForPortEnabled") != m.end() && !m["XForwardedForPortEnabled"].empty()) {
      XForwardedForPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForPortEnabled"]));
    }
    if (m.find("XRealIpEnabled") != m.end() && !m["XRealIpEnabled"].empty()) {
      XRealIpEnabled = make_shared<bool>(boost::any_cast<bool>(m["XRealIpEnabled"]));
    }
  }


  virtual ~DescribeListenerResponseBodyXForwardedForConfig() = default;
};
class DescribeListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<DescribeListenerResponseBodyPortRanges>> portRanges{};
  shared_ptr<vector<DescribeListenerResponseBodyBackendPorts>> backendPorts{};
  shared_ptr<vector<DescribeListenerResponseBodyCertificates>> certificates{};
  shared_ptr<string> protocol{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> clientAffinity{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeListenerResponseBodyRelatedAcls>> relatedAcls{};
  shared_ptr<string> aclType{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<bool> proxyProtocol{};
  shared_ptr<DescribeListenerResponseBodyXForwardedForConfig> XForwardedForConfig{};
  shared_ptr<string> securityPolicyId{};

  DescribeListenerResponseBody() {}

  explicit DescribeListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (backendPorts) {
      vector<boost::any> temp1;
      for(auto item1:*backendPorts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendPorts"] = boost::any(temp1);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (clientAffinity) {
      res["ClientAffinity"] = boost::any(*clientAffinity);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (relatedAcls) {
      vector<boost::any> temp1;
      for(auto item1:*relatedAcls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedAcls"] = boost::any(temp1);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (proxyProtocol) {
      res["ProxyProtocol"] = boost::any(*proxyProtocol);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<DescribeListenerResponseBodyPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeListenerResponseBodyPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<DescribeListenerResponseBodyPortRanges>>(expect1);
      }
    }
    if (m.find("BackendPorts") != m.end() && !m["BackendPorts"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendPorts"].type()) {
        vector<DescribeListenerResponseBodyBackendPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendPorts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeListenerResponseBodyBackendPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendPorts = make_shared<vector<DescribeListenerResponseBodyBackendPorts>>(expect1);
      }
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<DescribeListenerResponseBodyCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeListenerResponseBodyCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<DescribeListenerResponseBodyCertificates>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ClientAffinity") != m.end() && !m["ClientAffinity"].empty()) {
      clientAffinity = make_shared<string>(boost::any_cast<string>(m["ClientAffinity"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RelatedAcls") != m.end() && !m["RelatedAcls"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedAcls"].type()) {
        vector<DescribeListenerResponseBodyRelatedAcls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedAcls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeListenerResponseBodyRelatedAcls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedAcls = make_shared<vector<DescribeListenerResponseBodyRelatedAcls>>(expect1);
      }
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ProxyProtocol") != m.end() && !m["ProxyProtocol"].empty()) {
      proxyProtocol = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocol"]));
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        DescribeListenerResponseBodyXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<DescribeListenerResponseBodyXForwardedForConfig>(model1);
      }
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~DescribeListenerResponseBody() = default;
};
class DescribeListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeListenerResponseBody> body{};

  DescribeListenerResponse() {}

  explicit DescribeListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeListenerResponse() = default;
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
  shared_ptr<string> localName{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
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
class DetachDdosFromAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> regionId{};

  DetachDdosFromAcceleratorRequest() {}

  explicit DetachDdosFromAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DetachDdosFromAcceleratorRequest() = default;
};
class DetachDdosFromAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ddosId{};
  shared_ptr<string> requestId{};

  DetachDdosFromAcceleratorResponseBody() {}

  explicit DetachDdosFromAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosId) {
      res["DdosId"] = boost::any(*ddosId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosId") != m.end() && !m["DdosId"].empty()) {
      ddosId = make_shared<string>(boost::any_cast<string>(m["DdosId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachDdosFromAcceleratorResponseBody() = default;
};
class DetachDdosFromAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachDdosFromAcceleratorResponseBody> body{};

  DetachDdosFromAcceleratorResponse() {}

  explicit DetachDdosFromAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachDdosFromAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachDdosFromAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~DetachDdosFromAcceleratorResponse() = default;
};
class DetachLogStoreFromEndpointGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<vector<string>> endpointGroupIds{};
  shared_ptr<string> clientToken{};

  DetachLogStoreFromEndpointGroupRequest() {}

  explicit DetachLogStoreFromEndpointGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (endpointGroupIds) {
      res["EndpointGroupIds"] = boost::any(*endpointGroupIds);
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
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("EndpointGroupIds") != m.end() && !m["EndpointGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~DetachLogStoreFromEndpointGroupRequest() = default;
};
class DetachLogStoreFromEndpointGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachLogStoreFromEndpointGroupResponseBody() {}

  explicit DetachLogStoreFromEndpointGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachLogStoreFromEndpointGroupResponseBody() = default;
};
class DetachLogStoreFromEndpointGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachLogStoreFromEndpointGroupResponseBody> body{};

  DetachLogStoreFromEndpointGroupResponse() {}

  explicit DetachLogStoreFromEndpointGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachLogStoreFromEndpointGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachLogStoreFromEndpointGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DetachLogStoreFromEndpointGroupResponse() = default;
};
class DissociateAclsFromListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  DissociateAclsFromListenerRequest() {}

  explicit DissociateAclsFromListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~DissociateAclsFromListenerRequest() = default;
};
class DissociateAclsFromListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<string> listenerId{};

  DissociateAclsFromListenerResponseBody() {}

  explicit DissociateAclsFromListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~DissociateAclsFromListenerResponseBody() = default;
};
class DissociateAclsFromListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateAclsFromListenerResponseBody> body{};

  DissociateAclsFromListenerResponse() {}

  explicit DissociateAclsFromListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DissociateAclsFromListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateAclsFromListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateAclsFromListenerResponse() = default;
};
class DissociateAdditionalCertificatesFromListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<vector<string>> domains{};

  DissociateAdditionalCertificatesFromListenerRequest() {}

  explicit DissociateAdditionalCertificatesFromListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (domains) {
      res["Domains"] = boost::any(*domains);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domains"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domains = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DissociateAdditionalCertificatesFromListenerRequest() = default;
};
class DissociateAdditionalCertificatesFromListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateAdditionalCertificatesFromListenerResponseBody() {}

  explicit DissociateAdditionalCertificatesFromListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DissociateAdditionalCertificatesFromListenerResponseBody() = default;
};
class DissociateAdditionalCertificatesFromListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateAdditionalCertificatesFromListenerResponseBody> body{};

  DissociateAdditionalCertificatesFromListenerResponse() {}

  explicit DissociateAdditionalCertificatesFromListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DissociateAdditionalCertificatesFromListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateAdditionalCertificatesFromListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateAdditionalCertificatesFromListenerResponse() = default;
};
class GetAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};

  GetAclRequest() {}

  explicit GetAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
  }


  virtual ~GetAclRequest() = default;
};
class GetAclResponseBodyAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> entry{};
  shared_ptr<string> entryDescription{};

  GetAclResponseBodyAclEntries() {}

  explicit GetAclResponseBodyAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    if (entryDescription) {
      res["EntryDescription"] = boost::any(*entryDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
    if (m.find("EntryDescription") != m.end() && !m["EntryDescription"].empty()) {
      entryDescription = make_shared<string>(boost::any_cast<string>(m["EntryDescription"]));
    }
  }


  virtual ~GetAclResponseBodyAclEntries() = default;
};
class GetAclResponseBodyRelatedListeners : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<string> aclType{};
  shared_ptr<string> acceleratorId{};

  GetAclResponseBodyRelatedListeners() {}

  explicit GetAclResponseBodyRelatedListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (aclType) {
      res["AclType"] = boost::any(*aclType);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("AclType") != m.end() && !m["AclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["AclType"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~GetAclResponseBodyRelatedListeners() = default;
};
class GetAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> aclStatus{};
  shared_ptr<vector<GetAclResponseBodyAclEntries>> aclEntries{};
  shared_ptr<vector<GetAclResponseBodyRelatedListeners>> relatedListeners{};
  shared_ptr<string> aclName{};

  GetAclResponseBody() {}

  explicit GetAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (relatedListeners) {
      vector<boost::any> temp1;
      for(auto item1:*relatedListeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedListeners"] = boost::any(temp1);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<GetAclResponseBodyAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAclResponseBodyAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<GetAclResponseBodyAclEntries>>(expect1);
      }
    }
    if (m.find("RelatedListeners") != m.end() && !m["RelatedListeners"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedListeners"].type()) {
        vector<GetAclResponseBodyRelatedListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedListeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAclResponseBodyRelatedListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedListeners = make_shared<vector<GetAclResponseBodyRelatedListeners>>(expect1);
      }
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
  }


  virtual ~GetAclResponseBody() = default;
};
class GetAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAclResponseBody> body{};

  GetAclResponse() {}

  explicit GetAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAclResponseBody>(model1);
      }
    }
  }


  virtual ~GetAclResponse() = default;
};
class GetHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};

  GetHealthStatusRequest() {}

  explicit GetHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~GetHealthStatusRequest() = default;
};
class GetHealthStatusResponseBodyEndpointGroupsEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> address{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> healthDetail{};
  shared_ptr<long> port{};
  shared_ptr<string> type{};

  GetHealthStatusResponseBodyEndpointGroupsEndpoints() {}

  explicit GetHealthStatusResponseBodyEndpointGroupsEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (healthDetail) {
      res["HealthDetail"] = boost::any(*healthDetail);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("HealthDetail") != m.end() && !m["HealthDetail"].empty()) {
      healthDetail = make_shared<string>(boost::any_cast<string>(m["HealthDetail"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetHealthStatusResponseBodyEndpointGroupsEndpoints() = default;
};
class GetHealthStatusResponseBodyEndpointGroups : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupId{};
  shared_ptr<string> endpointGroupType{};
  shared_ptr<string> healthStatus{};
  shared_ptr<vector<string>> forwardingRuleIds{};
  shared_ptr<vector<GetHealthStatusResponseBodyEndpointGroupsEndpoints>> endpoints{};

  GetHealthStatusResponseBodyEndpointGroups() {}

  explicit GetHealthStatusResponseBodyEndpointGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    if (endpointGroupType) {
      res["EndpointGroupType"] = boost::any(*endpointGroupType);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (forwardingRuleIds) {
      res["ForwardingRuleIds"] = boost::any(*forwardingRuleIds);
    }
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
    if (m.find("EndpointGroupType") != m.end() && !m["EndpointGroupType"].empty()) {
      endpointGroupType = make_shared<string>(boost::any_cast<string>(m["EndpointGroupType"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("ForwardingRuleIds") != m.end() && !m["ForwardingRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ForwardingRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ForwardingRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      forwardingRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<GetHealthStatusResponseBodyEndpointGroupsEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHealthStatusResponseBodyEndpointGroupsEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<GetHealthStatusResponseBodyEndpointGroupsEndpoints>>(expect1);
      }
    }
  }


  virtual ~GetHealthStatusResponseBodyEndpointGroups() = default;
};
class GetHealthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> healthStatus{};
  shared_ptr<vector<GetHealthStatusResponseBodyEndpointGroups>> endpointGroups{};

  GetHealthStatusResponseBody() {}

  explicit GetHealthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (endpointGroups) {
      vector<boost::any> temp1;
      for(auto item1:*endpointGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("EndpointGroups") != m.end() && !m["EndpointGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointGroups"].type()) {
        vector<GetHealthStatusResponseBodyEndpointGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHealthStatusResponseBodyEndpointGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointGroups = make_shared<vector<GetHealthStatusResponseBodyEndpointGroups>>(expect1);
      }
    }
  }


  virtual ~GetHealthStatusResponseBody() = default;
};
class GetHealthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHealthStatusResponseBody> body{};

  GetHealthStatusResponse() {}

  explicit GetHealthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHealthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHealthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetHealthStatusResponse() = default;
};
class GetSpareIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> spareIp{};

  GetSpareIpRequest() {}

  explicit GetSpareIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (spareIp) {
      res["SpareIp"] = boost::any(*spareIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("SpareIp") != m.end() && !m["SpareIp"].empty()) {
      spareIp = make_shared<string>(boost::any_cast<string>(m["SpareIp"]));
    }
  }


  virtual ~GetSpareIpRequest() = default;
};
class GetSpareIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  GetSpareIpResponseBody() {}

  explicit GetSpareIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~GetSpareIpResponseBody() = default;
};
class GetSpareIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSpareIpResponseBody> body{};

  GetSpareIpResponse() {}

  explicit GetSpareIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSpareIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSpareIpResponseBody>(model1);
      }
    }
  }


  virtual ~GetSpareIpResponse() = default;
};
class ListAccelerateAreasRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListAccelerateAreasRequest() {}

  explicit ListAccelerateAreasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccelerateAreasRequest() = default;
};
class ListAccelerateAreasResponseBodyAreasRegionList : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListAccelerateAreasResponseBodyAreasRegionList() {}

  explicit ListAccelerateAreasResponseBodyAreasRegionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAccelerateAreasResponseBodyAreasRegionList() = default;
};
class ListAccelerateAreasResponseBodyAreas : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> areaId{};
  shared_ptr<vector<ListAccelerateAreasResponseBodyAreasRegionList>> regionList{};

  ListAccelerateAreasResponseBodyAreas() {}

  explicit ListAccelerateAreasResponseBodyAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (areaId) {
      res["AreaId"] = boost::any(*areaId);
    }
    if (regionList) {
      vector<boost::any> temp1;
      for(auto item1:*regionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("AreaId") != m.end() && !m["AreaId"].empty()) {
      areaId = make_shared<string>(boost::any_cast<string>(m["AreaId"]));
    }
    if (m.find("RegionList") != m.end() && !m["RegionList"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionList"].type()) {
        vector<ListAccelerateAreasResponseBodyAreasRegionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccelerateAreasResponseBodyAreasRegionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionList = make_shared<vector<ListAccelerateAreasResponseBodyAreasRegionList>>(expect1);
      }
    }
  }


  virtual ~ListAccelerateAreasResponseBodyAreas() = default;
};
class ListAccelerateAreasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAccelerateAreasResponseBodyAreas>> areas{};

  ListAccelerateAreasResponseBody() {}

  explicit ListAccelerateAreasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (areas) {
      vector<boost::any> temp1;
      for(auto item1:*areas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Areas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Areas") != m.end() && !m["Areas"].empty()) {
      if (typeid(vector<boost::any>) == m["Areas"].type()) {
        vector<ListAccelerateAreasResponseBodyAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Areas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccelerateAreasResponseBodyAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        areas = make_shared<vector<ListAccelerateAreasResponseBodyAreas>>(expect1);
      }
    }
  }


  virtual ~ListAccelerateAreasResponseBody() = default;
};
class ListAccelerateAreasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAccelerateAreasResponseBody> body{};

  ListAccelerateAreasResponse() {}

  explicit ListAccelerateAreasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAccelerateAreasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccelerateAreasResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccelerateAreasResponse() = default;
};
class ListAcceleratorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> state{};

  ListAcceleratorsRequest() {}

  explicit ListAcceleratorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListAcceleratorsRequest() = default;
};
class ListAcceleratorsResponseBodyAcceleratorsBasicBandwidthPackage : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> instanceId{};

  ListAcceleratorsResponseBodyAcceleratorsBasicBandwidthPackage() {}

  explicit ListAcceleratorsResponseBodyAcceleratorsBasicBandwidthPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListAcceleratorsResponseBodyAcceleratorsBasicBandwidthPackage() = default;
};
class ListAcceleratorsResponseBodyAcceleratorsCrossDomainBandwidthPackage : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> instanceId{};

  ListAcceleratorsResponseBodyAcceleratorsCrossDomainBandwidthPackage() {}

  explicit ListAcceleratorsResponseBodyAcceleratorsCrossDomainBandwidthPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListAcceleratorsResponseBodyAcceleratorsCrossDomainBandwidthPackage() = default;
};
class ListAcceleratorsResponseBodyAccelerators : public Darabonba::Model {
public:
  shared_ptr<string> dnsName{};
  shared_ptr<string> type{};
  shared_ptr<string> secondDnsName{};
  shared_ptr<string> spec{};
  shared_ptr<string> state{};
  shared_ptr<long> createTime{};
  shared_ptr<string> cenId{};
  shared_ptr<string> ddosId{};
  shared_ptr<ListAcceleratorsResponseBodyAcceleratorsBasicBandwidthPackage> basicBandwidthPackage{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> description{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> name{};
  shared_ptr<ListAcceleratorsResponseBodyAcceleratorsCrossDomainBandwidthPackage> crossDomainBandwidthPackage{};

  ListAcceleratorsResponseBodyAccelerators() {}

  explicit ListAcceleratorsResponseBodyAccelerators(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsName) {
      res["DnsName"] = boost::any(*dnsName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (secondDnsName) {
      res["SecondDnsName"] = boost::any(*secondDnsName);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ddosId) {
      res["DdosId"] = boost::any(*ddosId);
    }
    if (basicBandwidthPackage) {
      res["BasicBandwidthPackage"] = basicBandwidthPackage ? boost::any(basicBandwidthPackage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (crossDomainBandwidthPackage) {
      res["CrossDomainBandwidthPackage"] = crossDomainBandwidthPackage ? boost::any(crossDomainBandwidthPackage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsName") != m.end() && !m["DnsName"].empty()) {
      dnsName = make_shared<string>(boost::any_cast<string>(m["DnsName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("SecondDnsName") != m.end() && !m["SecondDnsName"].empty()) {
      secondDnsName = make_shared<string>(boost::any_cast<string>(m["SecondDnsName"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("DdosId") != m.end() && !m["DdosId"].empty()) {
      ddosId = make_shared<string>(boost::any_cast<string>(m["DdosId"]));
    }
    if (m.find("BasicBandwidthPackage") != m.end() && !m["BasicBandwidthPackage"].empty()) {
      if (typeid(map<string, boost::any>) == m["BasicBandwidthPackage"].type()) {
        ListAcceleratorsResponseBodyAcceleratorsBasicBandwidthPackage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BasicBandwidthPackage"]));
        basicBandwidthPackage = make_shared<ListAcceleratorsResponseBodyAcceleratorsBasicBandwidthPackage>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CrossDomainBandwidthPackage") != m.end() && !m["CrossDomainBandwidthPackage"].empty()) {
      if (typeid(map<string, boost::any>) == m["CrossDomainBandwidthPackage"].type()) {
        ListAcceleratorsResponseBodyAcceleratorsCrossDomainBandwidthPackage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CrossDomainBandwidthPackage"]));
        crossDomainBandwidthPackage = make_shared<ListAcceleratorsResponseBodyAcceleratorsCrossDomainBandwidthPackage>(model1);
      }
    }
  }


  virtual ~ListAcceleratorsResponseBodyAccelerators() = default;
};
class ListAcceleratorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAcceleratorsResponseBodyAccelerators>> accelerators{};
  shared_ptr<long> pageNumber{};

  ListAcceleratorsResponseBody() {}

  explicit ListAcceleratorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accelerators) {
      vector<boost::any> temp1;
      for(auto item1:*accelerators){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Accelerators"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Accelerators") != m.end() && !m["Accelerators"].empty()) {
      if (typeid(vector<boost::any>) == m["Accelerators"].type()) {
        vector<ListAcceleratorsResponseBodyAccelerators> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Accelerators"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAcceleratorsResponseBodyAccelerators model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accelerators = make_shared<vector<ListAcceleratorsResponseBodyAccelerators>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListAcceleratorsResponseBody() = default;
};
class ListAcceleratorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAcceleratorsResponseBody> body{};

  ListAcceleratorsResponse() {}

  explicit ListAcceleratorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAcceleratorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAcceleratorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAcceleratorsResponse() = default;
};
class ListAclsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> aclIds{};
  shared_ptr<string> aclName{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListAclsRequest() {}

  explicit ListAclsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (aclIds) {
      res["AclIds"] = boost::any(*aclIds);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AclIds") != m.end() && !m["AclIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListAclsRequest() = default;
};
class ListAclsResponseBodyAcls : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> aclName{};
  shared_ptr<string> addressIPVersion{};
  shared_ptr<string> aclStatus{};

  ListAclsResponseBodyAcls() {}

  explicit ListAclsResponseBodyAcls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
  }


  virtual ~ListAclsResponseBodyAcls() = default;
};
class ListAclsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListAclsResponseBodyAcls>> acls{};

  ListAclsResponseBody() {}

  explicit ListAclsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (acls) {
      vector<boost::any> temp1;
      for(auto item1:*acls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Acls"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Acls") != m.end() && !m["Acls"].empty()) {
      if (typeid(vector<boost::any>) == m["Acls"].type()) {
        vector<ListAclsResponseBodyAcls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Acls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclsResponseBodyAcls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acls = make_shared<vector<ListAclsResponseBodyAcls>>(expect1);
      }
    }
  }


  virtual ~ListAclsResponseBody() = default;
};
class ListAclsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAclsResponseBody> body{};

  ListAclsResponse() {}

  explicit ListAclsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAclsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAclsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAclsResponse() = default;
};
class ListAvailableAccelerateAreasRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> acceleratorId{};

  ListAvailableAccelerateAreasRequest() {}

  explicit ListAvailableAccelerateAreasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~ListAvailableAccelerateAreasRequest() = default;
};
class ListAvailableAccelerateAreasResponseBodyAreasRegionList : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListAvailableAccelerateAreasResponseBodyAreasRegionList() {}

  explicit ListAvailableAccelerateAreasResponseBodyAreasRegionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAvailableAccelerateAreasResponseBodyAreasRegionList() = default;
};
class ListAvailableAccelerateAreasResponseBodyAreas : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> areaId{};
  shared_ptr<vector<ListAvailableAccelerateAreasResponseBodyAreasRegionList>> regionList{};

  ListAvailableAccelerateAreasResponseBodyAreas() {}

  explicit ListAvailableAccelerateAreasResponseBodyAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (areaId) {
      res["AreaId"] = boost::any(*areaId);
    }
    if (regionList) {
      vector<boost::any> temp1;
      for(auto item1:*regionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("AreaId") != m.end() && !m["AreaId"].empty()) {
      areaId = make_shared<string>(boost::any_cast<string>(m["AreaId"]));
    }
    if (m.find("RegionList") != m.end() && !m["RegionList"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionList"].type()) {
        vector<ListAvailableAccelerateAreasResponseBodyAreasRegionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableAccelerateAreasResponseBodyAreasRegionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionList = make_shared<vector<ListAvailableAccelerateAreasResponseBodyAreasRegionList>>(expect1);
      }
    }
  }


  virtual ~ListAvailableAccelerateAreasResponseBodyAreas() = default;
};
class ListAvailableAccelerateAreasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAvailableAccelerateAreasResponseBodyAreas>> areas{};

  ListAvailableAccelerateAreasResponseBody() {}

  explicit ListAvailableAccelerateAreasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (areas) {
      vector<boost::any> temp1;
      for(auto item1:*areas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Areas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Areas") != m.end() && !m["Areas"].empty()) {
      if (typeid(vector<boost::any>) == m["Areas"].type()) {
        vector<ListAvailableAccelerateAreasResponseBodyAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Areas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableAccelerateAreasResponseBodyAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        areas = make_shared<vector<ListAvailableAccelerateAreasResponseBodyAreas>>(expect1);
      }
    }
  }


  virtual ~ListAvailableAccelerateAreasResponseBody() = default;
};
class ListAvailableAccelerateAreasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAvailableAccelerateAreasResponseBody> body{};

  ListAvailableAccelerateAreasResponse() {}

  explicit ListAvailableAccelerateAreasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAvailableAccelerateAreasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableAccelerateAreasResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableAccelerateAreasResponse() = default;
};
class ListAvailableBusiRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> acceleratorId{};

  ListAvailableBusiRegionsRequest() {}

  explicit ListAvailableBusiRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~ListAvailableBusiRegionsRequest() = default;
};
class ListAvailableBusiRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListAvailableBusiRegionsResponseBodyRegions() {}

  explicit ListAvailableBusiRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAvailableBusiRegionsResponseBodyRegions() = default;
};
class ListAvailableBusiRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAvailableBusiRegionsResponseBodyRegions>> regions{};

  ListAvailableBusiRegionsResponseBody() {}

  explicit ListAvailableBusiRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListAvailableBusiRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableBusiRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListAvailableBusiRegionsResponseBodyRegions>>(expect1);
      }
    }
  }


  virtual ~ListAvailableBusiRegionsResponseBody() = default;
};
class ListAvailableBusiRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAvailableBusiRegionsResponseBody> body{};

  ListAvailableBusiRegionsResponse() {}

  explicit ListAvailableBusiRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAvailableBusiRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableBusiRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableBusiRegionsResponse() = default;
};
class ListBandwidthackagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListBandwidthackagesRequest() {}

  explicit ListBandwidthackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListBandwidthackagesRequest() = default;
};
class ListBandwidthackagesResponseBodyBandwidthPackages : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> state{};
  shared_ptr<string> createTime{};
  shared_ptr<string> chargeType{};
  shared_ptr<vector<string>> accelerators{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  ListBandwidthackagesResponseBodyBandwidthPackages() {}

  explicit ListBandwidthackagesResponseBodyBandwidthPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (accelerators) {
      res["Accelerators"] = boost::any(*accelerators);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Accelerators") != m.end() && !m["Accelerators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Accelerators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Accelerators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accelerators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListBandwidthackagesResponseBodyBandwidthPackages() = default;
};
class ListBandwidthackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListBandwidthackagesResponseBodyBandwidthPackages>> bandwidthPackages{};

  ListBandwidthackagesResponseBody() {}

  explicit ListBandwidthackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (bandwidthPackages) {
      vector<boost::any> temp1;
      for(auto item1:*bandwidthPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BandwidthPackages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("BandwidthPackages") != m.end() && !m["BandwidthPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["BandwidthPackages"].type()) {
        vector<ListBandwidthackagesResponseBodyBandwidthPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BandwidthPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBandwidthackagesResponseBodyBandwidthPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bandwidthPackages = make_shared<vector<ListBandwidthackagesResponseBodyBandwidthPackages>>(expect1);
      }
    }
  }


  virtual ~ListBandwidthackagesResponseBody() = default;
};
class ListBandwidthackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBandwidthackagesResponseBody> body{};

  ListBandwidthackagesResponse() {}

  explicit ListBandwidthackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListBandwidthackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBandwidthackagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBandwidthackagesResponse() = default;
};
class ListBandwidthPackagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> state{};
  shared_ptr<string> type{};
  shared_ptr<string> bandwidthPackageId{};

  ListBandwidthPackagesRequest() {}

  explicit ListBandwidthPackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
  }


  virtual ~ListBandwidthPackagesRequest() = default;
};
class ListBandwidthPackagesResponseBodyBandwidthPackages : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<string> state{};
  shared_ptr<string> createTime{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> cbnGeographicRegionIdA{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<vector<string>> accelerators{};
  shared_ptr<string> cbnGeographicRegionIdB{};
  shared_ptr<string> name{};
  shared_ptr<string> billingType{};
  shared_ptr<long> ratio{};

  ListBandwidthPackagesResponseBodyBandwidthPackages() {}

  explicit ListBandwidthPackagesResponseBodyBandwidthPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (cbnGeographicRegionIdA) {
      res["CbnGeographicRegionIdA"] = boost::any(*cbnGeographicRegionIdA);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (accelerators) {
      res["Accelerators"] = boost::any(*accelerators);
    }
    if (cbnGeographicRegionIdB) {
      res["CbnGeographicRegionIdB"] = boost::any(*cbnGeographicRegionIdB);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CbnGeographicRegionIdA") != m.end() && !m["CbnGeographicRegionIdA"].empty()) {
      cbnGeographicRegionIdA = make_shared<string>(boost::any_cast<string>(m["CbnGeographicRegionIdA"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Accelerators") != m.end() && !m["Accelerators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Accelerators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Accelerators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accelerators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CbnGeographicRegionIdB") != m.end() && !m["CbnGeographicRegionIdB"].empty()) {
      cbnGeographicRegionIdB = make_shared<string>(boost::any_cast<string>(m["CbnGeographicRegionIdB"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<long>(boost::any_cast<long>(m["Ratio"]));
    }
  }


  virtual ~ListBandwidthPackagesResponseBodyBandwidthPackages() = default;
};
class ListBandwidthPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListBandwidthPackagesResponseBodyBandwidthPackages>> bandwidthPackages{};

  ListBandwidthPackagesResponseBody() {}

  explicit ListBandwidthPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (bandwidthPackages) {
      vector<boost::any> temp1;
      for(auto item1:*bandwidthPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BandwidthPackages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("BandwidthPackages") != m.end() && !m["BandwidthPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["BandwidthPackages"].type()) {
        vector<ListBandwidthPackagesResponseBodyBandwidthPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BandwidthPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBandwidthPackagesResponseBodyBandwidthPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bandwidthPackages = make_shared<vector<ListBandwidthPackagesResponseBodyBandwidthPackages>>(expect1);
      }
    }
  }


  virtual ~ListBandwidthPackagesResponseBody() = default;
};
class ListBandwidthPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBandwidthPackagesResponseBody> body{};

  ListBandwidthPackagesResponse() {}

  explicit ListBandwidthPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListBandwidthPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBandwidthPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBandwidthPackagesResponse() = default;
};
class ListBusiRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListBusiRegionsRequest() {}

  explicit ListBusiRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListBusiRegionsRequest() = default;
};
class ListBusiRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListBusiRegionsResponseBodyRegions() {}

  explicit ListBusiRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListBusiRegionsResponseBodyRegions() = default;
};
class ListBusiRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListBusiRegionsResponseBodyRegions>> regions{};

  ListBusiRegionsResponseBody() {}

  explicit ListBusiRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListBusiRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBusiRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListBusiRegionsResponseBodyRegions>>(expect1);
      }
    }
  }


  virtual ~ListBusiRegionsResponseBody() = default;
};
class ListBusiRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBusiRegionsResponseBody> body{};

  ListBusiRegionsResponse() {}

  explicit ListBusiRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListBusiRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBusiRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBusiRegionsResponse() = default;
};
class ListEndpointGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> endpointGroupType{};
  shared_ptr<string> accessLogSwitch{};
  shared_ptr<string> endpointGroupId{};

  ListEndpointGroupsRequest() {}

  explicit ListEndpointGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (endpointGroupType) {
      res["EndpointGroupType"] = boost::any(*endpointGroupType);
    }
    if (accessLogSwitch) {
      res["AccessLogSwitch"] = boost::any(*accessLogSwitch);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("EndpointGroupType") != m.end() && !m["EndpointGroupType"].empty()) {
      endpointGroupType = make_shared<string>(boost::any_cast<string>(m["EndpointGroupType"]));
    }
    if (m.find("AccessLogSwitch") != m.end() && !m["AccessLogSwitch"].empty()) {
      accessLogSwitch = make_shared<string>(boost::any_cast<string>(m["AccessLogSwitch"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
  }


  virtual ~ListEndpointGroupsRequest() = default;
};
class ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<bool> enableClientIPPreservation{};
  shared_ptr<long> weight{};
  shared_ptr<string> probeProtocol{};
  shared_ptr<string> endpoint{};
  shared_ptr<long> probePort{};
  shared_ptr<string> endpointId{};

  ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations() {}

  explicit ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (enableClientIPPreservation) {
      res["EnableClientIPPreservation"] = boost::any(*enableClientIPPreservation);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (probeProtocol) {
      res["ProbeProtocol"] = boost::any(*probeProtocol);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (probePort) {
      res["ProbePort"] = boost::any(*probePort);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("EnableClientIPPreservation") != m.end() && !m["EnableClientIPPreservation"].empty()) {
      enableClientIPPreservation = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservation"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("ProbeProtocol") != m.end() && !m["ProbeProtocol"].empty()) {
      probeProtocol = make_shared<string>(boost::any_cast<string>(m["ProbeProtocol"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ProbePort") != m.end() && !m["ProbePort"].empty()) {
      probePort = make_shared<long>(boost::any_cast<long>(m["ProbePort"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
  }


  virtual ~ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations() = default;
};
class ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<long> endpointPort{};

  ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides() {}

  explicit ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (endpointPort) {
      res["EndpointPort"] = boost::any(*endpointPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("EndpointPort") != m.end() && !m["EndpointPort"].empty()) {
      endpointPort = make_shared<long>(boost::any_cast<long>(m["EndpointPort"]));
    }
  }


  virtual ~ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides() = default;
};
class ListEndpointGroupsResponseBodyEndpointGroups : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupId{};
  shared_ptr<vector<string>> endpointGroupIpList{};
  shared_ptr<vector<string>> endpointGroupUnconfirmedIpList{};
  shared_ptr<string> state{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> endpointGroupRegion{};
  shared_ptr<long> healthCheckIntervalSeconds{};
  shared_ptr<long> trafficPercentage{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> thresholdCount{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<vector<ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations>> endpointConfigurations{};
  shared_ptr<vector<ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides>> portOverrides{};
  shared_ptr<vector<string>> forwardingRuleIds{};
  shared_ptr<string> endpointGroupType{};
  shared_ptr<string> endpointRequestProtocol{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> healthCheckPort{};
  shared_ptr<bool> healthCheckEnabled{};

  ListEndpointGroupsResponseBodyEndpointGroups() {}

  explicit ListEndpointGroupsResponseBodyEndpointGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    if (endpointGroupIpList) {
      res["EndpointGroupIpList"] = boost::any(*endpointGroupIpList);
    }
    if (endpointGroupUnconfirmedIpList) {
      res["EndpointGroupUnconfirmedIpList"] = boost::any(*endpointGroupUnconfirmedIpList);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (endpointGroupRegion) {
      res["EndpointGroupRegion"] = boost::any(*endpointGroupRegion);
    }
    if (healthCheckIntervalSeconds) {
      res["HealthCheckIntervalSeconds"] = boost::any(*healthCheckIntervalSeconds);
    }
    if (trafficPercentage) {
      res["TrafficPercentage"] = boost::any(*trafficPercentage);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (thresholdCount) {
      res["ThresholdCount"] = boost::any(*thresholdCount);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (endpointConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointConfigurations"] = boost::any(temp1);
    }
    if (portOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*portOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortOverrides"] = boost::any(temp1);
    }
    if (forwardingRuleIds) {
      res["ForwardingRuleIds"] = boost::any(*forwardingRuleIds);
    }
    if (endpointGroupType) {
      res["EndpointGroupType"] = boost::any(*endpointGroupType);
    }
    if (endpointRequestProtocol) {
      res["EndpointRequestProtocol"] = boost::any(*endpointRequestProtocol);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (healthCheckPort) {
      res["HealthCheckPort"] = boost::any(*healthCheckPort);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
    if (m.find("EndpointGroupIpList") != m.end() && !m["EndpointGroupIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndpointGroupUnconfirmedIpList") != m.end() && !m["EndpointGroupUnconfirmedIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupUnconfirmedIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupUnconfirmedIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupUnconfirmedIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("EndpointGroupRegion") != m.end() && !m["EndpointGroupRegion"].empty()) {
      endpointGroupRegion = make_shared<string>(boost::any_cast<string>(m["EndpointGroupRegion"]));
    }
    if (m.find("HealthCheckIntervalSeconds") != m.end() && !m["HealthCheckIntervalSeconds"].empty()) {
      healthCheckIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["HealthCheckIntervalSeconds"]));
    }
    if (m.find("TrafficPercentage") != m.end() && !m["TrafficPercentage"].empty()) {
      trafficPercentage = make_shared<long>(boost::any_cast<long>(m["TrafficPercentage"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("ThresholdCount") != m.end() && !m["ThresholdCount"].empty()) {
      thresholdCount = make_shared<long>(boost::any_cast<long>(m["ThresholdCount"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("EndpointConfigurations") != m.end() && !m["EndpointConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointConfigurations"].type()) {
        vector<ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointConfigurations = make_shared<vector<ListEndpointGroupsResponseBodyEndpointGroupsEndpointConfigurations>>(expect1);
      }
    }
    if (m.find("PortOverrides") != m.end() && !m["PortOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["PortOverrides"].type()) {
        vector<ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portOverrides = make_shared<vector<ListEndpointGroupsResponseBodyEndpointGroupsPortOverrides>>(expect1);
      }
    }
    if (m.find("ForwardingRuleIds") != m.end() && !m["ForwardingRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ForwardingRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ForwardingRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      forwardingRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndpointGroupType") != m.end() && !m["EndpointGroupType"].empty()) {
      endpointGroupType = make_shared<string>(boost::any_cast<string>(m["EndpointGroupType"]));
    }
    if (m.find("EndpointRequestProtocol") != m.end() && !m["EndpointRequestProtocol"].empty()) {
      endpointRequestProtocol = make_shared<string>(boost::any_cast<string>(m["EndpointRequestProtocol"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("HealthCheckPort") != m.end() && !m["HealthCheckPort"].empty()) {
      healthCheckPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckPort"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
  }


  virtual ~ListEndpointGroupsResponseBodyEndpointGroups() = default;
};
class ListEndpointGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListEndpointGroupsResponseBodyEndpointGroups>> endpointGroups{};

  ListEndpointGroupsResponseBody() {}

  explicit ListEndpointGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (endpointGroups) {
      vector<boost::any> temp1;
      for(auto item1:*endpointGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("EndpointGroups") != m.end() && !m["EndpointGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointGroups"].type()) {
        vector<ListEndpointGroupsResponseBodyEndpointGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEndpointGroupsResponseBodyEndpointGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointGroups = make_shared<vector<ListEndpointGroupsResponseBodyEndpointGroups>>(expect1);
      }
    }
  }


  virtual ~ListEndpointGroupsResponseBody() = default;
};
class ListEndpointGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEndpointGroupsResponseBody> body{};

  ListEndpointGroupsResponse() {}

  explicit ListEndpointGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEndpointGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEndpointGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEndpointGroupsResponse() = default;
};
class ListForwardingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> forwardingRuleId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListForwardingRulesRequest() {}

  explicit ListForwardingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (forwardingRuleId) {
      res["ForwardingRuleId"] = boost::any(*forwardingRuleId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ForwardingRuleId") != m.end() && !m["ForwardingRuleId"].empty()) {
      forwardingRuleId = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListForwardingRulesRequest() = default;
};
class ListForwardingRulesResponseBodyForwardingRulesRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  ListForwardingRulesResponseBodyForwardingRulesRuleConditionsPathConfig() {}

  explicit ListForwardingRulesResponseBodyForwardingRulesRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListForwardingRulesResponseBodyForwardingRulesRuleConditionsPathConfig() = default;
};
class ListForwardingRulesResponseBodyForwardingRulesRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  ListForwardingRulesResponseBodyForwardingRulesRuleConditionsHostConfig() {}

  explicit ListForwardingRulesResponseBodyForwardingRulesRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListForwardingRulesResponseBodyForwardingRulesRuleConditionsHostConfig() = default;
};
class ListForwardingRulesResponseBodyForwardingRulesRuleConditions : public Darabonba::Model {
public:
  shared_ptr<string> ruleConditionType{};
  shared_ptr<ListForwardingRulesResponseBodyForwardingRulesRuleConditionsPathConfig> pathConfig{};
  shared_ptr<ListForwardingRulesResponseBodyForwardingRulesRuleConditionsHostConfig> hostConfig{};

  ListForwardingRulesResponseBodyForwardingRulesRuleConditions() {}

  explicit ListForwardingRulesResponseBodyForwardingRulesRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleConditionType) {
      res["RuleConditionType"] = boost::any(*ruleConditionType);
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleConditionType") != m.end() && !m["RuleConditionType"].empty()) {
      ruleConditionType = make_shared<string>(boost::any_cast<string>(m["RuleConditionType"]));
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        ListForwardingRulesResponseBodyForwardingRulesRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<ListForwardingRulesResponseBodyForwardingRulesRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        ListForwardingRulesResponseBodyForwardingRulesRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<ListForwardingRulesResponseBodyForwardingRulesRuleConditionsHostConfig>(model1);
      }
    }
  }


  virtual ~ListForwardingRulesResponseBodyForwardingRulesRuleConditions() = default;
};
class ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupId{};

  ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
  }


  virtual ~ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfig() {}

  explicit ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfig() = default;
};
class ListForwardingRulesResponseBodyForwardingRulesRuleActions : public Darabonba::Model {
public:
  shared_ptr<long> order{};
  shared_ptr<string> ruleActionType{};
  shared_ptr<ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfig> forwardGroupConfig{};

  ListForwardingRulesResponseBodyForwardingRulesRuleActions() {}

  explicit ListForwardingRulesResponseBodyForwardingRulesRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<ListForwardingRulesResponseBodyForwardingRulesRuleActionsForwardGroupConfig>(model1);
      }
    }
  }


  virtual ~ListForwardingRulesResponseBodyForwardingRulesRuleActions() = default;
};
class ListForwardingRulesResponseBodyForwardingRules : public Darabonba::Model {
public:
  shared_ptr<long> priority{};
  shared_ptr<string> forwardingRuleId{};
  shared_ptr<string> forwardingRuleName{};
  shared_ptr<string> forwardingRuleStatus{};
  shared_ptr<vector<ListForwardingRulesResponseBodyForwardingRulesRuleConditions>> ruleConditions{};
  shared_ptr<vector<ListForwardingRulesResponseBodyForwardingRulesRuleActions>> ruleActions{};
  shared_ptr<string> listenerId{};

  ListForwardingRulesResponseBodyForwardingRules() {}

  explicit ListForwardingRulesResponseBodyForwardingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (forwardingRuleId) {
      res["ForwardingRuleId"] = boost::any(*forwardingRuleId);
    }
    if (forwardingRuleName) {
      res["ForwardingRuleName"] = boost::any(*forwardingRuleName);
    }
    if (forwardingRuleStatus) {
      res["ForwardingRuleStatus"] = boost::any(*forwardingRuleStatus);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ForwardingRuleId") != m.end() && !m["ForwardingRuleId"].empty()) {
      forwardingRuleId = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleId"]));
    }
    if (m.find("ForwardingRuleName") != m.end() && !m["ForwardingRuleName"].empty()) {
      forwardingRuleName = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleName"]));
    }
    if (m.find("ForwardingRuleStatus") != m.end() && !m["ForwardingRuleStatus"].empty()) {
      forwardingRuleStatus = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleStatus"]));
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<ListForwardingRulesResponseBodyForwardingRulesRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListForwardingRulesResponseBodyForwardingRulesRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<ListForwardingRulesResponseBodyForwardingRulesRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<ListForwardingRulesResponseBodyForwardingRulesRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListForwardingRulesResponseBodyForwardingRulesRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<ListForwardingRulesResponseBodyForwardingRulesRuleActions>>(expect1);
      }
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~ListForwardingRulesResponseBodyForwardingRules() = default;
};
class ListForwardingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListForwardingRulesResponseBodyForwardingRules>> forwardingRules{};

  ListForwardingRulesResponseBody() {}

  explicit ListForwardingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (forwardingRules) {
      vector<boost::any> temp1;
      for(auto item1:*forwardingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardingRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("ForwardingRules") != m.end() && !m["ForwardingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardingRules"].type()) {
        vector<ListForwardingRulesResponseBodyForwardingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListForwardingRulesResponseBodyForwardingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardingRules = make_shared<vector<ListForwardingRulesResponseBodyForwardingRules>>(expect1);
      }
    }
  }


  virtual ~ListForwardingRulesResponseBody() = default;
};
class ListForwardingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListForwardingRulesResponseBody> body{};

  ListForwardingRulesResponse() {}

  explicit ListForwardingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListForwardingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListForwardingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListForwardingRulesResponse() = default;
};
class ListIpSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> acceleratorId{};

  ListIpSetsRequest() {}

  explicit ListIpSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~ListIpSetsRequest() = default;
};
class ListIpSetsResponseBodyIpSets : public Darabonba::Model {
public:
  shared_ptr<string> accelerateRegionId{};
  shared_ptr<string> ipVersion{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> state{};
  shared_ptr<string> ipSetId{};
  shared_ptr<vector<string>> ipAddressList{};

  ListIpSetsResponseBodyIpSets() {}

  explicit ListIpSetsResponseBodyIpSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerateRegionId) {
      res["AccelerateRegionId"] = boost::any(*accelerateRegionId);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (ipSetId) {
      res["IpSetId"] = boost::any(*ipSetId);
    }
    if (ipAddressList) {
      res["IpAddressList"] = boost::any(*ipAddressList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccelerateRegionId") != m.end() && !m["AccelerateRegionId"].empty()) {
      accelerateRegionId = make_shared<string>(boost::any_cast<string>(m["AccelerateRegionId"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("IpSetId") != m.end() && !m["IpSetId"].empty()) {
      ipSetId = make_shared<string>(boost::any_cast<string>(m["IpSetId"]));
    }
    if (m.find("IpAddressList") != m.end() && !m["IpAddressList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddressList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddressList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddressList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListIpSetsResponseBodyIpSets() = default;
};
class ListIpSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListIpSetsResponseBodyIpSets>> ipSets{};

  ListIpSetsResponseBody() {}

  explicit ListIpSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (ipSets) {
      vector<boost::any> temp1;
      for(auto item1:*ipSets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpSets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("IpSets") != m.end() && !m["IpSets"].empty()) {
      if (typeid(vector<boost::any>) == m["IpSets"].type()) {
        vector<ListIpSetsResponseBodyIpSets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpSets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpSetsResponseBodyIpSets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipSets = make_shared<vector<ListIpSetsResponseBodyIpSets>>(expect1);
      }
    }
  }


  virtual ~ListIpSetsResponseBody() = default;
};
class ListIpSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIpSetsResponseBody> body{};

  ListIpSetsResponse() {}

  explicit ListIpSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIpSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpSetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpSetsResponse() = default;
};
class ListListenerCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> role{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListListenerCertificatesRequest() {}

  explicit ListListenerCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
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
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListListenerCertificatesRequest() = default;
};
class ListListenerCertificatesResponseBodyCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> domain{};

  ListListenerCertificatesResponseBodyCertificates() {}

  explicit ListListenerCertificatesResponseBodyCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~ListListenerCertificatesResponseBodyCertificates() = default;
};
class ListListenerCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListListenerCertificatesResponseBodyCertificates>> certificates{};

  ListListenerCertificatesResponseBody() {}

  explicit ListListenerCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<ListListenerCertificatesResponseBodyCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenerCertificatesResponseBodyCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<ListListenerCertificatesResponseBodyCertificates>>(expect1);
      }
    }
  }


  virtual ~ListListenerCertificatesResponseBody() = default;
};
class ListListenerCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenerCertificatesResponseBody> body{};

  ListListenerCertificatesResponse() {}

  explicit ListListenerCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenerCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenerCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenerCertificatesResponse() = default;
};
class ListListenersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> acceleratorId{};

  ListListenersRequest() {}

  explicit ListListenersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~ListListenersRequest() = default;
};
class ListListenersResponseBodyListenersCertificates : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> id{};

  ListListenersResponseBodyListenersCertificates() {}

  explicit ListListenersResponseBodyListenersCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersCertificates() = default;
};
class ListListenersResponseBodyListenersBackendPorts : public Darabonba::Model {
public:
  shared_ptr<string> fromPort{};
  shared_ptr<string> toPort{};

  ListListenersResponseBodyListenersBackendPorts() {}

  explicit ListListenersResponseBodyListenersBackendPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromPort) {
      res["FromPort"] = boost::any(*fromPort);
    }
    if (toPort) {
      res["ToPort"] = boost::any(*toPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromPort") != m.end() && !m["FromPort"].empty()) {
      fromPort = make_shared<string>(boost::any_cast<string>(m["FromPort"]));
    }
    if (m.find("ToPort") != m.end() && !m["ToPort"].empty()) {
      toPort = make_shared<string>(boost::any_cast<string>(m["ToPort"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersBackendPorts() = default;
};
class ListListenersResponseBodyListenersPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> fromPort{};
  shared_ptr<long> toPort{};

  ListListenersResponseBodyListenersPortRanges() {}

  explicit ListListenersResponseBodyListenersPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromPort) {
      res["FromPort"] = boost::any(*fromPort);
    }
    if (toPort) {
      res["ToPort"] = boost::any(*toPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromPort") != m.end() && !m["FromPort"].empty()) {
      fromPort = make_shared<long>(boost::any_cast<long>(m["FromPort"]));
    }
    if (m.find("ToPort") != m.end() && !m["ToPort"].empty()) {
      toPort = make_shared<long>(boost::any_cast<long>(m["ToPort"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersPortRanges() = default;
};
class ListListenersResponseBodyListenersXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<bool> XForwardedForGaIdEnabled{};
  shared_ptr<bool> XRealIpEnabled{};
  shared_ptr<bool> XForwardedForGaApEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForPortEnabled{};

  ListListenersResponseBodyListenersXForwardedForConfig() {}

  explicit ListListenersResponseBodyListenersXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForGaIdEnabled) {
      res["XForwardedForGaIdEnabled"] = boost::any(*XForwardedForGaIdEnabled);
    }
    if (XRealIpEnabled) {
      res["XRealIpEnabled"] = boost::any(*XRealIpEnabled);
    }
    if (XForwardedForGaApEnabled) {
      res["XForwardedForGaApEnabled"] = boost::any(*XForwardedForGaApEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForPortEnabled) {
      res["XForwardedForPortEnabled"] = boost::any(*XForwardedForPortEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForGaIdEnabled") != m.end() && !m["XForwardedForGaIdEnabled"].empty()) {
      XForwardedForGaIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaIdEnabled"]));
    }
    if (m.find("XRealIpEnabled") != m.end() && !m["XRealIpEnabled"].empty()) {
      XRealIpEnabled = make_shared<bool>(boost::any_cast<bool>(m["XRealIpEnabled"]));
    }
    if (m.find("XForwardedForGaApEnabled") != m.end() && !m["XForwardedForGaApEnabled"].empty()) {
      XForwardedForGaApEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaApEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForPortEnabled") != m.end() && !m["XForwardedForPortEnabled"].empty()) {
      XForwardedForPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForPortEnabled"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersXForwardedForConfig() = default;
};
class ListListenersResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<vector<ListListenersResponseBodyListenersCertificates>> certificates{};
  shared_ptr<vector<ListListenersResponseBodyListenersBackendPorts>> backendPorts{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> description{};
  shared_ptr<string> state{};
  shared_ptr<string> clientAffinity{};
  shared_ptr<string> protocol{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<ListListenersResponseBodyListenersPortRanges>> portRanges{};
  shared_ptr<string> name{};
  shared_ptr<bool> proxyProtocol{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<ListListenersResponseBodyListenersXForwardedForConfig> XForwardedForConfig{};
  shared_ptr<string> securityPolicyId{};

  ListListenersResponseBodyListeners() {}

  explicit ListListenersResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (backendPorts) {
      vector<boost::any> temp1;
      for(auto item1:*backendPorts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendPorts"] = boost::any(temp1);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (clientAffinity) {
      res["ClientAffinity"] = boost::any(*clientAffinity);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (proxyProtocol) {
      res["ProxyProtocol"] = boost::any(*proxyProtocol);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<ListListenersResponseBodyListenersCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListenersCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<ListListenersResponseBodyListenersCertificates>>(expect1);
      }
    }
    if (m.find("BackendPorts") != m.end() && !m["BackendPorts"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendPorts"].type()) {
        vector<ListListenersResponseBodyListenersBackendPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendPorts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListenersBackendPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendPorts = make_shared<vector<ListListenersResponseBodyListenersBackendPorts>>(expect1);
      }
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ClientAffinity") != m.end() && !m["ClientAffinity"].empty()) {
      clientAffinity = make_shared<string>(boost::any_cast<string>(m["ClientAffinity"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<ListListenersResponseBodyListenersPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListenersPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<ListListenersResponseBodyListenersPortRanges>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProxyProtocol") != m.end() && !m["ProxyProtocol"].empty()) {
      proxyProtocol = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocol"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        ListListenersResponseBodyListenersXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<ListListenersResponseBodyListenersXForwardedForConfig>(model1);
      }
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~ListListenersResponseBodyListeners() = default;
};
class ListListenersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListListenersResponseBodyListeners>> listeners{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};

  ListListenersResponseBody() {}

  explicit ListListenersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<ListListenersResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<ListListenersResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListListenersResponseBody() = default;
};
class ListListenersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenersResponseBody> body{};

  ListListenersResponse() {}

  explicit ListListenersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenersResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenersResponse() = default;
};
class ListSpareIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> acceleratorId{};

  ListSpareIpsRequest() {}

  explicit ListSpareIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~ListSpareIpsRequest() = default;
};
class ListSpareIpsResponseBodySpareIps : public Darabonba::Model {
public:
  shared_ptr<string> spareIp{};
  shared_ptr<string> state{};

  ListSpareIpsResponseBodySpareIps() {}

  explicit ListSpareIpsResponseBodySpareIps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spareIp) {
      res["SpareIp"] = boost::any(*spareIp);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpareIp") != m.end() && !m["SpareIp"].empty()) {
      spareIp = make_shared<string>(boost::any_cast<string>(m["SpareIp"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListSpareIpsResponseBodySpareIps() = default;
};
class ListSpareIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSpareIpsResponseBodySpareIps>> spareIps{};

  ListSpareIpsResponseBody() {}

  explicit ListSpareIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spareIps) {
      vector<boost::any> temp1;
      for(auto item1:*spareIps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpareIps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpareIps") != m.end() && !m["SpareIps"].empty()) {
      if (typeid(vector<boost::any>) == m["SpareIps"].type()) {
        vector<ListSpareIpsResponseBodySpareIps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpareIps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpareIpsResponseBodySpareIps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spareIps = make_shared<vector<ListSpareIpsResponseBodySpareIps>>(expect1);
      }
    }
  }


  virtual ~ListSpareIpsResponseBody() = default;
};
class ListSpareIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSpareIpsResponseBody> body{};

  ListSpareIpsResponse() {}

  explicit ListSpareIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSpareIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSpareIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSpareIpsResponse() = default;
};
class ListSystemSecurityPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSystemSecurityPoliciesRequest() {}

  explicit ListSystemSecurityPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSystemSecurityPoliciesRequest() = default;
};
class ListSystemSecurityPoliciesResponseBodySecurityPolicies : public Darabonba::Model {
public:
  shared_ptr<string> securityPolicyId{};
  shared_ptr<vector<string>> tlsVersions{};
  shared_ptr<vector<string>> ciphers{};

  ListSystemSecurityPoliciesResponseBodySecurityPolicies() {}

  explicit ListSystemSecurityPoliciesResponseBodySecurityPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (tlsVersions) {
      res["TlsVersions"] = boost::any(*tlsVersions);
    }
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("TlsVersions") != m.end() && !m["TlsVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TlsVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TlsVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tlsVersions = make_shared<vector<string>>(toVec1);
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


  virtual ~ListSystemSecurityPoliciesResponseBodySecurityPolicies() = default;
};
class ListSystemSecurityPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies>> securityPolicies{};

  ListSystemSecurityPoliciesResponseBody() {}

  explicit ListSystemSecurityPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (securityPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*securityPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("SecurityPolicies") != m.end() && !m["SecurityPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityPolicies"].type()) {
        vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSystemSecurityPoliciesResponseBodySecurityPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityPolicies = make_shared<vector<ListSystemSecurityPoliciesResponseBodySecurityPolicies>>(expect1);
      }
    }
  }


  virtual ~ListSystemSecurityPoliciesResponseBody() = default;
};
class ListSystemSecurityPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSystemSecurityPoliciesResponseBody> body{};

  ListSystemSecurityPoliciesResponse() {}

  explicit ListSystemSecurityPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSystemSecurityPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSystemSecurityPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSystemSecurityPoliciesResponse() = default;
};
class RemoveEntriesFromAclRequestAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> entry{};

  RemoveEntriesFromAclRequestAclEntries() {}

  explicit RemoveEntriesFromAclRequestAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~RemoveEntriesFromAclRequestAclEntries() = default;
};
class RemoveEntriesFromAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<vector<RemoveEntriesFromAclRequestAclEntries>> aclEntries{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  RemoveEntriesFromAclRequest() {}

  explicit RemoveEntriesFromAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<RemoveEntriesFromAclRequestAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveEntriesFromAclRequestAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<RemoveEntriesFromAclRequestAclEntries>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~RemoveEntriesFromAclRequest() = default;
};
class RemoveEntriesFromAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> aclId{};

  RemoveEntriesFromAclResponseBody() {}

  explicit RemoveEntriesFromAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
  }


  virtual ~RemoveEntriesFromAclResponseBody() = default;
};
class RemoveEntriesFromAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveEntriesFromAclResponseBody> body{};

  RemoveEntriesFromAclResponse() {}

  explicit RemoveEntriesFromAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveEntriesFromAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveEntriesFromAclResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveEntriesFromAclResponse() = default;
};
class ReplaceBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> targetBandwidthPackageId{};

  ReplaceBandwidthPackageRequest() {}

  explicit ReplaceBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (targetBandwidthPackageId) {
      res["TargetBandwidthPackageId"] = boost::any(*targetBandwidthPackageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("TargetBandwidthPackageId") != m.end() && !m["TargetBandwidthPackageId"].empty()) {
      targetBandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["TargetBandwidthPackageId"]));
    }
  }


  virtual ~ReplaceBandwidthPackageRequest() = default;
};
class ReplaceBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReplaceBandwidthPackageResponseBody() {}

  explicit ReplaceBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReplaceBandwidthPackageResponseBody() = default;
};
class ReplaceBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReplaceBandwidthPackageResponseBody> body{};

  ReplaceBandwidthPackageResponse() {}

  explicit ReplaceBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReplaceBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplaceBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~ReplaceBandwidthPackageResponse() = default;
};
class UpdateAcceleratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> spec{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoUseCoupon{};

  UpdateAcceleratorRequest() {}

  explicit UpdateAcceleratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoUseCoupon) {
      res["AutoUseCoupon"] = boost::any(*autoUseCoupon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoUseCoupon") != m.end() && !m["AutoUseCoupon"].empty()) {
      autoUseCoupon = make_shared<bool>(boost::any_cast<bool>(m["AutoUseCoupon"]));
    }
  }


  virtual ~UpdateAcceleratorRequest() = default;
};
class UpdateAcceleratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAcceleratorResponseBody() {}

  explicit UpdateAcceleratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAcceleratorResponseBody() = default;
};
class UpdateAcceleratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAcceleratorResponseBody> body{};

  UpdateAcceleratorResponse() {}

  explicit UpdateAcceleratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAcceleratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAcceleratorResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAcceleratorResponse() = default;
};
class UpdateAcceleratorConfirmRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> acceleratorId{};

  UpdateAcceleratorConfirmRequest() {}

  explicit UpdateAcceleratorConfirmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
  }


  virtual ~UpdateAcceleratorConfirmRequest() = default;
};
class UpdateAcceleratorConfirmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAcceleratorConfirmResponseBody() {}

  explicit UpdateAcceleratorConfirmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAcceleratorConfirmResponseBody() = default;
};
class UpdateAcceleratorConfirmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAcceleratorConfirmResponseBody> body{};

  UpdateAcceleratorConfirmResponse() {}

  explicit UpdateAcceleratorConfirmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAcceleratorConfirmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAcceleratorConfirmResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAcceleratorConfirmResponse() = default;
};
class UpdateAclAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<string> aclName{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};

  UpdateAclAttributeRequest() {}

  explicit UpdateAclAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (aclName) {
      res["AclName"] = boost::any(*aclName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AclName") != m.end() && !m["AclName"].empty()) {
      aclName = make_shared<string>(boost::any_cast<string>(m["AclName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~UpdateAclAttributeRequest() = default;
};
class UpdateAclAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> aclId{};

  UpdateAclAttributeResponseBody() {}

  explicit UpdateAclAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
  }


  virtual ~UpdateAclAttributeResponseBody() = default;
};
class UpdateAclAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAclAttributeResponseBody> body{};

  UpdateAclAttributeResponse() {}

  explicit UpdateAclAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAclAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAclAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAclAttributeResponse() = default;
};
class UpdateBandwidthPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthType{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoUseCoupon{};

  UpdateBandwidthPackageRequest() {}

  explicit UpdateBandwidthPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthType) {
      res["BandwidthType"] = boost::any(*bandwidthType);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoUseCoupon) {
      res["AutoUseCoupon"] = boost::any(*autoUseCoupon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthType") != m.end() && !m["BandwidthType"].empty()) {
      bandwidthType = make_shared<string>(boost::any_cast<string>(m["BandwidthType"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoUseCoupon") != m.end() && !m["AutoUseCoupon"].empty()) {
      autoUseCoupon = make_shared<bool>(boost::any_cast<bool>(m["AutoUseCoupon"]));
    }
  }


  virtual ~UpdateBandwidthPackageRequest() = default;
};
class UpdateBandwidthPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackage{};
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> name{};

  UpdateBandwidthPackageResponseBody() {}

  explicit UpdateBandwidthPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackage) {
      res["BandwidthPackage"] = boost::any(*bandwidthPackage);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackage") != m.end() && !m["BandwidthPackage"].empty()) {
      bandwidthPackage = make_shared<string>(boost::any_cast<string>(m["BandwidthPackage"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateBandwidthPackageResponseBody() = default;
};
class UpdateBandwidthPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateBandwidthPackageResponseBody> body{};

  UpdateBandwidthPackageResponse() {}

  explicit UpdateBandwidthPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateBandwidthPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBandwidthPackageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBandwidthPackageResponse() = default;
};
class UpdateEndpointGroupRequestEndpointConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<bool> enableClientIPPreservation{};
  shared_ptr<long> weight{};
  shared_ptr<string> endpoint{};

  UpdateEndpointGroupRequestEndpointConfigurations() {}

  explicit UpdateEndpointGroupRequestEndpointConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (enableClientIPPreservation) {
      res["EnableClientIPPreservation"] = boost::any(*enableClientIPPreservation);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("EnableClientIPPreservation") != m.end() && !m["EnableClientIPPreservation"].empty()) {
      enableClientIPPreservation = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservation"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
  }


  virtual ~UpdateEndpointGroupRequestEndpointConfigurations() = default;
};
class UpdateEndpointGroupRequestPortOverrides : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<long> endpointPort{};

  UpdateEndpointGroupRequestPortOverrides() {}

  explicit UpdateEndpointGroupRequestPortOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (endpointPort) {
      res["EndpointPort"] = boost::any(*endpointPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("EndpointPort") != m.end() && !m["EndpointPort"].empty()) {
      endpointPort = make_shared<long>(boost::any_cast<long>(m["EndpointPort"]));
    }
  }


  virtual ~UpdateEndpointGroupRequestPortOverrides() = default;
};
class UpdateEndpointGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> endpointGroupId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> endpointGroupRegion{};
  shared_ptr<long> trafficPercentage{};
  shared_ptr<long> healthCheckIntervalSeconds{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<long> healthCheckPort{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> thresholdCount{};
  shared_ptr<vector<UpdateEndpointGroupRequestEndpointConfigurations>> endpointConfigurations{};
  shared_ptr<string> endpointRequestProtocol{};
  shared_ptr<vector<UpdateEndpointGroupRequestPortOverrides>> portOverrides{};
  shared_ptr<bool> healthCheckEnabled{};

  UpdateEndpointGroupRequest() {}

  explicit UpdateEndpointGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endpointGroupRegion) {
      res["EndpointGroupRegion"] = boost::any(*endpointGroupRegion);
    }
    if (trafficPercentage) {
      res["TrafficPercentage"] = boost::any(*trafficPercentage);
    }
    if (healthCheckIntervalSeconds) {
      res["HealthCheckIntervalSeconds"] = boost::any(*healthCheckIntervalSeconds);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckPort) {
      res["HealthCheckPort"] = boost::any(*healthCheckPort);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (thresholdCount) {
      res["ThresholdCount"] = boost::any(*thresholdCount);
    }
    if (endpointConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointConfigurations"] = boost::any(temp1);
    }
    if (endpointRequestProtocol) {
      res["EndpointRequestProtocol"] = boost::any(*endpointRequestProtocol);
    }
    if (portOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*portOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortOverrides"] = boost::any(temp1);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndpointGroupRegion") != m.end() && !m["EndpointGroupRegion"].empty()) {
      endpointGroupRegion = make_shared<string>(boost::any_cast<string>(m["EndpointGroupRegion"]));
    }
    if (m.find("TrafficPercentage") != m.end() && !m["TrafficPercentage"].empty()) {
      trafficPercentage = make_shared<long>(boost::any_cast<long>(m["TrafficPercentage"]));
    }
    if (m.find("HealthCheckIntervalSeconds") != m.end() && !m["HealthCheckIntervalSeconds"].empty()) {
      healthCheckIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["HealthCheckIntervalSeconds"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckPort") != m.end() && !m["HealthCheckPort"].empty()) {
      healthCheckPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckPort"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("ThresholdCount") != m.end() && !m["ThresholdCount"].empty()) {
      thresholdCount = make_shared<long>(boost::any_cast<long>(m["ThresholdCount"]));
    }
    if (m.find("EndpointConfigurations") != m.end() && !m["EndpointConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointConfigurations"].type()) {
        vector<UpdateEndpointGroupRequestEndpointConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEndpointGroupRequestEndpointConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointConfigurations = make_shared<vector<UpdateEndpointGroupRequestEndpointConfigurations>>(expect1);
      }
    }
    if (m.find("EndpointRequestProtocol") != m.end() && !m["EndpointRequestProtocol"].empty()) {
      endpointRequestProtocol = make_shared<string>(boost::any_cast<string>(m["EndpointRequestProtocol"]));
    }
    if (m.find("PortOverrides") != m.end() && !m["PortOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["PortOverrides"].type()) {
        vector<UpdateEndpointGroupRequestPortOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEndpointGroupRequestPortOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portOverrides = make_shared<vector<UpdateEndpointGroupRequestPortOverrides>>(expect1);
      }
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
  }


  virtual ~UpdateEndpointGroupRequest() = default;
};
class UpdateEndpointGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateEndpointGroupResponseBody() {}

  explicit UpdateEndpointGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEndpointGroupResponseBody() = default;
};
class UpdateEndpointGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEndpointGroupResponseBody> body{};

  UpdateEndpointGroupResponse() {}

  explicit UpdateEndpointGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEndpointGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEndpointGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEndpointGroupResponse() = default;
};
class UpdateEndpointGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> endpointGroupId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};

  UpdateEndpointGroupAttributeRequest() {}

  explicit UpdateEndpointGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateEndpointGroupAttributeRequest() = default;
};
class UpdateEndpointGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateEndpointGroupAttributeResponseBody() {}

  explicit UpdateEndpointGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEndpointGroupAttributeResponseBody() = default;
};
class UpdateEndpointGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEndpointGroupAttributeResponseBody> body{};

  UpdateEndpointGroupAttributeResponse() {}

  explicit UpdateEndpointGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEndpointGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEndpointGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEndpointGroupAttributeResponse() = default;
};
class UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> weight{};
  shared_ptr<string> endpoint{};

  UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations() {}

  explicit UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
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
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
  }


  virtual ~UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations() = default;
};
class UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides : public Darabonba::Model {
public:
  shared_ptr<long> listenerPort{};
  shared_ptr<long> endpointPort{};

  UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides() {}

  explicit UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (endpointPort) {
      res["EndpointPort"] = boost::any(*endpointPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("EndpointPort") != m.end() && !m["EndpointPort"].empty()) {
      endpointPort = make_shared<long>(boost::any_cast<long>(m["EndpointPort"]));
    }
  }


  virtual ~UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides() = default;
};
class UpdateEndpointGroupsRequestEndpointGroupConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupName{};
  shared_ptr<string> endpointGroupDescription{};
  shared_ptr<long> trafficPercentage{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<long> healthCheckIntervalSeconds{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<long> healthCheckPort{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> thresholdCount{};
  shared_ptr<vector<UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations>> endpointConfigurations{};
  shared_ptr<string> endpointRequestProtocol{};
  shared_ptr<vector<UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides>> portOverrides{};
  shared_ptr<bool> enableClientIPPreservationToa{};
  shared_ptr<bool> enableClientIPPreservationProxyProtocol{};
  shared_ptr<string> endpointGroupId{};

  UpdateEndpointGroupsRequestEndpointGroupConfigurations() {}

  explicit UpdateEndpointGroupsRequestEndpointGroupConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupName) {
      res["EndpointGroupName"] = boost::any(*endpointGroupName);
    }
    if (endpointGroupDescription) {
      res["EndpointGroupDescription"] = boost::any(*endpointGroupDescription);
    }
    if (trafficPercentage) {
      res["TrafficPercentage"] = boost::any(*trafficPercentage);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckIntervalSeconds) {
      res["HealthCheckIntervalSeconds"] = boost::any(*healthCheckIntervalSeconds);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckPort) {
      res["HealthCheckPort"] = boost::any(*healthCheckPort);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (thresholdCount) {
      res["ThresholdCount"] = boost::any(*thresholdCount);
    }
    if (endpointConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointConfigurations"] = boost::any(temp1);
    }
    if (endpointRequestProtocol) {
      res["EndpointRequestProtocol"] = boost::any(*endpointRequestProtocol);
    }
    if (portOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*portOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortOverrides"] = boost::any(temp1);
    }
    if (enableClientIPPreservationToa) {
      res["EnableClientIPPreservationToa"] = boost::any(*enableClientIPPreservationToa);
    }
    if (enableClientIPPreservationProxyProtocol) {
      res["EnableClientIPPreservationProxyProtocol"] = boost::any(*enableClientIPPreservationProxyProtocol);
    }
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupName") != m.end() && !m["EndpointGroupName"].empty()) {
      endpointGroupName = make_shared<string>(boost::any_cast<string>(m["EndpointGroupName"]));
    }
    if (m.find("EndpointGroupDescription") != m.end() && !m["EndpointGroupDescription"].empty()) {
      endpointGroupDescription = make_shared<string>(boost::any_cast<string>(m["EndpointGroupDescription"]));
    }
    if (m.find("TrafficPercentage") != m.end() && !m["TrafficPercentage"].empty()) {
      trafficPercentage = make_shared<long>(boost::any_cast<long>(m["TrafficPercentage"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckIntervalSeconds") != m.end() && !m["HealthCheckIntervalSeconds"].empty()) {
      healthCheckIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["HealthCheckIntervalSeconds"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckPort") != m.end() && !m["HealthCheckPort"].empty()) {
      healthCheckPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckPort"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("ThresholdCount") != m.end() && !m["ThresholdCount"].empty()) {
      thresholdCount = make_shared<long>(boost::any_cast<long>(m["ThresholdCount"]));
    }
    if (m.find("EndpointConfigurations") != m.end() && !m["EndpointConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointConfigurations"].type()) {
        vector<UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointConfigurations = make_shared<vector<UpdateEndpointGroupsRequestEndpointGroupConfigurationsEndpointConfigurations>>(expect1);
      }
    }
    if (m.find("EndpointRequestProtocol") != m.end() && !m["EndpointRequestProtocol"].empty()) {
      endpointRequestProtocol = make_shared<string>(boost::any_cast<string>(m["EndpointRequestProtocol"]));
    }
    if (m.find("PortOverrides") != m.end() && !m["PortOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["PortOverrides"].type()) {
        vector<UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portOverrides = make_shared<vector<UpdateEndpointGroupsRequestEndpointGroupConfigurationsPortOverrides>>(expect1);
      }
    }
    if (m.find("EnableClientIPPreservationToa") != m.end() && !m["EnableClientIPPreservationToa"].empty()) {
      enableClientIPPreservationToa = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservationToa"]));
    }
    if (m.find("EnableClientIPPreservationProxyProtocol") != m.end() && !m["EnableClientIPPreservationProxyProtocol"].empty()) {
      enableClientIPPreservationProxyProtocol = make_shared<bool>(boost::any_cast<bool>(m["EnableClientIPPreservationProxyProtocol"]));
    }
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
  }


  virtual ~UpdateEndpointGroupsRequestEndpointGroupConfigurations() = default;
};
class UpdateEndpointGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<UpdateEndpointGroupsRequestEndpointGroupConfigurations>> endpointGroupConfigurations{};
  shared_ptr<string> listenerId{};

  UpdateEndpointGroupsRequest() {}

  explicit UpdateEndpointGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (endpointGroupConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*endpointGroupConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointGroupConfigurations"] = boost::any(temp1);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EndpointGroupConfigurations") != m.end() && !m["EndpointGroupConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointGroupConfigurations"].type()) {
        vector<UpdateEndpointGroupsRequestEndpointGroupConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointGroupConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEndpointGroupsRequestEndpointGroupConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointGroupConfigurations = make_shared<vector<UpdateEndpointGroupsRequestEndpointGroupConfigurations>>(expect1);
      }
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~UpdateEndpointGroupsRequest() = default;
};
class UpdateEndpointGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> endpointGroupIds{};

  UpdateEndpointGroupsResponseBody() {}

  explicit UpdateEndpointGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (endpointGroupIds) {
      res["EndpointGroupIds"] = boost::any(*endpointGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EndpointGroupIds") != m.end() && !m["EndpointGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateEndpointGroupsResponseBody() = default;
};
class UpdateEndpointGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEndpointGroupsResponseBody> body{};

  UpdateEndpointGroupsResponse() {}

  explicit UpdateEndpointGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEndpointGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEndpointGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEndpointGroupsResponse() = default;
};
class UpdateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig() {}

  explicit UpdateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig() = default;
};
class UpdateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  UpdateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig() {}

  explicit UpdateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig() = default;
};
class UpdateForwardingRulesRequestForwardingRulesRuleConditions : public Darabonba::Model {
public:
  shared_ptr<string> ruleConditionType{};
  shared_ptr<UpdateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig> pathConfig{};
  shared_ptr<UpdateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig> hostConfig{};

  UpdateForwardingRulesRequestForwardingRulesRuleConditions() {}

  explicit UpdateForwardingRulesRequestForwardingRulesRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleConditionType) {
      res["RuleConditionType"] = boost::any(*ruleConditionType);
    }
    if (pathConfig) {
      res["PathConfig"] = pathConfig ? boost::any(pathConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostConfig) {
      res["HostConfig"] = hostConfig ? boost::any(hostConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleConditionType") != m.end() && !m["RuleConditionType"].empty()) {
      ruleConditionType = make_shared<string>(boost::any_cast<string>(m["RuleConditionType"]));
    }
    if (m.find("PathConfig") != m.end() && !m["PathConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathConfig"].type()) {
        UpdateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathConfig"]));
        pathConfig = make_shared<UpdateForwardingRulesRequestForwardingRulesRuleConditionsPathConfig>(model1);
      }
    }
    if (m.find("HostConfig") != m.end() && !m["HostConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostConfig"].type()) {
        UpdateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostConfig"]));
        hostConfig = make_shared<UpdateForwardingRulesRequestForwardingRulesRuleConditionsHostConfig>(model1);
      }
    }
  }


  virtual ~UpdateForwardingRulesRequestForwardingRulesRuleConditions() = default;
};
class UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
public:
  shared_ptr<string> endpointGroupId{};

  UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples() {}

  explicit UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointGroupId) {
      res["EndpointGroupId"] = boost::any(*endpointGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointGroupId") != m.end() && !m["EndpointGroupId"].empty()) {
      endpointGroupId = make_shared<string>(boost::any_cast<string>(m["EndpointGroupId"]));
    }
  }


  virtual ~UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples() = default;
};
class UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples{};

  UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig() {}

  explicit UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverGroupTuples) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupTuples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupTuples"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerGroupTuples") != m.end() && !m["ServerGroupTuples"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupTuples"].type()) {
        vector<UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupTuples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupTuples = make_shared<vector<UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfigServerGroupTuples>>(expect1);
      }
    }
  }


  virtual ~UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig() = default;
};
class UpdateForwardingRulesRequestForwardingRulesRuleActions : public Darabonba::Model {
public:
  shared_ptr<long> order{};
  shared_ptr<string> ruleActionType{};
  shared_ptr<UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig> forwardGroupConfig{};

  UpdateForwardingRulesRequestForwardingRulesRuleActions() {}

  explicit UpdateForwardingRulesRequestForwardingRulesRuleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (forwardGroupConfig) {
      res["ForwardGroupConfig"] = forwardGroupConfig ? boost::any(forwardGroupConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("ForwardGroupConfig") != m.end() && !m["ForwardGroupConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ForwardGroupConfig"].type()) {
        UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ForwardGroupConfig"]));
        forwardGroupConfig = make_shared<UpdateForwardingRulesRequestForwardingRulesRuleActionsForwardGroupConfig>(model1);
      }
    }
  }


  virtual ~UpdateForwardingRulesRequestForwardingRulesRuleActions() = default;
};
class UpdateForwardingRulesRequestForwardingRules : public Darabonba::Model {
public:
  shared_ptr<long> priority{};
  shared_ptr<vector<UpdateForwardingRulesRequestForwardingRulesRuleConditions>> ruleConditions{};
  shared_ptr<vector<UpdateForwardingRulesRequestForwardingRulesRuleActions>> ruleActions{};
  shared_ptr<string> forwardingRuleId{};
  shared_ptr<string> forwardingRuleName{};

  UpdateForwardingRulesRequestForwardingRules() {}

  explicit UpdateForwardingRulesRequestForwardingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (ruleConditions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConditions"] = boost::any(temp1);
    }
    if (ruleActions) {
      vector<boost::any> temp1;
      for(auto item1:*ruleActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleActions"] = boost::any(temp1);
    }
    if (forwardingRuleId) {
      res["ForwardingRuleId"] = boost::any(*forwardingRuleId);
    }
    if (forwardingRuleName) {
      res["ForwardingRuleName"] = boost::any(*forwardingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RuleConditions") != m.end() && !m["RuleConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConditions"].type()) {
        vector<UpdateForwardingRulesRequestForwardingRulesRuleConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateForwardingRulesRequestForwardingRulesRuleConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConditions = make_shared<vector<UpdateForwardingRulesRequestForwardingRulesRuleConditions>>(expect1);
      }
    }
    if (m.find("RuleActions") != m.end() && !m["RuleActions"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleActions"].type()) {
        vector<UpdateForwardingRulesRequestForwardingRulesRuleActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateForwardingRulesRequestForwardingRulesRuleActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleActions = make_shared<vector<UpdateForwardingRulesRequestForwardingRulesRuleActions>>(expect1);
      }
    }
    if (m.find("ForwardingRuleId") != m.end() && !m["ForwardingRuleId"].empty()) {
      forwardingRuleId = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleId"]));
    }
    if (m.find("ForwardingRuleName") != m.end() && !m["ForwardingRuleName"].empty()) {
      forwardingRuleName = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleName"]));
    }
  }


  virtual ~UpdateForwardingRulesRequestForwardingRules() = default;
};
class UpdateForwardingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> acceleratorId{};
  shared_ptr<string> listenerId{};
  shared_ptr<vector<UpdateForwardingRulesRequestForwardingRules>> forwardingRules{};

  UpdateForwardingRulesRequest() {}

  explicit UpdateForwardingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (acceleratorId) {
      res["AcceleratorId"] = boost::any(*acceleratorId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (forwardingRules) {
      vector<boost::any> temp1;
      for(auto item1:*forwardingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardingRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AcceleratorId") != m.end() && !m["AcceleratorId"].empty()) {
      acceleratorId = make_shared<string>(boost::any_cast<string>(m["AcceleratorId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ForwardingRules") != m.end() && !m["ForwardingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardingRules"].type()) {
        vector<UpdateForwardingRulesRequestForwardingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateForwardingRulesRequestForwardingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardingRules = make_shared<vector<UpdateForwardingRulesRequestForwardingRules>>(expect1);
      }
    }
  }


  virtual ~UpdateForwardingRulesRequest() = default;
};
class UpdateForwardingRulesResponseBodyForwardingRules : public Darabonba::Model {
public:
  shared_ptr<string> forwardingRuleId{};

  UpdateForwardingRulesResponseBodyForwardingRules() {}

  explicit UpdateForwardingRulesResponseBodyForwardingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardingRuleId) {
      res["ForwardingRuleId"] = boost::any(*forwardingRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardingRuleId") != m.end() && !m["ForwardingRuleId"].empty()) {
      forwardingRuleId = make_shared<string>(boost::any_cast<string>(m["ForwardingRuleId"]));
    }
  }


  virtual ~UpdateForwardingRulesResponseBodyForwardingRules() = default;
};
class UpdateForwardingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateForwardingRulesResponseBodyForwardingRules>> forwardingRules{};
  shared_ptr<string> requestId{};

  UpdateForwardingRulesResponseBody() {}

  explicit UpdateForwardingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardingRules) {
      vector<boost::any> temp1;
      for(auto item1:*forwardingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardingRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardingRules") != m.end() && !m["ForwardingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardingRules"].type()) {
        vector<UpdateForwardingRulesResponseBodyForwardingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateForwardingRulesResponseBodyForwardingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardingRules = make_shared<vector<UpdateForwardingRulesResponseBodyForwardingRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateForwardingRulesResponseBody() = default;
};
class UpdateForwardingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateForwardingRulesResponseBody> body{};

  UpdateForwardingRulesResponse() {}

  explicit UpdateForwardingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateForwardingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateForwardingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateForwardingRulesResponse() = default;
};
class UpdateIpSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ipSetId{};
  shared_ptr<long> bandwidth{};

  UpdateIpSetRequest() {}

  explicit UpdateIpSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ipSetId) {
      res["IpSetId"] = boost::any(*ipSetId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("IpSetId") != m.end() && !m["IpSetId"].empty()) {
      ipSetId = make_shared<string>(boost::any_cast<string>(m["IpSetId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
  }


  virtual ~UpdateIpSetRequest() = default;
};
class UpdateIpSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIpSetResponseBody() {}

  explicit UpdateIpSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIpSetResponseBody() = default;
};
class UpdateIpSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIpSetResponseBody> body{};

  UpdateIpSetResponse() {}

  explicit UpdateIpSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIpSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIpSetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIpSetResponse() = default;
};
class UpdateIpSetsRequestIpSets : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> ipSetId{};

  UpdateIpSetsRequestIpSets() {}

  explicit UpdateIpSetsRequestIpSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (ipSetId) {
      res["IpSetId"] = boost::any(*ipSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("IpSetId") != m.end() && !m["IpSetId"].empty()) {
      ipSetId = make_shared<string>(boost::any_cast<string>(m["IpSetId"]));
    }
  }


  virtual ~UpdateIpSetsRequestIpSets() = default;
};
class UpdateIpSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<UpdateIpSetsRequestIpSets>> ipSets{};

  UpdateIpSetsRequest() {}

  explicit UpdateIpSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ipSets) {
      vector<boost::any> temp1;
      for(auto item1:*ipSets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpSets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IpSets") != m.end() && !m["IpSets"].empty()) {
      if (typeid(vector<boost::any>) == m["IpSets"].type()) {
        vector<UpdateIpSetsRequestIpSets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpSets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateIpSetsRequestIpSets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipSets = make_shared<vector<UpdateIpSetsRequestIpSets>>(expect1);
      }
    }
  }


  virtual ~UpdateIpSetsRequest() = default;
};
class UpdateIpSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIpSetsResponseBody() {}

  explicit UpdateIpSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIpSetsResponseBody() = default;
};
class UpdateIpSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIpSetsResponseBody> body{};

  UpdateIpSetsResponse() {}

  explicit UpdateIpSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIpSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIpSetsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIpSetsResponse() = default;
};
class UpdateListenerRequestPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> fromPort{};
  shared_ptr<long> toPort{};

  UpdateListenerRequestPortRanges() {}

  explicit UpdateListenerRequestPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromPort) {
      res["FromPort"] = boost::any(*fromPort);
    }
    if (toPort) {
      res["ToPort"] = boost::any(*toPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromPort") != m.end() && !m["FromPort"].empty()) {
      fromPort = make_shared<long>(boost::any_cast<long>(m["FromPort"]));
    }
    if (m.find("ToPort") != m.end() && !m["ToPort"].empty()) {
      toPort = make_shared<long>(boost::any_cast<long>(m["ToPort"]));
    }
  }


  virtual ~UpdateListenerRequestPortRanges() = default;
};
class UpdateListenerRequestCertificates : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  UpdateListenerRequestCertificates() {}

  explicit UpdateListenerRequestCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateListenerRequestCertificates() = default;
};
class UpdateListenerRequestBackendPorts : public Darabonba::Model {
public:
  shared_ptr<long> fromPort{};
  shared_ptr<long> toPort{};

  UpdateListenerRequestBackendPorts() {}

  explicit UpdateListenerRequestBackendPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromPort) {
      res["FromPort"] = boost::any(*fromPort);
    }
    if (toPort) {
      res["ToPort"] = boost::any(*toPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromPort") != m.end() && !m["FromPort"].empty()) {
      fromPort = make_shared<long>(boost::any_cast<long>(m["FromPort"]));
    }
    if (m.find("ToPort") != m.end() && !m["ToPort"].empty()) {
      toPort = make_shared<long>(boost::any_cast<long>(m["ToPort"]));
    }
  }


  virtual ~UpdateListenerRequestBackendPorts() = default;
};
class UpdateListenerRequestXForwardedForConfig : public Darabonba::Model {
public:
  shared_ptr<bool> XForwardedForGaIdEnabled{};
  shared_ptr<bool> XForwardedForProtoEnabled{};
  shared_ptr<bool> XForwardedForPortEnabled{};
  shared_ptr<bool> XRealIpEnabled{};
  shared_ptr<bool> XForwardedForGaApEnabled{};

  UpdateListenerRequestXForwardedForConfig() {}

  explicit UpdateListenerRequestXForwardedForConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (XForwardedForGaIdEnabled) {
      res["XForwardedForGaIdEnabled"] = boost::any(*XForwardedForGaIdEnabled);
    }
    if (XForwardedForProtoEnabled) {
      res["XForwardedForProtoEnabled"] = boost::any(*XForwardedForProtoEnabled);
    }
    if (XForwardedForPortEnabled) {
      res["XForwardedForPortEnabled"] = boost::any(*XForwardedForPortEnabled);
    }
    if (XRealIpEnabled) {
      res["XRealIpEnabled"] = boost::any(*XRealIpEnabled);
    }
    if (XForwardedForGaApEnabled) {
      res["XForwardedForGaApEnabled"] = boost::any(*XForwardedForGaApEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("XForwardedForGaIdEnabled") != m.end() && !m["XForwardedForGaIdEnabled"].empty()) {
      XForwardedForGaIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaIdEnabled"]));
    }
    if (m.find("XForwardedForProtoEnabled") != m.end() && !m["XForwardedForProtoEnabled"].empty()) {
      XForwardedForProtoEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForProtoEnabled"]));
    }
    if (m.find("XForwardedForPortEnabled") != m.end() && !m["XForwardedForPortEnabled"].empty()) {
      XForwardedForPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForPortEnabled"]));
    }
    if (m.find("XRealIpEnabled") != m.end() && !m["XRealIpEnabled"].empty()) {
      XRealIpEnabled = make_shared<bool>(boost::any_cast<bool>(m["XRealIpEnabled"]));
    }
    if (m.find("XForwardedForGaApEnabled") != m.end() && !m["XForwardedForGaApEnabled"].empty()) {
      XForwardedForGaApEnabled = make_shared<bool>(boost::any_cast<bool>(m["XForwardedForGaApEnabled"]));
    }
  }


  virtual ~UpdateListenerRequestXForwardedForConfig() = default;
};
class UpdateListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> clientAffinity{};
  shared_ptr<string> protocol{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> proxyProtocol{};
  shared_ptr<vector<UpdateListenerRequestPortRanges>> portRanges{};
  shared_ptr<vector<UpdateListenerRequestCertificates>> certificates{};
  shared_ptr<vector<UpdateListenerRequestBackendPorts>> backendPorts{};
  shared_ptr<UpdateListenerRequestXForwardedForConfig> XForwardedForConfig{};
  shared_ptr<string> securityPolicyId{};

  UpdateListenerRequest() {}

  explicit UpdateListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (clientAffinity) {
      res["ClientAffinity"] = boost::any(*clientAffinity);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (proxyProtocol) {
      res["ProxyProtocol"] = boost::any(*proxyProtocol);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (backendPorts) {
      vector<boost::any> temp1;
      for(auto item1:*backendPorts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendPorts"] = boost::any(temp1);
    }
    if (XForwardedForConfig) {
      res["XForwardedForConfig"] = XForwardedForConfig ? boost::any(XForwardedForConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ClientAffinity") != m.end() && !m["ClientAffinity"].empty()) {
      clientAffinity = make_shared<string>(boost::any_cast<string>(m["ClientAffinity"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ProxyProtocol") != m.end() && !m["ProxyProtocol"].empty()) {
      proxyProtocol = make_shared<string>(boost::any_cast<string>(m["ProxyProtocol"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<UpdateListenerRequestPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateListenerRequestPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<UpdateListenerRequestPortRanges>>(expect1);
      }
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<UpdateListenerRequestCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateListenerRequestCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<UpdateListenerRequestCertificates>>(expect1);
      }
    }
    if (m.find("BackendPorts") != m.end() && !m["BackendPorts"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendPorts"].type()) {
        vector<UpdateListenerRequestBackendPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendPorts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateListenerRequestBackendPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendPorts = make_shared<vector<UpdateListenerRequestBackendPorts>>(expect1);
      }
    }
    if (m.find("XForwardedForConfig") != m.end() && !m["XForwardedForConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["XForwardedForConfig"].type()) {
        UpdateListenerRequestXForwardedForConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XForwardedForConfig"]));
        XForwardedForConfig = make_shared<UpdateListenerRequestXForwardedForConfig>(model1);
      }
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~UpdateListenerRequest() = default;
};
class UpdateListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateListenerResponseBody() {}

  explicit UpdateListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateListenerResponseBody() = default;
};
class UpdateListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateListenerResponseBody> body{};

  UpdateListenerResponse() {}

  explicit UpdateListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateListenerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateListenerResponse() = default;
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
  AddEntriesToAclResponse addEntriesToAclWithOptions(shared_ptr<AddEntriesToAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEntriesToAclResponse addEntriesToAcl(shared_ptr<AddEntriesToAclRequest> request);
  AssociateAclsWithListenerResponse associateAclsWithListenerWithOptions(shared_ptr<AssociateAclsWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateAclsWithListenerResponse associateAclsWithListener(shared_ptr<AssociateAclsWithListenerRequest> request);
  AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request);
  AttachDdosToAcceleratorResponse attachDdosToAcceleratorWithOptions(shared_ptr<AttachDdosToAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachDdosToAcceleratorResponse attachDdosToAccelerator(shared_ptr<AttachDdosToAcceleratorRequest> request);
  AttachLogStoreToEndpointGroupResponse attachLogStoreToEndpointGroupWithOptions(shared_ptr<AttachLogStoreToEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachLogStoreToEndpointGroupResponse attachLogStoreToEndpointGroup(shared_ptr<AttachLogStoreToEndpointGroupRequest> request);
  BandwidthPackageAddAcceleratorResponse bandwidthPackageAddAcceleratorWithOptions(shared_ptr<BandwidthPackageAddAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BandwidthPackageAddAcceleratorResponse bandwidthPackageAddAccelerator(shared_ptr<BandwidthPackageAddAcceleratorRequest> request);
  BandwidthPackageRemoveAcceleratorResponse bandwidthPackageRemoveAcceleratorWithOptions(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BandwidthPackageRemoveAcceleratorResponse bandwidthPackageRemoveAccelerator(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request);
  ConfigEndpointProbeResponse configEndpointProbeWithOptions(shared_ptr<ConfigEndpointProbeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigEndpointProbeResponse configEndpointProbe(shared_ptr<ConfigEndpointProbeRequest> request);
  CreateAcceleratorResponse createAcceleratorWithOptions(shared_ptr<CreateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAcceleratorResponse createAccelerator(shared_ptr<CreateAcceleratorRequest> request);
  CreateAclResponse createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAclResponse createAcl(shared_ptr<CreateAclRequest> request);
  CreateBandwidthPackageResponse createBandwidthPackageWithOptions(shared_ptr<CreateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBandwidthPackageResponse createBandwidthPackage(shared_ptr<CreateBandwidthPackageRequest> request);
  CreateEndpointGroupResponse createEndpointGroupWithOptions(shared_ptr<CreateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEndpointGroupResponse createEndpointGroup(shared_ptr<CreateEndpointGroupRequest> request);
  CreateEndpointGroupsResponse createEndpointGroupsWithOptions(shared_ptr<CreateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEndpointGroupsResponse createEndpointGroups(shared_ptr<CreateEndpointGroupsRequest> request);
  CreateForwardingRulesResponse createForwardingRulesWithOptions(shared_ptr<CreateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateForwardingRulesResponse createForwardingRules(shared_ptr<CreateForwardingRulesRequest> request);
  CreateIpSetsResponse createIpSetsWithOptions(shared_ptr<CreateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIpSetsResponse createIpSets(shared_ptr<CreateIpSetsRequest> request);
  CreateListenerResponse createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateListenerResponse createListener(shared_ptr<CreateListenerRequest> request);
  CreateSpareIpsResponse createSpareIpsWithOptions(shared_ptr<CreateSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSpareIpsResponse createSpareIps(shared_ptr<CreateSpareIpsRequest> request);
  DeleteAcceleratorResponse deleteAcceleratorWithOptions(shared_ptr<DeleteAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAcceleratorResponse deleteAccelerator(shared_ptr<DeleteAcceleratorRequest> request);
  DeleteAclResponse deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAclResponse deleteAcl(shared_ptr<DeleteAclRequest> request);
  DeleteBandwidthPackageResponse deleteBandwidthPackageWithOptions(shared_ptr<DeleteBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBandwidthPackageResponse deleteBandwidthPackage(shared_ptr<DeleteBandwidthPackageRequest> request);
  DeleteEndpointGroupResponse deleteEndpointGroupWithOptions(shared_ptr<DeleteEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEndpointGroupResponse deleteEndpointGroup(shared_ptr<DeleteEndpointGroupRequest> request);
  DeleteEndpointGroupsResponse deleteEndpointGroupsWithOptions(shared_ptr<DeleteEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEndpointGroupsResponse deleteEndpointGroups(shared_ptr<DeleteEndpointGroupsRequest> request);
  DeleteForwardingRulesResponse deleteForwardingRulesWithOptions(shared_ptr<DeleteForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteForwardingRulesResponse deleteForwardingRules(shared_ptr<DeleteForwardingRulesRequest> request);
  DeleteIpSetResponse deleteIpSetWithOptions(shared_ptr<DeleteIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpSetResponse deleteIpSet(shared_ptr<DeleteIpSetRequest> request);
  DeleteIpSetsResponse deleteIpSetsWithOptions(shared_ptr<DeleteIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpSetsResponse deleteIpSets(shared_ptr<DeleteIpSetsRequest> request);
  DeleteListenerResponse deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteListenerResponse deleteListener(shared_ptr<DeleteListenerRequest> request);
  DeleteSpareIpsResponse deleteSpareIpsWithOptions(shared_ptr<DeleteSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSpareIpsResponse deleteSpareIps(shared_ptr<DeleteSpareIpsRequest> request);
  DescribeAcceleratorResponse describeAcceleratorWithOptions(shared_ptr<DescribeAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAcceleratorResponse describeAccelerator(shared_ptr<DescribeAcceleratorRequest> request);
  DescribeBandwidthPackageResponse describeBandwidthPackageWithOptions(shared_ptr<DescribeBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBandwidthPackageResponse describeBandwidthPackage(shared_ptr<DescribeBandwidthPackageRequest> request);
  DescribeEndpointGroupResponse describeEndpointGroupWithOptions(shared_ptr<DescribeEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEndpointGroupResponse describeEndpointGroup(shared_ptr<DescribeEndpointGroupRequest> request);
  DescribeIpSetResponse describeIpSetWithOptions(shared_ptr<DescribeIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpSetResponse describeIpSet(shared_ptr<DescribeIpSetRequest> request);
  DescribeListenerResponse describeListenerWithOptions(shared_ptr<DescribeListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeListenerResponse describeListener(shared_ptr<DescribeListenerRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DetachDdosFromAcceleratorResponse detachDdosFromAcceleratorWithOptions(shared_ptr<DetachDdosFromAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachDdosFromAcceleratorResponse detachDdosFromAccelerator(shared_ptr<DetachDdosFromAcceleratorRequest> request);
  DetachLogStoreFromEndpointGroupResponse detachLogStoreFromEndpointGroupWithOptions(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachLogStoreFromEndpointGroupResponse detachLogStoreFromEndpointGroup(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request);
  DissociateAclsFromListenerResponse dissociateAclsFromListenerWithOptions(shared_ptr<DissociateAclsFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateAclsFromListenerResponse dissociateAclsFromListener(shared_ptr<DissociateAclsFromListenerRequest> request);
  DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListenerWithOptions(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListener(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request);
  GetAclResponse getAclWithOptions(shared_ptr<GetAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAclResponse getAcl(shared_ptr<GetAclRequest> request);
  GetHealthStatusResponse getHealthStatusWithOptions(shared_ptr<GetHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHealthStatusResponse getHealthStatus(shared_ptr<GetHealthStatusRequest> request);
  GetSpareIpResponse getSpareIpWithOptions(shared_ptr<GetSpareIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSpareIpResponse getSpareIp(shared_ptr<GetSpareIpRequest> request);
  ListAccelerateAreasResponse listAccelerateAreasWithOptions(shared_ptr<ListAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccelerateAreasResponse listAccelerateAreas(shared_ptr<ListAccelerateAreasRequest> request);
  ListAcceleratorsResponse listAcceleratorsWithOptions(shared_ptr<ListAcceleratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAcceleratorsResponse listAccelerators(shared_ptr<ListAcceleratorsRequest> request);
  ListAclsResponse listAclsWithOptions(shared_ptr<ListAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAclsResponse listAcls(shared_ptr<ListAclsRequest> request);
  ListAvailableAccelerateAreasResponse listAvailableAccelerateAreasWithOptions(shared_ptr<ListAvailableAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableAccelerateAreasResponse listAvailableAccelerateAreas(shared_ptr<ListAvailableAccelerateAreasRequest> request);
  ListAvailableBusiRegionsResponse listAvailableBusiRegionsWithOptions(shared_ptr<ListAvailableBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableBusiRegionsResponse listAvailableBusiRegions(shared_ptr<ListAvailableBusiRegionsRequest> request);
  ListBandwidthackagesResponse listBandwidthackagesWithOptions(shared_ptr<ListBandwidthackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBandwidthackagesResponse listBandwidthackages(shared_ptr<ListBandwidthackagesRequest> request);
  ListBandwidthPackagesResponse listBandwidthPackagesWithOptions(shared_ptr<ListBandwidthPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBandwidthPackagesResponse listBandwidthPackages(shared_ptr<ListBandwidthPackagesRequest> request);
  ListBusiRegionsResponse listBusiRegionsWithOptions(shared_ptr<ListBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBusiRegionsResponse listBusiRegions(shared_ptr<ListBusiRegionsRequest> request);
  ListEndpointGroupsResponse listEndpointGroupsWithOptions(shared_ptr<ListEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEndpointGroupsResponse listEndpointGroups(shared_ptr<ListEndpointGroupsRequest> request);
  ListForwardingRulesResponse listForwardingRulesWithOptions(shared_ptr<ListForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListForwardingRulesResponse listForwardingRules(shared_ptr<ListForwardingRulesRequest> request);
  ListIpSetsResponse listIpSetsWithOptions(shared_ptr<ListIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpSetsResponse listIpSets(shared_ptr<ListIpSetsRequest> request);
  ListListenerCertificatesResponse listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenerCertificatesResponse listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request);
  ListListenersResponse listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersResponse listListeners(shared_ptr<ListListenersRequest> request);
  ListSpareIpsResponse listSpareIpsWithOptions(shared_ptr<ListSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSpareIpsResponse listSpareIps(shared_ptr<ListSpareIpsRequest> request);
  ListSystemSecurityPoliciesResponse listSystemSecurityPoliciesWithOptions(shared_ptr<ListSystemSecurityPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSystemSecurityPoliciesResponse listSystemSecurityPolicies(shared_ptr<ListSystemSecurityPoliciesRequest> request);
  RemoveEntriesFromAclResponse removeEntriesFromAclWithOptions(shared_ptr<RemoveEntriesFromAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveEntriesFromAclResponse removeEntriesFromAcl(shared_ptr<RemoveEntriesFromAclRequest> request);
  ReplaceBandwidthPackageResponse replaceBandwidthPackageWithOptions(shared_ptr<ReplaceBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceBandwidthPackageResponse replaceBandwidthPackage(shared_ptr<ReplaceBandwidthPackageRequest> request);
  UpdateAcceleratorResponse updateAcceleratorWithOptions(shared_ptr<UpdateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAcceleratorResponse updateAccelerator(shared_ptr<UpdateAcceleratorRequest> request);
  UpdateAcceleratorConfirmResponse updateAcceleratorConfirmWithOptions(shared_ptr<UpdateAcceleratorConfirmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAcceleratorConfirmResponse updateAcceleratorConfirm(shared_ptr<UpdateAcceleratorConfirmRequest> request);
  UpdateAclAttributeResponse updateAclAttributeWithOptions(shared_ptr<UpdateAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAclAttributeResponse updateAclAttribute(shared_ptr<UpdateAclAttributeRequest> request);
  UpdateBandwidthPackageResponse updateBandwidthPackageWithOptions(shared_ptr<UpdateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBandwidthPackageResponse updateBandwidthPackage(shared_ptr<UpdateBandwidthPackageRequest> request);
  UpdateEndpointGroupResponse updateEndpointGroupWithOptions(shared_ptr<UpdateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEndpointGroupResponse updateEndpointGroup(shared_ptr<UpdateEndpointGroupRequest> request);
  UpdateEndpointGroupAttributeResponse updateEndpointGroupAttributeWithOptions(shared_ptr<UpdateEndpointGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEndpointGroupAttributeResponse updateEndpointGroupAttribute(shared_ptr<UpdateEndpointGroupAttributeRequest> request);
  UpdateEndpointGroupsResponse updateEndpointGroupsWithOptions(shared_ptr<UpdateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEndpointGroupsResponse updateEndpointGroups(shared_ptr<UpdateEndpointGroupsRequest> request);
  UpdateForwardingRulesResponse updateForwardingRulesWithOptions(shared_ptr<UpdateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateForwardingRulesResponse updateForwardingRules(shared_ptr<UpdateForwardingRulesRequest> request);
  UpdateIpSetResponse updateIpSetWithOptions(shared_ptr<UpdateIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIpSetResponse updateIpSet(shared_ptr<UpdateIpSetRequest> request);
  UpdateIpSetsResponse updateIpSetsWithOptions(shared_ptr<UpdateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIpSetsResponse updateIpSets(shared_ptr<UpdateIpSetsRequest> request);
  UpdateListenerResponse updateListenerWithOptions(shared_ptr<UpdateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateListenerResponse updateListener(shared_ptr<UpdateListenerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ga20191120

#endif
