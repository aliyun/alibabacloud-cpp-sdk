// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_METASPACE20220307_H_
#define ALIBABACLOUD_METASPACE20220307_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Metaspace20220307 {
class ApplyCoordinationWithCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> coordinationCode{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  ApplyCoordinationWithCodeRequest() {}

  explicit ApplyCoordinationWithCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinationCode) {
      res["CoordinationCode"] = boost::any(*coordinationCode);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoordinationCode") != m.end() && !m["CoordinationCode"].empty()) {
      coordinationCode = make_shared<string>(boost::any_cast<string>(m["CoordinationCode"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ApplyCoordinationWithCodeRequest() = default;
};
class ApplyCoordinationWithCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> coId{};
  shared_ptr<string> coordinateStatus{};
  shared_ptr<string> coordinateTicket{};
  shared_ptr<long> coordinatorAliUid{};
  shared_ptr<string> coordinatorUserId{};
  shared_ptr<long> ownerAliUid{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};

  ApplyCoordinationWithCodeResponseBodyData() {}

  explicit ApplyCoordinationWithCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coId) {
      res["CoId"] = boost::any(*coId);
    }
    if (coordinateStatus) {
      res["CoordinateStatus"] = boost::any(*coordinateStatus);
    }
    if (coordinateTicket) {
      res["CoordinateTicket"] = boost::any(*coordinateTicket);
    }
    if (coordinatorAliUid) {
      res["CoordinatorAliUid"] = boost::any(*coordinatorAliUid);
    }
    if (coordinatorUserId) {
      res["CoordinatorUserId"] = boost::any(*coordinatorUserId);
    }
    if (ownerAliUid) {
      res["OwnerAliUid"] = boost::any(*ownerAliUid);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoId") != m.end() && !m["CoId"].empty()) {
      coId = make_shared<string>(boost::any_cast<string>(m["CoId"]));
    }
    if (m.find("CoordinateStatus") != m.end() && !m["CoordinateStatus"].empty()) {
      coordinateStatus = make_shared<string>(boost::any_cast<string>(m["CoordinateStatus"]));
    }
    if (m.find("CoordinateTicket") != m.end() && !m["CoordinateTicket"].empty()) {
      coordinateTicket = make_shared<string>(boost::any_cast<string>(m["CoordinateTicket"]));
    }
    if (m.find("CoordinatorAliUid") != m.end() && !m["CoordinatorAliUid"].empty()) {
      coordinatorAliUid = make_shared<long>(boost::any_cast<long>(m["CoordinatorAliUid"]));
    }
    if (m.find("CoordinatorUserId") != m.end() && !m["CoordinatorUserId"].empty()) {
      coordinatorUserId = make_shared<string>(boost::any_cast<string>(m["CoordinatorUserId"]));
    }
    if (m.find("OwnerAliUid") != m.end() && !m["OwnerAliUid"].empty()) {
      ownerAliUid = make_shared<long>(boost::any_cast<long>(m["OwnerAliUid"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ApplyCoordinationWithCodeResponseBodyData() = default;
};
class ApplyCoordinationWithCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<ApplyCoordinationWithCodeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ApplyCoordinationWithCodeResponseBody() {}

  explicit ApplyCoordinationWithCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ApplyCoordinationWithCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ApplyCoordinationWithCodeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ApplyCoordinationWithCodeResponseBody() = default;
};
class ApplyCoordinationWithCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyCoordinationWithCodeResponseBody> body{};

  ApplyCoordinationWithCodeResponse() {}

  explicit ApplyCoordinationWithCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyCoordinationWithCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyCoordinationWithCodeResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyCoordinationWithCodeResponse() = default;
};
class EndAllCoordinationByOwnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sessionId{};

  EndAllCoordinationByOwnerRequest() {}

  explicit EndAllCoordinationByOwnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~EndAllCoordinationByOwnerRequest() = default;
};
class EndAllCoordinationByOwnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EndAllCoordinationByOwnerResponseBody() {}

  explicit EndAllCoordinationByOwnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EndAllCoordinationByOwnerResponseBody() = default;
};
class EndAllCoordinationByOwnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EndAllCoordinationByOwnerResponseBody> body{};

  EndAllCoordinationByOwnerResponse() {}

  explicit EndAllCoordinationByOwnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EndAllCoordinationByOwnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EndAllCoordinationByOwnerResponseBody>(model1);
      }
    }
  }


  virtual ~EndAllCoordinationByOwnerResponse() = default;
};
class GenerateCoordinationCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sessionId{};

  GenerateCoordinationCodeRequest() {}

  explicit GenerateCoordinationCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~GenerateCoordinationCodeRequest() = default;
};
class GenerateCoordinationCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> coordinationCode{};
  shared_ptr<string> requestId{};

  GenerateCoordinationCodeResponseBody() {}

  explicit GenerateCoordinationCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinationCode) {
      res["CoordinationCode"] = boost::any(*coordinationCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoordinationCode") != m.end() && !m["CoordinationCode"].empty()) {
      coordinationCode = make_shared<string>(boost::any_cast<string>(m["CoordinationCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateCoordinationCodeResponseBody() = default;
};
class GenerateCoordinationCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateCoordinationCodeResponseBody> body{};

  GenerateCoordinationCodeResponse() {}

  explicit GenerateCoordinationCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateCoordinationCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateCoordinationCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateCoordinationCodeResponse() = default;
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
  ApplyCoordinationWithCodeResponse applyCoordinationWithCodeWithOptions(shared_ptr<ApplyCoordinationWithCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyCoordinationWithCodeResponse applyCoordinationWithCode(shared_ptr<ApplyCoordinationWithCodeRequest> request);
  EndAllCoordinationByOwnerResponse endAllCoordinationByOwnerWithOptions(shared_ptr<EndAllCoordinationByOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EndAllCoordinationByOwnerResponse endAllCoordinationByOwner(shared_ptr<EndAllCoordinationByOwnerRequest> request);
  GenerateCoordinationCodeResponse generateCoordinationCodeWithOptions(shared_ptr<GenerateCoordinationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateCoordinationCodeResponse generateCoordinationCode(shared_ptr<GenerateCoordinationCodeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Metaspace20220307

#endif
