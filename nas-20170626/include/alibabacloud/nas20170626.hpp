// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NAS20170626_H_
#define ALIBABACLOUD_NAS20170626_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_NAS20170626 {
class AddClientToBlackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIP{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> regionId{};

  AddClientToBlackListRequest() {}

  explicit AddClientToBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddClientToBlackListRequest() = default;
};
class AddClientToBlackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddClientToBlackListResponseBody() {}

  explicit AddClientToBlackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddClientToBlackListResponseBody() = default;
};
class AddClientToBlackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddClientToBlackListResponseBody> body{};

  AddClientToBlackListResponse() {}

  explicit AddClientToBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddClientToBlackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddClientToBlackListResponseBody>(model1);
      }
    }
  }


  virtual ~AddClientToBlackListResponse() = default;
};
class AddTagsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddTagsRequestTag() {}

  explicit AddTagsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddTagsRequestTag() = default;
};
class AddTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<AddTagsRequestTag>> tag{};

  AddTagsRequest() {}

  explicit AddTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<AddTagsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddTagsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<AddTagsRequestTag>>(expect1);
      }
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
  shared_ptr<long> statusCode{};
  shared_ptr<AddTagsResponseBody> body{};

  AddTagsResponse() {}

  explicit AddTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTagsResponseBody>(model1);
      }
    }
  }


  virtual ~AddTagsResponse() = default;
};
class ApplyAutoSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> fileSystemIds{};

  ApplyAutoSnapshotPolicyRequest() {}

  explicit ApplyAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (fileSystemIds) {
      res["FileSystemIds"] = boost::any(*fileSystemIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("FileSystemIds") != m.end() && !m["FileSystemIds"].empty()) {
      fileSystemIds = make_shared<string>(boost::any_cast<string>(m["FileSystemIds"]));
    }
  }


  virtual ~ApplyAutoSnapshotPolicyRequest() = default;
};
class ApplyAutoSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ApplyAutoSnapshotPolicyResponseBody() {}

  explicit ApplyAutoSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApplyAutoSnapshotPolicyResponseBody() = default;
};
class ApplyAutoSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyAutoSnapshotPolicyResponseBody> body{};

  ApplyAutoSnapshotPolicyResponse() {}

  explicit ApplyAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyAutoSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyAutoSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyAutoSnapshotPolicyResponse() = default;
};
class ApplyDataFlowAutoRefreshRequestAutoRefreshs : public Darabonba::Model {
public:
  shared_ptr<string> refreshPath{};

  ApplyDataFlowAutoRefreshRequestAutoRefreshs() {}

