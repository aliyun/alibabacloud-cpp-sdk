// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAS20180813_H_
#define ALIBABACLOUD_CAS20180813_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cas20180813 {
class ListPCAInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> showSize{};
  shared_ptr<string> type{};

  ListPCAInstanceRequest() {}

  explicit ListPCAInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListPCAInstanceRequest() = default;
};
class ListPCAInstanceResponseBodyPCAInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> caIdentifier{};
  shared_ptr<long> certCount{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceUuid{};
  shared_ptr<long> issuedCertCount{};
  shared_ptr<bool> relateStatus{};
  shared_ptr<long> shareFlag{};
  shared_ptr<string> trial{};

  ListPCAInstanceResponseBodyPCAInstanceList() {}

  explicit ListPCAInstanceResponseBodyPCAInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (caIdentifier) {
      res["CaIdentifier"] = boost::any(*caIdentifier);
    }
    if (certCount) {
      res["CertCount"] = boost::any(*certCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceUuid) {
      res["InstanceUuid"] = boost::any(*instanceUuid);
    }
    if (issuedCertCount) {
      res["IssuedCertCount"] = boost::any(*issuedCertCount);
    }
    if (relateStatus) {
      res["RelateStatus"] = boost::any(*relateStatus);
    }
    if (shareFlag) {
      res["ShareFlag"] = boost::any(*shareFlag);
    }
    if (trial) {
      res["Trial"] = boost::any(*trial);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("CaIdentifier") != m.end() && !m["CaIdentifier"].empty()) {
      caIdentifier = make_shared<string>(boost::any_cast<string>(m["CaIdentifier"]));
    }
    if (m.find("CertCount") != m.end() && !m["CertCount"].empty()) {
      certCount = make_shared<long>(boost::any_cast<long>(m["CertCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceUuid") != m.end() && !m["InstanceUuid"].empty()) {
      instanceUuid = make_shared<string>(boost::any_cast<string>(m["InstanceUuid"]));
    }
    if (m.find("IssuedCertCount") != m.end() && !m["IssuedCertCount"].empty()) {
      issuedCertCount = make_shared<long>(boost::any_cast<long>(m["IssuedCertCount"]));
    }
    if (m.find("RelateStatus") != m.end() && !m["RelateStatus"].empty()) {
      relateStatus = make_shared<bool>(boost::any_cast<bool>(m["RelateStatus"]));
    }
    if (m.find("ShareFlag") != m.end() && !m["ShareFlag"].empty()) {
      shareFlag = make_shared<long>(boost::any_cast<long>(m["ShareFlag"]));
    }
    if (m.find("Trial") != m.end() && !m["Trial"].empty()) {
      trial = make_shared<string>(boost::any_cast<string>(m["Trial"]));
    }
  }


  virtual ~ListPCAInstanceResponseBodyPCAInstanceList() = default;
};
class ListPCAInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListPCAInstanceResponseBodyPCAInstanceList>> PCAInstanceList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListPCAInstanceResponseBody() {}

  explicit ListPCAInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (PCAInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*PCAInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PCAInstanceList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PCAInstanceList") != m.end() && !m["PCAInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["PCAInstanceList"].type()) {
        vector<ListPCAInstanceResponseBodyPCAInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PCAInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPCAInstanceResponseBodyPCAInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        PCAInstanceList = make_shared<vector<ListPCAInstanceResponseBodyPCAInstanceList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPCAInstanceResponseBody() = default;
};
class ListPCAInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPCAInstanceResponseBody> body{};

  ListPCAInstanceResponse() {}

  explicit ListPCAInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPCAInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPCAInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListPCAInstanceResponse() = default;
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
  ListPCAInstanceResponse listPCAInstanceWithOptions(shared_ptr<ListPCAInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPCAInstanceResponse listPCAInstance(shared_ptr<ListPCAInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cas20180813

#endif
