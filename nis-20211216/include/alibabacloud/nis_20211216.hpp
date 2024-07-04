// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NIS20211216_H_
#define ALIBABACLOUD_NIS20211216_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Nis20211216 {
class CreateAndAnalyzeNetworkPathRequest : public Darabonba::Model {
public:
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceIpAddress{};
  shared_ptr<long> sourcePort{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetIpAddress{};
  shared_ptr<long> targetPort{};
  shared_ptr<string> targetType{};

  CreateAndAnalyzeNetworkPathRequest() {}

  explicit CreateAndAnalyzeNetworkPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceIpAddress) {
      res["SourceIpAddress"] = boost::any(*sourceIpAddress);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetIpAddress) {
      res["TargetIpAddress"] = boost::any(*targetIpAddress);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceIpAddress") != m.end() && !m["SourceIpAddress"].empty()) {
      sourceIpAddress = make_shared<string>(boost::any_cast<string>(m["SourceIpAddress"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetIpAddress") != m.end() && !m["TargetIpAddress"].empty()) {
      targetIpAddress = make_shared<string>(boost::any_cast<string>(m["TargetIpAddress"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<long>(boost::any_cast<long>(m["TargetPort"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateAndAnalyzeNetworkPathRequest() = default;
};
class CreateAndAnalyzeNetworkPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> networkReachableAnalysisId{};
  shared_ptr<string> protocol{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceIpAddress{};
  shared_ptr<string> sourcePort{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetIpAddress{};
  shared_ptr<string> targetPort{};
  shared_ptr<string> targetType{};

  CreateAndAnalyzeNetworkPathResponseBody() {}

  explicit CreateAndAnalyzeNetworkPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkReachableAnalysisId) {
      res["NetworkReachableAnalysisId"] = boost::any(*networkReachableAnalysisId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceIpAddress) {
      res["SourceIpAddress"] = boost::any(*sourceIpAddress);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetIpAddress) {
      res["TargetIpAddress"] = boost::any(*targetIpAddress);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkReachableAnalysisId") != m.end() && !m["NetworkReachableAnalysisId"].empty()) {
      networkReachableAnalysisId = make_shared<string>(boost::any_cast<string>(m["NetworkReachableAnalysisId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceIpAddress") != m.end() && !m["SourceIpAddress"].empty()) {
      sourceIpAddress = make_shared<string>(boost::any_cast<string>(m["SourceIpAddress"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<string>(boost::any_cast<string>(m["SourcePort"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetIpAddress") != m.end() && !m["TargetIpAddress"].empty()) {
      targetIpAddress = make_shared<string>(boost::any_cast<string>(m["TargetIpAddress"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<string>(boost::any_cast<string>(m["TargetPort"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateAndAnalyzeNetworkPathResponseBody() = default;
};
class CreateAndAnalyzeNetworkPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAndAnalyzeNetworkPathResponseBody> body{};

  CreateAndAnalyzeNetworkPathResponse() {}

  explicit CreateAndAnalyzeNetworkPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAndAnalyzeNetworkPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAndAnalyzeNetworkPathResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAndAnalyzeNetworkPathResponse() = default;
};
class CreateNetworkPathRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateNetworkPathRequestTag() {}

  explicit CreateNetworkPathRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateNetworkPathRequestTag() = default;
};
class CreateNetworkPathRequest : public Darabonba::Model {
public:
  shared_ptr<string> networkPathDescription{};
  shared_ptr<string> networkPathName{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceIpAddress{};
  shared_ptr<long> sourcePort{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<CreateNetworkPathRequestTag>> tag{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetIpAddress{};
  shared_ptr<long> targetPort{};
  shared_ptr<string> targetType{};

  CreateNetworkPathRequest() {}

  explicit CreateNetworkPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPathDescription) {
      res["NetworkPathDescription"] = boost::any(*networkPathDescription);
    }
    if (networkPathName) {
      res["NetworkPathName"] = boost::any(*networkPathName);
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
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceIpAddress) {
      res["SourceIpAddress"] = boost::any(*sourceIpAddress);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetIpAddress) {
      res["TargetIpAddress"] = boost::any(*targetIpAddress);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkPathDescription") != m.end() && !m["NetworkPathDescription"].empty()) {
      networkPathDescription = make_shared<string>(boost::any_cast<string>(m["NetworkPathDescription"]));
    }
    if (m.find("NetworkPathName") != m.end() && !m["NetworkPathName"].empty()) {
      networkPathName = make_shared<string>(boost::any_cast<string>(m["NetworkPathName"]));
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
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceIpAddress") != m.end() && !m["SourceIpAddress"].empty()) {
      sourceIpAddress = make_shared<string>(boost::any_cast<string>(m["SourceIpAddress"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateNetworkPathRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNetworkPathRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateNetworkPathRequestTag>>(expect1);
      }
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetIpAddress") != m.end() && !m["TargetIpAddress"].empty()) {
      targetIpAddress = make_shared<string>(boost::any_cast<string>(m["TargetIpAddress"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<long>(boost::any_cast<long>(m["TargetPort"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateNetworkPathRequest() = default;
};
class CreateNetworkPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> networkPathId{};
  shared_ptr<string> requestId{};

  CreateNetworkPathResponseBody() {}

  explicit CreateNetworkPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPathId) {
      res["NetworkPathId"] = boost::any(*networkPathId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkPathId") != m.end() && !m["NetworkPathId"].empty()) {
      networkPathId = make_shared<string>(boost::any_cast<string>(m["NetworkPathId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNetworkPathResponseBody() = default;
};
class CreateNetworkPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNetworkPathResponseBody> body{};

  CreateNetworkPathResponse() {}

  explicit CreateNetworkPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNetworkPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNetworkPathResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNetworkPathResponse() = default;
};
class CreateNetworkReachableAnalysisRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateNetworkReachableAnalysisRequestTag() {}

  explicit CreateNetworkReachableAnalysisRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateNetworkReachableAnalysisRequestTag() = default;
};
class CreateNetworkReachableAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> networkPathId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<CreateNetworkReachableAnalysisRequestTag>> tag{};

  CreateNetworkReachableAnalysisRequest() {}

  explicit CreateNetworkReachableAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPathId) {
      res["NetworkPathId"] = boost::any(*networkPathId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("NetworkPathId") != m.end() && !m["NetworkPathId"].empty()) {
      networkPathId = make_shared<string>(boost::any_cast<string>(m["NetworkPathId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateNetworkReachableAnalysisRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNetworkReachableAnalysisRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateNetworkReachableAnalysisRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateNetworkReachableAnalysisRequest() = default;
};
class CreateNetworkReachableAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> networkReachableAnalysisId{};
  shared_ptr<string> requestId{};

  CreateNetworkReachableAnalysisResponseBody() {}

  explicit CreateNetworkReachableAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkReachableAnalysisId) {
      res["NetworkReachableAnalysisId"] = boost::any(*networkReachableAnalysisId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkReachableAnalysisId") != m.end() && !m["NetworkReachableAnalysisId"].empty()) {
      networkReachableAnalysisId = make_shared<string>(boost::any_cast<string>(m["NetworkReachableAnalysisId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNetworkReachableAnalysisResponseBody() = default;
};
class CreateNetworkReachableAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNetworkReachableAnalysisResponseBody> body{};

  CreateNetworkReachableAnalysisResponse() {}

  explicit CreateNetworkReachableAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNetworkReachableAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNetworkReachableAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNetworkReachableAnalysisResponse() = default;
};
class DeleteNetworkPathRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> networkPathIds{};
  shared_ptr<string> regionId{};

  DeleteNetworkPathRequest() {}

  explicit DeleteNetworkPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPathIds) {
      res["NetworkPathIds"] = boost::any(*networkPathIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkPathIds") != m.end() && !m["NetworkPathIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkPathIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkPathIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkPathIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteNetworkPathRequest() = default;
};
class DeleteNetworkPathShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> networkPathIdsShrink{};
  shared_ptr<string> regionId{};

  DeleteNetworkPathShrinkRequest() {}

  explicit DeleteNetworkPathShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPathIdsShrink) {
      res["NetworkPathIds"] = boost::any(*networkPathIdsShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkPathIds") != m.end() && !m["NetworkPathIds"].empty()) {
      networkPathIdsShrink = make_shared<string>(boost::any_cast<string>(m["NetworkPathIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteNetworkPathShrinkRequest() = default;
};
class DeleteNetworkPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteNetworkPathResponseBody() {}

  explicit DeleteNetworkPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteNetworkPathResponseBody() = default;
};
class DeleteNetworkPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNetworkPathResponseBody> body{};

  DeleteNetworkPathResponse() {}

  explicit DeleteNetworkPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNetworkPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNetworkPathResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNetworkPathResponse() = default;
};
class DeleteNetworkReachableAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> networkReachableAnalysisIds{};
  shared_ptr<string> regionId{};

  DeleteNetworkReachableAnalysisRequest() {}

  explicit DeleteNetworkReachableAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkReachableAnalysisIds) {
      res["NetworkReachableAnalysisIds"] = boost::any(*networkReachableAnalysisIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkReachableAnalysisIds") != m.end() && !m["NetworkReachableAnalysisIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkReachableAnalysisIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkReachableAnalysisIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkReachableAnalysisIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteNetworkReachableAnalysisRequest() = default;
};
class DeleteNetworkReachableAnalysisShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> networkReachableAnalysisIdsShrink{};
  shared_ptr<string> regionId{};

  DeleteNetworkReachableAnalysisShrinkRequest() {}

  explicit DeleteNetworkReachableAnalysisShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkReachableAnalysisIdsShrink) {
      res["NetworkReachableAnalysisIds"] = boost::any(*networkReachableAnalysisIdsShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkReachableAnalysisIds") != m.end() && !m["NetworkReachableAnalysisIds"].empty()) {
      networkReachableAnalysisIdsShrink = make_shared<string>(boost::any_cast<string>(m["NetworkReachableAnalysisIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteNetworkReachableAnalysisShrinkRequest() = default;
};
class DeleteNetworkReachableAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteNetworkReachableAnalysisResponseBody() {}

  explicit DeleteNetworkReachableAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteNetworkReachableAnalysisResponseBody() = default;
};
class DeleteNetworkReachableAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNetworkReachableAnalysisResponseBody> body{};

  DeleteNetworkReachableAnalysisResponse() {}

  explicit DeleteNetworkReachableAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNetworkReachableAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNetworkReachableAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNetworkReachableAnalysisResponse() = default;
};
class GetInternetTupleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> cloudIp{};
  shared_ptr<vector<string>> cloudIpList{};
  shared_ptr<string> cloudIsp{};
  shared_ptr<string> cloudPort{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> instanceList{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> otherCity{};
  shared_ptr<string> otherCountry{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherIsp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sort{};
  shared_ptr<long> topN{};
  shared_ptr<long> tupleType{};
  shared_ptr<bool> useMultiAccount{};

  GetInternetTupleRequest() {}

  explicit GetInternetTupleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (cloudIp) {
      res["CloudIp"] = boost::any(*cloudIp);
    }
    if (cloudIpList) {
      res["CloudIpList"] = boost::any(*cloudIpList);
    }
    if (cloudIsp) {
      res["CloudIsp"] = boost::any(*cloudIsp);
    }
    if (cloudPort) {
      res["CloudPort"] = boost::any(*cloudPort);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceList) {
      res["InstanceList"] = boost::any(*instanceList);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (otherCity) {
      res["OtherCity"] = boost::any(*otherCity);
    }
    if (otherCountry) {
      res["OtherCountry"] = boost::any(*otherCountry);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherIsp) {
      res["OtherIsp"] = boost::any(*otherIsp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (tupleType) {
      res["TupleType"] = boost::any(*tupleType);
    }
    if (useMultiAccount) {
      res["UseMultiAccount"] = boost::any(*useMultiAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CloudIp") != m.end() && !m["CloudIp"].empty()) {
      cloudIp = make_shared<string>(boost::any_cast<string>(m["CloudIp"]));
    }
    if (m.find("CloudIpList") != m.end() && !m["CloudIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CloudIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CloudIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cloudIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CloudIsp") != m.end() && !m["CloudIsp"].empty()) {
      cloudIsp = make_shared<string>(boost::any_cast<string>(m["CloudIsp"]));
    }
    if (m.find("CloudPort") != m.end() && !m["CloudPort"].empty()) {
      cloudPort = make_shared<string>(boost::any_cast<string>(m["CloudPort"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OtherCity") != m.end() && !m["OtherCity"].empty()) {
      otherCity = make_shared<string>(boost::any_cast<string>(m["OtherCity"]));
    }
    if (m.find("OtherCountry") != m.end() && !m["OtherCountry"].empty()) {
      otherCountry = make_shared<string>(boost::any_cast<string>(m["OtherCountry"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherIsp") != m.end() && !m["OtherIsp"].empty()) {
      otherIsp = make_shared<string>(boost::any_cast<string>(m["OtherIsp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("TupleType") != m.end() && !m["TupleType"].empty()) {
      tupleType = make_shared<long>(boost::any_cast<long>(m["TupleType"]));
    }
    if (m.find("UseMultiAccount") != m.end() && !m["UseMultiAccount"].empty()) {
      useMultiAccount = make_shared<bool>(boost::any_cast<bool>(m["UseMultiAccount"]));
    }
  }


  virtual ~GetInternetTupleRequest() = default;
};
class GetInternetTupleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> cloudIp{};
  shared_ptr<string> cloudIpListShrink{};
  shared_ptr<string> cloudIsp{};
  shared_ptr<string> cloudPort{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceListShrink{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> otherCity{};
  shared_ptr<string> otherCountry{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherIsp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sort{};
  shared_ptr<long> topN{};
  shared_ptr<long> tupleType{};
  shared_ptr<bool> useMultiAccount{};

  GetInternetTupleShrinkRequest() {}

  explicit GetInternetTupleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (cloudIp) {
      res["CloudIp"] = boost::any(*cloudIp);
    }
    if (cloudIpListShrink) {
      res["CloudIpList"] = boost::any(*cloudIpListShrink);
    }
    if (cloudIsp) {
      res["CloudIsp"] = boost::any(*cloudIsp);
    }
    if (cloudPort) {
      res["CloudPort"] = boost::any(*cloudPort);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceListShrink) {
      res["InstanceList"] = boost::any(*instanceListShrink);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (otherCity) {
      res["OtherCity"] = boost::any(*otherCity);
    }
    if (otherCountry) {
      res["OtherCountry"] = boost::any(*otherCountry);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherIsp) {
      res["OtherIsp"] = boost::any(*otherIsp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (tupleType) {
      res["TupleType"] = boost::any(*tupleType);
    }
    if (useMultiAccount) {
      res["UseMultiAccount"] = boost::any(*useMultiAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CloudIp") != m.end() && !m["CloudIp"].empty()) {
      cloudIp = make_shared<string>(boost::any_cast<string>(m["CloudIp"]));
    }
    if (m.find("CloudIpList") != m.end() && !m["CloudIpList"].empty()) {
      cloudIpListShrink = make_shared<string>(boost::any_cast<string>(m["CloudIpList"]));
    }
    if (m.find("CloudIsp") != m.end() && !m["CloudIsp"].empty()) {
      cloudIsp = make_shared<string>(boost::any_cast<string>(m["CloudIsp"]));
    }
    if (m.find("CloudPort") != m.end() && !m["CloudPort"].empty()) {
      cloudPort = make_shared<string>(boost::any_cast<string>(m["CloudPort"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      instanceListShrink = make_shared<string>(boost::any_cast<string>(m["InstanceList"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OtherCity") != m.end() && !m["OtherCity"].empty()) {
      otherCity = make_shared<string>(boost::any_cast<string>(m["OtherCity"]));
    }
    if (m.find("OtherCountry") != m.end() && !m["OtherCountry"].empty()) {
      otherCountry = make_shared<string>(boost::any_cast<string>(m["OtherCountry"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherIsp") != m.end() && !m["OtherIsp"].empty()) {
      otherIsp = make_shared<string>(boost::any_cast<string>(m["OtherIsp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("TupleType") != m.end() && !m["TupleType"].empty()) {
      tupleType = make_shared<long>(boost::any_cast<long>(m["TupleType"]));
    }
    if (m.find("UseMultiAccount") != m.end() && !m["UseMultiAccount"].empty()) {
      useMultiAccount = make_shared<bool>(boost::any_cast<bool>(m["UseMultiAccount"]));
    }
  }


  virtual ~GetInternetTupleShrinkRequest() = default;
};
class GetInternetTupleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessRegion{};
  shared_ptr<string> beginTime{};
  shared_ptr<double> byteCount{};
  shared_ptr<string> cloudCity{};
  shared_ptr<string> cloudCountry{};
  shared_ptr<string> cloudIp{};
  shared_ptr<string> cloudIsp{};
  shared_ptr<string> cloudPort{};
  shared_ptr<string> cloudProduct{};
  shared_ptr<string> cloudProvince{};
  shared_ptr<string> direction{};
  shared_ptr<double> inByteCount{};
  shared_ptr<double> inOutOrderCount{};
  shared_ptr<double> inPacketCount{};
  shared_ptr<double> inRetranCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> otherCity{};
  shared_ptr<string> otherCountry{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherIsp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> otherProduct{};
  shared_ptr<string> otherProvince{};
  shared_ptr<double> outByteCount{};
  shared_ptr<double> outOrderCount{};
  shared_ptr<double> outOutOrderCount{};
  shared_ptr<double> outPacketCount{};
  shared_ptr<double> outRetranCount{};
  shared_ptr<double> packetCount{};
  shared_ptr<string> protocol{};
  shared_ptr<double> retransmitRate{};
  shared_ptr<double> rtt{};

  GetInternetTupleResponseBodyData() {}

  explicit GetInternetTupleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRegion) {
      res["AccessRegion"] = boost::any(*accessRegion);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (byteCount) {
      res["ByteCount"] = boost::any(*byteCount);
    }
    if (cloudCity) {
      res["CloudCity"] = boost::any(*cloudCity);
    }
    if (cloudCountry) {
      res["CloudCountry"] = boost::any(*cloudCountry);
    }
    if (cloudIp) {
      res["CloudIp"] = boost::any(*cloudIp);
    }
    if (cloudIsp) {
      res["CloudIsp"] = boost::any(*cloudIsp);
    }
    if (cloudPort) {
      res["CloudPort"] = boost::any(*cloudPort);
    }
    if (cloudProduct) {
      res["CloudProduct"] = boost::any(*cloudProduct);
    }
    if (cloudProvince) {
      res["CloudProvince"] = boost::any(*cloudProvince);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (inByteCount) {
      res["InByteCount"] = boost::any(*inByteCount);
    }
    if (inOutOrderCount) {
      res["InOutOrderCount"] = boost::any(*inOutOrderCount);
    }
    if (inPacketCount) {
      res["InPacketCount"] = boost::any(*inPacketCount);
    }
    if (inRetranCount) {
      res["InRetranCount"] = boost::any(*inRetranCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (otherCity) {
      res["OtherCity"] = boost::any(*otherCity);
    }
    if (otherCountry) {
      res["OtherCountry"] = boost::any(*otherCountry);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherIsp) {
      res["OtherIsp"] = boost::any(*otherIsp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (otherProduct) {
      res["OtherProduct"] = boost::any(*otherProduct);
    }
    if (otherProvince) {
      res["OtherProvince"] = boost::any(*otherProvince);
    }
    if (outByteCount) {
      res["OutByteCount"] = boost::any(*outByteCount);
    }
    if (outOrderCount) {
      res["OutOrderCount"] = boost::any(*outOrderCount);
    }
    if (outOutOrderCount) {
      res["OutOutOrderCount"] = boost::any(*outOutOrderCount);
    }
    if (outPacketCount) {
      res["OutPacketCount"] = boost::any(*outPacketCount);
    }
    if (outRetranCount) {
      res["OutRetranCount"] = boost::any(*outRetranCount);
    }
    if (packetCount) {
      res["PacketCount"] = boost::any(*packetCount);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (retransmitRate) {
      res["RetransmitRate"] = boost::any(*retransmitRate);
    }
    if (rtt) {
      res["Rtt"] = boost::any(*rtt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRegion") != m.end() && !m["AccessRegion"].empty()) {
      accessRegion = make_shared<string>(boost::any_cast<string>(m["AccessRegion"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("ByteCount") != m.end() && !m["ByteCount"].empty()) {
      byteCount = make_shared<double>(boost::any_cast<double>(m["ByteCount"]));
    }
    if (m.find("CloudCity") != m.end() && !m["CloudCity"].empty()) {
      cloudCity = make_shared<string>(boost::any_cast<string>(m["CloudCity"]));
    }
    if (m.find("CloudCountry") != m.end() && !m["CloudCountry"].empty()) {
      cloudCountry = make_shared<string>(boost::any_cast<string>(m["CloudCountry"]));
    }
    if (m.find("CloudIp") != m.end() && !m["CloudIp"].empty()) {
      cloudIp = make_shared<string>(boost::any_cast<string>(m["CloudIp"]));
    }
    if (m.find("CloudIsp") != m.end() && !m["CloudIsp"].empty()) {
      cloudIsp = make_shared<string>(boost::any_cast<string>(m["CloudIsp"]));
    }
    if (m.find("CloudPort") != m.end() && !m["CloudPort"].empty()) {
      cloudPort = make_shared<string>(boost::any_cast<string>(m["CloudPort"]));
    }
    if (m.find("CloudProduct") != m.end() && !m["CloudProduct"].empty()) {
      cloudProduct = make_shared<string>(boost::any_cast<string>(m["CloudProduct"]));
    }
    if (m.find("CloudProvince") != m.end() && !m["CloudProvince"].empty()) {
      cloudProvince = make_shared<string>(boost::any_cast<string>(m["CloudProvince"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("InByteCount") != m.end() && !m["InByteCount"].empty()) {
      inByteCount = make_shared<double>(boost::any_cast<double>(m["InByteCount"]));
    }
    if (m.find("InOutOrderCount") != m.end() && !m["InOutOrderCount"].empty()) {
      inOutOrderCount = make_shared<double>(boost::any_cast<double>(m["InOutOrderCount"]));
    }
    if (m.find("InPacketCount") != m.end() && !m["InPacketCount"].empty()) {
      inPacketCount = make_shared<double>(boost::any_cast<double>(m["InPacketCount"]));
    }
    if (m.find("InRetranCount") != m.end() && !m["InRetranCount"].empty()) {
      inRetranCount = make_shared<double>(boost::any_cast<double>(m["InRetranCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OtherCity") != m.end() && !m["OtherCity"].empty()) {
      otherCity = make_shared<string>(boost::any_cast<string>(m["OtherCity"]));
    }
    if (m.find("OtherCountry") != m.end() && !m["OtherCountry"].empty()) {
      otherCountry = make_shared<string>(boost::any_cast<string>(m["OtherCountry"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherIsp") != m.end() && !m["OtherIsp"].empty()) {
      otherIsp = make_shared<string>(boost::any_cast<string>(m["OtherIsp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("OtherProduct") != m.end() && !m["OtherProduct"].empty()) {
      otherProduct = make_shared<string>(boost::any_cast<string>(m["OtherProduct"]));
    }
    if (m.find("OtherProvince") != m.end() && !m["OtherProvince"].empty()) {
      otherProvince = make_shared<string>(boost::any_cast<string>(m["OtherProvince"]));
    }
    if (m.find("OutByteCount") != m.end() && !m["OutByteCount"].empty()) {
      outByteCount = make_shared<double>(boost::any_cast<double>(m["OutByteCount"]));
    }
    if (m.find("OutOrderCount") != m.end() && !m["OutOrderCount"].empty()) {
      outOrderCount = make_shared<double>(boost::any_cast<double>(m["OutOrderCount"]));
    }
    if (m.find("OutOutOrderCount") != m.end() && !m["OutOutOrderCount"].empty()) {
      outOutOrderCount = make_shared<double>(boost::any_cast<double>(m["OutOutOrderCount"]));
    }
    if (m.find("OutPacketCount") != m.end() && !m["OutPacketCount"].empty()) {
      outPacketCount = make_shared<double>(boost::any_cast<double>(m["OutPacketCount"]));
    }
    if (m.find("OutRetranCount") != m.end() && !m["OutRetranCount"].empty()) {
      outRetranCount = make_shared<double>(boost::any_cast<double>(m["OutRetranCount"]));
    }
    if (m.find("PacketCount") != m.end() && !m["PacketCount"].empty()) {
      packetCount = make_shared<double>(boost::any_cast<double>(m["PacketCount"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RetransmitRate") != m.end() && !m["RetransmitRate"].empty()) {
      retransmitRate = make_shared<double>(boost::any_cast<double>(m["RetransmitRate"]));
    }
    if (m.find("Rtt") != m.end() && !m["Rtt"].empty()) {
      rtt = make_shared<double>(boost::any_cast<double>(m["Rtt"]));
    }
  }


  virtual ~GetInternetTupleResponseBodyData() = default;
};
class GetInternetTupleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetInternetTupleResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetInternetTupleResponseBody() {}

  explicit GetInternetTupleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetInternetTupleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInternetTupleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetInternetTupleResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInternetTupleResponseBody() = default;
};
class GetInternetTupleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInternetTupleResponseBody> body{};

  GetInternetTupleResponse() {}

  explicit GetInternetTupleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInternetTupleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInternetTupleResponseBody>(model1);
      }
    }
  }


  virtual ~GetInternetTupleResponse() = default;
};
class GetNatTopNRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> ip{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> regionId{};
  shared_ptr<long> topN{};

  GetNatTopNRequest() {}

  explicit GetNatTopNRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
  }


  virtual ~GetNatTopNRequest() = default;
};
class GetNatTopNResponseBodyNatGatewayTopN : public Darabonba::Model {
public:
  shared_ptr<double> activeSessionCount{};
  shared_ptr<double> inBps{};
  shared_ptr<double> inFlowPerMinute{};
  shared_ptr<double> inPps{};
  shared_ptr<string> ip{};
  shared_ptr<double> newSessionPerSecond{};
  shared_ptr<double> outBps{};
  shared_ptr<double> outFlowPerMinute{};
  shared_ptr<double> outPps{};

  GetNatTopNResponseBodyNatGatewayTopN() {}

  explicit GetNatTopNResponseBodyNatGatewayTopN(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeSessionCount) {
      res["ActiveSessionCount"] = boost::any(*activeSessionCount);
    }
    if (inBps) {
      res["InBps"] = boost::any(*inBps);
    }
    if (inFlowPerMinute) {
      res["InFlowPerMinute"] = boost::any(*inFlowPerMinute);
    }
    if (inPps) {
      res["InPps"] = boost::any(*inPps);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (newSessionPerSecond) {
      res["NewSessionPerSecond"] = boost::any(*newSessionPerSecond);
    }
    if (outBps) {
      res["OutBps"] = boost::any(*outBps);
    }
    if (outFlowPerMinute) {
      res["OutFlowPerMinute"] = boost::any(*outFlowPerMinute);
    }
    if (outPps) {
      res["OutPps"] = boost::any(*outPps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveSessionCount") != m.end() && !m["ActiveSessionCount"].empty()) {
      activeSessionCount = make_shared<double>(boost::any_cast<double>(m["ActiveSessionCount"]));
    }
    if (m.find("InBps") != m.end() && !m["InBps"].empty()) {
      inBps = make_shared<double>(boost::any_cast<double>(m["InBps"]));
    }
    if (m.find("InFlowPerMinute") != m.end() && !m["InFlowPerMinute"].empty()) {
      inFlowPerMinute = make_shared<double>(boost::any_cast<double>(m["InFlowPerMinute"]));
    }
    if (m.find("InPps") != m.end() && !m["InPps"].empty()) {
      inPps = make_shared<double>(boost::any_cast<double>(m["InPps"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NewSessionPerSecond") != m.end() && !m["NewSessionPerSecond"].empty()) {
      newSessionPerSecond = make_shared<double>(boost::any_cast<double>(m["NewSessionPerSecond"]));
    }
    if (m.find("OutBps") != m.end() && !m["OutBps"].empty()) {
      outBps = make_shared<double>(boost::any_cast<double>(m["OutBps"]));
    }
    if (m.find("OutFlowPerMinute") != m.end() && !m["OutFlowPerMinute"].empty()) {
      outFlowPerMinute = make_shared<double>(boost::any_cast<double>(m["OutFlowPerMinute"]));
    }
    if (m.find("OutPps") != m.end() && !m["OutPps"].empty()) {
      outPps = make_shared<double>(boost::any_cast<double>(m["OutPps"]));
    }
  }


  virtual ~GetNatTopNResponseBodyNatGatewayTopN() = default;
};
class GetNatTopNResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTopNOpen{};
  shared_ptr<vector<GetNatTopNResponseBodyNatGatewayTopN>> natGatewayTopN{};
  shared_ptr<string> requestId{};

  GetNatTopNResponseBody() {}

  explicit GetNatTopNResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTopNOpen) {
      res["IsTopNOpen"] = boost::any(*isTopNOpen);
    }
    if (natGatewayTopN) {
      vector<boost::any> temp1;
      for(auto item1:*natGatewayTopN){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NatGatewayTopN"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTopNOpen") != m.end() && !m["IsTopNOpen"].empty()) {
      isTopNOpen = make_shared<bool>(boost::any_cast<bool>(m["IsTopNOpen"]));
    }
    if (m.find("NatGatewayTopN") != m.end() && !m["NatGatewayTopN"].empty()) {
      if (typeid(vector<boost::any>) == m["NatGatewayTopN"].type()) {
        vector<GetNatTopNResponseBodyNatGatewayTopN> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NatGatewayTopN"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNatTopNResponseBodyNatGatewayTopN model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        natGatewayTopN = make_shared<vector<GetNatTopNResponseBodyNatGatewayTopN>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNatTopNResponseBody() = default;
};
class GetNatTopNResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNatTopNResponseBody> body{};

  GetNatTopNResponse() {}

  explicit GetNatTopNResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNatTopNResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNatTopNResponseBody>(model1);
      }
    }
  }


  virtual ~GetNatTopNResponse() = default;
};
class GetNetworkReachableAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> networkReachableAnalysisId{};
  shared_ptr<string> regionId{};

  GetNetworkReachableAnalysisRequest() {}

  explicit GetNetworkReachableAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkReachableAnalysisId) {
      res["NetworkReachableAnalysisId"] = boost::any(*networkReachableAnalysisId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkReachableAnalysisId") != m.end() && !m["NetworkReachableAnalysisId"].empty()) {
      networkReachableAnalysisId = make_shared<string>(boost::any_cast<string>(m["NetworkReachableAnalysisId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetNetworkReachableAnalysisRequest() = default;
};
class GetNetworkReachableAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> createTime{};
  shared_ptr<string> networkPathId{};
  shared_ptr<string> networkPathParameter{};
  shared_ptr<string> networkReachableAnalysisId{};
  shared_ptr<string> networkReachableAnalysisResult{};
  shared_ptr<string> networkReachableAnalysisStatus{};
  shared_ptr<bool> reachable{};
  shared_ptr<string> requestId{};

  GetNetworkReachableAnalysisResponseBody() {}

  explicit GetNetworkReachableAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (networkPathId) {
      res["NetworkPathId"] = boost::any(*networkPathId);
    }
    if (networkPathParameter) {
      res["NetworkPathParameter"] = boost::any(*networkPathParameter);
    }
    if (networkReachableAnalysisId) {
      res["NetworkReachableAnalysisId"] = boost::any(*networkReachableAnalysisId);
    }
    if (networkReachableAnalysisResult) {
      res["NetworkReachableAnalysisResult"] = boost::any(*networkReachableAnalysisResult);
    }
    if (networkReachableAnalysisStatus) {
      res["NetworkReachableAnalysisStatus"] = boost::any(*networkReachableAnalysisStatus);
    }
    if (reachable) {
      res["Reachable"] = boost::any(*reachable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("NetworkPathId") != m.end() && !m["NetworkPathId"].empty()) {
      networkPathId = make_shared<string>(boost::any_cast<string>(m["NetworkPathId"]));
    }
    if (m.find("NetworkPathParameter") != m.end() && !m["NetworkPathParameter"].empty()) {
      networkPathParameter = make_shared<string>(boost::any_cast<string>(m["NetworkPathParameter"]));
    }
    if (m.find("NetworkReachableAnalysisId") != m.end() && !m["NetworkReachableAnalysisId"].empty()) {
      networkReachableAnalysisId = make_shared<string>(boost::any_cast<string>(m["NetworkReachableAnalysisId"]));
    }
    if (m.find("NetworkReachableAnalysisResult") != m.end() && !m["NetworkReachableAnalysisResult"].empty()) {
      networkReachableAnalysisResult = make_shared<string>(boost::any_cast<string>(m["NetworkReachableAnalysisResult"]));
    }
    if (m.find("NetworkReachableAnalysisStatus") != m.end() && !m["NetworkReachableAnalysisStatus"].empty()) {
      networkReachableAnalysisStatus = make_shared<string>(boost::any_cast<string>(m["NetworkReachableAnalysisStatus"]));
    }
    if (m.find("Reachable") != m.end() && !m["Reachable"].empty()) {
      reachable = make_shared<bool>(boost::any_cast<bool>(m["Reachable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNetworkReachableAnalysisResponseBody() = default;
};
class GetNetworkReachableAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNetworkReachableAnalysisResponseBody> body{};

  GetNetworkReachableAnalysisResponse() {}

  explicit GetNetworkReachableAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNetworkReachableAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNetworkReachableAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~GetNetworkReachableAnalysisResponse() = default;
};
class GetNisNetworkMetricsRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetNisNetworkMetricsRequestDimensions() {}

  explicit GetNisNetworkMetricsRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetNisNetworkMetricsRequestDimensions() = default;
};
class GetNisNetworkMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<long> beginTime{};
  shared_ptr<vector<GetNisNetworkMetricsRequestDimensions>> dimensions{};
  shared_ptr<long> endTime{};
  shared_ptr<string> metricName{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scanBy{};
  shared_ptr<bool> useCrossAccount{};

  GetNisNetworkMetricsRequest() {}

  explicit GetNisNetworkMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scanBy) {
      res["ScanBy"] = boost::any(*scanBy);
    }
    if (useCrossAccount) {
      res["UseCrossAccount"] = boost::any(*useCrossAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<GetNisNetworkMetricsRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNisNetworkMetricsRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<GetNisNetworkMetricsRequestDimensions>>(expect1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ScanBy") != m.end() && !m["ScanBy"].empty()) {
      scanBy = make_shared<string>(boost::any_cast<string>(m["ScanBy"]));
    }
    if (m.find("UseCrossAccount") != m.end() && !m["UseCrossAccount"].empty()) {
      useCrossAccount = make_shared<bool>(boost::any_cast<bool>(m["UseCrossAccount"]));
    }
  }


  virtual ~GetNisNetworkMetricsRequest() = default;
};
class GetNisNetworkMetricsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> dimensionsShrink{};
  shared_ptr<long> endTime{};
  shared_ptr<string> metricName{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scanBy{};
  shared_ptr<bool> useCrossAccount{};

  GetNisNetworkMetricsShrinkRequest() {}

  explicit GetNisNetworkMetricsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (dimensionsShrink) {
      res["Dimensions"] = boost::any(*dimensionsShrink);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scanBy) {
      res["ScanBy"] = boost::any(*scanBy);
    }
    if (useCrossAccount) {
      res["UseCrossAccount"] = boost::any(*useCrossAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensionsShrink = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ScanBy") != m.end() && !m["ScanBy"].empty()) {
      scanBy = make_shared<string>(boost::any_cast<string>(m["ScanBy"]));
    }
    if (m.find("UseCrossAccount") != m.end() && !m["UseCrossAccount"].empty()) {
      useCrossAccount = make_shared<bool>(boost::any_cast<bool>(m["UseCrossAccount"]));
    }
  }


  virtual ~GetNisNetworkMetricsShrinkRequest() = default;
};
class GetNisNetworkMetricsResponseBodyDataMetrics : public Darabonba::Model {
public:
  shared_ptr<long> timeStamp{};
  shared_ptr<double> value{};

  GetNisNetworkMetricsResponseBodyDataMetrics() {}

  explicit GetNisNetworkMetricsResponseBodyDataMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<long>(boost::any_cast<long>(m["TimeStamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~GetNisNetworkMetricsResponseBodyDataMetrics() = default;
};
class GetNisNetworkMetricsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetNisNetworkMetricsResponseBodyDataMetrics>> metrics{};
  shared_ptr<string> unit{};

  GetNisNetworkMetricsResponseBodyData() {}

  explicit GetNisNetworkMetricsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<GetNisNetworkMetricsResponseBodyDataMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNisNetworkMetricsResponseBodyDataMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<GetNisNetworkMetricsResponseBodyDataMetrics>>(expect1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~GetNisNetworkMetricsResponseBodyData() = default;
};
class GetNisNetworkMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetNisNetworkMetricsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetNisNetworkMetricsResponseBody() {}

  explicit GetNisNetworkMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNisNetworkMetricsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetNisNetworkMetricsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNisNetworkMetricsResponseBody() = default;
};
class GetNisNetworkMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNisNetworkMetricsResponseBody> body{};

  GetNisNetworkMetricsResponse() {}

  explicit GetNisNetworkMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNisNetworkMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNisNetworkMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetNisNetworkMetricsResponse() = default;
};
class GetNisNetworkRankingRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetNisNetworkRankingRequestFilter() {}

  explicit GetNisNetworkRankingRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetNisNetworkRankingRequestFilter() = default;
};
class GetNisNetworkRankingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<GetNisNetworkRankingRequestFilter>> filter{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sort{};
  shared_ptr<long> topN{};
  shared_ptr<bool> useCrossAccount{};

  GetNisNetworkRankingRequest() {}

  explicit GetNisNetworkRankingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (useCrossAccount) {
      res["UseCrossAccount"] = boost::any(*useCrossAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<GetNisNetworkRankingRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNisNetworkRankingRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<GetNisNetworkRankingRequestFilter>>(expect1);
      }
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("UseCrossAccount") != m.end() && !m["UseCrossAccount"].empty()) {
      useCrossAccount = make_shared<bool>(boost::any_cast<bool>(m["UseCrossAccount"]));
    }
  }


  virtual ~GetNisNetworkRankingRequest() = default;
};
class GetNisNetworkRankingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<string> filterShrink{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sort{};
  shared_ptr<long> topN{};
  shared_ptr<bool> useCrossAccount{};

  GetNisNetworkRankingShrinkRequest() {}

  explicit GetNisNetworkRankingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (useCrossAccount) {
      res["UseCrossAccount"] = boost::any(*useCrossAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("UseCrossAccount") != m.end() && !m["UseCrossAccount"].empty()) {
      useCrossAccount = make_shared<bool>(boost::any_cast<bool>(m["UseCrossAccount"]));
    }
  }


  virtual ~GetNisNetworkRankingShrinkRequest() = default;
};
class GetNisNetworkRankingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> activeSessionCount{};
  shared_ptr<string> asn{};
  shared_ptr<string> attachmentId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<double> byteCount{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> destinationIp{};
  shared_ptr<string> destinationIsp{};
  shared_ptr<string> destinationPort{};
  shared_ptr<string> destinationRegionNo{};
  shared_ptr<string> destinationZone{};
  shared_ptr<string> IP{};
  shared_ptr<double> inBps{};
  shared_ptr<double> inPps{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> isp{};
  shared_ptr<double> newSessionPerSecond{};
  shared_ptr<double> outBps{};
  shared_ptr<double> outPps{};
  shared_ptr<double> packetCount{};
  shared_ptr<string> protocol{};
  shared_ptr<string> province{};
  shared_ptr<double> RTT{};
  shared_ptr<string> regionNo{};
  shared_ptr<double> retransmitRate{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> sourceIsp{};
  shared_ptr<string> sourcePort{};
  shared_ptr<string> sourceZone{};
  shared_ptr<string> vbrId{};

  GetNisNetworkRankingResponseBodyData() {}

  explicit GetNisNetworkRankingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeSessionCount) {
      res["ActiveSessionCount"] = boost::any(*activeSessionCount);
    }
    if (asn) {
      res["Asn"] = boost::any(*asn);
    }
    if (attachmentId) {
      res["AttachmentId"] = boost::any(*attachmentId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (byteCount) {
      res["ByteCount"] = boost::any(*byteCount);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (destinationIp) {
      res["DestinationIp"] = boost::any(*destinationIp);
    }
    if (destinationIsp) {
      res["DestinationIsp"] = boost::any(*destinationIsp);
    }
    if (destinationPort) {
      res["DestinationPort"] = boost::any(*destinationPort);
    }
    if (destinationRegionNo) {
      res["DestinationRegionNo"] = boost::any(*destinationRegionNo);
    }
    if (destinationZone) {
      res["DestinationZone"] = boost::any(*destinationZone);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (inBps) {
      res["InBps"] = boost::any(*inBps);
    }
    if (inPps) {
      res["InPps"] = boost::any(*inPps);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (newSessionPerSecond) {
      res["NewSessionPerSecond"] = boost::any(*newSessionPerSecond);
    }
    if (outBps) {
      res["OutBps"] = boost::any(*outBps);
    }
    if (outPps) {
      res["OutPps"] = boost::any(*outPps);
    }
    if (packetCount) {
      res["PacketCount"] = boost::any(*packetCount);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (RTT) {
      res["RTT"] = boost::any(*RTT);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (retransmitRate) {
      res["RetransmitRate"] = boost::any(*retransmitRate);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (sourceIsp) {
      res["SourceIsp"] = boost::any(*sourceIsp);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (sourceZone) {
      res["SourceZone"] = boost::any(*sourceZone);
    }
    if (vbrId) {
      res["VbrId"] = boost::any(*vbrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveSessionCount") != m.end() && !m["ActiveSessionCount"].empty()) {
      activeSessionCount = make_shared<double>(boost::any_cast<double>(m["ActiveSessionCount"]));
    }
    if (m.find("Asn") != m.end() && !m["Asn"].empty()) {
      asn = make_shared<string>(boost::any_cast<string>(m["Asn"]));
    }
    if (m.find("AttachmentId") != m.end() && !m["AttachmentId"].empty()) {
      attachmentId = make_shared<string>(boost::any_cast<string>(m["AttachmentId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("ByteCount") != m.end() && !m["ByteCount"].empty()) {
      byteCount = make_shared<double>(boost::any_cast<double>(m["ByteCount"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("DestinationIp") != m.end() && !m["DestinationIp"].empty()) {
      destinationIp = make_shared<string>(boost::any_cast<string>(m["DestinationIp"]));
    }
    if (m.find("DestinationIsp") != m.end() && !m["DestinationIsp"].empty()) {
      destinationIsp = make_shared<string>(boost::any_cast<string>(m["DestinationIsp"]));
    }
    if (m.find("DestinationPort") != m.end() && !m["DestinationPort"].empty()) {
      destinationPort = make_shared<string>(boost::any_cast<string>(m["DestinationPort"]));
    }
    if (m.find("DestinationRegionNo") != m.end() && !m["DestinationRegionNo"].empty()) {
      destinationRegionNo = make_shared<string>(boost::any_cast<string>(m["DestinationRegionNo"]));
    }
    if (m.find("DestinationZone") != m.end() && !m["DestinationZone"].empty()) {
      destinationZone = make_shared<string>(boost::any_cast<string>(m["DestinationZone"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InBps") != m.end() && !m["InBps"].empty()) {
      inBps = make_shared<double>(boost::any_cast<double>(m["InBps"]));
    }
    if (m.find("InPps") != m.end() && !m["InPps"].empty()) {
      inPps = make_shared<double>(boost::any_cast<double>(m["InPps"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("NewSessionPerSecond") != m.end() && !m["NewSessionPerSecond"].empty()) {
      newSessionPerSecond = make_shared<double>(boost::any_cast<double>(m["NewSessionPerSecond"]));
    }
    if (m.find("OutBps") != m.end() && !m["OutBps"].empty()) {
      outBps = make_shared<double>(boost::any_cast<double>(m["OutBps"]));
    }
    if (m.find("OutPps") != m.end() && !m["OutPps"].empty()) {
      outPps = make_shared<double>(boost::any_cast<double>(m["OutPps"]));
    }
    if (m.find("PacketCount") != m.end() && !m["PacketCount"].empty()) {
      packetCount = make_shared<double>(boost::any_cast<double>(m["PacketCount"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RTT") != m.end() && !m["RTT"].empty()) {
      RTT = make_shared<double>(boost::any_cast<double>(m["RTT"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RetransmitRate") != m.end() && !m["RetransmitRate"].empty()) {
      retransmitRate = make_shared<double>(boost::any_cast<double>(m["RetransmitRate"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("SourceIsp") != m.end() && !m["SourceIsp"].empty()) {
      sourceIsp = make_shared<string>(boost::any_cast<string>(m["SourceIsp"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<string>(boost::any_cast<string>(m["SourcePort"]));
    }
    if (m.find("SourceZone") != m.end() && !m["SourceZone"].empty()) {
      sourceZone = make_shared<string>(boost::any_cast<string>(m["SourceZone"]));
    }
    if (m.find("VbrId") != m.end() && !m["VbrId"].empty()) {
      vbrId = make_shared<string>(boost::any_cast<string>(m["VbrId"]));
    }
  }


  virtual ~GetNisNetworkRankingResponseBodyData() = default;
};
class GetNisNetworkRankingResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetNisNetworkRankingResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetNisNetworkRankingResponseBody() {}

  explicit GetNisNetworkRankingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetNisNetworkRankingResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNisNetworkRankingResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetNisNetworkRankingResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNisNetworkRankingResponseBody() = default;
};
class GetNisNetworkRankingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNisNetworkRankingResponseBody> body{};

  GetNisNetworkRankingResponse() {}

  explicit GetNisNetworkRankingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNisNetworkRankingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNisNetworkRankingResponseBody>(model1);
      }
    }
  }


  virtual ~GetNisNetworkRankingResponse() = default;
};
class GetTransitRouterFlowTopNRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> bandwithPackageId{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> cenId{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> otherRegion{};
  shared_ptr<string> protocol{};
  shared_ptr<string> sort{};
  shared_ptr<string> thisIp{};
  shared_ptr<string> thisPort{};
  shared_ptr<string> thisRegion{};
  shared_ptr<long> topN{};
  shared_ptr<bool> useMultiAccount{};

  GetTransitRouterFlowTopNRequest() {}

  explicit GetTransitRouterFlowTopNRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (bandwithPackageId) {
      res["BandwithPackageId"] = boost::any(*bandwithPackageId);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (otherRegion) {
      res["OtherRegion"] = boost::any(*otherRegion);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (thisIp) {
      res["ThisIp"] = boost::any(*thisIp);
    }
    if (thisPort) {
      res["ThisPort"] = boost::any(*thisPort);
    }
    if (thisRegion) {
      res["ThisRegion"] = boost::any(*thisRegion);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (useMultiAccount) {
      res["UseMultiAccount"] = boost::any(*useMultiAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("BandwithPackageId") != m.end() && !m["BandwithPackageId"].empty()) {
      bandwithPackageId = make_shared<string>(boost::any_cast<string>(m["BandwithPackageId"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("OtherRegion") != m.end() && !m["OtherRegion"].empty()) {
      otherRegion = make_shared<string>(boost::any_cast<string>(m["OtherRegion"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("ThisIp") != m.end() && !m["ThisIp"].empty()) {
      thisIp = make_shared<string>(boost::any_cast<string>(m["ThisIp"]));
    }
    if (m.find("ThisPort") != m.end() && !m["ThisPort"].empty()) {
      thisPort = make_shared<string>(boost::any_cast<string>(m["ThisPort"]));
    }
    if (m.find("ThisRegion") != m.end() && !m["ThisRegion"].empty()) {
      thisRegion = make_shared<string>(boost::any_cast<string>(m["ThisRegion"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("UseMultiAccount") != m.end() && !m["UseMultiAccount"].empty()) {
      useMultiAccount = make_shared<bool>(boost::any_cast<bool>(m["UseMultiAccount"]));
    }
  }


  virtual ~GetTransitRouterFlowTopNRequest() = default;
};
class GetTransitRouterFlowTopNShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> bandwithPackageId{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> cenId{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> otherRegion{};
  shared_ptr<string> protocol{};
  shared_ptr<string> sort{};
  shared_ptr<string> thisIp{};
  shared_ptr<string> thisPort{};
  shared_ptr<string> thisRegion{};
  shared_ptr<long> topN{};
  shared_ptr<bool> useMultiAccount{};

  GetTransitRouterFlowTopNShrinkRequest() {}

  explicit GetTransitRouterFlowTopNShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (bandwithPackageId) {
      res["BandwithPackageId"] = boost::any(*bandwithPackageId);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (otherRegion) {
      res["OtherRegion"] = boost::any(*otherRegion);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (thisIp) {
      res["ThisIp"] = boost::any(*thisIp);
    }
    if (thisPort) {
      res["ThisPort"] = boost::any(*thisPort);
    }
    if (thisRegion) {
      res["ThisRegion"] = boost::any(*thisRegion);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (useMultiAccount) {
      res["UseMultiAccount"] = boost::any(*useMultiAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("BandwithPackageId") != m.end() && !m["BandwithPackageId"].empty()) {
      bandwithPackageId = make_shared<string>(boost::any_cast<string>(m["BandwithPackageId"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("OtherRegion") != m.end() && !m["OtherRegion"].empty()) {
      otherRegion = make_shared<string>(boost::any_cast<string>(m["OtherRegion"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("ThisIp") != m.end() && !m["ThisIp"].empty()) {
      thisIp = make_shared<string>(boost::any_cast<string>(m["ThisIp"]));
    }
    if (m.find("ThisPort") != m.end() && !m["ThisPort"].empty()) {
      thisPort = make_shared<string>(boost::any_cast<string>(m["ThisPort"]));
    }
    if (m.find("ThisRegion") != m.end() && !m["ThisRegion"].empty()) {
      thisRegion = make_shared<string>(boost::any_cast<string>(m["ThisRegion"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("UseMultiAccount") != m.end() && !m["UseMultiAccount"].empty()) {
      useMultiAccount = make_shared<bool>(boost::any_cast<bool>(m["UseMultiAccount"]));
    }
  }


  virtual ~GetTransitRouterFlowTopNShrinkRequest() = default;
};
class GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> bandwithPackageId{};
  shared_ptr<double> bytes{};
  shared_ptr<string> cenId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> otherRegion{};
  shared_ptr<double> packets{};
  shared_ptr<string> protocol{};
  shared_ptr<string> startTime{};
  shared_ptr<string> thisIp{};
  shared_ptr<string> thisPort{};
  shared_ptr<string> thisRegion{};

  GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN() {}

  explicit GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (bandwithPackageId) {
      res["BandwithPackageId"] = boost::any(*bandwithPackageId);
    }
    if (bytes) {
      res["Bytes"] = boost::any(*bytes);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (otherRegion) {
      res["OtherRegion"] = boost::any(*otherRegion);
    }
    if (packets) {
      res["Packets"] = boost::any(*packets);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (thisIp) {
      res["ThisIp"] = boost::any(*thisIp);
    }
    if (thisPort) {
      res["ThisPort"] = boost::any(*thisPort);
    }
    if (thisRegion) {
      res["ThisRegion"] = boost::any(*thisRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("BandwithPackageId") != m.end() && !m["BandwithPackageId"].empty()) {
      bandwithPackageId = make_shared<string>(boost::any_cast<string>(m["BandwithPackageId"]));
    }
    if (m.find("Bytes") != m.end() && !m["Bytes"].empty()) {
      bytes = make_shared<double>(boost::any_cast<double>(m["Bytes"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("OtherRegion") != m.end() && !m["OtherRegion"].empty()) {
      otherRegion = make_shared<string>(boost::any_cast<string>(m["OtherRegion"]));
    }
    if (m.find("Packets") != m.end() && !m["Packets"].empty()) {
      packets = make_shared<double>(boost::any_cast<double>(m["Packets"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ThisIp") != m.end() && !m["ThisIp"].empty()) {
      thisIp = make_shared<string>(boost::any_cast<string>(m["ThisIp"]));
    }
    if (m.find("ThisPort") != m.end() && !m["ThisPort"].empty()) {
      thisPort = make_shared<string>(boost::any_cast<string>(m["ThisPort"]));
    }
    if (m.find("ThisRegion") != m.end() && !m["ThisRegion"].empty()) {
      thisRegion = make_shared<string>(boost::any_cast<string>(m["ThisRegion"]));
    }
  }


  virtual ~GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN() = default;
};
class GetTransitRouterFlowTopNResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN>> transitRouterFlowTopN{};

  GetTransitRouterFlowTopNResponseBody() {}

  explicit GetTransitRouterFlowTopNResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transitRouterFlowTopN) {
      vector<boost::any> temp1;
      for(auto item1:*transitRouterFlowTopN){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitRouterFlowTopN"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransitRouterFlowTopN") != m.end() && !m["TransitRouterFlowTopN"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitRouterFlowTopN"].type()) {
        vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitRouterFlowTopN"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitRouterFlowTopN = make_shared<vector<GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN>>(expect1);
      }
    }
  }


  virtual ~GetTransitRouterFlowTopNResponseBody() = default;
};
class GetTransitRouterFlowTopNResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTransitRouterFlowTopNResponseBody> body{};

  GetTransitRouterFlowTopNResponse() {}

  explicit GetTransitRouterFlowTopNResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTransitRouterFlowTopNResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTransitRouterFlowTopNResponseBody>(model1);
      }
    }
  }


  virtual ~GetTransitRouterFlowTopNResponse() = default;
};
class GetVbrFlowTopNRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> attachmentId{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cloudIp{};
  shared_ptr<string> cloudPort{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sort{};
  shared_ptr<long> topN{};
  shared_ptr<bool> useMultiAccount{};
  shared_ptr<string> virtualBorderRouterId{};

  GetVbrFlowTopNRequest() {}

  explicit GetVbrFlowTopNRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (attachmentId) {
      res["AttachmentId"] = boost::any(*attachmentId);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cloudIp) {
      res["CloudIp"] = boost::any(*cloudIp);
    }
    if (cloudPort) {
      res["CloudPort"] = boost::any(*cloudPort);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (useMultiAccount) {
      res["UseMultiAccount"] = boost::any(*useMultiAccount);
    }
    if (virtualBorderRouterId) {
      res["VirtualBorderRouterId"] = boost::any(*virtualBorderRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("AttachmentId") != m.end() && !m["AttachmentId"].empty()) {
      attachmentId = make_shared<string>(boost::any_cast<string>(m["AttachmentId"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CloudIp") != m.end() && !m["CloudIp"].empty()) {
      cloudIp = make_shared<string>(boost::any_cast<string>(m["CloudIp"]));
    }
    if (m.find("CloudPort") != m.end() && !m["CloudPort"].empty()) {
      cloudPort = make_shared<string>(boost::any_cast<string>(m["CloudPort"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("UseMultiAccount") != m.end() && !m["UseMultiAccount"].empty()) {
      useMultiAccount = make_shared<bool>(boost::any_cast<bool>(m["UseMultiAccount"]));
    }
    if (m.find("VirtualBorderRouterId") != m.end() && !m["VirtualBorderRouterId"].empty()) {
      virtualBorderRouterId = make_shared<string>(boost::any_cast<string>(m["VirtualBorderRouterId"]));
    }
  }


  virtual ~GetVbrFlowTopNRequest() = default;
};
class GetVbrFlowTopNShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> attachmentId{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cloudIp{};
  shared_ptr<string> cloudPort{};
  shared_ptr<string> direction{};
  shared_ptr<long> endTime{};
  shared_ptr<string> groupBy{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherPort{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sort{};
  shared_ptr<long> topN{};
  shared_ptr<bool> useMultiAccount{};
  shared_ptr<string> virtualBorderRouterId{};

  GetVbrFlowTopNShrinkRequest() {}

  explicit GetVbrFlowTopNShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (attachmentId) {
      res["AttachmentId"] = boost::any(*attachmentId);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cloudIp) {
      res["CloudIp"] = boost::any(*cloudIp);
    }
    if (cloudPort) {
      res["CloudPort"] = boost::any(*cloudPort);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupBy) {
      res["GroupBy"] = boost::any(*groupBy);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (topN) {
      res["TopN"] = boost::any(*topN);
    }
    if (useMultiAccount) {
      res["UseMultiAccount"] = boost::any(*useMultiAccount);
    }
    if (virtualBorderRouterId) {
      res["VirtualBorderRouterId"] = boost::any(*virtualBorderRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("AttachmentId") != m.end() && !m["AttachmentId"].empty()) {
      attachmentId = make_shared<string>(boost::any_cast<string>(m["AttachmentId"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CloudIp") != m.end() && !m["CloudIp"].empty()) {
      cloudIp = make_shared<string>(boost::any_cast<string>(m["CloudIp"]));
    }
    if (m.find("CloudPort") != m.end() && !m["CloudPort"].empty()) {
      cloudPort = make_shared<string>(boost::any_cast<string>(m["CloudPort"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GroupBy") != m.end() && !m["GroupBy"].empty()) {
      groupBy = make_shared<string>(boost::any_cast<string>(m["GroupBy"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("TopN") != m.end() && !m["TopN"].empty()) {
      topN = make_shared<long>(boost::any_cast<long>(m["TopN"]));
    }
    if (m.find("UseMultiAccount") != m.end() && !m["UseMultiAccount"].empty()) {
      useMultiAccount = make_shared<bool>(boost::any_cast<bool>(m["UseMultiAccount"]));
    }
    if (m.find("VirtualBorderRouterId") != m.end() && !m["VirtualBorderRouterId"].empty()) {
      virtualBorderRouterId = make_shared<string>(boost::any_cast<string>(m["VirtualBorderRouterId"]));
    }
  }


  virtual ~GetVbrFlowTopNShrinkRequest() = default;
};
class GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> attachmentId{};
  shared_ptr<double> bytes{};
  shared_ptr<string> cloudIp{};
  shared_ptr<string> cloudPort{};
  shared_ptr<string> cloudRegion{};
  shared_ptr<string> otherIp{};
  shared_ptr<string> otherPort{};
  shared_ptr<double> packets{};
  shared_ptr<string> protocol{};
  shared_ptr<string> virtualBorderRouterId{};

  GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN() {}

  explicit GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (attachmentId) {
      res["AttachmentId"] = boost::any(*attachmentId);
    }
    if (bytes) {
      res["Bytes"] = boost::any(*bytes);
    }
    if (cloudIp) {
      res["CloudIp"] = boost::any(*cloudIp);
    }
    if (cloudPort) {
      res["CloudPort"] = boost::any(*cloudPort);
    }
    if (cloudRegion) {
      res["CloudRegion"] = boost::any(*cloudRegion);
    }
    if (otherIp) {
      res["OtherIp"] = boost::any(*otherIp);
    }
    if (otherPort) {
      res["OtherPort"] = boost::any(*otherPort);
    }
    if (packets) {
      res["Packets"] = boost::any(*packets);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (virtualBorderRouterId) {
      res["VirtualBorderRouterId"] = boost::any(*virtualBorderRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AttachmentId") != m.end() && !m["AttachmentId"].empty()) {
      attachmentId = make_shared<string>(boost::any_cast<string>(m["AttachmentId"]));
    }
    if (m.find("Bytes") != m.end() && !m["Bytes"].empty()) {
      bytes = make_shared<double>(boost::any_cast<double>(m["Bytes"]));
    }
    if (m.find("CloudIp") != m.end() && !m["CloudIp"].empty()) {
      cloudIp = make_shared<string>(boost::any_cast<string>(m["CloudIp"]));
    }
    if (m.find("CloudPort") != m.end() && !m["CloudPort"].empty()) {
      cloudPort = make_shared<string>(boost::any_cast<string>(m["CloudPort"]));
    }
    if (m.find("CloudRegion") != m.end() && !m["CloudRegion"].empty()) {
      cloudRegion = make_shared<string>(boost::any_cast<string>(m["CloudRegion"]));
    }
    if (m.find("OtherIp") != m.end() && !m["OtherIp"].empty()) {
      otherIp = make_shared<string>(boost::any_cast<string>(m["OtherIp"]));
    }
    if (m.find("OtherPort") != m.end() && !m["OtherPort"].empty()) {
      otherPort = make_shared<string>(boost::any_cast<string>(m["OtherPort"]));
    }
    if (m.find("Packets") != m.end() && !m["Packets"].empty()) {
      packets = make_shared<double>(boost::any_cast<double>(m["Packets"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("VirtualBorderRouterId") != m.end() && !m["VirtualBorderRouterId"].empty()) {
      virtualBorderRouterId = make_shared<string>(boost::any_cast<string>(m["VirtualBorderRouterId"]));
    }
  }


  virtual ~GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN() = default;
};
class GetVbrFlowTopNResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN>> virtualBorderRouterFlowlogTopN{};

  GetVbrFlowTopNResponseBody() {}

  explicit GetVbrFlowTopNResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (virtualBorderRouterFlowlogTopN) {
      vector<boost::any> temp1;
      for(auto item1:*virtualBorderRouterFlowlogTopN){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualBorderRouterFlowlogTopN"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VirtualBorderRouterFlowlogTopN") != m.end() && !m["VirtualBorderRouterFlowlogTopN"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualBorderRouterFlowlogTopN"].type()) {
        vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualBorderRouterFlowlogTopN"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualBorderRouterFlowlogTopN = make_shared<vector<GetVbrFlowTopNResponseBodyVirtualBorderRouterFlowlogTopN>>(expect1);
      }
    }
  }


  virtual ~GetVbrFlowTopNResponseBody() = default;
};
class GetVbrFlowTopNResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVbrFlowTopNResponseBody> body{};

  GetVbrFlowTopNResponse() {}

  explicit GetVbrFlowTopNResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVbrFlowTopNResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVbrFlowTopNResponseBody>(model1);
      }
    }
  }


  virtual ~GetVbrFlowTopNResponse() = default;
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
  CreateAndAnalyzeNetworkPathResponse createAndAnalyzeNetworkPathWithOptions(shared_ptr<CreateAndAnalyzeNetworkPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAndAnalyzeNetworkPathResponse createAndAnalyzeNetworkPath(shared_ptr<CreateAndAnalyzeNetworkPathRequest> request);
  CreateNetworkPathResponse createNetworkPathWithOptions(shared_ptr<CreateNetworkPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNetworkPathResponse createNetworkPath(shared_ptr<CreateNetworkPathRequest> request);
  CreateNetworkReachableAnalysisResponse createNetworkReachableAnalysisWithOptions(shared_ptr<CreateNetworkReachableAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNetworkReachableAnalysisResponse createNetworkReachableAnalysis(shared_ptr<CreateNetworkReachableAnalysisRequest> request);
  DeleteNetworkPathResponse deleteNetworkPathWithOptions(shared_ptr<DeleteNetworkPathRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNetworkPathResponse deleteNetworkPath(shared_ptr<DeleteNetworkPathRequest> request);
  DeleteNetworkReachableAnalysisResponse deleteNetworkReachableAnalysisWithOptions(shared_ptr<DeleteNetworkReachableAnalysisRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNetworkReachableAnalysisResponse deleteNetworkReachableAnalysis(shared_ptr<DeleteNetworkReachableAnalysisRequest> request);
  GetInternetTupleResponse getInternetTupleWithOptions(shared_ptr<GetInternetTupleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInternetTupleResponse getInternetTuple(shared_ptr<GetInternetTupleRequest> request);
  GetNatTopNResponse getNatTopNWithOptions(shared_ptr<GetNatTopNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNatTopNResponse getNatTopN(shared_ptr<GetNatTopNRequest> request);
  GetNetworkReachableAnalysisResponse getNetworkReachableAnalysisWithOptions(shared_ptr<GetNetworkReachableAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNetworkReachableAnalysisResponse getNetworkReachableAnalysis(shared_ptr<GetNetworkReachableAnalysisRequest> request);
  GetNisNetworkMetricsResponse getNisNetworkMetricsWithOptions(shared_ptr<GetNisNetworkMetricsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNisNetworkMetricsResponse getNisNetworkMetrics(shared_ptr<GetNisNetworkMetricsRequest> request);
  GetNisNetworkRankingResponse getNisNetworkRankingWithOptions(shared_ptr<GetNisNetworkRankingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNisNetworkRankingResponse getNisNetworkRanking(shared_ptr<GetNisNetworkRankingRequest> request);
  GetTransitRouterFlowTopNResponse getTransitRouterFlowTopNWithOptions(shared_ptr<GetTransitRouterFlowTopNRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTransitRouterFlowTopNResponse getTransitRouterFlowTopN(shared_ptr<GetTransitRouterFlowTopNRequest> request);
  GetVbrFlowTopNResponse getVbrFlowTopNWithOptions(shared_ptr<GetVbrFlowTopNRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVbrFlowTopNResponse getVbrFlowTopN(shared_ptr<GetVbrFlowTopNRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Nis20211216

#endif