  explicit ApplyDataFlowAutoRefreshRequestAutoRefreshs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refreshPath) {
      res["RefreshPath"] = boost::any(*refreshPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RefreshPath") != m.end() && !m["RefreshPath"].empty()) {
      refreshPath = make_shared<string>(boost::any_cast<string>(m["RefreshPath"]));
    }
  }


  virtual ~ApplyDataFlowAutoRefreshRequestAutoRefreshs() = default;
};
class ApplyDataFlowAutoRefreshRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoRefreshInterval{};
  shared_ptr<string> autoRefreshPolicy{};
  shared_ptr<vector<ApplyDataFlowAutoRefreshRequestAutoRefreshs>> autoRefreshs{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};

  ApplyDataFlowAutoRefreshRequest() {}

  explicit ApplyDataFlowAutoRefreshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRefreshInterval) {
      res["AutoRefreshInterval"] = boost::any(*autoRefreshInterval);
    }
    if (autoRefreshPolicy) {
      res["AutoRefreshPolicy"] = boost::any(*autoRefreshPolicy);
    }
    if (autoRefreshs) {
      vector<boost::any> temp1;
      for(auto item1:*autoRefreshs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoRefreshs"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRefreshInterval") != m.end() && !m["AutoRefreshInterval"].empty()) {
      autoRefreshInterval = make_shared<long>(boost::any_cast<long>(m["AutoRefreshInterval"]));
    }
    if (m.find("AutoRefreshPolicy") != m.end() && !m["AutoRefreshPolicy"].empty()) {
      autoRefreshPolicy = make_shared<string>(boost::any_cast<string>(m["AutoRefreshPolicy"]));
    }
    if (m.find("AutoRefreshs") != m.end() && !m["AutoRefreshs"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoRefreshs"].type()) {
        vector<ApplyDataFlowAutoRefreshRequestAutoRefreshs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoRefreshs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyDataFlowAutoRefreshRequestAutoRefreshs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoRefreshs = make_shared<vector<ApplyDataFlowAutoRefreshRequestAutoRefreshs>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~ApplyDataFlowAutoRefreshRequest() = default;
};
class ApplyDataFlowAutoRefreshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ApplyDataFlowAutoRefreshResponseBody() {}

  explicit ApplyDataFlowAutoRefreshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApplyDataFlowAutoRefreshResponseBody() = default;
};
class ApplyDataFlowAutoRefreshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyDataFlowAutoRefreshResponseBody> body{};

  ApplyDataFlowAutoRefreshResponse() {}

  explicit ApplyDataFlowAutoRefreshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyDataFlowAutoRefreshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyDataFlowAutoRefreshResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyDataFlowAutoRefreshResponse() = default;
};
class CancelAutoSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemIds{};

  CancelAutoSnapshotPolicyRequest() {}

  explicit CancelAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemIds) {
      res["FileSystemIds"] = boost::any(*fileSystemIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemIds") != m.end() && !m["FileSystemIds"].empty()) {
      fileSystemIds = make_shared<string>(boost::any_cast<string>(m["FileSystemIds"]));
    }
  }


  virtual ~CancelAutoSnapshotPolicyRequest() = default;
};
class CancelAutoSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelAutoSnapshotPolicyResponseBody() {}

  explicit CancelAutoSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelAutoSnapshotPolicyResponseBody() = default;
};
class CancelAutoSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelAutoSnapshotPolicyResponseBody> body{};

  CancelAutoSnapshotPolicyResponse() {}

  explicit CancelAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelAutoSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelAutoSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CancelAutoSnapshotPolicyResponse() = default;
};
class CancelDataFlowAutoRefreshRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> refreshPath{};

  CancelDataFlowAutoRefreshRequest() {}

  explicit CancelDataFlowAutoRefreshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (refreshPath) {
      res["RefreshPath"] = boost::any(*refreshPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("RefreshPath") != m.end() && !m["RefreshPath"].empty()) {
      refreshPath = make_shared<string>(boost::any_cast<string>(m["RefreshPath"]));
    }
  }


  virtual ~CancelDataFlowAutoRefreshRequest() = default;
};
class CancelDataFlowAutoRefreshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelDataFlowAutoRefreshResponseBody() {}

  explicit CancelDataFlowAutoRefreshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelDataFlowAutoRefreshResponseBody() = default;
};
class CancelDataFlowAutoRefreshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelDataFlowAutoRefreshResponseBody> body{};

  CancelDataFlowAutoRefreshResponse() {}

  explicit CancelDataFlowAutoRefreshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelDataFlowAutoRefreshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelDataFlowAutoRefreshResponseBody>(model1);
      }
    }
  }


  virtual ~CancelDataFlowAutoRefreshResponse() = default;
};
class CancelDataFlowSubTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> dataFlowSubTaskId{};
  shared_ptr<string> dataFlowTaskId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};

  CancelDataFlowSubTaskRequest() {}

  explicit CancelDataFlowSubTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dataFlowSubTaskId) {
      res["DataFlowSubTaskId"] = boost::any(*dataFlowSubTaskId);
    }
    if (dataFlowTaskId) {
      res["DataFlowTaskId"] = boost::any(*dataFlowTaskId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DataFlowSubTaskId") != m.end() && !m["DataFlowSubTaskId"].empty()) {
      dataFlowSubTaskId = make_shared<string>(boost::any_cast<string>(m["DataFlowSubTaskId"]));
    }
    if (m.find("DataFlowTaskId") != m.end() && !m["DataFlowTaskId"].empty()) {
      dataFlowTaskId = make_shared<string>(boost::any_cast<string>(m["DataFlowTaskId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~CancelDataFlowSubTaskRequest() = default;
};
class CancelDataFlowSubTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelDataFlowSubTaskResponseBody() {}

  explicit CancelDataFlowSubTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelDataFlowSubTaskResponseBody() = default;
};
class CancelDataFlowSubTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelDataFlowSubTaskResponseBody> body{};

  CancelDataFlowSubTaskResponse() {}

  explicit CancelDataFlowSubTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelDataFlowSubTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelDataFlowSubTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelDataFlowSubTaskResponse() = default;
};
class CancelDataFlowTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> taskId{};

  CancelDataFlowTaskRequest() {}

  explicit CancelDataFlowTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancelDataFlowTaskRequest() = default;
};
class CancelDataFlowTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelDataFlowTaskResponseBody() {}

  explicit CancelDataFlowTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelDataFlowTaskResponseBody() = default;
};
class CancelDataFlowTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelDataFlowTaskResponseBody> body{};

  CancelDataFlowTaskResponse() {}

  explicit CancelDataFlowTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelDataFlowTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelDataFlowTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelDataFlowTaskResponse() = default;
};
class CancelDirQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> path{};
  shared_ptr<string> userId{};
  shared_ptr<string> userType{};

  CancelDirQuotaRequest() {}

  explicit CancelDirQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~CancelDirQuotaRequest() = default;
};
class CancelDirQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelDirQuotaResponseBody() {}

  explicit CancelDirQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelDirQuotaResponseBody() = default;
};
class CancelDirQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelDirQuotaResponseBody> body{};

  CancelDirQuotaResponse() {}

  explicit CancelDirQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelDirQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelDirQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~CancelDirQuotaResponse() = default;
};
class CancelFilesetQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fsetId{};

  CancelFilesetQuotaRequest() {}

  explicit CancelFilesetQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
  }


  virtual ~CancelFilesetQuotaRequest() = default;
};
class CancelFilesetQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelFilesetQuotaResponseBody() {}

  explicit CancelFilesetQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelFilesetQuotaResponseBody() = default;
};
class CancelFilesetQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelFilesetQuotaResponseBody> body{};

  CancelFilesetQuotaResponse() {}

  explicit CancelFilesetQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelFilesetQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelFilesetQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~CancelFilesetQuotaResponse() = default;
};
class CancelLifecycleRetrieveJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  CancelLifecycleRetrieveJobRequest() {}

  explicit CancelLifecycleRetrieveJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CancelLifecycleRetrieveJobRequest() = default;
};
class CancelLifecycleRetrieveJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelLifecycleRetrieveJobResponseBody() {}

  explicit CancelLifecycleRetrieveJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelLifecycleRetrieveJobResponseBody() = default;
};
class CancelLifecycleRetrieveJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelLifecycleRetrieveJobResponseBody> body{};

  CancelLifecycleRetrieveJobResponse() {}

  explicit CancelLifecycleRetrieveJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelLifecycleRetrieveJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelLifecycleRetrieveJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelLifecycleRetrieveJobResponse() = default;
};
class CancelRecycleBinJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  CancelRecycleBinJobRequest() {}

  explicit CancelRecycleBinJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CancelRecycleBinJobRequest() = default;
};
class CancelRecycleBinJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelRecycleBinJobResponseBody() {}

  explicit CancelRecycleBinJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelRecycleBinJobResponseBody() = default;
};
class CancelRecycleBinJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelRecycleBinJobResponseBody> body{};

  CancelRecycleBinJobResponse() {}

  explicit CancelRecycleBinJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelRecycleBinJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelRecycleBinJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelRecycleBinJobResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CreateAccessGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessGroupType{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemType{};

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
    if (accessGroupType) {
      res["AccessGroupType"] = boost::any(*accessGroupType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("AccessGroupType") != m.end() && !m["AccessGroupType"].empty()) {
      accessGroupType = make_shared<string>(boost::any_cast<string>(m["AccessGroupType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
  }


  virtual ~CreateAccessGroupRequest() = default;
};
class CreateAccessGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> requestId{};

  CreateAccessGroupResponseBody() {}

  explicit CreateAccessGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
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
class CreateAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroup{};
  shared_ptr<string> accessPointName{};
  shared_ptr<bool> enabledRam{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> ownerGroupId{};
  shared_ptr<long> ownerUserId{};
  shared_ptr<string> permission{};
  shared_ptr<long> posixGroupId{};
  shared_ptr<string> posixSecondaryGroupIds{};
  shared_ptr<long> posixUserId{};
  shared_ptr<string> rootDirectory{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};

  CreateAccessPointRequest() {}

  explicit CreateAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (accessPointName) {
      res["AccessPointName"] = boost::any(*accessPointName);
    }
    if (enabledRam) {
      res["EnabledRam"] = boost::any(*enabledRam);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (ownerGroupId) {
      res["OwnerGroupId"] = boost::any(*ownerGroupId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (posixGroupId) {
      res["PosixGroupId"] = boost::any(*posixGroupId);
    }
    if (posixSecondaryGroupIds) {
      res["PosixSecondaryGroupIds"] = boost::any(*posixSecondaryGroupIds);
    }
    if (posixUserId) {
      res["PosixUserId"] = boost::any(*posixUserId);
    }
    if (rootDirectory) {
      res["RootDirectory"] = boost::any(*rootDirectory);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("AccessPointName") != m.end() && !m["AccessPointName"].empty()) {
      accessPointName = make_shared<string>(boost::any_cast<string>(m["AccessPointName"]));
    }
    if (m.find("EnabledRam") != m.end() && !m["EnabledRam"].empty()) {
      enabledRam = make_shared<bool>(boost::any_cast<bool>(m["EnabledRam"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("OwnerGroupId") != m.end() && !m["OwnerGroupId"].empty()) {
      ownerGroupId = make_shared<long>(boost::any_cast<long>(m["OwnerGroupId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<long>(boost::any_cast<long>(m["OwnerUserId"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("PosixGroupId") != m.end() && !m["PosixGroupId"].empty()) {
      posixGroupId = make_shared<long>(boost::any_cast<long>(m["PosixGroupId"]));
    }
    if (m.find("PosixSecondaryGroupIds") != m.end() && !m["PosixSecondaryGroupIds"].empty()) {
      posixSecondaryGroupIds = make_shared<string>(boost::any_cast<string>(m["PosixSecondaryGroupIds"]));
    }
    if (m.find("PosixUserId") != m.end() && !m["PosixUserId"].empty()) {
      posixUserId = make_shared<long>(boost::any_cast<long>(m["PosixUserId"]));
    }
    if (m.find("RootDirectory") != m.end() && !m["RootDirectory"].empty()) {
      rootDirectory = make_shared<string>(boost::any_cast<string>(m["RootDirectory"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
  }


  virtual ~CreateAccessPointRequest() = default;
};
class CreateAccessPointResponseBodyAccessPoint : public Darabonba::Model {
public:
  shared_ptr<string> accessPointDomain{};
  shared_ptr<string> accessPointId{};

  CreateAccessPointResponseBodyAccessPoint() {}

  explicit CreateAccessPointResponseBodyAccessPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointDomain) {
      res["AccessPointDomain"] = boost::any(*accessPointDomain);
    }
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointDomain") != m.end() && !m["AccessPointDomain"].empty()) {
      accessPointDomain = make_shared<string>(boost::any_cast<string>(m["AccessPointDomain"]));
    }
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
  }


  virtual ~CreateAccessPointResponseBodyAccessPoint() = default;
};
class CreateAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAccessPointResponseBodyAccessPoint> accessPoint{};
  shared_ptr<string> requestId{};

  CreateAccessPointResponseBody() {}

  explicit CreateAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPoint) {
      res["AccessPoint"] = accessPoint ? boost::any(accessPoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPoint") != m.end() && !m["AccessPoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessPoint"].type()) {
        CreateAccessPointResponseBodyAccessPoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessPoint"]));
        accessPoint = make_shared<CreateAccessPointResponseBodyAccessPoint>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessPointResponseBody() = default;
};
class CreateAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessPointResponseBody> body{};

  CreateAccessPointResponse() {}

  explicit CreateAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessPointResponse() = default;
};
class CreateAccessRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> ipv6SourceCidrIp{};
  shared_ptr<long> priority{};
  shared_ptr<string> RWAccessType{};
  shared_ptr<string> sourceCidrIp{};
  shared_ptr<string> userAccessType{};

  CreateAccessRuleRequest() {}

  explicit CreateAccessRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (ipv6SourceCidrIp) {
      res["Ipv6SourceCidrIp"] = boost::any(*ipv6SourceCidrIp);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    if (userAccessType) {
      res["UserAccessType"] = boost::any(*userAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("Ipv6SourceCidrIp") != m.end() && !m["Ipv6SourceCidrIp"].empty()) {
      ipv6SourceCidrIp = make_shared<string>(boost::any_cast<string>(m["Ipv6SourceCidrIp"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
    if (m.find("UserAccessType") != m.end() && !m["UserAccessType"].empty()) {
      userAccessType = make_shared<string>(boost::any_cast<string>(m["UserAccessType"]));
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
class CreateAutoSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyName{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> repeatWeekdays{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> timePoints{};

  CreateAutoSnapshotPolicyRequest() {}

  explicit CreateAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyName) {
      res["AutoSnapshotPolicyName"] = boost::any(*autoSnapshotPolicyName);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (repeatWeekdays) {
      res["RepeatWeekdays"] = boost::any(*repeatWeekdays);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (timePoints) {
      res["TimePoints"] = boost::any(*timePoints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyName") != m.end() && !m["AutoSnapshotPolicyName"].empty()) {
      autoSnapshotPolicyName = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyName"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("RepeatWeekdays") != m.end() && !m["RepeatWeekdays"].empty()) {
      repeatWeekdays = make_shared<string>(boost::any_cast<string>(m["RepeatWeekdays"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("TimePoints") != m.end() && !m["TimePoints"].empty()) {
      timePoints = make_shared<string>(boost::any_cast<string>(m["TimePoints"]));
    }
  }


  virtual ~CreateAutoSnapshotPolicyRequest() = default;
};
class CreateAutoSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> requestId{};

  CreateAutoSnapshotPolicyResponseBody() {}

  explicit CreateAutoSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAutoSnapshotPolicyResponseBody() = default;
};
class CreateAutoSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAutoSnapshotPolicyResponseBody> body{};

  CreateAutoSnapshotPolicyResponse() {}

  explicit CreateAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAutoSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAutoSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAutoSnapshotPolicyResponse() = default;
};
class CreateDataFlowRequestAutoRefreshs : public Darabonba::Model {
public:
  shared_ptr<string> refreshPath{};

  CreateDataFlowRequestAutoRefreshs() {}

  explicit CreateDataFlowRequestAutoRefreshs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refreshPath) {
      res["RefreshPath"] = boost::any(*refreshPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RefreshPath") != m.end() && !m["RefreshPath"].empty()) {
      refreshPath = make_shared<string>(boost::any_cast<string>(m["RefreshPath"]));
    }
  }


  virtual ~CreateDataFlowRequestAutoRefreshs() = default;
};
class CreateDataFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoRefreshInterval{};
  shared_ptr<string> autoRefreshPolicy{};
  shared_ptr<vector<CreateDataFlowRequestAutoRefreshs>> autoRefreshs{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemPath{};
  shared_ptr<string> fsetId{};
  shared_ptr<string> sourceSecurityType{};
  shared_ptr<string> sourceStorage{};
  shared_ptr<string> sourceStoragePath{};
  shared_ptr<long> throughput{};

  CreateDataFlowRequest() {}

  explicit CreateDataFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRefreshInterval) {
      res["AutoRefreshInterval"] = boost::any(*autoRefreshInterval);
    }
    if (autoRefreshPolicy) {
      res["AutoRefreshPolicy"] = boost::any(*autoRefreshPolicy);
    }
    if (autoRefreshs) {
      vector<boost::any> temp1;
      for(auto item1:*autoRefreshs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoRefreshs"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemPath) {
      res["FileSystemPath"] = boost::any(*fileSystemPath);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    if (sourceSecurityType) {
      res["SourceSecurityType"] = boost::any(*sourceSecurityType);
    }
    if (sourceStorage) {
      res["SourceStorage"] = boost::any(*sourceStorage);
    }
    if (sourceStoragePath) {
      res["SourceStoragePath"] = boost::any(*sourceStoragePath);
    }
    if (throughput) {
      res["Throughput"] = boost::any(*throughput);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRefreshInterval") != m.end() && !m["AutoRefreshInterval"].empty()) {
      autoRefreshInterval = make_shared<long>(boost::any_cast<long>(m["AutoRefreshInterval"]));
    }
    if (m.find("AutoRefreshPolicy") != m.end() && !m["AutoRefreshPolicy"].empty()) {
      autoRefreshPolicy = make_shared<string>(boost::any_cast<string>(m["AutoRefreshPolicy"]));
    }
    if (m.find("AutoRefreshs") != m.end() && !m["AutoRefreshs"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoRefreshs"].type()) {
        vector<CreateDataFlowRequestAutoRefreshs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoRefreshs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataFlowRequestAutoRefreshs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoRefreshs = make_shared<vector<CreateDataFlowRequestAutoRefreshs>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemPath") != m.end() && !m["FileSystemPath"].empty()) {
      fileSystemPath = make_shared<string>(boost::any_cast<string>(m["FileSystemPath"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
    if (m.find("SourceSecurityType") != m.end() && !m["SourceSecurityType"].empty()) {
      sourceSecurityType = make_shared<string>(boost::any_cast<string>(m["SourceSecurityType"]));
    }
    if (m.find("SourceStorage") != m.end() && !m["SourceStorage"].empty()) {
      sourceStorage = make_shared<string>(boost::any_cast<string>(m["SourceStorage"]));
    }
    if (m.find("SourceStoragePath") != m.end() && !m["SourceStoragePath"].empty()) {
      sourceStoragePath = make_shared<string>(boost::any_cast<string>(m["SourceStoragePath"]));
    }
    if (m.find("Throughput") != m.end() && !m["Throughput"].empty()) {
      throughput = make_shared<long>(boost::any_cast<long>(m["Throughput"]));
    }
  }


  virtual ~CreateDataFlowRequest() = default;
};
class CreateDataFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> requestId{};

  CreateDataFlowResponseBody() {}

  explicit CreateDataFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataFlowResponseBody() = default;
};
class CreateDataFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataFlowResponseBody> body{};

  CreateDataFlowResponse() {}

  explicit CreateDataFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataFlowResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataFlowResponse() = default;
};
class CreateDataFlowSubTaskRequestCondition : public Darabonba::Model {
public:
  shared_ptr<long> modifyTime{};
  shared_ptr<long> size{};

  CreateDataFlowSubTaskRequestCondition() {}

  explicit CreateDataFlowSubTaskRequestCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~CreateDataFlowSubTaskRequestCondition() = default;
};
class CreateDataFlowSubTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<CreateDataFlowSubTaskRequestCondition> condition{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> dataFlowTaskId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> dstFilePath{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> srcFilePath{};

  CreateDataFlowSubTaskRequest() {}

  explicit CreateDataFlowSubTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (condition) {
      res["Condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dataFlowTaskId) {
      res["DataFlowTaskId"] = boost::any(*dataFlowTaskId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (dstFilePath) {
      res["DstFilePath"] = boost::any(*dstFilePath);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (srcFilePath) {
      res["SrcFilePath"] = boost::any(*srcFilePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["Condition"].type()) {
        CreateDataFlowSubTaskRequestCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Condition"]));
        condition = make_shared<CreateDataFlowSubTaskRequestCondition>(model1);
      }
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DataFlowTaskId") != m.end() && !m["DataFlowTaskId"].empty()) {
      dataFlowTaskId = make_shared<string>(boost::any_cast<string>(m["DataFlowTaskId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("DstFilePath") != m.end() && !m["DstFilePath"].empty()) {
      dstFilePath = make_shared<string>(boost::any_cast<string>(m["DstFilePath"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("SrcFilePath") != m.end() && !m["SrcFilePath"].empty()) {
      srcFilePath = make_shared<string>(boost::any_cast<string>(m["SrcFilePath"]));
    }
  }


  virtual ~CreateDataFlowSubTaskRequest() = default;
};
class CreateDataFlowSubTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataFlowSubTaskId{};
  shared_ptr<string> requestId{};

  CreateDataFlowSubTaskResponseBody() {}

  explicit CreateDataFlowSubTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFlowSubTaskId) {
      res["DataFlowSubTaskId"] = boost::any(*dataFlowSubTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFlowSubTaskId") != m.end() && !m["DataFlowSubTaskId"].empty()) {
      dataFlowSubTaskId = make_shared<string>(boost::any_cast<string>(m["DataFlowSubTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataFlowSubTaskResponseBody() = default;
};
class CreateDataFlowSubTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataFlowSubTaskResponseBody> body{};

  CreateDataFlowSubTaskResponse() {}

  explicit CreateDataFlowSubTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataFlowSubTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataFlowSubTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataFlowSubTaskResponse() = default;
};
class CreateDataFlowTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> conflictPolicy{};
  shared_ptr<bool> createDirIfNotExist{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> dataType{};
  shared_ptr<string> directory{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> dstDirectory{};
  shared_ptr<string> entryList{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> srcTaskId{};
  shared_ptr<string> taskAction{};

  CreateDataFlowTaskRequest() {}

  explicit CreateDataFlowTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (conflictPolicy) {
      res["ConflictPolicy"] = boost::any(*conflictPolicy);
    }
    if (createDirIfNotExist) {
      res["CreateDirIfNotExist"] = boost::any(*createDirIfNotExist);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (dstDirectory) {
      res["DstDirectory"] = boost::any(*dstDirectory);
    }
    if (entryList) {
      res["EntryList"] = boost::any(*entryList);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (srcTaskId) {
      res["SrcTaskId"] = boost::any(*srcTaskId);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConflictPolicy") != m.end() && !m["ConflictPolicy"].empty()) {
      conflictPolicy = make_shared<string>(boost::any_cast<string>(m["ConflictPolicy"]));
    }
    if (m.find("CreateDirIfNotExist") != m.end() && !m["CreateDirIfNotExist"].empty()) {
      createDirIfNotExist = make_shared<bool>(boost::any_cast<bool>(m["CreateDirIfNotExist"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("DstDirectory") != m.end() && !m["DstDirectory"].empty()) {
      dstDirectory = make_shared<string>(boost::any_cast<string>(m["DstDirectory"]));
    }
    if (m.find("EntryList") != m.end() && !m["EntryList"].empty()) {
      entryList = make_shared<string>(boost::any_cast<string>(m["EntryList"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("SrcTaskId") != m.end() && !m["SrcTaskId"].empty()) {
      srcTaskId = make_shared<string>(boost::any_cast<string>(m["SrcTaskId"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
  }


  virtual ~CreateDataFlowTaskRequest() = default;
};
class CreateDataFlowTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateDataFlowTaskResponseBody() {}

  explicit CreateDataFlowTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateDataFlowTaskResponseBody() = default;
};
class CreateDataFlowTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataFlowTaskResponseBody> body{};

  CreateDataFlowTaskResponse() {}

  explicit CreateDataFlowTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataFlowTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataFlowTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataFlowTaskResponse() = default;
};
class CreateDirRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> ownerGroupId{};
  shared_ptr<long> ownerUserId{};
  shared_ptr<string> permission{};
  shared_ptr<bool> recursion{};
  shared_ptr<string> rootDirectory{};

  CreateDirRequest() {}

  explicit CreateDirRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (ownerGroupId) {
      res["OwnerGroupId"] = boost::any(*ownerGroupId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (recursion) {
      res["Recursion"] = boost::any(*recursion);
    }
    if (rootDirectory) {
      res["RootDirectory"] = boost::any(*rootDirectory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("OwnerGroupId") != m.end() && !m["OwnerGroupId"].empty()) {
      ownerGroupId = make_shared<long>(boost::any_cast<long>(m["OwnerGroupId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<long>(boost::any_cast<long>(m["OwnerUserId"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("Recursion") != m.end() && !m["Recursion"].empty()) {
      recursion = make_shared<bool>(boost::any_cast<bool>(m["Recursion"]));
    }
    if (m.find("RootDirectory") != m.end() && !m["RootDirectory"].empty()) {
      rootDirectory = make_shared<string>(boost::any_cast<string>(m["RootDirectory"]));
    }
  }


  virtual ~CreateDirRequest() = default;
};
class CreateDirResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDirResponseBody() {}

  explicit CreateDirResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDirResponseBody() = default;
};
class CreateDirResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDirResponseBody> body{};

  CreateDirResponse() {}

  explicit CreateDirResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDirResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDirResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDirResponse() = default;
};
class CreateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> owner{};
  shared_ptr<bool> ownerAccessInheritable{};
  shared_ptr<string> path{};
  shared_ptr<string> type{};

  CreateFileRequest() {}

  explicit CreateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerAccessInheritable) {
      res["OwnerAccessInheritable"] = boost::any(*ownerAccessInheritable);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerAccessInheritable") != m.end() && !m["OwnerAccessInheritable"].empty()) {
      ownerAccessInheritable = make_shared<bool>(boost::any_cast<bool>(m["OwnerAccessInheritable"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateFileRequest() = default;
};
class CreateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateFileResponseBody() {}

  explicit CreateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateFileResponseBody() = default;
};
class CreateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFileResponseBody> body{};

  CreateFileResponse() {}

  explicit CreateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFileResponse() = default;
};
class CreateFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<long> capacity{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> duration{};
  shared_ptr<long> encryptType{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> storageType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateFileSystemRequest() {}

  explicit CreateFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
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
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
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
class CreateFilesetRequestQuota : public Darabonba::Model {
public:
  shared_ptr<long> fileCountLimit{};
  shared_ptr<long> sizeLimit{};

  CreateFilesetRequestQuota() {}

  explicit CreateFilesetRequestQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileCountLimit) {
      res["FileCountLimit"] = boost::any(*fileCountLimit);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileCountLimit") != m.end() && !m["FileCountLimit"].empty()) {
      fileCountLimit = make_shared<long>(boost::any_cast<long>(m["FileCountLimit"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<long>(boost::any_cast<long>(m["SizeLimit"]));
    }
  }


  virtual ~CreateFilesetRequestQuota() = default;
};
class CreateFilesetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemPath{};
  shared_ptr<CreateFilesetRequestQuota> quota{};

  CreateFilesetRequest() {}

  explicit CreateFilesetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemPath) {
      res["FileSystemPath"] = boost::any(*fileSystemPath);
    }
    if (quota) {
      res["Quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemPath") != m.end() && !m["FileSystemPath"].empty()) {
      fileSystemPath = make_shared<string>(boost::any_cast<string>(m["FileSystemPath"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quota"].type()) {
        CreateFilesetRequestQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quota"]));
        quota = make_shared<CreateFilesetRequestQuota>(model1);
      }
    }
  }


  virtual ~CreateFilesetRequest() = default;
};
class CreateFilesetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fsetId{};
  shared_ptr<string> requestId{};

  CreateFilesetResponseBody() {}

  explicit CreateFilesetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFilesetResponseBody() = default;
};
class CreateFilesetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFilesetResponseBody> body{};

  CreateFilesetResponse() {}

  explicit CreateFilesetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFilesetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFilesetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFilesetResponse() = default;
};
class CreateLDAPConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> bindDN{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> searchBase{};
  shared_ptr<string> URI{};

  CreateLDAPConfigRequest() {}

  explicit CreateLDAPConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindDN) {
      res["BindDN"] = boost::any(*bindDN);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (searchBase) {
      res["SearchBase"] = boost::any(*searchBase);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindDN") != m.end() && !m["BindDN"].empty()) {
      bindDN = make_shared<string>(boost::any_cast<string>(m["BindDN"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("SearchBase") != m.end() && !m["SearchBase"].empty()) {
      searchBase = make_shared<string>(boost::any_cast<string>(m["SearchBase"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateLDAPConfigRequest() = default;
};
class CreateLDAPConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLDAPConfigResponseBody() {}

  explicit CreateLDAPConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLDAPConfigResponseBody() = default;
};
class CreateLDAPConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLDAPConfigResponseBody> body{};

  CreateLDAPConfigResponse() {}

  explicit CreateLDAPConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLDAPConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLDAPConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLDAPConfigResponse() = default;
};
class CreateLifecyclePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> lifecyclePolicyName{};
  shared_ptr<string> lifecycleRuleName{};
  shared_ptr<string> path{};
  shared_ptr<vector<string>> paths{};
  shared_ptr<string> storageType{};

  CreateLifecyclePolicyRequest() {}

  explicit CreateLifecyclePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (lifecyclePolicyName) {
      res["LifecyclePolicyName"] = boost::any(*lifecyclePolicyName);
    }
    if (lifecycleRuleName) {
      res["LifecycleRuleName"] = boost::any(*lifecycleRuleName);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("LifecyclePolicyName") != m.end() && !m["LifecyclePolicyName"].empty()) {
      lifecyclePolicyName = make_shared<string>(boost::any_cast<string>(m["LifecyclePolicyName"]));
    }
    if (m.find("LifecycleRuleName") != m.end() && !m["LifecycleRuleName"].empty()) {
      lifecycleRuleName = make_shared<string>(boost::any_cast<string>(m["LifecycleRuleName"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Paths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Paths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~CreateLifecyclePolicyRequest() = default;
};
class CreateLifecyclePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateLifecyclePolicyResponseBody() {}

  explicit CreateLifecyclePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLifecyclePolicyResponseBody() = default;
};
class CreateLifecyclePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLifecyclePolicyResponseBody> body{};

  CreateLifecyclePolicyResponse() {}

  explicit CreateLifecyclePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLifecyclePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLifecyclePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLifecyclePolicyResponse() = default;
};
class CreateLifecycleRetrieveJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<string>> paths{};
  shared_ptr<string> storageType{};

  CreateLifecycleRetrieveJobRequest() {}

  explicit CreateLifecycleRetrieveJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Paths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Paths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~CreateLifecycleRetrieveJobRequest() = default;
};
class CreateLifecycleRetrieveJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CreateLifecycleRetrieveJobResponseBody() {}

  explicit CreateLifecycleRetrieveJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLifecycleRetrieveJobResponseBody() = default;
};
class CreateLifecycleRetrieveJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLifecycleRetrieveJobResponseBody> body{};

  CreateLifecycleRetrieveJobResponse() {}

  explicit CreateLifecycleRetrieveJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLifecycleRetrieveJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLifecycleRetrieveJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLifecycleRetrieveJobResponse() = default;
};
class CreateLogAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> regionId{};

  CreateLogAnalysisRequest() {}

  explicit CreateLogAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateLogAnalysisRequest() = default;
};
class CreateLogAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLogAnalysisResponseBody() {}

  explicit CreateLogAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLogAnalysisResponseBody() = default;
};
class CreateLogAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLogAnalysisResponseBody> body{};

  CreateLogAnalysisResponse() {}

  explicit CreateLogAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLogAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLogAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLogAnalysisResponse() = default;
};
class CreateMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<bool> dryRun{};
  shared_ptr<bool> enableIpv6{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateMountTargetRequest() {}

  explicit CreateMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (enableIpv6) {
      res["EnableIpv6"] = boost::any(*enableIpv6);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EnableIpv6") != m.end() && !m["EnableIpv6"].empty()) {
      enableIpv6 = make_shared<bool>(boost::any_cast<bool>(m["EnableIpv6"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateMountTargetRequest() = default;
};
class CreateMountTargetResponseBodyMountTargetExtra : public Darabonba::Model {
public:
  shared_ptr<string> dualStackMountTargetDomain{};

  CreateMountTargetResponseBodyMountTargetExtra() {}

  explicit CreateMountTargetResponseBodyMountTargetExtra(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
  }


  virtual ~CreateMountTargetResponseBodyMountTargetExtra() = default;
};
class CreateMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<CreateMountTargetResponseBodyMountTargetExtra> mountTargetExtra{};
  shared_ptr<string> requestId{};

  CreateMountTargetResponseBody() {}

  explicit CreateMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (mountTargetExtra) {
      res["MountTargetExtra"] = mountTargetExtra ? boost::any(mountTargetExtra->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("MountTargetExtra") != m.end() && !m["MountTargetExtra"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountTargetExtra"].type()) {
        CreateMountTargetResponseBodyMountTargetExtra model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountTargetExtra"]));
        mountTargetExtra = make_shared<CreateMountTargetResponseBodyMountTargetExtra>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMountTargetResponseBody() = default;
};
class CreateMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMountTargetResponseBody> body{};

  CreateMountTargetResponse() {}

  explicit CreateMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMountTargetResponse() = default;
};
class CreateProtocolMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fsetId{};
  shared_ptr<string> path{};
  shared_ptr<string> protocolServiceId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateProtocolMountTargetRequest() {}

  explicit CreateProtocolMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
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
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateProtocolMountTargetRequest() = default;
};
class CreateProtocolMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportId{};
  shared_ptr<string> requestId{};

  CreateProtocolMountTargetResponseBody() {}

  explicit CreateProtocolMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportId) {
      res["ExportId"] = boost::any(*exportId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportId") != m.end() && !m["ExportId"].empty()) {
      exportId = make_shared<string>(boost::any_cast<string>(m["ExportId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProtocolMountTargetResponseBody() = default;
};
class CreateProtocolMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProtocolMountTargetResponseBody> body{};

  CreateProtocolMountTargetResponse() {}

  explicit CreateProtocolMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProtocolMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProtocolMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProtocolMountTargetResponse() = default;
};
class CreateProtocolServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> protocolSpec{};
  shared_ptr<string> protocolType{};
  shared_ptr<long> throughput{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateProtocolServiceRequest() {}

  explicit CreateProtocolServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (protocolSpec) {
      res["ProtocolSpec"] = boost::any(*protocolSpec);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (throughput) {
      res["Throughput"] = boost::any(*throughput);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ProtocolSpec") != m.end() && !m["ProtocolSpec"].empty()) {
      protocolSpec = make_shared<string>(boost::any_cast<string>(m["ProtocolSpec"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("Throughput") != m.end() && !m["Throughput"].empty()) {
      throughput = make_shared<long>(boost::any_cast<long>(m["Throughput"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateProtocolServiceRequest() = default;
};
class CreateProtocolServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> protocolServiceId{};
  shared_ptr<string> requestId{};

  CreateProtocolServiceResponseBody() {}

  explicit CreateProtocolServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProtocolServiceResponseBody() = default;
};
class CreateProtocolServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProtocolServiceResponseBody> body{};

  CreateProtocolServiceResponse() {}

  explicit CreateProtocolServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProtocolServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProtocolServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProtocolServiceResponse() = default;
};
class CreateRecycleBinDeleteJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileSystemId{};

  CreateRecycleBinDeleteJobRequest() {}

  explicit CreateRecycleBinDeleteJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~CreateRecycleBinDeleteJobRequest() = default;
};
class CreateRecycleBinDeleteJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CreateRecycleBinDeleteJobResponseBody() {}

  explicit CreateRecycleBinDeleteJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRecycleBinDeleteJobResponseBody() = default;
};
class CreateRecycleBinDeleteJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRecycleBinDeleteJobResponseBody> body{};

  CreateRecycleBinDeleteJobResponse() {}

  explicit CreateRecycleBinDeleteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRecycleBinDeleteJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRecycleBinDeleteJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRecycleBinDeleteJobResponse() = default;
};
class CreateRecycleBinRestoreJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> targetFileId{};

  CreateRecycleBinRestoreJobRequest() {}

  explicit CreateRecycleBinRestoreJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (targetFileId) {
      res["TargetFileId"] = boost::any(*targetFileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("TargetFileId") != m.end() && !m["TargetFileId"].empty()) {
      targetFileId = make_shared<string>(boost::any_cast<string>(m["TargetFileId"]));
    }
  }


  virtual ~CreateRecycleBinRestoreJobRequest() = default;
};
class CreateRecycleBinRestoreJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CreateRecycleBinRestoreJobResponseBody() {}

  explicit CreateRecycleBinRestoreJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRecycleBinRestoreJobResponseBody() = default;
};
class CreateRecycleBinRestoreJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRecycleBinRestoreJobResponseBody> body{};

  CreateRecycleBinRestoreJobResponse() {}

  explicit CreateRecycleBinRestoreJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRecycleBinRestoreJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRecycleBinRestoreJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRecycleBinRestoreJobResponse() = default;
};
class CreateSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> snapshotName{};

  CreateSnapshotRequest() {}

  explicit CreateSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
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
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
  }


  virtual ~CreateSnapshotRequest() = default;
};
class CreateSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};

  CreateSnapshotResponseBody() {}

  explicit CreateSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~CreateSnapshotResponseBody() = default;
};
class CreateSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSnapshotResponseBody> body{};

  CreateSnapshotResponse() {}

  explicit CreateSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSnapshotResponse() = default;
};
class DeleteAccessGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> fileSystemType{};

  DeleteAccessGroupRequest() {}

  explicit DeleteAccessGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
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
class DeleteAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessPointId{};
  shared_ptr<string> fileSystemId{};

  DeleteAccessPointRequest() {}

  explicit DeleteAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DeleteAccessPointRequest() = default;
};
class DeleteAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessPointResponseBody() {}

  explicit DeleteAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessPointResponseBody() = default;
};
class DeleteAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessPointResponseBody> body{};

  DeleteAccessPointResponse() {}

  explicit DeleteAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessPointResponse() = default;
};
class DeleteAccessRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> fileSystemType{};

  DeleteAccessRuleRequest() {}

  explicit DeleteAccessRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
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
class DeleteAutoSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyId{};

  DeleteAutoSnapshotPolicyRequest() {}

  explicit DeleteAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
  }


  virtual ~DeleteAutoSnapshotPolicyRequest() = default;
};
class DeleteAutoSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAutoSnapshotPolicyResponseBody() {}

  explicit DeleteAutoSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAutoSnapshotPolicyResponseBody() = default;
};
class DeleteAutoSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAutoSnapshotPolicyResponseBody> body{};

  DeleteAutoSnapshotPolicyResponse() {}

  explicit DeleteAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAutoSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutoSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutoSnapshotPolicyResponse() = default;
};
class DeleteDataFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};

  DeleteDataFlowRequest() {}

  explicit DeleteDataFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DeleteDataFlowRequest() = default;
};
class DeleteDataFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDataFlowResponseBody() {}

  explicit DeleteDataFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDataFlowResponseBody() = default;
};
class DeleteDataFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataFlowResponseBody> body{};

  DeleteDataFlowResponse() {}

  explicit DeleteDataFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataFlowResponse() = default;
};
class DeleteFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
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
class DeleteFilesetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fsetId{};

  DeleteFilesetRequest() {}

  explicit DeleteFilesetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
  }


  virtual ~DeleteFilesetRequest() = default;
};
class DeleteFilesetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFilesetResponseBody() {}

  explicit DeleteFilesetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFilesetResponseBody() = default;
};
class DeleteFilesetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFilesetResponseBody> body{};

  DeleteFilesetResponse() {}

  explicit DeleteFilesetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFilesetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFilesetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFilesetResponse() = default;
};
class DeleteLDAPConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  DeleteLDAPConfigRequest() {}

  explicit DeleteLDAPConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DeleteLDAPConfigRequest() = default;
};
class DeleteLDAPConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLDAPConfigResponseBody() {}

  explicit DeleteLDAPConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLDAPConfigResponseBody() = default;
};
class DeleteLDAPConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLDAPConfigResponseBody> body{};

  DeleteLDAPConfigResponse() {}

  explicit DeleteLDAPConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLDAPConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLDAPConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLDAPConfigResponse() = default;
};
class DeleteLifecyclePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> lifecyclePolicyName{};

  DeleteLifecyclePolicyRequest() {}

  explicit DeleteLifecyclePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (lifecyclePolicyName) {
      res["LifecyclePolicyName"] = boost::any(*lifecyclePolicyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("LifecyclePolicyName") != m.end() && !m["LifecyclePolicyName"].empty()) {
      lifecyclePolicyName = make_shared<string>(boost::any_cast<string>(m["LifecyclePolicyName"]));
    }
  }


  virtual ~DeleteLifecyclePolicyRequest() = default;
};
class DeleteLifecyclePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteLifecyclePolicyResponseBody() {}

  explicit DeleteLifecyclePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLifecyclePolicyResponseBody() = default;
};
class DeleteLifecyclePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLifecyclePolicyResponseBody> body{};

  DeleteLifecyclePolicyResponse() {}

  explicit DeleteLifecyclePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLifecyclePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLifecyclePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLifecyclePolicyResponse() = default;
};
class DeleteLogAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> regionId{};

  DeleteLogAnalysisRequest() {}

  explicit DeleteLogAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteLogAnalysisRequest() = default;
};
class DeleteLogAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLogAnalysisResponseBody() {}

  explicit DeleteLogAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLogAnalysisResponseBody() = default;
};
class DeleteLogAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLogAnalysisResponseBody> body{};

  DeleteLogAnalysisResponse() {}

  explicit DeleteLogAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLogAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLogAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLogAnalysisResponse() = default;
};
class DeleteMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountTargetDomain{};

  DeleteMountTargetRequest() {}

  explicit DeleteMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
  }


  virtual ~DeleteMountTargetRequest() = default;
};
class DeleteMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMountTargetResponseBody() {}

  explicit DeleteMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMountTargetResponseBody() = default;
};
class DeleteMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMountTargetResponseBody> body{};

  DeleteMountTargetResponse() {}

  explicit DeleteMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMountTargetResponse() = default;
};
class DeleteProtocolMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> exportId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> protocolServiceId{};

  DeleteProtocolMountTargetRequest() {}

  explicit DeleteProtocolMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (exportId) {
      res["ExportId"] = boost::any(*exportId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ExportId") != m.end() && !m["ExportId"].empty()) {
      exportId = make_shared<string>(boost::any_cast<string>(m["ExportId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
  }


  virtual ~DeleteProtocolMountTargetRequest() = default;
};
class DeleteProtocolMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProtocolMountTargetResponseBody() {}

  explicit DeleteProtocolMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProtocolMountTargetResponseBody() = default;
};
class DeleteProtocolMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProtocolMountTargetResponseBody> body{};

  DeleteProtocolMountTargetResponse() {}

  explicit DeleteProtocolMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProtocolMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProtocolMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProtocolMountTargetResponse() = default;
};
class DeleteProtocolServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> protocolServiceId{};

  DeleteProtocolServiceRequest() {}

  explicit DeleteProtocolServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
  }


  virtual ~DeleteProtocolServiceRequest() = default;
};
class DeleteProtocolServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProtocolServiceResponseBody() {}

  explicit DeleteProtocolServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProtocolServiceResponseBody() = default;
};
class DeleteProtocolServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProtocolServiceResponseBody> body{};

  DeleteProtocolServiceResponse() {}

  explicit DeleteProtocolServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProtocolServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProtocolServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProtocolServiceResponse() = default;
};
class DeleteSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> snapshotId{};

  DeleteSnapshotRequest() {}

  explicit DeleteSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSnapshotResponseBody> body{};

  DeleteSnapshotResponse() {}

  explicit DeleteSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSnapshotResponse() = default;
};
class DescribeAccessGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> useUTCDateTime{};

  DescribeAccessGroupsRequest() {}

  explicit DescribeAccessGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (useUTCDateTime) {
      res["UseUTCDateTime"] = boost::any(*useUTCDateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UseUTCDateTime") != m.end() && !m["UseUTCDateTime"].empty()) {
      useUTCDateTime = make_shared<bool>(boost::any_cast<bool>(m["UseUTCDateTime"]));
    }
  }


  virtual ~DescribeAccessGroupsRequest() = default;
};
class DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessGroupType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> mountTargetCount{};
  shared_ptr<string> regionId{};
  shared_ptr<long> ruleCount{};

  DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup() {}

  explicit DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (accessGroupType) {
      res["AccessGroupType"] = boost::any(*accessGroupType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (mountTargetCount) {
      res["MountTargetCount"] = boost::any(*mountTargetCount);
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
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("AccessGroupType") != m.end() && !m["AccessGroupType"].empty()) {
      accessGroupType = make_shared<string>(boost::any_cast<string>(m["AccessGroupType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("MountTargetCount") != m.end() && !m["MountTargetCount"].empty()) {
      mountTargetCount = make_shared<long>(boost::any_cast<long>(m["MountTargetCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleCount") != m.end() && !m["RuleCount"].empty()) {
      ruleCount = make_shared<long>(boost::any_cast<long>(m["RuleCount"]));
    }
  }


  virtual ~DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup() = default;
};
class DescribeAccessGroupsResponseBodyAccessGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup>> accessGroup{};

  DescribeAccessGroupsResponseBodyAccessGroups() {}

  explicit DescribeAccessGroupsResponseBodyAccessGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroup) {
      vector<boost::any> temp1;
      for(auto item1:*accessGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessGroup"].type()) {
        vector<DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessGroup = make_shared<vector<DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeAccessGroupsResponseBodyAccessGroups() = default;
};
class DescribeAccessGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccessGroupsResponseBodyAccessGroups> accessGroups{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAccessGroupsResponseBody() {}

  explicit DescribeAccessGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroups) {
      res["AccessGroups"] = accessGroups ? boost::any(accessGroups->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessGroups") != m.end() && !m["AccessGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessGroups"].type()) {
        DescribeAccessGroupsResponseBodyAccessGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessGroups"]));
        accessGroups = make_shared<DescribeAccessGroupsResponseBodyAccessGroups>(model1);
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


  virtual ~DescribeAccessGroupsResponseBody() = default;
};
class DescribeAccessGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccessGroupsResponseBody> body{};

  DescribeAccessGroupsResponse() {}

  explicit DescribeAccessGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccessGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessGroupsResponse() = default;
};
class DescribeAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessPointId{};
  shared_ptr<string> fileSystemId{};

  DescribeAccessPointRequest() {}

  explicit DescribeAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DescribeAccessPointRequest() = default;
};
class DescribeAccessPointResponseBodyAccessPointPosixUser : public Darabonba::Model {
public:
  shared_ptr<long> posixGroupId{};
  shared_ptr<vector<long>> posixSecondaryGroupIds{};
  shared_ptr<long> posixUserId{};

  DescribeAccessPointResponseBodyAccessPointPosixUser() {}

  explicit DescribeAccessPointResponseBodyAccessPointPosixUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (posixGroupId) {
      res["PosixGroupId"] = boost::any(*posixGroupId);
    }
    if (posixSecondaryGroupIds) {
      res["PosixSecondaryGroupIds"] = boost::any(*posixSecondaryGroupIds);
    }
    if (posixUserId) {
      res["PosixUserId"] = boost::any(*posixUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PosixGroupId") != m.end() && !m["PosixGroupId"].empty()) {
      posixGroupId = make_shared<long>(boost::any_cast<long>(m["PosixGroupId"]));
    }
    if (m.find("PosixSecondaryGroupIds") != m.end() && !m["PosixSecondaryGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["PosixSecondaryGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PosixSecondaryGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      posixSecondaryGroupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("PosixUserId") != m.end() && !m["PosixUserId"].empty()) {
      posixUserId = make_shared<long>(boost::any_cast<long>(m["PosixUserId"]));
    }
  }


  virtual ~DescribeAccessPointResponseBodyAccessPointPosixUser() = default;
};
class DescribeAccessPointResponseBodyAccessPointRootPathPermission : public Darabonba::Model {
public:
  shared_ptr<long> ownerGroupId{};
  shared_ptr<long> ownerUserId{};
  shared_ptr<string> permission{};

  DescribeAccessPointResponseBodyAccessPointRootPathPermission() {}

  explicit DescribeAccessPointResponseBodyAccessPointRootPathPermission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerGroupId) {
      res["OwnerGroupId"] = boost::any(*ownerGroupId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerGroupId") != m.end() && !m["OwnerGroupId"].empty()) {
      ownerGroupId = make_shared<long>(boost::any_cast<long>(m["OwnerGroupId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<long>(boost::any_cast<long>(m["OwnerUserId"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
  }


  virtual ~DescribeAccessPointResponseBodyAccessPointRootPathPermission() = default;
};
class DescribeAccessPointResponseBodyAccessPoint : public Darabonba::Model {
public:
  shared_ptr<string> ARN{};
  shared_ptr<string> accessGroup{};
  shared_ptr<string> accessPointId{};
  shared_ptr<string> accessPointName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> enabledRam{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<DescribeAccessPointResponseBodyAccessPointPosixUser> posixUser{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rootPath{};
  shared_ptr<DescribeAccessPointResponseBodyAccessPointRootPathPermission> rootPathPermission{};
  shared_ptr<string> rootPathStatus{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeAccessPointResponseBodyAccessPoint() {}

  explicit DescribeAccessPointResponseBodyAccessPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ARN) {
      res["ARN"] = boost::any(*ARN);
    }
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (accessPointName) {
      res["AccessPointName"] = boost::any(*accessPointName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (enabledRam) {
      res["EnabledRam"] = boost::any(*enabledRam);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (posixUser) {
      res["PosixUser"] = posixUser ? boost::any(posixUser->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rootPath) {
      res["RootPath"] = boost::any(*rootPath);
    }
    if (rootPathPermission) {
      res["RootPathPermission"] = rootPathPermission ? boost::any(rootPathPermission->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rootPathStatus) {
      res["RootPathStatus"] = boost::any(*rootPathStatus);
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
    if (m.find("ARN") != m.end() && !m["ARN"].empty()) {
      ARN = make_shared<string>(boost::any_cast<string>(m["ARN"]));
    }
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("AccessPointName") != m.end() && !m["AccessPointName"].empty()) {
      accessPointName = make_shared<string>(boost::any_cast<string>(m["AccessPointName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EnabledRam") != m.end() && !m["EnabledRam"].empty()) {
      enabledRam = make_shared<bool>(boost::any_cast<bool>(m["EnabledRam"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("PosixUser") != m.end() && !m["PosixUser"].empty()) {
      if (typeid(map<string, boost::any>) == m["PosixUser"].type()) {
        DescribeAccessPointResponseBodyAccessPointPosixUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PosixUser"]));
        posixUser = make_shared<DescribeAccessPointResponseBodyAccessPointPosixUser>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RootPath") != m.end() && !m["RootPath"].empty()) {
      rootPath = make_shared<string>(boost::any_cast<string>(m["RootPath"]));
    }
    if (m.find("RootPathPermission") != m.end() && !m["RootPathPermission"].empty()) {
      if (typeid(map<string, boost::any>) == m["RootPathPermission"].type()) {
        DescribeAccessPointResponseBodyAccessPointRootPathPermission model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RootPathPermission"]));
        rootPathPermission = make_shared<DescribeAccessPointResponseBodyAccessPointRootPathPermission>(model1);
      }
    }
    if (m.find("RootPathStatus") != m.end() && !m["RootPathStatus"].empty()) {
      rootPathStatus = make_shared<string>(boost::any_cast<string>(m["RootPathStatus"]));
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


  virtual ~DescribeAccessPointResponseBodyAccessPoint() = default;
};
class DescribeAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccessPointResponseBodyAccessPoint> accessPoint{};
  shared_ptr<string> requestId{};

  DescribeAccessPointResponseBody() {}

  explicit DescribeAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPoint) {
      res["AccessPoint"] = accessPoint ? boost::any(accessPoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPoint") != m.end() && !m["AccessPoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessPoint"].type()) {
        DescribeAccessPointResponseBodyAccessPoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessPoint"]));
        accessPoint = make_shared<DescribeAccessPointResponseBodyAccessPoint>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccessPointResponseBody() = default;
};
class DescribeAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccessPointResponseBody> body{};

  DescribeAccessPointResponse() {}

  explicit DescribeAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessPointResponse() = default;
};
class DescribeAccessPointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroup{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeAccessPointsRequest() {}

  explicit DescribeAccessPointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeAccessPointsRequest() = default;
};
class DescribeAccessPointsResponseBodyAccessPointsPosixUser : public Darabonba::Model {
public:
  shared_ptr<long> posixGroupId{};
  shared_ptr<vector<long>> posixSecondaryGroupIds{};
  shared_ptr<long> posixUserId{};

  DescribeAccessPointsResponseBodyAccessPointsPosixUser() {}

  explicit DescribeAccessPointsResponseBodyAccessPointsPosixUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (posixGroupId) {
      res["PosixGroupId"] = boost::any(*posixGroupId);
    }
    if (posixSecondaryGroupIds) {
      res["PosixSecondaryGroupIds"] = boost::any(*posixSecondaryGroupIds);
    }
    if (posixUserId) {
      res["PosixUserId"] = boost::any(*posixUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PosixGroupId") != m.end() && !m["PosixGroupId"].empty()) {
      posixGroupId = make_shared<long>(boost::any_cast<long>(m["PosixGroupId"]));
    }
    if (m.find("PosixSecondaryGroupIds") != m.end() && !m["PosixSecondaryGroupIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["PosixSecondaryGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PosixSecondaryGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      posixSecondaryGroupIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("PosixUserId") != m.end() && !m["PosixUserId"].empty()) {
      posixUserId = make_shared<long>(boost::any_cast<long>(m["PosixUserId"]));
    }
  }


  virtual ~DescribeAccessPointsResponseBodyAccessPointsPosixUser() = default;
};
class DescribeAccessPointsResponseBodyAccessPointsRootPathPermission : public Darabonba::Model {
public:
  shared_ptr<long> ownerGroupId{};
  shared_ptr<long> ownerUserId{};
  shared_ptr<string> permission{};

  DescribeAccessPointsResponseBodyAccessPointsRootPathPermission() {}

  explicit DescribeAccessPointsResponseBodyAccessPointsRootPathPermission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerGroupId) {
      res["OwnerGroupId"] = boost::any(*ownerGroupId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerGroupId") != m.end() && !m["OwnerGroupId"].empty()) {
      ownerGroupId = make_shared<long>(boost::any_cast<long>(m["OwnerGroupId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<long>(boost::any_cast<long>(m["OwnerUserId"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
  }


  virtual ~DescribeAccessPointsResponseBodyAccessPointsRootPathPermission() = default;
};
class DescribeAccessPointsResponseBodyAccessPoints : public Darabonba::Model {
public:
  shared_ptr<string> ARN{};
  shared_ptr<string> accessGroup{};
  shared_ptr<string> accessPointId{};
  shared_ptr<string> accessPointName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> enabledRam{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<DescribeAccessPointsResponseBodyAccessPointsPosixUser> posixUser{};
  shared_ptr<string> rootPath{};
  shared_ptr<DescribeAccessPointsResponseBodyAccessPointsRootPathPermission> rootPathPermission{};
  shared_ptr<string> rootPathStatus{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeAccessPointsResponseBodyAccessPoints() {}

  explicit DescribeAccessPointsResponseBodyAccessPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ARN) {
      res["ARN"] = boost::any(*ARN);
    }
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (accessPointName) {
      res["AccessPointName"] = boost::any(*accessPointName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (enabledRam) {
      res["EnabledRam"] = boost::any(*enabledRam);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (posixUser) {
      res["PosixUser"] = posixUser ? boost::any(posixUser->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rootPath) {
      res["RootPath"] = boost::any(*rootPath);
    }
    if (rootPathPermission) {
      res["RootPathPermission"] = rootPathPermission ? boost::any(rootPathPermission->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rootPathStatus) {
      res["RootPathStatus"] = boost::any(*rootPathStatus);
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
    if (m.find("ARN") != m.end() && !m["ARN"].empty()) {
      ARN = make_shared<string>(boost::any_cast<string>(m["ARN"]));
    }
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("AccessPointName") != m.end() && !m["AccessPointName"].empty()) {
      accessPointName = make_shared<string>(boost::any_cast<string>(m["AccessPointName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EnabledRam") != m.end() && !m["EnabledRam"].empty()) {
      enabledRam = make_shared<bool>(boost::any_cast<bool>(m["EnabledRam"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("PosixUser") != m.end() && !m["PosixUser"].empty()) {
      if (typeid(map<string, boost::any>) == m["PosixUser"].type()) {
        DescribeAccessPointsResponseBodyAccessPointsPosixUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PosixUser"]));
        posixUser = make_shared<DescribeAccessPointsResponseBodyAccessPointsPosixUser>(model1);
      }
    }
    if (m.find("RootPath") != m.end() && !m["RootPath"].empty()) {
      rootPath = make_shared<string>(boost::any_cast<string>(m["RootPath"]));
    }
    if (m.find("RootPathPermission") != m.end() && !m["RootPathPermission"].empty()) {
      if (typeid(map<string, boost::any>) == m["RootPathPermission"].type()) {
        DescribeAccessPointsResponseBodyAccessPointsRootPathPermission model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RootPathPermission"]));
        rootPathPermission = make_shared<DescribeAccessPointsResponseBodyAccessPointsRootPathPermission>(model1);
      }
    }
    if (m.find("RootPathStatus") != m.end() && !m["RootPathStatus"].empty()) {
      rootPathStatus = make_shared<string>(boost::any_cast<string>(m["RootPathStatus"]));
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


  virtual ~DescribeAccessPointsResponseBodyAccessPoints() = default;
};
class DescribeAccessPointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccessPointsResponseBodyAccessPoints>> accessPoints{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAccessPointsResponseBody() {}

  explicit DescribeAccessPointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPoints) {
      vector<boost::any> temp1;
      for(auto item1:*accessPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessPoints"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("AccessPoints") != m.end() && !m["AccessPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessPoints"].type()) {
        vector<DescribeAccessPointsResponseBodyAccessPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessPointsResponseBodyAccessPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessPoints = make_shared<vector<DescribeAccessPointsResponseBodyAccessPoints>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAccessPointsResponseBody() = default;
};
class DescribeAccessPointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccessPointsResponseBody> body{};

  DescribeAccessPointsResponse() {}

  explicit DescribeAccessPointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccessPointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessPointsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessPointsResponse() = default;
};
class DescribeAccessRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeAccessRulesRequest() {}

  explicit DescribeAccessRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
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
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAccessRulesRequest() = default;
};
class DescribeAccessRulesResponseBodyAccessRulesAccessRule : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> ipv6SourceCidrIp{};
  shared_ptr<long> priority{};
  shared_ptr<string> RWAccess{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceCidrIp{};
  shared_ptr<string> userAccess{};

  DescribeAccessRulesResponseBodyAccessRulesAccessRule() {}

  explicit DescribeAccessRulesResponseBodyAccessRulesAccessRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (ipv6SourceCidrIp) {
      res["Ipv6SourceCidrIp"] = boost::any(*ipv6SourceCidrIp);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (RWAccess) {
      res["RWAccess"] = boost::any(*RWAccess);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    if (userAccess) {
      res["UserAccess"] = boost::any(*userAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("Ipv6SourceCidrIp") != m.end() && !m["Ipv6SourceCidrIp"].empty()) {
      ipv6SourceCidrIp = make_shared<string>(boost::any_cast<string>(m["Ipv6SourceCidrIp"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RWAccess") != m.end() && !m["RWAccess"].empty()) {
      RWAccess = make_shared<string>(boost::any_cast<string>(m["RWAccess"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
    if (m.find("UserAccess") != m.end() && !m["UserAccess"].empty()) {
      userAccess = make_shared<string>(boost::any_cast<string>(m["UserAccess"]));
    }
  }


  virtual ~DescribeAccessRulesResponseBodyAccessRulesAccessRule() = default;
};
class DescribeAccessRulesResponseBodyAccessRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccessRulesResponseBodyAccessRulesAccessRule>> accessRule{};

  DescribeAccessRulesResponseBodyAccessRules() {}

  explicit DescribeAccessRulesResponseBodyAccessRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRule) {
      vector<boost::any> temp1;
      for(auto item1:*accessRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRule") != m.end() && !m["AccessRule"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessRule"].type()) {
        vector<DescribeAccessRulesResponseBodyAccessRulesAccessRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccessRulesResponseBodyAccessRulesAccessRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessRule = make_shared<vector<DescribeAccessRulesResponseBodyAccessRulesAccessRule>>(expect1);
      }
    }
  }


  virtual ~DescribeAccessRulesResponseBodyAccessRules() = default;
};
class DescribeAccessRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccessRulesResponseBodyAccessRules> accessRules{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAccessRulesResponseBody() {}

  explicit DescribeAccessRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRules) {
      res["AccessRules"] = accessRules ? boost::any(accessRules->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessRules") != m.end() && !m["AccessRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessRules"].type()) {
        DescribeAccessRulesResponseBodyAccessRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessRules"]));
        accessRules = make_shared<DescribeAccessRulesResponseBodyAccessRules>(model1);
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


  virtual ~DescribeAccessRulesResponseBody() = default;
};
class DescribeAccessRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccessRulesResponseBody> body{};

  DescribeAccessRulesResponse() {}

  explicit DescribeAccessRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccessRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccessRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccessRulesResponse() = default;
};
class DescribeAutoSnapshotPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeAutoSnapshotPoliciesRequest() {}

  explicit DescribeAutoSnapshotPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
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
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAutoSnapshotPoliciesRequest() = default;
};
class DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> autoSnapshotPolicyName{};
  shared_ptr<string> createTime{};
  shared_ptr<long> fileSystemNums{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repeatWeekdays{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> status{};
  shared_ptr<string> timePoints{};

  DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy() {}

  explicit DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (autoSnapshotPolicyName) {
      res["AutoSnapshotPolicyName"] = boost::any(*autoSnapshotPolicyName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileSystemNums) {
      res["FileSystemNums"] = boost::any(*fileSystemNums);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repeatWeekdays) {
      res["RepeatWeekdays"] = boost::any(*repeatWeekdays);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timePoints) {
      res["TimePoints"] = boost::any(*timePoints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("AutoSnapshotPolicyName") != m.end() && !m["AutoSnapshotPolicyName"].empty()) {
      autoSnapshotPolicyName = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileSystemNums") != m.end() && !m["FileSystemNums"].empty()) {
      fileSystemNums = make_shared<long>(boost::any_cast<long>(m["FileSystemNums"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepeatWeekdays") != m.end() && !m["RepeatWeekdays"].empty()) {
      repeatWeekdays = make_shared<string>(boost::any_cast<string>(m["RepeatWeekdays"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimePoints") != m.end() && !m["TimePoints"].empty()) {
      timePoints = make_shared<string>(boost::any_cast<string>(m["TimePoints"]));
    }
  }


  virtual ~DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy() = default;
};
class DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>> autoSnapshotPolicy{};

  DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies() {}

  explicit DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*autoSnapshotPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoSnapshotPolicy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicy") != m.end() && !m["AutoSnapshotPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoSnapshotPolicy"].type()) {
        vector<DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoSnapshotPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoSnapshotPolicy = make_shared<vector<DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>>(expect1);
      }
    }
  }


  virtual ~DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies() = default;
};
class DescribeAutoSnapshotPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies> autoSnapshotPolicies{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAutoSnapshotPoliciesResponseBody() {}

  explicit DescribeAutoSnapshotPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicies) {
      res["AutoSnapshotPolicies"] = autoSnapshotPolicies ? boost::any(autoSnapshotPolicies->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AutoSnapshotPolicies") != m.end() && !m["AutoSnapshotPolicies"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoSnapshotPolicies"].type()) {
        DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoSnapshotPolicies"]));
        autoSnapshotPolicies = make_shared<DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies>(model1);
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


  virtual ~DescribeAutoSnapshotPoliciesResponseBody() = default;
};
class DescribeAutoSnapshotPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAutoSnapshotPoliciesResponseBody> body{};

  DescribeAutoSnapshotPoliciesResponse() {}

  explicit DescribeAutoSnapshotPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutoSnapshotPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutoSnapshotPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutoSnapshotPoliciesResponse() = default;
};
class DescribeAutoSnapshotTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyIds{};
  shared_ptr<string> fileSystemIds{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeAutoSnapshotTasksRequest() {}

  explicit DescribeAutoSnapshotTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyIds) {
      res["AutoSnapshotPolicyIds"] = boost::any(*autoSnapshotPolicyIds);
    }
    if (fileSystemIds) {
      res["FileSystemIds"] = boost::any(*fileSystemIds);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
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
    if (m.find("AutoSnapshotPolicyIds") != m.end() && !m["AutoSnapshotPolicyIds"].empty()) {
      autoSnapshotPolicyIds = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyIds"]));
    }
    if (m.find("FileSystemIds") != m.end() && !m["FileSystemIds"].empty()) {
      fileSystemIds = make_shared<string>(boost::any_cast<string>(m["FileSystemIds"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAutoSnapshotTasksRequest() = default;
};
class DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> sourceFileSystemId{};

  DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask() {}

  explicit DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (sourceFileSystemId) {
      res["SourceFileSystemId"] = boost::any(*sourceFileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("SourceFileSystemId") != m.end() && !m["SourceFileSystemId"].empty()) {
      sourceFileSystemId = make_shared<string>(boost::any_cast<string>(m["SourceFileSystemId"]));
    }
  }


  virtual ~DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask() = default;
};
class DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask>> autoSnapshotTask{};

  DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks() {}

  explicit DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotTask) {
      vector<boost::any> temp1;
      for(auto item1:*autoSnapshotTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoSnapshotTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotTask") != m.end() && !m["AutoSnapshotTask"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoSnapshotTask"].type()) {
        vector<DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoSnapshotTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoSnapshotTask = make_shared<vector<DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask>>(expect1);
      }
    }
  }


  virtual ~DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks() = default;
};
class DescribeAutoSnapshotTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks> autoSnapshotTasks{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAutoSnapshotTasksResponseBody() {}

  explicit DescribeAutoSnapshotTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotTasks) {
      res["AutoSnapshotTasks"] = autoSnapshotTasks ? boost::any(autoSnapshotTasks->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AutoSnapshotTasks") != m.end() && !m["AutoSnapshotTasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoSnapshotTasks"].type()) {
        DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoSnapshotTasks"]));
        autoSnapshotTasks = make_shared<DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks>(model1);
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


  virtual ~DescribeAutoSnapshotTasksResponseBody() = default;
};
class DescribeAutoSnapshotTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAutoSnapshotTasksResponseBody> body{};

  DescribeAutoSnapshotTasksResponse() {}

  explicit DescribeAutoSnapshotTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutoSnapshotTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutoSnapshotTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutoSnapshotTasksResponse() = default;
};
class DescribeBlackListClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIP{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> regionId{};

  DescribeBlackListClientsRequest() {}

  explicit DescribeBlackListClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeBlackListClientsRequest() = default;
};
class DescribeBlackListClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clients{};
  shared_ptr<string> requestId{};

  DescribeBlackListClientsResponseBody() {}

  explicit DescribeBlackListClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      res["Clients"] = boost::any(*clients);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      clients = make_shared<string>(boost::any_cast<string>(m["Clients"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBlackListClientsResponseBody() = default;
};
class DescribeBlackListClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBlackListClientsResponseBody> body{};

  DescribeBlackListClientsResponse() {}

  explicit DescribeBlackListClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBlackListClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBlackListClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBlackListClientsResponse() = default;
};
class DescribeDataFlowSubTasksRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDataFlowSubTasksRequestFilters() {}

  explicit DescribeDataFlowSubTasksRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDataFlowSubTasksRequestFilters() = default;
};
class DescribeDataFlowSubTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<DescribeDataFlowSubTasksRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeDataFlowSubTasksRequest() {}

  explicit DescribeDataFlowSubTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeDataFlowSubTasksRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowSubTasksRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeDataFlowSubTasksRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeDataFlowSubTasksRequest() = default;
};
class DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail : public Darabonba::Model {
public:
  shared_ptr<string> checksum{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> size{};

  DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail() {}

  explicit DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checksum) {
      res["Checksum"] = boost::any(*checksum);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checksum") != m.end() && !m["Checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["Checksum"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail() = default;
};
class DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats : public Darabonba::Model {
public:
  shared_ptr<long> actualBytes{};
  shared_ptr<long> averageSpeed{};
  shared_ptr<long> bytesDone{};
  shared_ptr<long> bytesTotal{};

  DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats() {}

  explicit DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualBytes) {
      res["ActualBytes"] = boost::any(*actualBytes);
    }
    if (averageSpeed) {
      res["AverageSpeed"] = boost::any(*averageSpeed);
    }
    if (bytesDone) {
      res["BytesDone"] = boost::any(*bytesDone);
    }
    if (bytesTotal) {
      res["BytesTotal"] = boost::any(*bytesTotal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualBytes") != m.end() && !m["ActualBytes"].empty()) {
      actualBytes = make_shared<long>(boost::any_cast<long>(m["ActualBytes"]));
    }
    if (m.find("AverageSpeed") != m.end() && !m["AverageSpeed"].empty()) {
      averageSpeed = make_shared<long>(boost::any_cast<long>(m["AverageSpeed"]));
    }
    if (m.find("BytesDone") != m.end() && !m["BytesDone"].empty()) {
      bytesDone = make_shared<long>(boost::any_cast<long>(m["BytesDone"]));
    }
    if (m.find("BytesTotal") != m.end() && !m["BytesTotal"].empty()) {
      bytesTotal = make_shared<long>(boost::any_cast<long>(m["BytesTotal"]));
    }
  }


  virtual ~DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats() = default;
};
class DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> dataFlowSubTaskId{};
  shared_ptr<string> dataFlowTaskId{};
  shared_ptr<string> dstFilePath{};
  shared_ptr<string> endTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail> fileDetail{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> progress{};
  shared_ptr<DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats> progressStats{};
  shared_ptr<string> srcFilePath{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask() {}

  explicit DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dataFlowSubTaskId) {
      res["DataFlowSubTaskId"] = boost::any(*dataFlowSubTaskId);
    }
    if (dataFlowTaskId) {
      res["DataFlowTaskId"] = boost::any(*dataFlowTaskId);
    }
    if (dstFilePath) {
      res["DstFilePath"] = boost::any(*dstFilePath);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fileDetail) {
      res["FileDetail"] = fileDetail ? boost::any(fileDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (progressStats) {
      res["ProgressStats"] = progressStats ? boost::any(progressStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (srcFilePath) {
      res["SrcFilePath"] = boost::any(*srcFilePath);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
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
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DataFlowSubTaskId") != m.end() && !m["DataFlowSubTaskId"].empty()) {
      dataFlowSubTaskId = make_shared<string>(boost::any_cast<string>(m["DataFlowSubTaskId"]));
    }
    if (m.find("DataFlowTaskId") != m.end() && !m["DataFlowTaskId"].empty()) {
      dataFlowTaskId = make_shared<string>(boost::any_cast<string>(m["DataFlowTaskId"]));
    }
    if (m.find("DstFilePath") != m.end() && !m["DstFilePath"].empty()) {
      dstFilePath = make_shared<string>(boost::any_cast<string>(m["DstFilePath"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FileDetail") != m.end() && !m["FileDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileDetail"].type()) {
        DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileDetail"]));
        fileDetail = make_shared<DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskFileDetail>(model1);
      }
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ProgressStats") != m.end() && !m["ProgressStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProgressStats"].type()) {
        DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProgressStats"]));
        progressStats = make_shared<DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTaskProgressStats>(model1);
      }
    }
    if (m.find("SrcFilePath") != m.end() && !m["SrcFilePath"].empty()) {
      srcFilePath = make_shared<string>(boost::any_cast<string>(m["SrcFilePath"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask() = default;
};
class DescribeDataFlowSubTasksResponseBodyDataFlowSubTask : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask>> dataFlowSubTask{};

  DescribeDataFlowSubTasksResponseBodyDataFlowSubTask() {}

  explicit DescribeDataFlowSubTasksResponseBodyDataFlowSubTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFlowSubTask) {
      vector<boost::any> temp1;
      for(auto item1:*dataFlowSubTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataFlowSubTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFlowSubTask") != m.end() && !m["DataFlowSubTask"].empty()) {
      if (typeid(vector<boost::any>) == m["DataFlowSubTask"].type()) {
        vector<DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataFlowSubTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataFlowSubTask = make_shared<vector<DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask>>(expect1);
      }
    }
  }


  virtual ~DescribeDataFlowSubTasksResponseBodyDataFlowSubTask() = default;
};
class DescribeDataFlowSubTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDataFlowSubTasksResponseBodyDataFlowSubTask> dataFlowSubTask{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeDataFlowSubTasksResponseBody() {}

  explicit DescribeDataFlowSubTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFlowSubTask) {
      res["DataFlowSubTask"] = dataFlowSubTask ? boost::any(dataFlowSubTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFlowSubTask") != m.end() && !m["DataFlowSubTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataFlowSubTask"].type()) {
        DescribeDataFlowSubTasksResponseBodyDataFlowSubTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataFlowSubTask"]));
        dataFlowSubTask = make_shared<DescribeDataFlowSubTasksResponseBodyDataFlowSubTask>(model1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDataFlowSubTasksResponseBody() = default;
};
class DescribeDataFlowSubTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataFlowSubTasksResponseBody> body{};

  DescribeDataFlowSubTasksResponse() {}

  explicit DescribeDataFlowSubTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataFlowSubTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataFlowSubTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataFlowSubTasksResponse() = default;
};
class DescribeDataFlowTasksRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDataFlowTasksRequestFilters() {}

  explicit DescribeDataFlowTasksRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDataFlowTasksRequestFilters() = default;
};
class DescribeDataFlowTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<DescribeDataFlowTasksRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeDataFlowTasksRequest() {}

  explicit DescribeDataFlowTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeDataFlowTasksRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowTasksRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeDataFlowTasksRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeDataFlowTasksRequest() = default;
};
class DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats : public Darabonba::Model {
public:
  shared_ptr<long> actualBytes{};
  shared_ptr<long> actualFiles{};
  shared_ptr<long> averageSpeed{};
  shared_ptr<long> bytesDone{};
  shared_ptr<long> bytesTotal{};
  shared_ptr<long> filesDone{};
  shared_ptr<long> filesTotal{};
  shared_ptr<long> remainTime{};

  DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats() {}

  explicit DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualBytes) {
      res["ActualBytes"] = boost::any(*actualBytes);
    }
    if (actualFiles) {
      res["ActualFiles"] = boost::any(*actualFiles);
    }
    if (averageSpeed) {
      res["AverageSpeed"] = boost::any(*averageSpeed);
    }
    if (bytesDone) {
      res["BytesDone"] = boost::any(*bytesDone);
    }
    if (bytesTotal) {
      res["BytesTotal"] = boost::any(*bytesTotal);
    }
    if (filesDone) {
      res["FilesDone"] = boost::any(*filesDone);
    }
    if (filesTotal) {
      res["FilesTotal"] = boost::any(*filesTotal);
    }
    if (remainTime) {
      res["RemainTime"] = boost::any(*remainTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualBytes") != m.end() && !m["ActualBytes"].empty()) {
      actualBytes = make_shared<long>(boost::any_cast<long>(m["ActualBytes"]));
    }
    if (m.find("ActualFiles") != m.end() && !m["ActualFiles"].empty()) {
      actualFiles = make_shared<long>(boost::any_cast<long>(m["ActualFiles"]));
    }
    if (m.find("AverageSpeed") != m.end() && !m["AverageSpeed"].empty()) {
      averageSpeed = make_shared<long>(boost::any_cast<long>(m["AverageSpeed"]));
    }
    if (m.find("BytesDone") != m.end() && !m["BytesDone"].empty()) {
      bytesDone = make_shared<long>(boost::any_cast<long>(m["BytesDone"]));
    }
    if (m.find("BytesTotal") != m.end() && !m["BytesTotal"].empty()) {
      bytesTotal = make_shared<long>(boost::any_cast<long>(m["BytesTotal"]));
    }
    if (m.find("FilesDone") != m.end() && !m["FilesDone"].empty()) {
      filesDone = make_shared<long>(boost::any_cast<long>(m["FilesDone"]));
    }
    if (m.find("FilesTotal") != m.end() && !m["FilesTotal"].empty()) {
      filesTotal = make_shared<long>(boost::any_cast<long>(m["FilesTotal"]));
    }
    if (m.find("RemainTime") != m.end() && !m["RemainTime"].empty()) {
      remainTime = make_shared<long>(boost::any_cast<long>(m["RemainTime"]));
    }
  }


  virtual ~DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats() = default;
};
class DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport() {}

  explicit DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport() = default;
};
class DescribeDataFlowTasksResponseBodyTaskInfoTaskReports : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport>> report{};

  DescribeDataFlowTasksResponseBodyTaskInfoTaskReports() {}

  explicit DescribeDataFlowTasksResponseBodyTaskInfoTaskReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (report) {
      vector<boost::any> temp1;
      for(auto item1:*report){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Report"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Report") != m.end() && !m["Report"].empty()) {
      if (typeid(vector<boost::any>) == m["Report"].type()) {
        vector<DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Report"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        report = make_shared<vector<DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport>>(expect1);
      }
    }
  }


  virtual ~DescribeDataFlowTasksResponseBodyTaskInfoTaskReports() = default;
};
class DescribeDataFlowTasksResponseBodyTaskInfoTask : public Darabonba::Model {
public:
  shared_ptr<string> conflictPolicy{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> dataType{};
  shared_ptr<string> directory{};
  shared_ptr<string> dstDirectory{};
  shared_ptr<string> endTime{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> fileSystemPath{};
  shared_ptr<string> filesystemId{};
  shared_ptr<string> fsPath{};
  shared_ptr<string> originator{};
  shared_ptr<long> progress{};
  shared_ptr<DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats> progressStats{};
  shared_ptr<string> reportPath{};
  shared_ptr<DescribeDataFlowTasksResponseBodyTaskInfoTaskReports> reports{};
  shared_ptr<string> sourceStorage{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskId{};

  DescribeDataFlowTasksResponseBodyTaskInfoTask() {}

  explicit DescribeDataFlowTasksResponseBodyTaskInfoTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflictPolicy) {
      res["ConflictPolicy"] = boost::any(*conflictPolicy);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (dstDirectory) {
      res["DstDirectory"] = boost::any(*dstDirectory);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (fileSystemPath) {
      res["FileSystemPath"] = boost::any(*fileSystemPath);
    }
    if (filesystemId) {
      res["FilesystemId"] = boost::any(*filesystemId);
    }
    if (fsPath) {
      res["FsPath"] = boost::any(*fsPath);
    }
    if (originator) {
      res["Originator"] = boost::any(*originator);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (progressStats) {
      res["ProgressStats"] = progressStats ? boost::any(progressStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reportPath) {
      res["ReportPath"] = boost::any(*reportPath);
    }
    if (reports) {
      res["Reports"] = reports ? boost::any(reports->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceStorage) {
      res["SourceStorage"] = boost::any(*sourceStorage);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConflictPolicy") != m.end() && !m["ConflictPolicy"].empty()) {
      conflictPolicy = make_shared<string>(boost::any_cast<string>(m["ConflictPolicy"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("DstDirectory") != m.end() && !m["DstDirectory"].empty()) {
      dstDirectory = make_shared<string>(boost::any_cast<string>(m["DstDirectory"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FileSystemPath") != m.end() && !m["FileSystemPath"].empty()) {
      fileSystemPath = make_shared<string>(boost::any_cast<string>(m["FileSystemPath"]));
    }
    if (m.find("FilesystemId") != m.end() && !m["FilesystemId"].empty()) {
      filesystemId = make_shared<string>(boost::any_cast<string>(m["FilesystemId"]));
    }
    if (m.find("FsPath") != m.end() && !m["FsPath"].empty()) {
      fsPath = make_shared<string>(boost::any_cast<string>(m["FsPath"]));
    }
    if (m.find("Originator") != m.end() && !m["Originator"].empty()) {
      originator = make_shared<string>(boost::any_cast<string>(m["Originator"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ProgressStats") != m.end() && !m["ProgressStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProgressStats"].type()) {
        DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProgressStats"]));
        progressStats = make_shared<DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats>(model1);
      }
    }
    if (m.find("ReportPath") != m.end() && !m["ReportPath"].empty()) {
      reportPath = make_shared<string>(boost::any_cast<string>(m["ReportPath"]));
    }
    if (m.find("Reports") != m.end() && !m["Reports"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reports"].type()) {
        DescribeDataFlowTasksResponseBodyTaskInfoTaskReports model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reports"]));
        reports = make_shared<DescribeDataFlowTasksResponseBodyTaskInfoTaskReports>(model1);
      }
    }
    if (m.find("SourceStorage") != m.end() && !m["SourceStorage"].empty()) {
      sourceStorage = make_shared<string>(boost::any_cast<string>(m["SourceStorage"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeDataFlowTasksResponseBodyTaskInfoTask() = default;
};
class DescribeDataFlowTasksResponseBodyTaskInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataFlowTasksResponseBodyTaskInfoTask>> task{};

  DescribeDataFlowTasksResponseBodyTaskInfo() {}

  explicit DescribeDataFlowTasksResponseBodyTaskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<DescribeDataFlowTasksResponseBodyTaskInfoTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowTasksResponseBodyTaskInfoTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<DescribeDataFlowTasksResponseBodyTaskInfoTask>>(expect1);
      }
    }
  }


  virtual ~DescribeDataFlowTasksResponseBodyTaskInfo() = default;
};
class DescribeDataFlowTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDataFlowTasksResponseBodyTaskInfo> taskInfo{};

  DescribeDataFlowTasksResponseBody() {}

  explicit DescribeDataFlowTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskInfo) {
      res["TaskInfo"] = taskInfo ? boost::any(taskInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TaskInfo") != m.end() && !m["TaskInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskInfo"].type()) {
        DescribeDataFlowTasksResponseBodyTaskInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskInfo"]));
        taskInfo = make_shared<DescribeDataFlowTasksResponseBodyTaskInfo>(model1);
      }
    }
  }


  virtual ~DescribeDataFlowTasksResponseBody() = default;
};
class DescribeDataFlowTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataFlowTasksResponseBody> body{};

  DescribeDataFlowTasksResponse() {}

  explicit DescribeDataFlowTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataFlowTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataFlowTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataFlowTasksResponse() = default;
};
class DescribeDataFlowsRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDataFlowsRequestFilters() {}

  explicit DescribeDataFlowsRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDataFlowsRequestFilters() = default;
};
class DescribeDataFlowsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<DescribeDataFlowsRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeDataFlowsRequest() {}

  explicit DescribeDataFlowsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeDataFlowsRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowsRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeDataFlowsRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeDataFlowsRequest() = default;
};
class DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh : public Darabonba::Model {
public:
  shared_ptr<string> refreshPath{};

  DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh() {}

  explicit DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (refreshPath) {
      res["RefreshPath"] = boost::any(*refreshPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RefreshPath") != m.end() && !m["RefreshPath"].empty()) {
      refreshPath = make_shared<string>(boost::any_cast<string>(m["RefreshPath"]));
    }
  }


  virtual ~DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh() = default;
};
class DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh>> autoRefresh{};

  DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh() {}

  explicit DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRefresh) {
      vector<boost::any> temp1;
      for(auto item1:*autoRefresh){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoRefresh"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRefresh") != m.end() && !m["AutoRefresh"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoRefresh"].type()) {
        vector<DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoRefresh"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoRefresh = make_shared<vector<DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh>>(expect1);
      }
    }
  }


  virtual ~DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh() = default;
};
class DescribeDataFlowsResponseBodyDataFlowInfoDataFlow : public Darabonba::Model {
public:
  shared_ptr<DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh> autoRefresh{};
  shared_ptr<long> autoRefreshInterval{};
  shared_ptr<string> autoRefreshPolicy{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> description{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemPath{};
  shared_ptr<string> fsetDescription{};
  shared_ptr<string> fsetId{};
  shared_ptr<string> sourceSecurityType{};
  shared_ptr<string> sourceStorage{};
  shared_ptr<string> sourceStoragePath{};
  shared_ptr<string> status{};
  shared_ptr<long> throughput{};
  shared_ptr<string> updateTime{};

  DescribeDataFlowsResponseBodyDataFlowInfoDataFlow() {}

  explicit DescribeDataFlowsResponseBodyDataFlowInfoDataFlow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRefresh) {
      res["AutoRefresh"] = autoRefresh ? boost::any(autoRefresh->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (autoRefreshInterval) {
      res["AutoRefreshInterval"] = boost::any(*autoRefreshInterval);
    }
    if (autoRefreshPolicy) {
      res["AutoRefreshPolicy"] = boost::any(*autoRefreshPolicy);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemPath) {
      res["FileSystemPath"] = boost::any(*fileSystemPath);
    }
    if (fsetDescription) {
      res["FsetDescription"] = boost::any(*fsetDescription);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    if (sourceSecurityType) {
      res["SourceSecurityType"] = boost::any(*sourceSecurityType);
    }
    if (sourceStorage) {
      res["SourceStorage"] = boost::any(*sourceStorage);
    }
    if (sourceStoragePath) {
      res["SourceStoragePath"] = boost::any(*sourceStoragePath);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (throughput) {
      res["Throughput"] = boost::any(*throughput);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRefresh") != m.end() && !m["AutoRefresh"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoRefresh"].type()) {
        DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoRefresh"]));
        autoRefresh = make_shared<DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh>(model1);
      }
    }
    if (m.find("AutoRefreshInterval") != m.end() && !m["AutoRefreshInterval"].empty()) {
      autoRefreshInterval = make_shared<long>(boost::any_cast<long>(m["AutoRefreshInterval"]));
    }
    if (m.find("AutoRefreshPolicy") != m.end() && !m["AutoRefreshPolicy"].empty()) {
      autoRefreshPolicy = make_shared<string>(boost::any_cast<string>(m["AutoRefreshPolicy"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemPath") != m.end() && !m["FileSystemPath"].empty()) {
      fileSystemPath = make_shared<string>(boost::any_cast<string>(m["FileSystemPath"]));
    }
    if (m.find("FsetDescription") != m.end() && !m["FsetDescription"].empty()) {
      fsetDescription = make_shared<string>(boost::any_cast<string>(m["FsetDescription"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
    if (m.find("SourceSecurityType") != m.end() && !m["SourceSecurityType"].empty()) {
      sourceSecurityType = make_shared<string>(boost::any_cast<string>(m["SourceSecurityType"]));
    }
    if (m.find("SourceStorage") != m.end() && !m["SourceStorage"].empty()) {
      sourceStorage = make_shared<string>(boost::any_cast<string>(m["SourceStorage"]));
    }
    if (m.find("SourceStoragePath") != m.end() && !m["SourceStoragePath"].empty()) {
      sourceStoragePath = make_shared<string>(boost::any_cast<string>(m["SourceStoragePath"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Throughput") != m.end() && !m["Throughput"].empty()) {
      throughput = make_shared<long>(boost::any_cast<long>(m["Throughput"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeDataFlowsResponseBodyDataFlowInfoDataFlow() = default;
};
class DescribeDataFlowsResponseBodyDataFlowInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataFlowsResponseBodyDataFlowInfoDataFlow>> dataFlow{};

  DescribeDataFlowsResponseBodyDataFlowInfo() {}

  explicit DescribeDataFlowsResponseBodyDataFlowInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFlow) {
      vector<boost::any> temp1;
      for(auto item1:*dataFlow){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataFlow"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFlow") != m.end() && !m["DataFlow"].empty()) {
      if (typeid(vector<boost::any>) == m["DataFlow"].type()) {
        vector<DescribeDataFlowsResponseBodyDataFlowInfoDataFlow> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataFlow"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataFlowsResponseBodyDataFlowInfoDataFlow model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataFlow = make_shared<vector<DescribeDataFlowsResponseBodyDataFlowInfoDataFlow>>(expect1);
      }
    }
  }


  virtual ~DescribeDataFlowsResponseBodyDataFlowInfo() = default;
};
class DescribeDataFlowsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDataFlowsResponseBodyDataFlowInfo> dataFlowInfo{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeDataFlowsResponseBody() {}

  explicit DescribeDataFlowsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFlowInfo) {
      res["DataFlowInfo"] = dataFlowInfo ? boost::any(dataFlowInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataFlowInfo") != m.end() && !m["DataFlowInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataFlowInfo"].type()) {
        DescribeDataFlowsResponseBodyDataFlowInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataFlowInfo"]));
        dataFlowInfo = make_shared<DescribeDataFlowsResponseBodyDataFlowInfo>(model1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDataFlowsResponseBody() = default;
};
class DescribeDataFlowsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataFlowsResponseBody> body{};

  DescribeDataFlowsResponse() {}

  explicit DescribeDataFlowsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataFlowsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataFlowsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataFlowsResponse() = default;
};
class DescribeDirQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> path{};

  DescribeDirQuotasRequest() {}

  explicit DescribeDirQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DescribeDirQuotasRequest() = default;
};
class DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos : public Darabonba::Model {
public:
  shared_ptr<long> fileCountLimit{};
  shared_ptr<long> fileCountReal{};
  shared_ptr<string> quotaType{};
  shared_ptr<long> sizeLimit{};
  shared_ptr<long> sizeReal{};
  shared_ptr<long> sizeRealInByte{};
  shared_ptr<string> userId{};
  shared_ptr<string> userType{};

  DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos() {}

  explicit DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileCountLimit) {
      res["FileCountLimit"] = boost::any(*fileCountLimit);
    }
    if (fileCountReal) {
      res["FileCountReal"] = boost::any(*fileCountReal);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    if (sizeReal) {
      res["SizeReal"] = boost::any(*sizeReal);
    }
    if (sizeRealInByte) {
      res["SizeRealInByte"] = boost::any(*sizeRealInByte);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileCountLimit") != m.end() && !m["FileCountLimit"].empty()) {
      fileCountLimit = make_shared<long>(boost::any_cast<long>(m["FileCountLimit"]));
    }
    if (m.find("FileCountReal") != m.end() && !m["FileCountReal"].empty()) {
      fileCountReal = make_shared<long>(boost::any_cast<long>(m["FileCountReal"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<long>(boost::any_cast<long>(m["SizeLimit"]));
    }
    if (m.find("SizeReal") != m.end() && !m["SizeReal"].empty()) {
      sizeReal = make_shared<long>(boost::any_cast<long>(m["SizeReal"]));
    }
    if (m.find("SizeRealInByte") != m.end() && !m["SizeRealInByte"].empty()) {
      sizeRealInByte = make_shared<long>(boost::any_cast<long>(m["SizeRealInByte"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos() = default;
};
class DescribeDirQuotasResponseBodyDirQuotaInfos : public Darabonba::Model {
public:
  shared_ptr<string> dirInode{};
  shared_ptr<string> path{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos>> userQuotaInfos{};

  DescribeDirQuotasResponseBodyDirQuotaInfos() {}

  explicit DescribeDirQuotasResponseBodyDirQuotaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dirInode) {
      res["DirInode"] = boost::any(*dirInode);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userQuotaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*userQuotaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserQuotaInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirInode") != m.end() && !m["DirInode"].empty()) {
      dirInode = make_shared<string>(boost::any_cast<string>(m["DirInode"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserQuotaInfos") != m.end() && !m["UserQuotaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["UserQuotaInfos"].type()) {
        vector<DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserQuotaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userQuotaInfos = make_shared<vector<DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos>>(expect1);
      }
    }
  }


  virtual ~DescribeDirQuotasResponseBodyDirQuotaInfos() = default;
};
class DescribeDirQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDirQuotasResponseBodyDirQuotaInfos>> dirQuotaInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDirQuotasResponseBody() {}

  explicit DescribeDirQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dirQuotaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*dirQuotaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DirQuotaInfos"] = boost::any(temp1);
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
    if (m.find("DirQuotaInfos") != m.end() && !m["DirQuotaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DirQuotaInfos"].type()) {
        vector<DescribeDirQuotasResponseBodyDirQuotaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DirQuotaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDirQuotasResponseBodyDirQuotaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dirQuotaInfos = make_shared<vector<DescribeDirQuotasResponseBodyDirQuotaInfos>>(expect1);
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


  virtual ~DescribeDirQuotasResponseBody() = default;
};
class DescribeDirQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDirQuotasResponseBody> body{};

  DescribeDirQuotasResponse() {}

  explicit DescribeDirQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDirQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDirQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDirQuotasResponse() = default;
};
class DescribeFileSystemStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeFileSystemStatisticsRequest() {}

  explicit DescribeFileSystemStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeFileSystemStatisticsRequest() = default;
};
class DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic : public Darabonba::Model {
public:
  shared_ptr<long> expiredCount{};
  shared_ptr<long> expiringCount{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> meteredSize{};
  shared_ptr<long> totalCount{};

  DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredCount) {
      res["ExpiredCount"] = boost::any(*expiredCount);
    }
    if (expiringCount) {
      res["ExpiringCount"] = boost::any(*expiringCount);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (meteredSize) {
      res["MeteredSize"] = boost::any(*meteredSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredCount") != m.end() && !m["ExpiredCount"].empty()) {
      expiredCount = make_shared<long>(boost::any_cast<long>(m["ExpiredCount"]));
    }
    if (m.find("ExpiringCount") != m.end() && !m["ExpiringCount"].empty()) {
      expiringCount = make_shared<long>(boost::any_cast<long>(m["ExpiringCount"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("MeteredSize") != m.end() && !m["MeteredSize"].empty()) {
      meteredSize = make_shared<long>(boost::any_cast<long>(m["MeteredSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic() = default;
};
class DescribeFileSystemStatisticsResponseBodyFileSystemStatistics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic>> fileSystemStatistic{};

  DescribeFileSystemStatisticsResponseBodyFileSystemStatistics() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemStatistic) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystemStatistic){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystemStatistic"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemStatistic") != m.end() && !m["FileSystemStatistic"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystemStatistic"].type()) {
        vector<DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystemStatistic"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystemStatistic = make_shared<vector<DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemStatistics() = default;
};
class DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> packageId{};
  shared_ptr<long> size{};
  shared_ptr<string> startTime{};

  DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage() = default;
};
class DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage>> package{};

  DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (package) {
      vector<boost::any> temp1;
      for(auto item1:*package){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Package"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Package") != m.end() && !m["Package"].empty()) {
      if (typeid(vector<boost::any>) == m["Package"].type()) {
        vector<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Package"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        package = make_shared<vector<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages() = default;
};
class DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> meteredIASize{};
  shared_ptr<long> meteredSize{};
  shared_ptr<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages> packages{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};
  shared_ptr<string> zoneId{};

  DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (meteredIASize) {
      res["MeteredIASize"] = boost::any(*meteredIASize);
    }
    if (meteredSize) {
      res["MeteredSize"] = boost::any(*meteredSize);
    }
    if (packages) {
      res["Packages"] = packages ? boost::any(packages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("MeteredIASize") != m.end() && !m["MeteredIASize"].empty()) {
      meteredIASize = make_shared<long>(boost::any_cast<long>(m["MeteredIASize"]));
    }
    if (m.find("MeteredSize") != m.end() && !m["MeteredSize"].empty()) {
      meteredSize = make_shared<long>(boost::any_cast<long>(m["MeteredSize"]));
    }
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      if (typeid(map<string, boost::any>) == m["Packages"].type()) {
        DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Packages"]));
        packages = make_shared<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages>(model1);
      }
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem() = default;
};
class DescribeFileSystemStatisticsResponseBodyFileSystems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem>> fileSystem{};

  DescribeFileSystemStatisticsResponseBodyFileSystems() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystem) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystem") != m.end() && !m["FileSystem"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystem"].type()) {
        vector<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystem = make_shared<vector<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemStatisticsResponseBodyFileSystems() = default;
};
class DescribeFileSystemStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFileSystemStatisticsResponseBodyFileSystemStatistics> fileSystemStatistics{};
  shared_ptr<DescribeFileSystemStatisticsResponseBodyFileSystems> fileSystems{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeFileSystemStatisticsResponseBody() {}

  explicit DescribeFileSystemStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemStatistics) {
      res["FileSystemStatistics"] = fileSystemStatistics ? boost::any(fileSystemStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileSystems) {
      res["FileSystems"] = fileSystems ? boost::any(fileSystems->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("FileSystemStatistics") != m.end() && !m["FileSystemStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileSystemStatistics"].type()) {
        DescribeFileSystemStatisticsResponseBodyFileSystemStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystemStatistics"]));
        fileSystemStatistics = make_shared<DescribeFileSystemStatisticsResponseBodyFileSystemStatistics>(model1);
      }
    }
    if (m.find("FileSystems") != m.end() && !m["FileSystems"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileSystems"].type()) {
        DescribeFileSystemStatisticsResponseBodyFileSystems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystems"]));
        fileSystems = make_shared<DescribeFileSystemStatisticsResponseBodyFileSystems>(model1);
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


  virtual ~DescribeFileSystemStatisticsResponseBody() = default;
};
class DescribeFileSystemStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFileSystemStatisticsResponseBody> body{};

  DescribeFileSystemStatisticsResponse() {}

  explicit DescribeFileSystemStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileSystemStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFileSystemStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFileSystemStatisticsResponse() = default;
};
class DescribeFileSystemsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeFileSystemsRequestTag() {}

  explicit DescribeFileSystemsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeFileSystemsRequestTag() = default;
};
class DescribeFileSystemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeFileSystemsRequestTag>> tag{};
  shared_ptr<string> vpcId{};

  DescribeFileSystemsRequest() {}

  explicit DescribeFileSystemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeFileSystemsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeFileSystemsRequestTag>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeFileSystemsRequest() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap : public Darabonba::Model {
public:
  shared_ptr<string> bindDN{};
  shared_ptr<string> searchBase{};
  shared_ptr<string> URI{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindDN) {
      res["BindDN"] = boost::any(*bindDN);
    }
    if (searchBase) {
      res["SearchBase"] = boost::any(*searchBase);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindDN") != m.end() && !m["BindDN"].empty()) {
      bindDN = make_shared<string>(boost::any_cast<string>(m["BindDN"]));
    }
    if (m.find("SearchBase") != m.end() && !m["SearchBase"].empty()) {
      searchBase = make_shared<string>(boost::any_cast<string>(m["SearchBase"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode : public Darabonba::Model {
public:
  shared_ptr<string> defaultPasswd{};
  shared_ptr<string> ecsId{};
  shared_ptr<string> ecsIp{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultPasswd) {
      res["DefaultPasswd"] = boost::any(*defaultPasswd);
    }
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (ecsIp) {
      res["EcsIp"] = boost::any(*ecsIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultPasswd") != m.end() && !m["DefaultPasswd"].empty()) {
      defaultPasswd = make_shared<string>(boost::any_cast<string>(m["DefaultPasswd"]));
    }
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("EcsIp") != m.end() && !m["EcsIp"].empty()) {
      ecsIp = make_shared<string>(boost::any_cast<string>(m["EcsIp"]));
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode>> clientMasterNode{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientMasterNode) {
      vector<boost::any> temp1;
      for(auto item1:*clientMasterNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClientMasterNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientMasterNode") != m.end() && !m["ClientMasterNode"].empty()) {
      if (typeid(vector<boost::any>) == m["ClientMasterNode"].type()) {
        vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClientMasterNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clientMasterNode = make_shared<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag>> tag{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes> clientMasterNodes{};
  shared_ptr<string> dualStackMountTargetDomain{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> networkType{};
  shared_ptr<string> status{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (clientMasterNodes) {
      res["ClientMasterNodes"] = clientMasterNodes ? boost::any(clientMasterNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
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
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("ClientMasterNodes") != m.end() && !m["ClientMasterNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientMasterNodes"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientMasterNodes"]));
        clientMasterNodes = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes>(model1);
      }
    }
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags>(model1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget>> mountTarget{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountTarget) {
      vector<boost::any> temp1;
      for(auto item1:*mountTarget){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountTarget"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountTarget") != m.end() && !m["MountTarget"].empty()) {
      if (typeid(vector<boost::any>) == m["MountTarget"].type()) {
        vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountTarget"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountTarget = make_shared<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions : public Darabonba::Model {
public:
  shared_ptr<bool> enableOplock{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableOplock) {
      res["EnableOplock"] = boost::any(*enableOplock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableOplock") != m.end() && !m["EnableOplock"].empty()) {
      enableOplock = make_shared<bool>(boost::any_cast<bool>(m["EnableOplock"]));
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> packageId{};
  shared_ptr<string> packageType{};
  shared_ptr<long> size{};
  shared_ptr<string> startTime{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage>> package{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (package) {
      vector<boost::any> temp1;
      for(auto item1:*package){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Package"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Package") != m.end() && !m["Package"].empty()) {
      if (typeid(vector<boost::any>) == m["Package"].type()) {
        vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Package"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        package = make_shared<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures : public Darabonba::Model {
public:
  shared_ptr<vector<string>> supportedFeature{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedFeature) {
      res["SupportedFeature"] = boost::any(*supportedFeature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedFeature") != m.end() && !m["SupportedFeature"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedFeature"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedFeature"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedFeature = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag>> tag{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemTags() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystemTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemTags() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> vswId{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VswId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VswId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystem : public Darabonba::Model {
public:
  shared_ptr<string> accessPointCount{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> capacity{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> encryptType{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap> ldap{};
  shared_ptr<long> meteredArchiveSize{};
  shared_ptr<long> meteredIASize{};
  shared_ptr<long> meteredSize{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets> mountTargets{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions> options{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages> packages{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> quorumVswId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures> supportedFeatures{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemTags> tags{};
  shared_ptr<string> version{};
  shared_ptr<string> vpcId{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds> vswIds{};
  shared_ptr<string> zoneId{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystem() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointCount) {
      res["AccessPointCount"] = boost::any(*accessPointCount);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (ldap) {
      res["Ldap"] = ldap ? boost::any(ldap->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meteredArchiveSize) {
      res["MeteredArchiveSize"] = boost::any(*meteredArchiveSize);
    }
    if (meteredIASize) {
      res["MeteredIASize"] = boost::any(*meteredIASize);
    }
    if (meteredSize) {
      res["MeteredSize"] = boost::any(*meteredSize);
    }
    if (mountTargets) {
      res["MountTargets"] = mountTargets ? boost::any(mountTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (options) {
      res["Options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (packages) {
      res["Packages"] = packages ? boost::any(packages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (quorumVswId) {
      res["QuorumVswId"] = boost::any(*quorumVswId);
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
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (supportedFeatures) {
      res["SupportedFeatures"] = supportedFeatures ? boost::any(supportedFeatures->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswIds) {
      res["VswIds"] = vswIds ? boost::any(vswIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointCount") != m.end() && !m["AccessPointCount"].empty()) {
      accessPointCount = make_shared<string>(boost::any_cast<string>(m["AccessPointCount"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("Ldap") != m.end() && !m["Ldap"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ldap"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ldap"]));
        ldap = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap>(model1);
      }
    }
    if (m.find("MeteredArchiveSize") != m.end() && !m["MeteredArchiveSize"].empty()) {
      meteredArchiveSize = make_shared<long>(boost::any_cast<long>(m["MeteredArchiveSize"]));
    }
    if (m.find("MeteredIASize") != m.end() && !m["MeteredIASize"].empty()) {
      meteredIASize = make_shared<long>(boost::any_cast<long>(m["MeteredIASize"]));
    }
    if (m.find("MeteredSize") != m.end() && !m["MeteredSize"].empty()) {
      meteredSize = make_shared<long>(boost::any_cast<long>(m["MeteredSize"]));
    }
    if (m.find("MountTargets") != m.end() && !m["MountTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountTargets"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountTargets"]));
        mountTargets = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets>(model1);
      }
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(map<string, boost::any>) == m["Options"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Options"]));
        options = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions>(model1);
      }
    }
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      if (typeid(map<string, boost::any>) == m["Packages"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Packages"]));
        packages = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages>(model1);
      }
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("QuorumVswId") != m.end() && !m["QuorumVswId"].empty()) {
      quorumVswId = make_shared<string>(boost::any_cast<string>(m["QuorumVswId"]));
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
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("SupportedFeatures") != m.end() && !m["SupportedFeatures"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedFeatures"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedFeatures"]));
        supportedFeatures = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemTags>(model1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswIds") != m.end() && !m["VswIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["VswIds"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VswIds"]));
        vswIds = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystem() = default;
};
class DescribeFileSystemsResponseBodyFileSystems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystem>> fileSystem{};

  DescribeFileSystemsResponseBodyFileSystems() {}

  explicit DescribeFileSystemsResponseBodyFileSystems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystem) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystem") != m.end() && !m["FileSystem"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystem"].type()) {
        vector<DescribeFileSystemsResponseBodyFileSystemsFileSystem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFileSystemsResponseBodyFileSystemsFileSystem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystem = make_shared<vector<DescribeFileSystemsResponseBodyFileSystemsFileSystem>>(expect1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystems() = default;
};
class DescribeFileSystemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFileSystemsResponseBodyFileSystems> fileSystems{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeFileSystemsResponseBody() {}

  explicit DescribeFileSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystems) {
      res["FileSystems"] = fileSystems ? boost::any(fileSystems->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("FileSystems") != m.end() && !m["FileSystems"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileSystems"].type()) {
        DescribeFileSystemsResponseBodyFileSystems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystems"]));
        fileSystems = make_shared<DescribeFileSystemsResponseBodyFileSystems>(model1);
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


  virtual ~DescribeFileSystemsResponseBody() = default;
};
class DescribeFileSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFileSystemsResponseBody> body{};

  DescribeFileSystemsResponse() {}

  explicit DescribeFileSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileSystemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFileSystemsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponse() = default;
};
class DescribeFilesetsRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeFilesetsRequestFilters() {}

  explicit DescribeFilesetsRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeFilesetsRequestFilters() = default;
};
class DescribeFilesetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<DescribeFilesetsRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderByField{};
  shared_ptr<string> sortOrder{};

  DescribeFilesetsRequest() {}

  explicit DescribeFilesetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderByField) {
      res["OrderByField"] = boost::any(*orderByField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeFilesetsRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFilesetsRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeFilesetsRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderByField") != m.end() && !m["OrderByField"].empty()) {
      orderByField = make_shared<string>(boost::any_cast<string>(m["OrderByField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~DescribeFilesetsRequest() = default;
};
class DescribeFilesetsResponseBodyEntriesEntrieQuota : public Darabonba::Model {
public:
  shared_ptr<long> fileCountLimit{};
  shared_ptr<long> sizeLimit{};

  DescribeFilesetsResponseBodyEntriesEntrieQuota() {}

  explicit DescribeFilesetsResponseBodyEntriesEntrieQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileCountLimit) {
      res["FileCountLimit"] = boost::any(*fileCountLimit);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileCountLimit") != m.end() && !m["FileCountLimit"].empty()) {
      fileCountLimit = make_shared<long>(boost::any_cast<long>(m["FileCountLimit"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<long>(boost::any_cast<long>(m["SizeLimit"]));
    }
  }


  virtual ~DescribeFilesetsResponseBodyEntriesEntrieQuota() = default;
};
class DescribeFilesetsResponseBodyEntriesEntrie : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> description{};
  shared_ptr<long> fileCountUsage{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemPath{};
  shared_ptr<string> fsetId{};
  shared_ptr<DescribeFilesetsResponseBodyEntriesEntrieQuota> quota{};
  shared_ptr<long> spaceUsage{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  DescribeFilesetsResponseBodyEntriesEntrie() {}

  explicit DescribeFilesetsResponseBodyEntriesEntrie(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileCountUsage) {
      res["FileCountUsage"] = boost::any(*fileCountUsage);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemPath) {
      res["FileSystemPath"] = boost::any(*fileSystemPath);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    if (quota) {
      res["Quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spaceUsage) {
      res["SpaceUsage"] = boost::any(*spaceUsage);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileCountUsage") != m.end() && !m["FileCountUsage"].empty()) {
      fileCountUsage = make_shared<long>(boost::any_cast<long>(m["FileCountUsage"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemPath") != m.end() && !m["FileSystemPath"].empty()) {
      fileSystemPath = make_shared<string>(boost::any_cast<string>(m["FileSystemPath"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quota"].type()) {
        DescribeFilesetsResponseBodyEntriesEntrieQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quota"]));
        quota = make_shared<DescribeFilesetsResponseBodyEntriesEntrieQuota>(model1);
      }
    }
    if (m.find("SpaceUsage") != m.end() && !m["SpaceUsage"].empty()) {
      spaceUsage = make_shared<long>(boost::any_cast<long>(m["SpaceUsage"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeFilesetsResponseBodyEntriesEntrie() = default;
};
class DescribeFilesetsResponseBodyEntries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFilesetsResponseBodyEntriesEntrie>> entrie{};

  DescribeFilesetsResponseBodyEntries() {}

  explicit DescribeFilesetsResponseBodyEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entrie) {
      vector<boost::any> temp1;
      for(auto item1:*entrie){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entrie"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entrie") != m.end() && !m["Entrie"].empty()) {
      if (typeid(vector<boost::any>) == m["Entrie"].type()) {
        vector<DescribeFilesetsResponseBodyEntriesEntrie> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entrie"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFilesetsResponseBodyEntriesEntrie model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entrie = make_shared<vector<DescribeFilesetsResponseBodyEntriesEntrie>>(expect1);
      }
    }
  }


  virtual ~DescribeFilesetsResponseBodyEntries() = default;
};
class DescribeFilesetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFilesetsResponseBodyEntries> entries{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeFilesetsResponseBody() {}

  explicit DescribeFilesetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entries) {
      res["Entries"] = entries ? boost::any(entries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entries") != m.end() && !m["Entries"].empty()) {
      if (typeid(map<string, boost::any>) == m["Entries"].type()) {
        DescribeFilesetsResponseBodyEntries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Entries"]));
        entries = make_shared<DescribeFilesetsResponseBodyEntries>(model1);
      }
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFilesetsResponseBody() = default;
};
class DescribeFilesetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFilesetsResponseBody> body{};

  DescribeFilesetsResponse() {}

  explicit DescribeFilesetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFilesetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFilesetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFilesetsResponse() = default;
};
class DescribeLifecyclePoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> lifecyclePolicyName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storageType{};

  DescribeLifecyclePoliciesRequest() {}

  explicit DescribeLifecyclePoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (lifecyclePolicyName) {
      res["LifecyclePolicyName"] = boost::any(*lifecyclePolicyName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("LifecyclePolicyName") != m.end() && !m["LifecyclePolicyName"].empty()) {
      lifecyclePolicyName = make_shared<string>(boost::any_cast<string>(m["LifecyclePolicyName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~DescribeLifecyclePoliciesRequest() = default;
};
class DescribeLifecyclePoliciesResponseBodyLifecyclePolicies : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> lifecyclePolicyName{};
  shared_ptr<string> lifecycleRuleName{};
  shared_ptr<string> path{};
  shared_ptr<vector<string>> paths{};
  shared_ptr<string> storageType{};

  DescribeLifecyclePoliciesResponseBodyLifecyclePolicies() {}

  explicit DescribeLifecyclePoliciesResponseBodyLifecyclePolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (lifecyclePolicyName) {
      res["LifecyclePolicyName"] = boost::any(*lifecyclePolicyName);
    }
    if (lifecycleRuleName) {
      res["LifecycleRuleName"] = boost::any(*lifecycleRuleName);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("LifecyclePolicyName") != m.end() && !m["LifecyclePolicyName"].empty()) {
      lifecyclePolicyName = make_shared<string>(boost::any_cast<string>(m["LifecyclePolicyName"]));
    }
    if (m.find("LifecycleRuleName") != m.end() && !m["LifecycleRuleName"].empty()) {
      lifecycleRuleName = make_shared<string>(boost::any_cast<string>(m["LifecycleRuleName"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Paths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Paths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~DescribeLifecyclePoliciesResponseBodyLifecyclePolicies() = default;
};
class DescribeLifecyclePoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies>> lifecyclePolicies{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeLifecyclePoliciesResponseBody() {}

  explicit DescribeLifecyclePoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lifecyclePolicies) {
      vector<boost::any> temp1;
      for(auto item1:*lifecyclePolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecyclePolicies"] = boost::any(temp1);
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
    if (m.find("LifecyclePolicies") != m.end() && !m["LifecyclePolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecyclePolicies"].type()) {
        vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecyclePolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLifecyclePoliciesResponseBodyLifecyclePolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecyclePolicies = make_shared<vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies>>(expect1);
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


  virtual ~DescribeLifecyclePoliciesResponseBody() = default;
};
class DescribeLifecyclePoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLifecyclePoliciesResponseBody> body{};

  DescribeLifecyclePoliciesResponse() {}

  explicit DescribeLifecyclePoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLifecyclePoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLifecyclePoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLifecyclePoliciesResponse() = default;
};
class DescribeLogAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeLogAnalysisRequest() {}

  explicit DescribeLogAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
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
  }


  virtual ~DescribeLogAnalysisRequest() = default;
};
class DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};
  shared_ptr<string> region{};
  shared_ptr<string> roleArn{};

  DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue() {}

  explicit DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["Logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logstore") != m.end() && !m["Logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["Logstore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
  }


  virtual ~DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue() = default;
};
class DescribeLogAnalysisResponseBodyAnalysesAnalysis : public Darabonba::Model {
public:
  shared_ptr<string> metaKey{};
  shared_ptr<DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue> metaValue{};

  DescribeLogAnalysisResponseBodyAnalysesAnalysis() {}

  explicit DescribeLogAnalysisResponseBodyAnalysesAnalysis(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metaKey) {
      res["MetaKey"] = boost::any(*metaKey);
    }
    if (metaValue) {
      res["MetaValue"] = metaValue ? boost::any(metaValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetaKey") != m.end() && !m["MetaKey"].empty()) {
      metaKey = make_shared<string>(boost::any_cast<string>(m["MetaKey"]));
    }
    if (m.find("MetaValue") != m.end() && !m["MetaValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetaValue"].type()) {
        DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetaValue"]));
        metaValue = make_shared<DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue>(model1);
      }
    }
  }


  virtual ~DescribeLogAnalysisResponseBodyAnalysesAnalysis() = default;
};
class DescribeLogAnalysisResponseBodyAnalyses : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLogAnalysisResponseBodyAnalysesAnalysis>> analysis{};

  DescribeLogAnalysisResponseBodyAnalyses() {}

  explicit DescribeLogAnalysisResponseBodyAnalyses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysis) {
      vector<boost::any> temp1;
      for(auto item1:*analysis){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Analysis"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Analysis") != m.end() && !m["Analysis"].empty()) {
      if (typeid(vector<boost::any>) == m["Analysis"].type()) {
        vector<DescribeLogAnalysisResponseBodyAnalysesAnalysis> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Analysis"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogAnalysisResponseBodyAnalysesAnalysis model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        analysis = make_shared<vector<DescribeLogAnalysisResponseBodyAnalysesAnalysis>>(expect1);
      }
    }
  }


  virtual ~DescribeLogAnalysisResponseBodyAnalyses() = default;
};
class DescribeLogAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeLogAnalysisResponseBodyAnalyses> analyses{};
  shared_ptr<string> code{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeLogAnalysisResponseBody() {}

  explicit DescribeLogAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyses) {
      res["Analyses"] = analyses ? boost::any(analyses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Analyses") != m.end() && !m["Analyses"].empty()) {
      if (typeid(map<string, boost::any>) == m["Analyses"].type()) {
        DescribeLogAnalysisResponseBodyAnalyses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Analyses"]));
        analyses = make_shared<DescribeLogAnalysisResponseBodyAnalyses>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeLogAnalysisResponseBody() = default;
};
class DescribeLogAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogAnalysisResponseBody> body{};

  DescribeLogAnalysisResponse() {}

  explicit DescribeLogAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogAnalysisResponse() = default;
};
class DescribeMountTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dualStackMountTargetDomain{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeMountTargetsRequest() {}

  explicit DescribeMountTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
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
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeMountTargetsRequest() = default;
};
class DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode : public Darabonba::Model {
public:
  shared_ptr<string> defaultPasswd{};
  shared_ptr<string> ecsId{};
  shared_ptr<string> ecsIp{};

  DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode() {}

  explicit DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultPasswd) {
      res["DefaultPasswd"] = boost::any(*defaultPasswd);
    }
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (ecsIp) {
      res["EcsIp"] = boost::any(*ecsIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultPasswd") != m.end() && !m["DefaultPasswd"].empty()) {
      defaultPasswd = make_shared<string>(boost::any_cast<string>(m["DefaultPasswd"]));
    }
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("EcsIp") != m.end() && !m["EcsIp"].empty()) {
      ecsIp = make_shared<string>(boost::any_cast<string>(m["EcsIp"]));
    }
  }


  virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode() = default;
};
class DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode>> clientMasterNode{};

  DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes() {}

  explicit DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientMasterNode) {
      vector<boost::any> temp1;
      for(auto item1:*clientMasterNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClientMasterNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientMasterNode") != m.end() && !m["ClientMasterNode"].empty()) {
      if (typeid(vector<boost::any>) == m["ClientMasterNode"].type()) {
        vector<DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClientMasterNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clientMasterNode = make_shared<vector<DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode>>(expect1);
      }
    }
  }


  virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes() = default;
};
class DescribeMountTargetsResponseBodyMountTargetsMountTarget : public Darabonba::Model {
public:
  shared_ptr<string> accessGroup{};
  shared_ptr<DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes> clientMasterNodes{};
  shared_ptr<string> dualStackMountTargetDomain{};
  shared_ptr<string> IPVersion{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> networkType{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};

  DescribeMountTargetsResponseBodyMountTargetsMountTarget() {}

  explicit DescribeMountTargetsResponseBodyMountTargetsMountTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (clientMasterNodes) {
      res["ClientMasterNodes"] = clientMasterNodes ? boost::any(clientMasterNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
    }
    if (IPVersion) {
      res["IPVersion"] = boost::any(*IPVersion);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("ClientMasterNodes") != m.end() && !m["ClientMasterNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientMasterNodes"].type()) {
        DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientMasterNodes"]));
        clientMasterNodes = make_shared<DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes>(model1);
      }
    }
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
    if (m.find("IPVersion") != m.end() && !m["IPVersion"].empty()) {
      IPVersion = make_shared<string>(boost::any_cast<string>(m["IPVersion"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
  }


  virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTarget() = default;
};
class DescribeMountTargetsResponseBodyMountTargets : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMountTargetsResponseBodyMountTargetsMountTarget>> mountTarget{};

  DescribeMountTargetsResponseBodyMountTargets() {}

  explicit DescribeMountTargetsResponseBodyMountTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountTarget) {
      vector<boost::any> temp1;
      for(auto item1:*mountTarget){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountTarget"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountTarget") != m.end() && !m["MountTarget"].empty()) {
      if (typeid(vector<boost::any>) == m["MountTarget"].type()) {
        vector<DescribeMountTargetsResponseBodyMountTargetsMountTarget> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountTarget"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMountTargetsResponseBodyMountTargetsMountTarget model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountTarget = make_shared<vector<DescribeMountTargetsResponseBodyMountTargetsMountTarget>>(expect1);
      }
    }
  }


  virtual ~DescribeMountTargetsResponseBodyMountTargets() = default;
};
class DescribeMountTargetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMountTargetsResponseBodyMountTargets> mountTargets{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeMountTargetsResponseBody() {}

  explicit DescribeMountTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountTargets) {
      res["MountTargets"] = mountTargets ? boost::any(mountTargets->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("MountTargets") != m.end() && !m["MountTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountTargets"].type()) {
        DescribeMountTargetsResponseBodyMountTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountTargets"]));
        mountTargets = make_shared<DescribeMountTargetsResponseBodyMountTargets>(model1);
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


  virtual ~DescribeMountTargetsResponseBody() = default;
};
class DescribeMountTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMountTargetsResponseBody> body{};

  DescribeMountTargetsResponse() {}

  explicit DescribeMountTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMountTargetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMountTargetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMountTargetsResponse() = default;
};
class DescribeMountedClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIP{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeMountedClientsRequest() {}

  explicit DescribeMountedClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
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
  }


  virtual ~DescribeMountedClientsRequest() = default;
};
class DescribeMountedClientsResponseBodyClientsClient : public Darabonba::Model {
public:
  shared_ptr<string> clientIP{};

  DescribeMountedClientsResponseBodyClientsClient() {}

  explicit DescribeMountedClientsResponseBodyClientsClient(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
  }


  virtual ~DescribeMountedClientsResponseBodyClientsClient() = default;
};
class DescribeMountedClientsResponseBodyClients : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMountedClientsResponseBodyClientsClient>> client{};

  DescribeMountedClientsResponseBodyClients() {}

  explicit DescribeMountedClientsResponseBodyClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (client) {
      vector<boost::any> temp1;
      for(auto item1:*client){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Client"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Client") != m.end() && !m["Client"].empty()) {
      if (typeid(vector<boost::any>) == m["Client"].type()) {
        vector<DescribeMountedClientsResponseBodyClientsClient> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Client"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMountedClientsResponseBodyClientsClient model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        client = make_shared<vector<DescribeMountedClientsResponseBodyClientsClient>>(expect1);
      }
    }
  }


  virtual ~DescribeMountedClientsResponseBodyClients() = default;
};
class DescribeMountedClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMountedClientsResponseBodyClients> clients{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeMountedClientsResponseBody() {}

  explicit DescribeMountedClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      res["Clients"] = clients ? boost::any(clients->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(map<string, boost::any>) == m["Clients"].type()) {
        DescribeMountedClientsResponseBodyClients model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clients"]));
        clients = make_shared<DescribeMountedClientsResponseBodyClients>(model1);
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


  virtual ~DescribeMountedClientsResponseBody() = default;
};
class DescribeMountedClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMountedClientsResponseBody> body{};

  DescribeMountedClientsResponse() {}

  explicit DescribeMountedClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMountedClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMountedClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMountedClientsResponse() = default;
};
class DescribeNfsAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  DescribeNfsAclRequest() {}

  explicit DescribeNfsAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DescribeNfsAclRequest() = default;
};
class DescribeNfsAclResponseBodyAcl : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  DescribeNfsAclResponseBodyAcl() {}

  explicit DescribeNfsAclResponseBodyAcl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeNfsAclResponseBodyAcl() = default;
};
class DescribeNfsAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeNfsAclResponseBodyAcl> acl{};
  shared_ptr<string> requestId{};

  DescribeNfsAclResponseBody() {}

  explicit DescribeNfsAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["Acl"] = acl ? boost::any(acl->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acl") != m.end() && !m["Acl"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acl"].type()) {
        DescribeNfsAclResponseBodyAcl model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acl"]));
        acl = make_shared<DescribeNfsAclResponseBodyAcl>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNfsAclResponseBody() = default;
};
class DescribeNfsAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNfsAclResponseBody> body{};

  DescribeNfsAclResponse() {}

  explicit DescribeNfsAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNfsAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNfsAclResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNfsAclResponse() = default;
};
class DescribeProtocolMountTargetRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeProtocolMountTargetRequestFilters() {}

  explicit DescribeProtocolMountTargetRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeProtocolMountTargetRequestFilters() = default;
};
class DescribeProtocolMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<DescribeProtocolMountTargetRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeProtocolMountTargetRequest() {}

  explicit DescribeProtocolMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeProtocolMountTargetRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProtocolMountTargetRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeProtocolMountTargetRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeProtocolMountTargetRequest() = default;
};
class DescribeProtocolMountTargetResponseBodyProtocolMountTargets : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> exportId{};
  shared_ptr<string> fsetId{};
  shared_ptr<string> path{};
  shared_ptr<string> protocolMountTargetDomain{};
  shared_ptr<string> protocolServiceId{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeProtocolMountTargetResponseBodyProtocolMountTargets() {}

  explicit DescribeProtocolMountTargetResponseBodyProtocolMountTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (exportId) {
      res["ExportId"] = boost::any(*exportId);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (protocolMountTargetDomain) {
      res["ProtocolMountTargetDomain"] = boost::any(*protocolMountTargetDomain);
    }
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
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
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExportId") != m.end() && !m["ExportId"].empty()) {
      exportId = make_shared<string>(boost::any_cast<string>(m["ExportId"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProtocolMountTargetDomain") != m.end() && !m["ProtocolMountTargetDomain"].empty()) {
      protocolMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["ProtocolMountTargetDomain"]));
    }
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
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


  virtual ~DescribeProtocolMountTargetResponseBodyProtocolMountTargets() = default;
};
class DescribeProtocolMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets>> protocolMountTargets{};
  shared_ptr<string> requestId{};

  DescribeProtocolMountTargetResponseBody() {}

  explicit DescribeProtocolMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (protocolMountTargets) {
      vector<boost::any> temp1;
      for(auto item1:*protocolMountTargets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProtocolMountTargets"] = boost::any(temp1);
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
    if (m.find("ProtocolMountTargets") != m.end() && !m["ProtocolMountTargets"].empty()) {
      if (typeid(vector<boost::any>) == m["ProtocolMountTargets"].type()) {
        vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProtocolMountTargets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProtocolMountTargetResponseBodyProtocolMountTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        protocolMountTargets = make_shared<vector<DescribeProtocolMountTargetResponseBodyProtocolMountTargets>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProtocolMountTargetResponseBody() = default;
};
class DescribeProtocolMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProtocolMountTargetResponseBody> body{};

  DescribeProtocolMountTargetResponse() {}

  explicit DescribeProtocolMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProtocolMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProtocolMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProtocolMountTargetResponse() = default;
};
class DescribeProtocolServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> protocolServiceIds{};
  shared_ptr<string> status{};

  DescribeProtocolServiceRequest() {}

  explicit DescribeProtocolServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (protocolServiceIds) {
      res["ProtocolServiceIds"] = boost::any(*protocolServiceIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProtocolServiceIds") != m.end() && !m["ProtocolServiceIds"].empty()) {
      protocolServiceIds = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceIds"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeProtocolServiceRequest() = default;
};
class DescribeProtocolServiceResponseBodyProtocolServices : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> instanceBaseThroughput{};
  shared_ptr<long> instanceBurstThroughput{};
  shared_ptr<long> instanceRAM{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> mountTargetCount{};
  shared_ptr<string> protocolServiceId{};
  shared_ptr<string> protocolSpec{};
  shared_ptr<long> protocolThroughput{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> status{};

  DescribeProtocolServiceResponseBodyProtocolServices() {}

  explicit DescribeProtocolServiceResponseBodyProtocolServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceBaseThroughput) {
      res["InstanceBaseThroughput"] = boost::any(*instanceBaseThroughput);
    }
    if (instanceBurstThroughput) {
      res["InstanceBurstThroughput"] = boost::any(*instanceBurstThroughput);
    }
    if (instanceRAM) {
      res["InstanceRAM"] = boost::any(*instanceRAM);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (mountTargetCount) {
      res["MountTargetCount"] = boost::any(*mountTargetCount);
    }
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
    }
    if (protocolSpec) {
      res["ProtocolSpec"] = boost::any(*protocolSpec);
    }
    if (protocolThroughput) {
      res["ProtocolThroughput"] = boost::any(*protocolThroughput);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("InstanceBaseThroughput") != m.end() && !m["InstanceBaseThroughput"].empty()) {
      instanceBaseThroughput = make_shared<long>(boost::any_cast<long>(m["InstanceBaseThroughput"]));
    }
    if (m.find("InstanceBurstThroughput") != m.end() && !m["InstanceBurstThroughput"].empty()) {
      instanceBurstThroughput = make_shared<long>(boost::any_cast<long>(m["InstanceBurstThroughput"]));
    }
    if (m.find("InstanceRAM") != m.end() && !m["InstanceRAM"].empty()) {
      instanceRAM = make_shared<long>(boost::any_cast<long>(m["InstanceRAM"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("MountTargetCount") != m.end() && !m["MountTargetCount"].empty()) {
      mountTargetCount = make_shared<long>(boost::any_cast<long>(m["MountTargetCount"]));
    }
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
    if (m.find("ProtocolSpec") != m.end() && !m["ProtocolSpec"].empty()) {
      protocolSpec = make_shared<string>(boost::any_cast<string>(m["ProtocolSpec"]));
    }
    if (m.find("ProtocolThroughput") != m.end() && !m["ProtocolThroughput"].empty()) {
      protocolThroughput = make_shared<long>(boost::any_cast<long>(m["ProtocolThroughput"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeProtocolServiceResponseBodyProtocolServices() = default;
};
class DescribeProtocolServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<DescribeProtocolServiceResponseBodyProtocolServices>> protocolServices{};
  shared_ptr<string> requestId{};

  DescribeProtocolServiceResponseBody() {}

  explicit DescribeProtocolServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (protocolServices) {
      vector<boost::any> temp1;
      for(auto item1:*protocolServices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProtocolServices"] = boost::any(temp1);
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
    if (m.find("ProtocolServices") != m.end() && !m["ProtocolServices"].empty()) {
      if (typeid(vector<boost::any>) == m["ProtocolServices"].type()) {
        vector<DescribeProtocolServiceResponseBodyProtocolServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProtocolServices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProtocolServiceResponseBodyProtocolServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        protocolServices = make_shared<vector<DescribeProtocolServiceResponseBodyProtocolServices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProtocolServiceResponseBody() = default;
};
class DescribeProtocolServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProtocolServiceResponseBody> body{};

  DescribeProtocolServiceResponse() {}

  explicit DescribeProtocolServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProtocolServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProtocolServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProtocolServiceResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
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
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class DescribeSmbAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  DescribeSmbAclRequest() {}

  explicit DescribeSmbAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DescribeSmbAclRequest() = default;
};
class DescribeSmbAclResponseBodyAcl : public Darabonba::Model {
public:
  shared_ptr<bool> enableAnonymousAccess{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> encryptData{};
  shared_ptr<string> homeDirPath{};
  shared_ptr<bool> rejectUnencryptedAccess{};
  shared_ptr<string> superAdminSid{};

  DescribeSmbAclResponseBodyAcl() {}

  explicit DescribeSmbAclResponseBodyAcl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAnonymousAccess) {
      res["EnableAnonymousAccess"] = boost::any(*enableAnonymousAccess);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (encryptData) {
      res["EncryptData"] = boost::any(*encryptData);
    }
    if (homeDirPath) {
      res["HomeDirPath"] = boost::any(*homeDirPath);
    }
    if (rejectUnencryptedAccess) {
      res["RejectUnencryptedAccess"] = boost::any(*rejectUnencryptedAccess);
    }
    if (superAdminSid) {
      res["SuperAdminSid"] = boost::any(*superAdminSid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAnonymousAccess") != m.end() && !m["EnableAnonymousAccess"].empty()) {
      enableAnonymousAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAnonymousAccess"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EncryptData") != m.end() && !m["EncryptData"].empty()) {
      encryptData = make_shared<bool>(boost::any_cast<bool>(m["EncryptData"]));
    }
    if (m.find("HomeDirPath") != m.end() && !m["HomeDirPath"].empty()) {
      homeDirPath = make_shared<string>(boost::any_cast<string>(m["HomeDirPath"]));
    }
    if (m.find("RejectUnencryptedAccess") != m.end() && !m["RejectUnencryptedAccess"].empty()) {
      rejectUnencryptedAccess = make_shared<bool>(boost::any_cast<bool>(m["RejectUnencryptedAccess"]));
    }
    if (m.find("SuperAdminSid") != m.end() && !m["SuperAdminSid"].empty()) {
      superAdminSid = make_shared<string>(boost::any_cast<string>(m["SuperAdminSid"]));
    }
  }


  virtual ~DescribeSmbAclResponseBodyAcl() = default;
};
class DescribeSmbAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSmbAclResponseBodyAcl> acl{};
  shared_ptr<string> requestId{};

  DescribeSmbAclResponseBody() {}

  explicit DescribeSmbAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["Acl"] = acl ? boost::any(acl->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acl") != m.end() && !m["Acl"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acl"].type()) {
        DescribeSmbAclResponseBodyAcl model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acl"]));
        acl = make_shared<DescribeSmbAclResponseBodyAcl>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSmbAclResponseBody() = default;
};
class DescribeSmbAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSmbAclResponseBody> body{};

  DescribeSmbAclResponse() {}

  explicit DescribeSmbAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSmbAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSmbAclResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSmbAclResponse() = default;
};
class DescribeSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> snapshotIds{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> snapshotType{};
  shared_ptr<string> status{};

  DescribeSnapshotsRequest() {}

  explicit DescribeSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (snapshotIds) {
      res["SnapshotIds"] = boost::any(*snapshotIds);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (snapshotType) {
      res["SnapshotType"] = boost::any(*snapshotType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SnapshotIds") != m.end() && !m["SnapshotIds"].empty()) {
      snapshotIds = make_shared<string>(boost::any_cast<string>(m["SnapshotIds"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("SnapshotType") != m.end() && !m["SnapshotType"].empty()) {
      snapshotType = make_shared<string>(boost::any_cast<string>(m["SnapshotType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSnapshotsRequest() = default;
};
class DescribeSnapshotsResponseBodySnapshotsSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> encryptType{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> progress{};
  shared_ptr<long> remainTime{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> snapshotType{};
  shared_ptr<string> sourceFileSystemId{};
  shared_ptr<long> sourceFileSystemSize{};
  shared_ptr<string> sourceFileSystemVersion{};
  shared_ptr<string> status{};

  DescribeSnapshotsResponseBodySnapshotsSnapshot() {}

  explicit DescribeSnapshotsResponseBodySnapshotsSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (remainTime) {
      res["RemainTime"] = boost::any(*remainTime);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (snapshotType) {
      res["SnapshotType"] = boost::any(*snapshotType);
    }
    if (sourceFileSystemId) {
      res["SourceFileSystemId"] = boost::any(*sourceFileSystemId);
    }
    if (sourceFileSystemSize) {
      res["SourceFileSystemSize"] = boost::any(*sourceFileSystemSize);
    }
    if (sourceFileSystemVersion) {
      res["SourceFileSystemVersion"] = boost::any(*sourceFileSystemVersion);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RemainTime") != m.end() && !m["RemainTime"].empty()) {
      remainTime = make_shared<long>(boost::any_cast<long>(m["RemainTime"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("SnapshotType") != m.end() && !m["SnapshotType"].empty()) {
      snapshotType = make_shared<string>(boost::any_cast<string>(m["SnapshotType"]));
    }
    if (m.find("SourceFileSystemId") != m.end() && !m["SourceFileSystemId"].empty()) {
      sourceFileSystemId = make_shared<string>(boost::any_cast<string>(m["SourceFileSystemId"]));
    }
    if (m.find("SourceFileSystemSize") != m.end() && !m["SourceFileSystemSize"].empty()) {
      sourceFileSystemSize = make_shared<long>(boost::any_cast<long>(m["SourceFileSystemSize"]));
    }
    if (m.find("SourceFileSystemVersion") != m.end() && !m["SourceFileSystemVersion"].empty()) {
      sourceFileSystemVersion = make_shared<string>(boost::any_cast<string>(m["SourceFileSystemVersion"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSnapshotsResponseBodySnapshotsSnapshot() = default;
};
class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSnapshotsResponseBodySnapshotsSnapshot>> snapshot{};

  DescribeSnapshotsResponseBodySnapshots() {}

  explicit DescribeSnapshotsResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (snapshot) {
      vector<boost::any> temp1;
      for(auto item1:*snapshot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshot"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Snapshot") != m.end() && !m["Snapshot"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshot"].type()) {
        vector<DescribeSnapshotsResponseBodySnapshotsSnapshot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSnapshotsResponseBodySnapshotsSnapshot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshot = make_shared<vector<DescribeSnapshotsResponseBodySnapshotsSnapshot>>(expect1);
      }
    }
  }


  virtual ~DescribeSnapshotsResponseBodySnapshots() = default;
};
class DescribeSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSnapshotsResponseBodySnapshots> snapshots{};
  shared_ptr<long> totalCount{};

  DescribeSnapshotsResponseBody() {}

  explicit DescribeSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (snapshots) {
      res["Snapshots"] = snapshots ? boost::any(snapshots->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(map<string, boost::any>) == m["Snapshots"].type()) {
        DescribeSnapshotsResponseBodySnapshots model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Snapshots"]));
        snapshots = make_shared<DescribeSnapshotsResponseBodySnapshots>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSnapshotsResponseBody() = default;
};
class DescribeSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSnapshotsResponseBody> body{};

  DescribeSnapshotsResponse() {}

  explicit DescribeSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSnapshotsResponse() = default;
};
class DescribeStoragePackagesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> useUTCDateTime{};

  DescribeStoragePackagesRequest() {}

  explicit DescribeStoragePackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (useUTCDateTime) {
      res["UseUTCDateTime"] = boost::any(*useUTCDateTime);
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
    if (m.find("UseUTCDateTime") != m.end() && !m["UseUTCDateTime"].empty()) {
      useUTCDateTime = make_shared<bool>(boost::any_cast<bool>(m["UseUTCDateTime"]));
    }
  }


  virtual ~DescribeStoragePackagesRequest() = default;
};
class DescribeStoragePackagesResponseBodyPackagesPackage : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> packageId{};
  shared_ptr<long> size{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};

  DescribeStoragePackagesResponseBodyPackagesPackage() {}

  explicit DescribeStoragePackagesResponseBodyPackagesPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~DescribeStoragePackagesResponseBodyPackagesPackage() = default;
};
class DescribeStoragePackagesResponseBodyPackages : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeStoragePackagesResponseBodyPackagesPackage>> package{};

  DescribeStoragePackagesResponseBodyPackages() {}

  explicit DescribeStoragePackagesResponseBodyPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (package) {
      vector<boost::any> temp1;
      for(auto item1:*package){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Package"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Package") != m.end() && !m["Package"].empty()) {
      if (typeid(vector<boost::any>) == m["Package"].type()) {
        vector<DescribeStoragePackagesResponseBodyPackagesPackage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Package"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStoragePackagesResponseBodyPackagesPackage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        package = make_shared<vector<DescribeStoragePackagesResponseBodyPackagesPackage>>(expect1);
      }
    }
  }


  virtual ~DescribeStoragePackagesResponseBodyPackages() = default;
};
class DescribeStoragePackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeStoragePackagesResponseBodyPackages> packages{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeStoragePackagesResponseBody() {}

  explicit DescribeStoragePackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packages) {
      res["Packages"] = packages ? boost::any(packages->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      if (typeid(map<string, boost::any>) == m["Packages"].type()) {
        DescribeStoragePackagesResponseBodyPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Packages"]));
        packages = make_shared<DescribeStoragePackagesResponseBodyPackages>(model1);
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


  virtual ~DescribeStoragePackagesResponseBody() = default;
};
class DescribeStoragePackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStoragePackagesResponseBody> body{};

  DescribeStoragePackagesResponse() {}

  explicit DescribeStoragePackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStoragePackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStoragePackagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStoragePackagesResponse() = default;
};
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> regionId{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZonesZoneCapacity : public Darabonba::Model {
public:
  shared_ptr<vector<string>> protocol{};

  DescribeZonesResponseBodyZonesZoneCapacity() {}

  explicit DescribeZonesResponseBodyZonesZoneCapacity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Protocol"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Protocol"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocol = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZoneCapacity() = default;
};
class DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType : public Darabonba::Model {
public:
  shared_ptr<string> protocolType{};
  shared_ptr<string> storageType{};

  DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType() {}

  explicit DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType() = default;
};
class DescribeZonesResponseBodyZonesZoneInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType>> instanceType{};

  DescribeZonesResponseBodyZonesZoneInstanceTypes() {}

  explicit DescribeZonesResponseBodyZonesZoneInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      vector<boost::any> temp1;
      for(auto item1:*instanceType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceType"].type()) {
        vector<DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceType = make_shared<vector<DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZoneInstanceTypes() = default;
};
class DescribeZonesResponseBodyZonesZonePerformance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> protocol{};

  DescribeZonesResponseBodyZonesZonePerformance() {}

  explicit DescribeZonesResponseBodyZonesZonePerformance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Protocol"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Protocol"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocol = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZonePerformance() = default;
};
class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
public:
  shared_ptr<DescribeZonesResponseBodyZonesZoneCapacity> capacity{};
  shared_ptr<DescribeZonesResponseBodyZonesZoneInstanceTypes> instanceTypes{};
  shared_ptr<DescribeZonesResponseBodyZonesZonePerformance> performance{};
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZonesZone() {}

  explicit DescribeZonesResponseBodyZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = capacity ? boost::any(capacity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceTypes) {
      res["InstanceTypes"] = instanceTypes ? boost::any(instanceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (performance) {
      res["Performance"] = performance ? boost::any(performance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capacity"].type()) {
        DescribeZonesResponseBodyZonesZoneCapacity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capacity"]));
        capacity = make_shared<DescribeZonesResponseBodyZonesZoneCapacity>(model1);
      }
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypes"].type()) {
        DescribeZonesResponseBodyZonesZoneInstanceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypes"]));
        instanceTypes = make_shared<DescribeZonesResponseBodyZonesZoneInstanceTypes>(model1);
      }
    }
    if (m.find("Performance") != m.end() && !m["Performance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Performance"].type()) {
        DescribeZonesResponseBodyZonesZonePerformance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Performance"]));
        performance = make_shared<DescribeZonesResponseBodyZonesZonePerformance>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class DisableAndCleanRecycleBinRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  DisableAndCleanRecycleBinRequest() {}

  explicit DisableAndCleanRecycleBinRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DisableAndCleanRecycleBinRequest() = default;
};
class DisableAndCleanRecycleBinResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAndCleanRecycleBinResponseBody() {}

  explicit DisableAndCleanRecycleBinResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAndCleanRecycleBinResponseBody() = default;
};
class DisableAndCleanRecycleBinResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAndCleanRecycleBinResponseBody> body{};

  DisableAndCleanRecycleBinResponse() {}

  explicit DisableAndCleanRecycleBinResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAndCleanRecycleBinResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAndCleanRecycleBinResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAndCleanRecycleBinResponse() = default;
};
class DisableNfsAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  DisableNfsAclRequest() {}

  explicit DisableNfsAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DisableNfsAclRequest() = default;
};
class DisableNfsAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableNfsAclResponseBody() {}

  explicit DisableNfsAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableNfsAclResponseBody() = default;
};
class DisableNfsAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableNfsAclResponseBody> body{};

  DisableNfsAclResponse() {}

  explicit DisableNfsAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableNfsAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableNfsAclResponseBody>(model1);
      }
    }
  }


  virtual ~DisableNfsAclResponse() = default;
};
class DisableSmbAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  DisableSmbAclRequest() {}

  explicit DisableSmbAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DisableSmbAclRequest() = default;
};
class DisableSmbAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableSmbAclResponseBody() {}

  explicit DisableSmbAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableSmbAclResponseBody() = default;
};
class DisableSmbAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableSmbAclResponseBody> body{};

  DisableSmbAclResponse() {}

  explicit DisableSmbAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableSmbAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableSmbAclResponseBody>(model1);
      }
    }
  }


  virtual ~DisableSmbAclResponse() = default;
};
class EnableNfsAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  EnableNfsAclRequest() {}

  explicit EnableNfsAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~EnableNfsAclRequest() = default;
};
class EnableNfsAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableNfsAclResponseBody() {}

  explicit EnableNfsAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableNfsAclResponseBody() = default;
};
class EnableNfsAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableNfsAclResponseBody> body{};

  EnableNfsAclResponse() {}

  explicit EnableNfsAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableNfsAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableNfsAclResponseBody>(model1);
      }
    }
  }


  virtual ~EnableNfsAclResponse() = default;
};
class EnableRecycleBinRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> reservedDays{};

  EnableRecycleBinRequest() {}

  explicit EnableRecycleBinRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (reservedDays) {
      res["ReservedDays"] = boost::any(*reservedDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ReservedDays") != m.end() && !m["ReservedDays"].empty()) {
      reservedDays = make_shared<long>(boost::any_cast<long>(m["ReservedDays"]));
    }
  }


  virtual ~EnableRecycleBinRequest() = default;
};
class EnableRecycleBinResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableRecycleBinResponseBody() {}

  explicit EnableRecycleBinResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableRecycleBinResponseBody() = default;
};
class EnableRecycleBinResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableRecycleBinResponseBody> body{};

  EnableRecycleBinResponse() {}

  explicit EnableRecycleBinResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableRecycleBinResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableRecycleBinResponseBody>(model1);
      }
    }
  }


  virtual ~EnableRecycleBinResponse() = default;
};
class EnableSmbAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> keytab{};
  shared_ptr<string> keytabMd5{};

  EnableSmbAclRequest() {}

  explicit EnableSmbAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (keytab) {
      res["Keytab"] = boost::any(*keytab);
    }
    if (keytabMd5) {
      res["KeytabMd5"] = boost::any(*keytabMd5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Keytab") != m.end() && !m["Keytab"].empty()) {
      keytab = make_shared<string>(boost::any_cast<string>(m["Keytab"]));
    }
    if (m.find("KeytabMd5") != m.end() && !m["KeytabMd5"].empty()) {
      keytabMd5 = make_shared<string>(boost::any_cast<string>(m["KeytabMd5"]));
    }
  }


  virtual ~EnableSmbAclRequest() = default;
};
class EnableSmbAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableSmbAclResponseBody() {}

  explicit EnableSmbAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableSmbAclResponseBody() = default;
};
class EnableSmbAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableSmbAclResponseBody> body{};

  EnableSmbAclResponse() {}

  explicit EnableSmbAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableSmbAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableSmbAclResponseBody>(model1);
      }
    }
  }


  virtual ~EnableSmbAclResponse() = default;
};
class GetDirectoryOrFilePropertiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> path{};

  GetDirectoryOrFilePropertiesRequest() {}

  explicit GetDirectoryOrFilePropertiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~GetDirectoryOrFilePropertiesRequest() = default;
};
class GetDirectoryOrFilePropertiesResponseBodyEntry : public Darabonba::Model {
public:
  shared_ptr<string> ATime{};
  shared_ptr<string> CTime{};
  shared_ptr<bool> hasArchiveFile{};
  shared_ptr<bool> hasInfrequentAccessFile{};
  shared_ptr<string> inode{};
  shared_ptr<string> MTime{};
  shared_ptr<string> name{};
  shared_ptr<string> retrieveTime{};
  shared_ptr<long> size{};
  shared_ptr<string> storageType{};
  shared_ptr<string> type{};

  GetDirectoryOrFilePropertiesResponseBodyEntry() {}

  explicit GetDirectoryOrFilePropertiesResponseBodyEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ATime) {
      res["ATime"] = boost::any(*ATime);
    }
    if (CTime) {
      res["CTime"] = boost::any(*CTime);
    }
    if (hasArchiveFile) {
      res["HasArchiveFile"] = boost::any(*hasArchiveFile);
    }
    if (hasInfrequentAccessFile) {
      res["HasInfrequentAccessFile"] = boost::any(*hasInfrequentAccessFile);
    }
    if (inode) {
      res["Inode"] = boost::any(*inode);
    }
    if (MTime) {
      res["MTime"] = boost::any(*MTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (retrieveTime) {
      res["RetrieveTime"] = boost::any(*retrieveTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ATime") != m.end() && !m["ATime"].empty()) {
      ATime = make_shared<string>(boost::any_cast<string>(m["ATime"]));
    }
    if (m.find("CTime") != m.end() && !m["CTime"].empty()) {
      CTime = make_shared<string>(boost::any_cast<string>(m["CTime"]));
    }
    if (m.find("HasArchiveFile") != m.end() && !m["HasArchiveFile"].empty()) {
      hasArchiveFile = make_shared<bool>(boost::any_cast<bool>(m["HasArchiveFile"]));
    }
    if (m.find("HasInfrequentAccessFile") != m.end() && !m["HasInfrequentAccessFile"].empty()) {
      hasInfrequentAccessFile = make_shared<bool>(boost::any_cast<bool>(m["HasInfrequentAccessFile"]));
    }
    if (m.find("Inode") != m.end() && !m["Inode"].empty()) {
      inode = make_shared<string>(boost::any_cast<string>(m["Inode"]));
    }
    if (m.find("MTime") != m.end() && !m["MTime"].empty()) {
      MTime = make_shared<string>(boost::any_cast<string>(m["MTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RetrieveTime") != m.end() && !m["RetrieveTime"].empty()) {
      retrieveTime = make_shared<string>(boost::any_cast<string>(m["RetrieveTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDirectoryOrFilePropertiesResponseBodyEntry() = default;
};
class GetDirectoryOrFilePropertiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDirectoryOrFilePropertiesResponseBodyEntry> entry{};
  shared_ptr<string> requestId{};

  GetDirectoryOrFilePropertiesResponseBody() {}

  explicit GetDirectoryOrFilePropertiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entry) {
      res["Entry"] = entry ? boost::any(entry->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      if (typeid(map<string, boost::any>) == m["Entry"].type()) {
        GetDirectoryOrFilePropertiesResponseBodyEntry model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Entry"]));
        entry = make_shared<GetDirectoryOrFilePropertiesResponseBodyEntry>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDirectoryOrFilePropertiesResponseBody() = default;
};
class GetDirectoryOrFilePropertiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDirectoryOrFilePropertiesResponseBody> body{};

  GetDirectoryOrFilePropertiesResponse() {}

  explicit GetDirectoryOrFilePropertiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDirectoryOrFilePropertiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDirectoryOrFilePropertiesResponseBody>(model1);
      }
    }
  }


  virtual ~GetDirectoryOrFilePropertiesResponse() = default;
};
class GetRecycleBinAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  GetRecycleBinAttributeRequest() {}

  explicit GetRecycleBinAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~GetRecycleBinAttributeRequest() = default;
};
class GetRecycleBinAttributeResponseBodyRecycleBinAttribute : public Darabonba::Model {
public:
  shared_ptr<long> archiveSize{};
  shared_ptr<string> enableTime{};
  shared_ptr<long> reservedDays{};
  shared_ptr<long> secondarySize{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};

  GetRecycleBinAttributeResponseBodyRecycleBinAttribute() {}

  explicit GetRecycleBinAttributeResponseBodyRecycleBinAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveSize) {
      res["ArchiveSize"] = boost::any(*archiveSize);
    }
    if (enableTime) {
      res["EnableTime"] = boost::any(*enableTime);
    }
    if (reservedDays) {
      res["ReservedDays"] = boost::any(*reservedDays);
    }
    if (secondarySize) {
      res["SecondarySize"] = boost::any(*secondarySize);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveSize") != m.end() && !m["ArchiveSize"].empty()) {
      archiveSize = make_shared<long>(boost::any_cast<long>(m["ArchiveSize"]));
    }
    if (m.find("EnableTime") != m.end() && !m["EnableTime"].empty()) {
      enableTime = make_shared<string>(boost::any_cast<string>(m["EnableTime"]));
    }
    if (m.find("ReservedDays") != m.end() && !m["ReservedDays"].empty()) {
      reservedDays = make_shared<long>(boost::any_cast<long>(m["ReservedDays"]));
    }
    if (m.find("SecondarySize") != m.end() && !m["SecondarySize"].empty()) {
      secondarySize = make_shared<long>(boost::any_cast<long>(m["SecondarySize"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetRecycleBinAttributeResponseBodyRecycleBinAttribute() = default;
};
class GetRecycleBinAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRecycleBinAttributeResponseBodyRecycleBinAttribute> recycleBinAttribute{};
  shared_ptr<string> requestId{};

  GetRecycleBinAttributeResponseBody() {}

  explicit GetRecycleBinAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recycleBinAttribute) {
      res["RecycleBinAttribute"] = recycleBinAttribute ? boost::any(recycleBinAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecycleBinAttribute") != m.end() && !m["RecycleBinAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecycleBinAttribute"].type()) {
        GetRecycleBinAttributeResponseBodyRecycleBinAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecycleBinAttribute"]));
        recycleBinAttribute = make_shared<GetRecycleBinAttributeResponseBodyRecycleBinAttribute>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRecycleBinAttributeResponseBody() = default;
};
class GetRecycleBinAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRecycleBinAttributeResponseBody> body{};

  GetRecycleBinAttributeResponse() {}

  explicit GetRecycleBinAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRecycleBinAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRecycleBinAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetRecycleBinAttributeResponse() = default;
};
class ListDirectoriesAndFilesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> directoryOnly{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> path{};
  shared_ptr<string> storageType{};

  ListDirectoriesAndFilesRequest() {}

  explicit ListDirectoriesAndFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryOnly) {
      res["DirectoryOnly"] = boost::any(*directoryOnly);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryOnly") != m.end() && !m["DirectoryOnly"].empty()) {
      directoryOnly = make_shared<bool>(boost::any_cast<bool>(m["DirectoryOnly"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~ListDirectoriesAndFilesRequest() = default;
};
class ListDirectoriesAndFilesResponseBodyEntries : public Darabonba::Model {
public:
  shared_ptr<string> atime{};
  shared_ptr<string> ctime{};
  shared_ptr<string> fileId{};
  shared_ptr<string> hasArchiveFile{};
  shared_ptr<bool> hasInfrequentAccessFile{};
  shared_ptr<string> inode{};
  shared_ptr<string> mtime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> retrieveTime{};
  shared_ptr<long> size{};
  shared_ptr<string> storageType{};
  shared_ptr<string> type{};

  ListDirectoriesAndFilesResponseBodyEntries() {}

  explicit ListDirectoriesAndFilesResponseBodyEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atime) {
      res["Atime"] = boost::any(*atime);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (hasArchiveFile) {
      res["HasArchiveFile"] = boost::any(*hasArchiveFile);
    }
    if (hasInfrequentAccessFile) {
      res["HasInfrequentAccessFile"] = boost::any(*hasInfrequentAccessFile);
    }
    if (inode) {
      res["Inode"] = boost::any(*inode);
    }
    if (mtime) {
      res["Mtime"] = boost::any(*mtime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (retrieveTime) {
      res["RetrieveTime"] = boost::any(*retrieveTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Atime") != m.end() && !m["Atime"].empty()) {
      atime = make_shared<string>(boost::any_cast<string>(m["Atime"]));
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<string>(boost::any_cast<string>(m["Ctime"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("HasArchiveFile") != m.end() && !m["HasArchiveFile"].empty()) {
      hasArchiveFile = make_shared<string>(boost::any_cast<string>(m["HasArchiveFile"]));
    }
    if (m.find("HasInfrequentAccessFile") != m.end() && !m["HasInfrequentAccessFile"].empty()) {
      hasInfrequentAccessFile = make_shared<bool>(boost::any_cast<bool>(m["HasInfrequentAccessFile"]));
    }
    if (m.find("Inode") != m.end() && !m["Inode"].empty()) {
      inode = make_shared<string>(boost::any_cast<string>(m["Inode"]));
    }
    if (m.find("Mtime") != m.end() && !m["Mtime"].empty()) {
      mtime = make_shared<string>(boost::any_cast<string>(m["Mtime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("RetrieveTime") != m.end() && !m["RetrieveTime"].empty()) {
      retrieveTime = make_shared<string>(boost::any_cast<string>(m["RetrieveTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDirectoriesAndFilesResponseBodyEntries() = default;
};
class ListDirectoriesAndFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDirectoriesAndFilesResponseBodyEntries>> entries{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListDirectoriesAndFilesResponseBody() {}

  explicit ListDirectoriesAndFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entries) {
      vector<boost::any> temp1;
      for(auto item1:*entries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entries"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entries") != m.end() && !m["Entries"].empty()) {
      if (typeid(vector<boost::any>) == m["Entries"].type()) {
        vector<ListDirectoriesAndFilesResponseBodyEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDirectoriesAndFilesResponseBodyEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entries = make_shared<vector<ListDirectoriesAndFilesResponseBodyEntries>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDirectoriesAndFilesResponseBody() = default;
};
class ListDirectoriesAndFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDirectoriesAndFilesResponseBody> body{};

  ListDirectoriesAndFilesResponse() {}

  explicit ListDirectoriesAndFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDirectoriesAndFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDirectoriesAndFilesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDirectoriesAndFilesResponse() = default;
};
class ListLifecycleRetrieveJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};

  ListLifecycleRetrieveJobsRequest() {}

  explicit ListLifecycleRetrieveJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~ListLifecycleRetrieveJobsRequest() = default;
};
class ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> discoveredFileCount{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> jobId{};
  shared_ptr<vector<string>> paths{};
  shared_ptr<long> retrievedFileCount{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};
  shared_ptr<string> updateTime{};

  ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs() {}

  explicit ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (discoveredFileCount) {
      res["DiscoveredFileCount"] = boost::any(*discoveredFileCount);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    if (retrievedFileCount) {
      res["RetrievedFileCount"] = boost::any(*retrievedFileCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
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
    if (m.find("DiscoveredFileCount") != m.end() && !m["DiscoveredFileCount"].empty()) {
      discoveredFileCount = make_shared<long>(boost::any_cast<long>(m["DiscoveredFileCount"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Paths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Paths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RetrievedFileCount") != m.end() && !m["RetrievedFileCount"].empty()) {
      retrievedFileCount = make_shared<long>(boost::any_cast<long>(m["RetrievedFileCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs() = default;
};
class ListLifecycleRetrieveJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs>> lifecycleRetrieveJobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListLifecycleRetrieveJobsResponseBody() {}

  explicit ListLifecycleRetrieveJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lifecycleRetrieveJobs) {
      vector<boost::any> temp1;
      for(auto item1:*lifecycleRetrieveJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecycleRetrieveJobs"] = boost::any(temp1);
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
    if (m.find("LifecycleRetrieveJobs") != m.end() && !m["LifecycleRetrieveJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecycleRetrieveJobs"].type()) {
        vector<ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecycleRetrieveJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecycleRetrieveJobs = make_shared<vector<ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs>>(expect1);
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


  virtual ~ListLifecycleRetrieveJobsResponseBody() = default;
};
class ListLifecycleRetrieveJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLifecycleRetrieveJobsResponseBody> body{};

  ListLifecycleRetrieveJobsResponse() {}

  explicit ListLifecycleRetrieveJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLifecycleRetrieveJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLifecycleRetrieveJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLifecycleRetrieveJobsResponse() = default;
};
class ListRecentlyRecycledDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListRecentlyRecycledDirectoriesRequest() {}

  explicit ListRecentlyRecycledDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListRecentlyRecycledDirectoriesRequest() = default;
};
class ListRecentlyRecycledDirectoriesResponseBodyEntries : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<string> lastDeleteTime{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  ListRecentlyRecycledDirectoriesResponseBodyEntries() {}

  explicit ListRecentlyRecycledDirectoriesResponseBodyEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (lastDeleteTime) {
      res["LastDeleteTime"] = boost::any(*lastDeleteTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("LastDeleteTime") != m.end() && !m["LastDeleteTime"].empty()) {
      lastDeleteTime = make_shared<string>(boost::any_cast<string>(m["LastDeleteTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~ListRecentlyRecycledDirectoriesResponseBodyEntries() = default;
};
class ListRecentlyRecycledDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRecentlyRecycledDirectoriesResponseBodyEntries>> entries{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListRecentlyRecycledDirectoriesResponseBody() {}

  explicit ListRecentlyRecycledDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entries) {
      vector<boost::any> temp1;
      for(auto item1:*entries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entries"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entries") != m.end() && !m["Entries"].empty()) {
      if (typeid(vector<boost::any>) == m["Entries"].type()) {
        vector<ListRecentlyRecycledDirectoriesResponseBodyEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecentlyRecycledDirectoriesResponseBodyEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entries = make_shared<vector<ListRecentlyRecycledDirectoriesResponseBodyEntries>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRecentlyRecycledDirectoriesResponseBody() = default;
};
class ListRecentlyRecycledDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRecentlyRecycledDirectoriesResponseBody> body{};

  ListRecentlyRecycledDirectoriesResponse() {}

  explicit ListRecentlyRecycledDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRecentlyRecycledDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRecentlyRecycledDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRecentlyRecycledDirectoriesResponse() = default;
};
class ListRecycleBinJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> jobId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListRecycleBinJobsRequest() {}

  explicit ListRecycleBinJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListRecycleBinJobsRequest() = default;
};
class ListRecycleBinJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> id{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListRecycleBinJobsResponseBodyJobs() {}

  explicit ListRecycleBinJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListRecycleBinJobsResponseBodyJobs() = default;
};
class ListRecycleBinJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRecycleBinJobsResponseBodyJobs>> jobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListRecycleBinJobsResponseBody() {}

  explicit ListRecycleBinJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
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
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<ListRecycleBinJobsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecycleBinJobsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListRecycleBinJobsResponseBodyJobs>>(expect1);
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


  virtual ~ListRecycleBinJobsResponseBody() = default;
};
class ListRecycleBinJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRecycleBinJobsResponseBody> body{};

  ListRecycleBinJobsResponse() {}

  explicit ListRecycleBinJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRecycleBinJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRecycleBinJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRecycleBinJobsResponse() = default;
};
class ListRecycledDirectoriesAndFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListRecycledDirectoriesAndFilesRequest() {}

  explicit ListRecycledDirectoriesAndFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListRecycledDirectoriesAndFilesRequest() = default;
};
class ListRecycledDirectoriesAndFilesResponseBodyEntries : public Darabonba::Model {
public:
  shared_ptr<string> ATime{};
  shared_ptr<string> CTime{};
  shared_ptr<string> deleteTime{};
  shared_ptr<string> fileId{};
  shared_ptr<string> inode{};
  shared_ptr<string> MTime{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};

  ListRecycledDirectoriesAndFilesResponseBodyEntries() {}

  explicit ListRecycledDirectoriesAndFilesResponseBodyEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ATime) {
      res["ATime"] = boost::any(*ATime);
    }
    if (CTime) {
      res["CTime"] = boost::any(*CTime);
    }
    if (deleteTime) {
      res["DeleteTime"] = boost::any(*deleteTime);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (inode) {
      res["Inode"] = boost::any(*inode);
    }
    if (MTime) {
      res["MTime"] = boost::any(*MTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ATime") != m.end() && !m["ATime"].empty()) {
      ATime = make_shared<string>(boost::any_cast<string>(m["ATime"]));
    }
    if (m.find("CTime") != m.end() && !m["CTime"].empty()) {
      CTime = make_shared<string>(boost::any_cast<string>(m["CTime"]));
    }
    if (m.find("DeleteTime") != m.end() && !m["DeleteTime"].empty()) {
      deleteTime = make_shared<string>(boost::any_cast<string>(m["DeleteTime"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Inode") != m.end() && !m["Inode"].empty()) {
      inode = make_shared<string>(boost::any_cast<string>(m["Inode"]));
    }
    if (m.find("MTime") != m.end() && !m["MTime"].empty()) {
      MTime = make_shared<string>(boost::any_cast<string>(m["MTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListRecycledDirectoriesAndFilesResponseBodyEntries() = default;
};
class ListRecycledDirectoriesAndFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRecycledDirectoriesAndFilesResponseBodyEntries>> entries{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListRecycledDirectoriesAndFilesResponseBody() {}

  explicit ListRecycledDirectoriesAndFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entries) {
      vector<boost::any> temp1;
      for(auto item1:*entries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entries"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entries") != m.end() && !m["Entries"].empty()) {
      if (typeid(vector<boost::any>) == m["Entries"].type()) {
        vector<ListRecycledDirectoriesAndFilesResponseBodyEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecycledDirectoriesAndFilesResponseBodyEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entries = make_shared<vector<ListRecycledDirectoriesAndFilesResponseBodyEntries>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRecycledDirectoriesAndFilesResponseBody() = default;
};
class ListRecycledDirectoriesAndFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRecycledDirectoriesAndFilesResponseBody> body{};

  ListRecycledDirectoriesAndFilesResponse() {}

  explicit ListRecycledDirectoriesAndFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRecycledDirectoriesAndFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRecycledDirectoriesAndFilesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRecycledDirectoriesAndFilesResponse() = default;
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
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifyAccessGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemType{};

  ModifyAccessGroupRequest() {}

  explicit ModifyAccessGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
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
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
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
class ModifyAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroup{};
  shared_ptr<string> accessPointId{};
  shared_ptr<string> accessPointName{};
  shared_ptr<bool> enabledRam{};
  shared_ptr<string> fileSystemId{};

  ModifyAccessPointRequest() {}

  explicit ModifyAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (accessPointName) {
      res["AccessPointName"] = boost::any(*accessPointName);
    }
    if (enabledRam) {
      res["EnabledRam"] = boost::any(*enabledRam);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("AccessPointName") != m.end() && !m["AccessPointName"].empty()) {
      accessPointName = make_shared<string>(boost::any_cast<string>(m["AccessPointName"]));
    }
    if (m.find("EnabledRam") != m.end() && !m["EnabledRam"].empty()) {
      enabledRam = make_shared<bool>(boost::any_cast<bool>(m["EnabledRam"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~ModifyAccessPointRequest() = default;
};
class ModifyAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccessPointResponseBody() {}

  explicit ModifyAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccessPointResponseBody() = default;
};
class ModifyAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccessPointResponseBody> body{};

  ModifyAccessPointResponse() {}

  explicit ModifyAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccessPointResponse() = default;
};
class ModifyAccessRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> ipv6SourceCidrIp{};
  shared_ptr<long> priority{};
  shared_ptr<string> RWAccessType{};
  shared_ptr<string> sourceCidrIp{};
  shared_ptr<string> userAccessType{};

  ModifyAccessRuleRequest() {}

  explicit ModifyAccessRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (ipv6SourceCidrIp) {
      res["Ipv6SourceCidrIp"] = boost::any(*ipv6SourceCidrIp);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    if (userAccessType) {
      res["UserAccessType"] = boost::any(*userAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("Ipv6SourceCidrIp") != m.end() && !m["Ipv6SourceCidrIp"].empty()) {
      ipv6SourceCidrIp = make_shared<string>(boost::any_cast<string>(m["Ipv6SourceCidrIp"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
    if (m.find("UserAccessType") != m.end() && !m["UserAccessType"].empty()) {
      userAccessType = make_shared<string>(boost::any_cast<string>(m["UserAccessType"]));
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
class ModifyAutoSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> autoSnapshotPolicyName{};
  shared_ptr<string> repeatWeekdays{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> timePoints{};

  ModifyAutoSnapshotPolicyRequest() {}

  explicit ModifyAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (autoSnapshotPolicyName) {
      res["AutoSnapshotPolicyName"] = boost::any(*autoSnapshotPolicyName);
    }
    if (repeatWeekdays) {
      res["RepeatWeekdays"] = boost::any(*repeatWeekdays);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (timePoints) {
      res["TimePoints"] = boost::any(*timePoints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("AutoSnapshotPolicyName") != m.end() && !m["AutoSnapshotPolicyName"].empty()) {
      autoSnapshotPolicyName = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyName"]));
    }
    if (m.find("RepeatWeekdays") != m.end() && !m["RepeatWeekdays"].empty()) {
      repeatWeekdays = make_shared<string>(boost::any_cast<string>(m["RepeatWeekdays"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("TimePoints") != m.end() && !m["TimePoints"].empty()) {
      timePoints = make_shared<string>(boost::any_cast<string>(m["TimePoints"]));
    }
  }


  virtual ~ModifyAutoSnapshotPolicyRequest() = default;
};
class ModifyAutoSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAutoSnapshotPolicyResponseBody() {}

  explicit ModifyAutoSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAutoSnapshotPolicyResponseBody() = default;
};
class ModifyAutoSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAutoSnapshotPolicyResponseBody> body{};

  ModifyAutoSnapshotPolicyResponse() {}

  explicit ModifyAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAutoSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAutoSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAutoSnapshotPolicyResponse() = default;
};
class ModifyDataFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> throughput{};

  ModifyDataFlowRequest() {}

  explicit ModifyDataFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (throughput) {
      res["Throughput"] = boost::any(*throughput);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Throughput") != m.end() && !m["Throughput"].empty()) {
      throughput = make_shared<long>(boost::any_cast<long>(m["Throughput"]));
    }
  }


  virtual ~ModifyDataFlowRequest() = default;
};
class ModifyDataFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDataFlowResponseBody() {}

  explicit ModifyDataFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDataFlowResponseBody() = default;
};
class ModifyDataFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDataFlowResponseBody> body{};

  ModifyDataFlowResponse() {}

  explicit ModifyDataFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDataFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataFlowResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataFlowResponse() = default;
};
class ModifyDataFlowAutoRefreshRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoRefreshInterval{};
  shared_ptr<string> autoRefreshPolicy{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};

  ModifyDataFlowAutoRefreshRequest() {}

  explicit ModifyDataFlowAutoRefreshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRefreshInterval) {
      res["AutoRefreshInterval"] = boost::any(*autoRefreshInterval);
    }
    if (autoRefreshPolicy) {
      res["AutoRefreshPolicy"] = boost::any(*autoRefreshPolicy);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRefreshInterval") != m.end() && !m["AutoRefreshInterval"].empty()) {
      autoRefreshInterval = make_shared<long>(boost::any_cast<long>(m["AutoRefreshInterval"]));
    }
    if (m.find("AutoRefreshPolicy") != m.end() && !m["AutoRefreshPolicy"].empty()) {
      autoRefreshPolicy = make_shared<string>(boost::any_cast<string>(m["AutoRefreshPolicy"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~ModifyDataFlowAutoRefreshRequest() = default;
};
class ModifyDataFlowAutoRefreshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDataFlowAutoRefreshResponseBody() {}

  explicit ModifyDataFlowAutoRefreshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDataFlowAutoRefreshResponseBody() = default;
};
class ModifyDataFlowAutoRefreshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDataFlowAutoRefreshResponseBody> body{};

  ModifyDataFlowAutoRefreshResponse() {}

  explicit ModifyDataFlowAutoRefreshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDataFlowAutoRefreshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataFlowAutoRefreshResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataFlowAutoRefreshResponse() = default;
};
class ModifyFileSystemRequestOptions : public Darabonba::Model {
public:
  shared_ptr<bool> enableOplock{};

  ModifyFileSystemRequestOptions() {}

  explicit ModifyFileSystemRequestOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableOplock) {
      res["EnableOplock"] = boost::any(*enableOplock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableOplock") != m.end() && !m["EnableOplock"].empty()) {
      enableOplock = make_shared<bool>(boost::any_cast<bool>(m["EnableOplock"]));
    }
  }


  virtual ~ModifyFileSystemRequestOptions() = default;
};
class ModifyFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<ModifyFileSystemRequestOptions> options{};

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
    if (options) {
      res["Options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(map<string, boost::any>) == m["Options"].type()) {
        ModifyFileSystemRequestOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Options"]));
        options = make_shared<ModifyFileSystemRequestOptions>(model1);
      }
    }
  }


  virtual ~ModifyFileSystemRequest() = default;
};
class ModifyFileSystemShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> optionsShrink{};

  ModifyFileSystemShrinkRequest() {}

  explicit ModifyFileSystemShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (optionsShrink) {
      res["Options"] = boost::any(*optionsShrink);
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
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      optionsShrink = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
  }


  virtual ~ModifyFileSystemShrinkRequest() = default;
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
class ModifyFilesetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fsetId{};

  ModifyFilesetRequest() {}

  explicit ModifyFilesetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
  }


  virtual ~ModifyFilesetRequest() = default;
};
class ModifyFilesetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyFilesetResponseBody() {}

  explicit ModifyFilesetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyFilesetResponseBody() = default;
};
class ModifyFilesetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFilesetResponseBody> body{};

  ModifyFilesetResponse() {}

  explicit ModifyFilesetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyFilesetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFilesetResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFilesetResponse() = default;
};
class ModifyLDAPConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> bindDN{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> searchBase{};
  shared_ptr<string> URI{};

  ModifyLDAPConfigRequest() {}

  explicit ModifyLDAPConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindDN) {
      res["BindDN"] = boost::any(*bindDN);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (searchBase) {
      res["SearchBase"] = boost::any(*searchBase);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindDN") != m.end() && !m["BindDN"].empty()) {
      bindDN = make_shared<string>(boost::any_cast<string>(m["BindDN"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("SearchBase") != m.end() && !m["SearchBase"].empty()) {
      searchBase = make_shared<string>(boost::any_cast<string>(m["SearchBase"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~ModifyLDAPConfigRequest() = default;
};
class ModifyLDAPConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyLDAPConfigResponseBody() {}

  explicit ModifyLDAPConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyLDAPConfigResponseBody() = default;
};
class ModifyLDAPConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyLDAPConfigResponseBody> body{};

  ModifyLDAPConfigResponse() {}

  explicit ModifyLDAPConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLDAPConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLDAPConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLDAPConfigResponse() = default;
};
class ModifyLifecyclePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> lifecyclePolicyName{};
  shared_ptr<string> lifecycleRuleName{};
  shared_ptr<string> path{};
  shared_ptr<string> storageType{};

  ModifyLifecyclePolicyRequest() {}

  explicit ModifyLifecyclePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (lifecyclePolicyName) {
      res["LifecyclePolicyName"] = boost::any(*lifecyclePolicyName);
    }
    if (lifecycleRuleName) {
      res["LifecycleRuleName"] = boost::any(*lifecycleRuleName);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("LifecyclePolicyName") != m.end() && !m["LifecyclePolicyName"].empty()) {
      lifecyclePolicyName = make_shared<string>(boost::any_cast<string>(m["LifecyclePolicyName"]));
    }
    if (m.find("LifecycleRuleName") != m.end() && !m["LifecycleRuleName"].empty()) {
      lifecycleRuleName = make_shared<string>(boost::any_cast<string>(m["LifecycleRuleName"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~ModifyLifecyclePolicyRequest() = default;
};
class ModifyLifecyclePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyLifecyclePolicyResponseBody() {}

  explicit ModifyLifecyclePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyLifecyclePolicyResponseBody() = default;
};
class ModifyLifecyclePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyLifecyclePolicyResponseBody> body{};

  ModifyLifecyclePolicyResponse() {}

  explicit ModifyLifecyclePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLifecyclePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLifecyclePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLifecyclePolicyResponse() = default;
};
class ModifyMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> dualStackMountTargetDomain{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> status{};

  ModifyMountTargetRequest() {}

  explicit ModifyMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ModifyMountTargetRequest() = default;
};
class ModifyMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMountTargetResponseBody() {}

  explicit ModifyMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMountTargetResponseBody() = default;
};
class ModifyMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMountTargetResponseBody> body{};

  ModifyMountTargetResponse() {}

  explicit ModifyMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMountTargetResponse() = default;
};
class ModifyProtocolMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> exportId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> protocolServiceId{};

  ModifyProtocolMountTargetRequest() {}

  explicit ModifyProtocolMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (exportId) {
      res["ExportId"] = boost::any(*exportId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ExportId") != m.end() && !m["ExportId"].empty()) {
      exportId = make_shared<string>(boost::any_cast<string>(m["ExportId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
  }


  virtual ~ModifyProtocolMountTargetRequest() = default;
};
class ModifyProtocolMountTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyProtocolMountTargetResponseBody() {}

  explicit ModifyProtocolMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyProtocolMountTargetResponseBody() = default;
};
class ModifyProtocolMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyProtocolMountTargetResponseBody> body{};

  ModifyProtocolMountTargetResponse() {}

  explicit ModifyProtocolMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProtocolMountTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProtocolMountTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProtocolMountTargetResponse() = default;
};
class ModifyProtocolServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> protocolServiceId{};

  ModifyProtocolServiceRequest() {}

  explicit ModifyProtocolServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (protocolServiceId) {
      res["ProtocolServiceId"] = boost::any(*protocolServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ProtocolServiceId") != m.end() && !m["ProtocolServiceId"].empty()) {
      protocolServiceId = make_shared<string>(boost::any_cast<string>(m["ProtocolServiceId"]));
    }
  }


  virtual ~ModifyProtocolServiceRequest() = default;
};
class ModifyProtocolServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyProtocolServiceResponseBody() {}

  explicit ModifyProtocolServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyProtocolServiceResponseBody() = default;
};
class ModifyProtocolServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyProtocolServiceResponseBody> body{};

  ModifyProtocolServiceResponse() {}

  explicit ModifyProtocolServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProtocolServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProtocolServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProtocolServiceResponse() = default;
};
class ModifySmbAclRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAnonymousAccess{};
  shared_ptr<bool> encryptData{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> homeDirPath{};
  shared_ptr<string> keytab{};
  shared_ptr<string> keytabMd5{};
  shared_ptr<bool> rejectUnencryptedAccess{};
  shared_ptr<string> superAdminSid{};

  ModifySmbAclRequest() {}

  explicit ModifySmbAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAnonymousAccess) {
      res["EnableAnonymousAccess"] = boost::any(*enableAnonymousAccess);
    }
    if (encryptData) {
      res["EncryptData"] = boost::any(*encryptData);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (homeDirPath) {
      res["HomeDirPath"] = boost::any(*homeDirPath);
    }
    if (keytab) {
      res["Keytab"] = boost::any(*keytab);
    }
    if (keytabMd5) {
      res["KeytabMd5"] = boost::any(*keytabMd5);
    }
    if (rejectUnencryptedAccess) {
      res["RejectUnencryptedAccess"] = boost::any(*rejectUnencryptedAccess);
    }
    if (superAdminSid) {
      res["SuperAdminSid"] = boost::any(*superAdminSid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAnonymousAccess") != m.end() && !m["EnableAnonymousAccess"].empty()) {
      enableAnonymousAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAnonymousAccess"]));
    }
    if (m.find("EncryptData") != m.end() && !m["EncryptData"].empty()) {
      encryptData = make_shared<bool>(boost::any_cast<bool>(m["EncryptData"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("HomeDirPath") != m.end() && !m["HomeDirPath"].empty()) {
      homeDirPath = make_shared<string>(boost::any_cast<string>(m["HomeDirPath"]));
    }
    if (m.find("Keytab") != m.end() && !m["Keytab"].empty()) {
      keytab = make_shared<string>(boost::any_cast<string>(m["Keytab"]));
    }
    if (m.find("KeytabMd5") != m.end() && !m["KeytabMd5"].empty()) {
      keytabMd5 = make_shared<string>(boost::any_cast<string>(m["KeytabMd5"]));
    }
    if (m.find("RejectUnencryptedAccess") != m.end() && !m["RejectUnencryptedAccess"].empty()) {
      rejectUnencryptedAccess = make_shared<bool>(boost::any_cast<bool>(m["RejectUnencryptedAccess"]));
    }
    if (m.find("SuperAdminSid") != m.end() && !m["SuperAdminSid"].empty()) {
      superAdminSid = make_shared<string>(boost::any_cast<string>(m["SuperAdminSid"]));
    }
  }


  virtual ~ModifySmbAclRequest() = default;
};
class ModifySmbAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySmbAclResponseBody() {}

  explicit ModifySmbAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySmbAclResponseBody() = default;
};
class ModifySmbAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySmbAclResponseBody> body{};

  ModifySmbAclResponse() {}

  explicit ModifySmbAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySmbAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySmbAclResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySmbAclResponse() = default;
};
class OpenNASServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenNASServiceResponseBody() {}

  explicit OpenNASServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenNASServiceResponseBody() = default;
};
class OpenNASServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenNASServiceResponseBody> body{};

  OpenNASServiceResponse() {}

  explicit OpenNASServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenNASServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenNASServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenNASServiceResponse() = default;
};
class RemoveClientFromBlackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIP{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> regionId{};

  RemoveClientFromBlackListRequest() {}

  explicit RemoveClientFromBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RemoveClientFromBlackListRequest() = default;
};
class RemoveClientFromBlackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveClientFromBlackListResponseBody() {}

  explicit RemoveClientFromBlackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveClientFromBlackListResponseBody() = default;
};
class RemoveClientFromBlackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveClientFromBlackListResponseBody> body{};

  RemoveClientFromBlackListResponse() {}

  explicit RemoveClientFromBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveClientFromBlackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveClientFromBlackListResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveClientFromBlackListResponse() = default;
};
class RemoveTagsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  RemoveTagsRequestTag() {}

  explicit RemoveTagsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveTagsRequestTag() = default;
};
class RemoveTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<vector<RemoveTagsRequestTag>> tag{};

  RemoveTagsRequest() {}

  explicit RemoveTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<RemoveTagsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveTagsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<RemoveTagsRequestTag>>(expect1);
      }
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
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveTagsResponseBody> body{};

  RemoveTagsResponse() {}

  explicit RemoveTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTagsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTagsResponse() = default;
};
class ResetFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> snapshotId{};

  ResetFileSystemRequest() {}

  explicit ResetFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~ResetFileSystemRequest() = default;
};
class ResetFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetFileSystemResponseBody() {}

  explicit ResetFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetFileSystemResponseBody() = default;
};
class ResetFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetFileSystemResponseBody> body{};

  ResetFileSystemResponse() {}

  explicit ResetFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~ResetFileSystemResponse() = default;
};
class RetryLifecycleRetrieveJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  RetryLifecycleRetrieveJobRequest() {}

  explicit RetryLifecycleRetrieveJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~RetryLifecycleRetrieveJobRequest() = default;
};
class RetryLifecycleRetrieveJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RetryLifecycleRetrieveJobResponseBody() {}

  explicit RetryLifecycleRetrieveJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RetryLifecycleRetrieveJobResponseBody() = default;
};
class RetryLifecycleRetrieveJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryLifecycleRetrieveJobResponseBody> body{};

  RetryLifecycleRetrieveJobResponse() {}

  explicit RetryLifecycleRetrieveJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryLifecycleRetrieveJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryLifecycleRetrieveJobResponseBody>(model1);
      }
    }
  }


  virtual ~RetryLifecycleRetrieveJobResponse() = default;
};
class SetDirQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> fileCountLimit{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> path{};
  shared_ptr<string> quotaType{};
  shared_ptr<long> sizeLimit{};
  shared_ptr<string> userId{};
  shared_ptr<string> userType{};

  SetDirQuotaRequest() {}

  explicit SetDirQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileCountLimit) {
      res["FileCountLimit"] = boost::any(*fileCountLimit);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileCountLimit") != m.end() && !m["FileCountLimit"].empty()) {
      fileCountLimit = make_shared<long>(boost::any_cast<long>(m["FileCountLimit"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<long>(boost::any_cast<long>(m["SizeLimit"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~SetDirQuotaRequest() = default;
};
class SetDirQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetDirQuotaResponseBody() {}

  explicit SetDirQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDirQuotaResponseBody() = default;
};
class SetDirQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDirQuotaResponseBody> body{};

  SetDirQuotaResponse() {}

  explicit SetDirQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDirQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDirQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~SetDirQuotaResponse() = default;
};
class SetFilesetQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> fileCountLimit{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fsetId{};
  shared_ptr<long> sizeLimit{};

  SetFilesetQuotaRequest() {}

  explicit SetFilesetQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileCountLimit) {
      res["FileCountLimit"] = boost::any(*fileCountLimit);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fsetId) {
      res["FsetId"] = boost::any(*fsetId);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileCountLimit") != m.end() && !m["FileCountLimit"].empty()) {
      fileCountLimit = make_shared<long>(boost::any_cast<long>(m["FileCountLimit"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FsetId") != m.end() && !m["FsetId"].empty()) {
      fsetId = make_shared<string>(boost::any_cast<string>(m["FsetId"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<long>(boost::any_cast<long>(m["SizeLimit"]));
    }
  }


  virtual ~SetFilesetQuotaRequest() = default;
};
class SetFilesetQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetFilesetQuotaResponseBody() {}

  explicit SetFilesetQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetFilesetQuotaResponseBody() = default;
};
class SetFilesetQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFilesetQuotaResponseBody> body{};

  SetFilesetQuotaResponse() {}

  explicit SetFilesetQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetFilesetQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFilesetQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~SetFilesetQuotaResponse() = default;
};
class StartDataFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};

  StartDataFlowRequest() {}

  explicit StartDataFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~StartDataFlowRequest() = default;
};
class StartDataFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartDataFlowResponseBody() {}

  explicit StartDataFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartDataFlowResponseBody() = default;
};
class StartDataFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartDataFlowResponseBody> body{};

  StartDataFlowResponse() {}

  explicit StartDataFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDataFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDataFlowResponseBody>(model1);
      }
    }
  }


  virtual ~StartDataFlowResponse() = default;
};
class StopDataFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataFlowId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};

  StopDataFlowRequest() {}

  explicit StopDataFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataFlowId) {
      res["DataFlowId"] = boost::any(*dataFlowId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataFlowId") != m.end() && !m["DataFlowId"].empty()) {
      dataFlowId = make_shared<string>(boost::any_cast<string>(m["DataFlowId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~StopDataFlowRequest() = default;
};
class StopDataFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopDataFlowResponseBody() {}

  explicit StopDataFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopDataFlowResponseBody() = default;
};
class StopDataFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDataFlowResponseBody> body{};

  StopDataFlowResponse() {}

  explicit StopDataFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDataFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDataFlowResponseBody>(model1);
      }
    }
  }


  virtual ~StopDataFlowResponse() = default;
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
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateRecycleBinAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> reservedDays{};

  UpdateRecycleBinAttributeRequest() {}

  explicit UpdateRecycleBinAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (reservedDays) {
      res["ReservedDays"] = boost::any(*reservedDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ReservedDays") != m.end() && !m["ReservedDays"].empty()) {
      reservedDays = make_shared<long>(boost::any_cast<long>(m["ReservedDays"]));
    }
  }


  virtual ~UpdateRecycleBinAttributeRequest() = default;
};
class UpdateRecycleBinAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRecycleBinAttributeResponseBody() {}

  explicit UpdateRecycleBinAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateRecycleBinAttributeResponseBody() = default;
};
class UpdateRecycleBinAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRecycleBinAttributeResponseBody> body{};

  UpdateRecycleBinAttributeResponse() {}

  explicit UpdateRecycleBinAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRecycleBinAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRecycleBinAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRecycleBinAttributeResponse() = default;
};
class UpgradeFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileSystemId{};

  UpgradeFileSystemRequest() {}

  explicit UpgradeFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~UpgradeFileSystemRequest() = default;
};
class UpgradeFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeFileSystemResponseBody() {}

  explicit UpgradeFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeFileSystemResponseBody() = default;
};
class UpgradeFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeFileSystemResponseBody> body{};

  UpgradeFileSystemResponse() {}

  explicit UpgradeFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeFileSystemResponse() = default;
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
  AddClientToBlackListResponse addClientToBlackListWithOptions(shared_ptr<AddClientToBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddClientToBlackListResponse addClientToBlackList(shared_ptr<AddClientToBlackListRequest> request);
  AddTagsResponse addTagsWithOptions(shared_ptr<AddTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTagsResponse addTags(shared_ptr<AddTagsRequest> request);
  ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicyWithOptions(shared_ptr<ApplyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicy(shared_ptr<ApplyAutoSnapshotPolicyRequest> request);
  ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefreshWithOptions(shared_ptr<ApplyDataFlowAutoRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefresh(shared_ptr<ApplyDataFlowAutoRefreshRequest> request);
  CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(shared_ptr<CancelAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(shared_ptr<CancelAutoSnapshotPolicyRequest> request);
  CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefreshWithOptions(shared_ptr<CancelDataFlowAutoRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefresh(shared_ptr<CancelDataFlowAutoRefreshRequest> request);
  CancelDataFlowSubTaskResponse cancelDataFlowSubTaskWithOptions(shared_ptr<CancelDataFlowSubTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDataFlowSubTaskResponse cancelDataFlowSubTask(shared_ptr<CancelDataFlowSubTaskRequest> request);
  CancelDataFlowTaskResponse cancelDataFlowTaskWithOptions(shared_ptr<CancelDataFlowTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDataFlowTaskResponse cancelDataFlowTask(shared_ptr<CancelDataFlowTaskRequest> request);
  CancelDirQuotaResponse cancelDirQuotaWithOptions(shared_ptr<CancelDirQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDirQuotaResponse cancelDirQuota(shared_ptr<CancelDirQuotaRequest> request);
  CancelFilesetQuotaResponse cancelFilesetQuotaWithOptions(shared_ptr<CancelFilesetQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelFilesetQuotaResponse cancelFilesetQuota(shared_ptr<CancelFilesetQuotaRequest> request);
  CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJobWithOptions(shared_ptr<CancelLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJob(shared_ptr<CancelLifecycleRetrieveJobRequest> request);
  CancelRecycleBinJobResponse cancelRecycleBinJobWithOptions(shared_ptr<CancelRecycleBinJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRecycleBinJobResponse cancelRecycleBinJob(shared_ptr<CancelRecycleBinJobRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateAccessGroupResponse createAccessGroupWithOptions(shared_ptr<CreateAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessGroupResponse createAccessGroup(shared_ptr<CreateAccessGroupRequest> request);
  CreateAccessPointResponse createAccessPointWithOptions(shared_ptr<CreateAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessPointResponse createAccessPoint(shared_ptr<CreateAccessPointRequest> request);
  CreateAccessRuleResponse createAccessRuleWithOptions(shared_ptr<CreateAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessRuleResponse createAccessRule(shared_ptr<CreateAccessRuleRequest> request);
  CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(shared_ptr<CreateAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(shared_ptr<CreateAutoSnapshotPolicyRequest> request);
  CreateDataFlowResponse createDataFlowWithOptions(shared_ptr<CreateDataFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataFlowResponse createDataFlow(shared_ptr<CreateDataFlowRequest> request);
  CreateDataFlowSubTaskResponse createDataFlowSubTaskWithOptions(shared_ptr<CreateDataFlowSubTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataFlowSubTaskResponse createDataFlowSubTask(shared_ptr<CreateDataFlowSubTaskRequest> request);
  CreateDataFlowTaskResponse createDataFlowTaskWithOptions(shared_ptr<CreateDataFlowTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataFlowTaskResponse createDataFlowTask(shared_ptr<CreateDataFlowTaskRequest> request);
  CreateDirResponse createDirWithOptions(shared_ptr<CreateDirRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDirResponse createDir(shared_ptr<CreateDirRequest> request);
  CreateFileResponse createFileWithOptions(shared_ptr<CreateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileResponse createFile(shared_ptr<CreateFileRequest> request);
  CreateFileSystemResponse createFileSystemWithOptions(shared_ptr<CreateFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileSystemResponse createFileSystem(shared_ptr<CreateFileSystemRequest> request);
  CreateFilesetResponse createFilesetWithOptions(shared_ptr<CreateFilesetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFilesetResponse createFileset(shared_ptr<CreateFilesetRequest> request);
  CreateLDAPConfigResponse createLDAPConfigWithOptions(shared_ptr<CreateLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLDAPConfigResponse createLDAPConfig(shared_ptr<CreateLDAPConfigRequest> request);
  CreateLifecyclePolicyResponse createLifecyclePolicyWithOptions(shared_ptr<CreateLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLifecyclePolicyResponse createLifecyclePolicy(shared_ptr<CreateLifecyclePolicyRequest> request);
  CreateLifecycleRetrieveJobResponse createLifecycleRetrieveJobWithOptions(shared_ptr<CreateLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLifecycleRetrieveJobResponse createLifecycleRetrieveJob(shared_ptr<CreateLifecycleRetrieveJobRequest> request);
  CreateLogAnalysisResponse createLogAnalysisWithOptions(shared_ptr<CreateLogAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLogAnalysisResponse createLogAnalysis(shared_ptr<CreateLogAnalysisRequest> request);
  CreateMountTargetResponse createMountTargetWithOptions(shared_ptr<CreateMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMountTargetResponse createMountTarget(shared_ptr<CreateMountTargetRequest> request);
  CreateProtocolMountTargetResponse createProtocolMountTargetWithOptions(shared_ptr<CreateProtocolMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProtocolMountTargetResponse createProtocolMountTarget(shared_ptr<CreateProtocolMountTargetRequest> request);
  CreateProtocolServiceResponse createProtocolServiceWithOptions(shared_ptr<CreateProtocolServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProtocolServiceResponse createProtocolService(shared_ptr<CreateProtocolServiceRequest> request);
  CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJobWithOptions(shared_ptr<CreateRecycleBinDeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJob(shared_ptr<CreateRecycleBinDeleteJobRequest> request);
  CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJobWithOptions(shared_ptr<CreateRecycleBinRestoreJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJob(shared_ptr<CreateRecycleBinRestoreJobRequest> request);
  CreateSnapshotResponse createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSnapshotResponse createSnapshot(shared_ptr<CreateSnapshotRequest> request);
  DeleteAccessGroupResponse deleteAccessGroupWithOptions(shared_ptr<DeleteAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessGroupResponse deleteAccessGroup(shared_ptr<DeleteAccessGroupRequest> request);
  DeleteAccessPointResponse deleteAccessPointWithOptions(shared_ptr<DeleteAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessPointResponse deleteAccessPoint(shared_ptr<DeleteAccessPointRequest> request);
  DeleteAccessRuleResponse deleteAccessRuleWithOptions(shared_ptr<DeleteAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessRuleResponse deleteAccessRule(shared_ptr<DeleteAccessRuleRequest> request);
  DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicyWithOptions(shared_ptr<DeleteAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicy(shared_ptr<DeleteAutoSnapshotPolicyRequest> request);
  DeleteDataFlowResponse deleteDataFlowWithOptions(shared_ptr<DeleteDataFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataFlowResponse deleteDataFlow(shared_ptr<DeleteDataFlowRequest> request);
  DeleteFileSystemResponse deleteFileSystemWithOptions(shared_ptr<DeleteFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileSystemResponse deleteFileSystem(shared_ptr<DeleteFileSystemRequest> request);
  DeleteFilesetResponse deleteFilesetWithOptions(shared_ptr<DeleteFilesetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFilesetResponse deleteFileset(shared_ptr<DeleteFilesetRequest> request);
  DeleteLDAPConfigResponse deleteLDAPConfigWithOptions(shared_ptr<DeleteLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLDAPConfigResponse deleteLDAPConfig(shared_ptr<DeleteLDAPConfigRequest> request);
  DeleteLifecyclePolicyResponse deleteLifecyclePolicyWithOptions(shared_ptr<DeleteLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLifecyclePolicyResponse deleteLifecyclePolicy(shared_ptr<DeleteLifecyclePolicyRequest> request);
  DeleteLogAnalysisResponse deleteLogAnalysisWithOptions(shared_ptr<DeleteLogAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLogAnalysisResponse deleteLogAnalysis(shared_ptr<DeleteLogAnalysisRequest> request);
  DeleteMountTargetResponse deleteMountTargetWithOptions(shared_ptr<DeleteMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMountTargetResponse deleteMountTarget(shared_ptr<DeleteMountTargetRequest> request);
  DeleteProtocolMountTargetResponse deleteProtocolMountTargetWithOptions(shared_ptr<DeleteProtocolMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProtocolMountTargetResponse deleteProtocolMountTarget(shared_ptr<DeleteProtocolMountTargetRequest> request);
  DeleteProtocolServiceResponse deleteProtocolServiceWithOptions(shared_ptr<DeleteProtocolServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProtocolServiceResponse deleteProtocolService(shared_ptr<DeleteProtocolServiceRequest> request);
  DeleteSnapshotResponse deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSnapshotResponse deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request);
  DescribeAccessGroupsResponse describeAccessGroupsWithOptions(shared_ptr<DescribeAccessGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessGroupsResponse describeAccessGroups(shared_ptr<DescribeAccessGroupsRequest> request);
  DescribeAccessPointResponse describeAccessPointWithOptions(shared_ptr<DescribeAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessPointResponse describeAccessPoint(shared_ptr<DescribeAccessPointRequest> request);
  DescribeAccessPointsResponse describeAccessPointsWithOptions(shared_ptr<DescribeAccessPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessPointsResponse describeAccessPoints(shared_ptr<DescribeAccessPointsRequest> request);
  DescribeAccessRulesResponse describeAccessRulesWithOptions(shared_ptr<DescribeAccessRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessRulesResponse describeAccessRules(shared_ptr<DescribeAccessRulesRequest> request);
  DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPoliciesWithOptions(shared_ptr<DescribeAutoSnapshotPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPolicies(shared_ptr<DescribeAutoSnapshotPoliciesRequest> request);
  DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasksWithOptions(shared_ptr<DescribeAutoSnapshotTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasks(shared_ptr<DescribeAutoSnapshotTasksRequest> request);
  DescribeBlackListClientsResponse describeBlackListClientsWithOptions(shared_ptr<DescribeBlackListClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBlackListClientsResponse describeBlackListClients(shared_ptr<DescribeBlackListClientsRequest> request);
  DescribeDataFlowSubTasksResponse describeDataFlowSubTasksWithOptions(shared_ptr<DescribeDataFlowSubTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataFlowSubTasksResponse describeDataFlowSubTasks(shared_ptr<DescribeDataFlowSubTasksRequest> request);
  DescribeDataFlowTasksResponse describeDataFlowTasksWithOptions(shared_ptr<DescribeDataFlowTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataFlowTasksResponse describeDataFlowTasks(shared_ptr<DescribeDataFlowTasksRequest> request);
  DescribeDataFlowsResponse describeDataFlowsWithOptions(shared_ptr<DescribeDataFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataFlowsResponse describeDataFlows(shared_ptr<DescribeDataFlowsRequest> request);
  DescribeDirQuotasResponse describeDirQuotasWithOptions(shared_ptr<DescribeDirQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirQuotasResponse describeDirQuotas(shared_ptr<DescribeDirQuotasRequest> request);
  DescribeFileSystemStatisticsResponse describeFileSystemStatisticsWithOptions(shared_ptr<DescribeFileSystemStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileSystemStatisticsResponse describeFileSystemStatistics(shared_ptr<DescribeFileSystemStatisticsRequest> request);
  DescribeFileSystemsResponse describeFileSystemsWithOptions(shared_ptr<DescribeFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileSystemsResponse describeFileSystems(shared_ptr<DescribeFileSystemsRequest> request);
  DescribeFilesetsResponse describeFilesetsWithOptions(shared_ptr<DescribeFilesetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFilesetsResponse describeFilesets(shared_ptr<DescribeFilesetsRequest> request);
  DescribeLifecyclePoliciesResponse describeLifecyclePoliciesWithOptions(shared_ptr<DescribeLifecyclePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLifecyclePoliciesResponse describeLifecyclePolicies(shared_ptr<DescribeLifecyclePoliciesRequest> request);
  DescribeLogAnalysisResponse describeLogAnalysisWithOptions(shared_ptr<DescribeLogAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogAnalysisResponse describeLogAnalysis(shared_ptr<DescribeLogAnalysisRequest> request);
  DescribeMountTargetsResponse describeMountTargetsWithOptions(shared_ptr<DescribeMountTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMountTargetsResponse describeMountTargets(shared_ptr<DescribeMountTargetsRequest> request);
  DescribeMountedClientsResponse describeMountedClientsWithOptions(shared_ptr<DescribeMountedClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMountedClientsResponse describeMountedClients(shared_ptr<DescribeMountedClientsRequest> request);
  DescribeNfsAclResponse describeNfsAclWithOptions(shared_ptr<DescribeNfsAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNfsAclResponse describeNfsAcl(shared_ptr<DescribeNfsAclRequest> request);
  DescribeProtocolMountTargetResponse describeProtocolMountTargetWithOptions(shared_ptr<DescribeProtocolMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProtocolMountTargetResponse describeProtocolMountTarget(shared_ptr<DescribeProtocolMountTargetRequest> request);
  DescribeProtocolServiceResponse describeProtocolServiceWithOptions(shared_ptr<DescribeProtocolServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProtocolServiceResponse describeProtocolService(shared_ptr<DescribeProtocolServiceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSmbAclResponse describeSmbAclWithOptions(shared_ptr<DescribeSmbAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSmbAclResponse describeSmbAcl(shared_ptr<DescribeSmbAclRequest> request);
  DescribeSnapshotsResponse describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSnapshotsResponse describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request);
  DescribeStoragePackagesResponse describeStoragePackagesWithOptions(shared_ptr<DescribeStoragePackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStoragePackagesResponse describeStoragePackages(shared_ptr<DescribeStoragePackagesRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  DisableAndCleanRecycleBinResponse disableAndCleanRecycleBinWithOptions(shared_ptr<DisableAndCleanRecycleBinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAndCleanRecycleBinResponse disableAndCleanRecycleBin(shared_ptr<DisableAndCleanRecycleBinRequest> request);
  DisableNfsAclResponse disableNfsAclWithOptions(shared_ptr<DisableNfsAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableNfsAclResponse disableNfsAcl(shared_ptr<DisableNfsAclRequest> request);
  DisableSmbAclResponse disableSmbAclWithOptions(shared_ptr<DisableSmbAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableSmbAclResponse disableSmbAcl(shared_ptr<DisableSmbAclRequest> request);
  EnableNfsAclResponse enableNfsAclWithOptions(shared_ptr<EnableNfsAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableNfsAclResponse enableNfsAcl(shared_ptr<EnableNfsAclRequest> request);
  EnableRecycleBinResponse enableRecycleBinWithOptions(shared_ptr<EnableRecycleBinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRecycleBinResponse enableRecycleBin(shared_ptr<EnableRecycleBinRequest> request);
  EnableSmbAclResponse enableSmbAclWithOptions(shared_ptr<EnableSmbAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableSmbAclResponse enableSmbAcl(shared_ptr<EnableSmbAclRequest> request);
  GetDirectoryOrFilePropertiesResponse getDirectoryOrFilePropertiesWithOptions(shared_ptr<GetDirectoryOrFilePropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDirectoryOrFilePropertiesResponse getDirectoryOrFileProperties(shared_ptr<GetDirectoryOrFilePropertiesRequest> request);
  GetRecycleBinAttributeResponse getRecycleBinAttributeWithOptions(shared_ptr<GetRecycleBinAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRecycleBinAttributeResponse getRecycleBinAttribute(shared_ptr<GetRecycleBinAttributeRequest> request);
  ListDirectoriesAndFilesResponse listDirectoriesAndFilesWithOptions(shared_ptr<ListDirectoriesAndFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDirectoriesAndFilesResponse listDirectoriesAndFiles(shared_ptr<ListDirectoriesAndFilesRequest> request);
  ListLifecycleRetrieveJobsResponse listLifecycleRetrieveJobsWithOptions(shared_ptr<ListLifecycleRetrieveJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLifecycleRetrieveJobsResponse listLifecycleRetrieveJobs(shared_ptr<ListLifecycleRetrieveJobsRequest> request);
  ListRecentlyRecycledDirectoriesResponse listRecentlyRecycledDirectoriesWithOptions(shared_ptr<ListRecentlyRecycledDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRecentlyRecycledDirectoriesResponse listRecentlyRecycledDirectories(shared_ptr<ListRecentlyRecycledDirectoriesRequest> request);
  ListRecycleBinJobsResponse listRecycleBinJobsWithOptions(shared_ptr<ListRecycleBinJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRecycleBinJobsResponse listRecycleBinJobs(shared_ptr<ListRecycleBinJobsRequest> request);
  ListRecycledDirectoriesAndFilesResponse listRecycledDirectoriesAndFilesWithOptions(shared_ptr<ListRecycledDirectoriesAndFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRecycledDirectoriesAndFilesResponse listRecycledDirectoriesAndFiles(shared_ptr<ListRecycledDirectoriesAndFilesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyAccessGroupResponse modifyAccessGroupWithOptions(shared_ptr<ModifyAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccessGroupResponse modifyAccessGroup(shared_ptr<ModifyAccessGroupRequest> request);
  ModifyAccessPointResponse modifyAccessPointWithOptions(shared_ptr<ModifyAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccessPointResponse modifyAccessPoint(shared_ptr<ModifyAccessPointRequest> request);
  ModifyAccessRuleResponse modifyAccessRuleWithOptions(shared_ptr<ModifyAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccessRuleResponse modifyAccessRule(shared_ptr<ModifyAccessRuleRequest> request);
  ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicyWithOptions(shared_ptr<ModifyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicy(shared_ptr<ModifyAutoSnapshotPolicyRequest> request);
  ModifyDataFlowResponse modifyDataFlowWithOptions(shared_ptr<ModifyDataFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataFlowResponse modifyDataFlow(shared_ptr<ModifyDataFlowRequest> request);
  ModifyDataFlowAutoRefreshResponse modifyDataFlowAutoRefreshWithOptions(shared_ptr<ModifyDataFlowAutoRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataFlowAutoRefreshResponse modifyDataFlowAutoRefresh(shared_ptr<ModifyDataFlowAutoRefreshRequest> request);
  ModifyFileSystemResponse modifyFileSystemWithOptions(shared_ptr<ModifyFileSystemRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFileSystemResponse modifyFileSystem(shared_ptr<ModifyFileSystemRequest> request);
  ModifyFilesetResponse modifyFilesetWithOptions(shared_ptr<ModifyFilesetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFilesetResponse modifyFileset(shared_ptr<ModifyFilesetRequest> request);
  ModifyLDAPConfigResponse modifyLDAPConfigWithOptions(shared_ptr<ModifyLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLDAPConfigResponse modifyLDAPConfig(shared_ptr<ModifyLDAPConfigRequest> request);
  ModifyLifecyclePolicyResponse modifyLifecyclePolicyWithOptions(shared_ptr<ModifyLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLifecyclePolicyResponse modifyLifecyclePolicy(shared_ptr<ModifyLifecyclePolicyRequest> request);
  ModifyMountTargetResponse modifyMountTargetWithOptions(shared_ptr<ModifyMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMountTargetResponse modifyMountTarget(shared_ptr<ModifyMountTargetRequest> request);
  ModifyProtocolMountTargetResponse modifyProtocolMountTargetWithOptions(shared_ptr<ModifyProtocolMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtocolMountTargetResponse modifyProtocolMountTarget(shared_ptr<ModifyProtocolMountTargetRequest> request);
  ModifyProtocolServiceResponse modifyProtocolServiceWithOptions(shared_ptr<ModifyProtocolServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtocolServiceResponse modifyProtocolService(shared_ptr<ModifyProtocolServiceRequest> request);
  ModifySmbAclResponse modifySmbAclWithOptions(shared_ptr<ModifySmbAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySmbAclResponse modifySmbAcl(shared_ptr<ModifySmbAclRequest> request);
  OpenNASServiceResponse openNASServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenNASServiceResponse openNASService();
  RemoveClientFromBlackListResponse removeClientFromBlackListWithOptions(shared_ptr<RemoveClientFromBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveClientFromBlackListResponse removeClientFromBlackList(shared_ptr<RemoveClientFromBlackListRequest> request);
  RemoveTagsResponse removeTagsWithOptions(shared_ptr<RemoveTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTagsResponse removeTags(shared_ptr<RemoveTagsRequest> request);
  ResetFileSystemResponse resetFileSystemWithOptions(shared_ptr<ResetFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetFileSystemResponse resetFileSystem(shared_ptr<ResetFileSystemRequest> request);
  RetryLifecycleRetrieveJobResponse retryLifecycleRetrieveJobWithOptions(shared_ptr<RetryLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryLifecycleRetrieveJobResponse retryLifecycleRetrieveJob(shared_ptr<RetryLifecycleRetrieveJobRequest> request);
  SetDirQuotaResponse setDirQuotaWithOptions(shared_ptr<SetDirQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDirQuotaResponse setDirQuota(shared_ptr<SetDirQuotaRequest> request);
  SetFilesetQuotaResponse setFilesetQuotaWithOptions(shared_ptr<SetFilesetQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFilesetQuotaResponse setFilesetQuota(shared_ptr<SetFilesetQuotaRequest> request);
  StartDataFlowResponse startDataFlowWithOptions(shared_ptr<StartDataFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDataFlowResponse startDataFlow(shared_ptr<StartDataFlowRequest> request);
  StopDataFlowResponse stopDataFlowWithOptions(shared_ptr<StopDataFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDataFlowResponse stopDataFlow(shared_ptr<StopDataFlowRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateRecycleBinAttributeResponse updateRecycleBinAttributeWithOptions(shared_ptr<UpdateRecycleBinAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRecycleBinAttributeResponse updateRecycleBinAttribute(shared_ptr<UpdateRecycleBinAttributeRequest> request);
  UpgradeFileSystemResponse upgradeFileSystemWithOptions(shared_ptr<UpgradeFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeFileSystemResponse upgradeFileSystem(shared_ptr<UpgradeFileSystemRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_NAS20170626

#endif
