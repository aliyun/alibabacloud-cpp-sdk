// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NAS20170626_H_
#define ALIBABACLOUD_NAS20170626_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_NAS20170626 {
class AddClientToBlackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> clientIP{};
  shared_ptr<string> clientToken{};

  AddClientToBlackListRequest() {}

  explicit AddClientToBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  shared_ptr<AddClientToBlackListResponseBody> body{};

  AddClientToBlackListResponse() {}

  explicit AddClientToBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<ApplyAutoSnapshotPolicyResponseBody> body{};

  ApplyAutoSnapshotPolicyResponse() {}

  explicit ApplyAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CancelAutoSnapshotPolicyResponseBody> body{};

  CancelAutoSnapshotPolicyResponse() {}

  explicit CancelAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CancelDirQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> path{};
  shared_ptr<string> userType{};
  shared_ptr<string> userId{};

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
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CancelDirQuotaRequest() = default;
};
class CancelDirQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  CancelDirQuotaResponseBody() {}

  explicit CancelDirQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelDirQuotaResponseBody() = default;
};
class CancelDirQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelDirQuotaResponseBody> body{};

  CancelDirQuotaResponse() {}

  explicit CancelDirQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CancelLifecycleRetrieveJobResponseBody> body{};

  CancelLifecycleRetrieveJobResponse() {}

  explicit CancelLifecycleRetrieveJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CancelRecycleBinJobResponseBody> body{};

  CancelRecycleBinJobResponse() {}

  explicit CancelRecycleBinJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CreateAccessGroupResponseBody> body{};

  CreateAccessGroupResponse() {}

  explicit CreateAccessGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> sourceCidrIp{};
  shared_ptr<string> RWAccessType{};
  shared_ptr<string> userAccessType{};
  shared_ptr<long> priority{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> ipv6SourceCidrIp{};

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
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    if (userAccessType) {
      res["UserAccessType"] = boost::any(*userAccessType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (ipv6SourceCidrIp) {
      res["Ipv6SourceCidrIp"] = boost::any(*ipv6SourceCidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
    if (m.find("UserAccessType") != m.end() && !m["UserAccessType"].empty()) {
      userAccessType = make_shared<string>(boost::any_cast<string>(m["UserAccessType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("Ipv6SourceCidrIp") != m.end() && !m["Ipv6SourceCidrIp"].empty()) {
      ipv6SourceCidrIp = make_shared<string>(boost::any_cast<string>(m["Ipv6SourceCidrIp"]));
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
  shared_ptr<CreateAccessRuleResponseBody> body{};

  CreateAccessRuleResponse() {}

  explicit CreateAccessRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> repeatWeekdays{};
  shared_ptr<string> timePoints{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> autoSnapshotPolicyName{};
  shared_ptr<string> fileSystemType{};

  CreateAutoSnapshotPolicyRequest() {}

  explicit CreateAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (repeatWeekdays) {
      res["RepeatWeekdays"] = boost::any(*repeatWeekdays);
    }
    if (timePoints) {
      res["TimePoints"] = boost::any(*timePoints);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (autoSnapshotPolicyName) {
      res["AutoSnapshotPolicyName"] = boost::any(*autoSnapshotPolicyName);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RepeatWeekdays") != m.end() && !m["RepeatWeekdays"].empty()) {
      repeatWeekdays = make_shared<string>(boost::any_cast<string>(m["RepeatWeekdays"]));
    }
    if (m.find("TimePoints") != m.end() && !m["TimePoints"].empty()) {
      timePoints = make_shared<string>(boost::any_cast<string>(m["TimePoints"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("AutoSnapshotPolicyName") != m.end() && !m["AutoSnapshotPolicyName"].empty()) {
      autoSnapshotPolicyName = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyName"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
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
  shared_ptr<CreateAutoSnapshotPolicyResponseBody> body{};

  CreateAutoSnapshotPolicyResponse() {}

  explicit CreateAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<long> capacity{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> storageType{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> protocolType{};
  shared_ptr<long> encryptType{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> description{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<bool> dryRun{};

  CreateFileSystemRequest() {}

  explicit CreateFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
  }


  virtual ~CreateFileSystemRequest() = default;
};
class CreateFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> fileSystemId{};

  CreateFileSystemResponseBody() {}

  explicit CreateFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~CreateFileSystemResponseBody() = default;
};
class CreateFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFileSystemResponseBody> body{};

  CreateFileSystemResponse() {}

  explicit CreateFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateLDAPConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> URI{};
  shared_ptr<string> bindDN{};
  shared_ptr<string> searchBase{};

  CreateLDAPConfigRequest() {}

  explicit CreateLDAPConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (bindDN) {
      res["BindDN"] = boost::any(*bindDN);
    }
    if (searchBase) {
      res["SearchBase"] = boost::any(*searchBase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("BindDN") != m.end() && !m["BindDN"].empty()) {
      bindDN = make_shared<string>(boost::any_cast<string>(m["BindDN"]));
    }
    if (m.find("SearchBase") != m.end() && !m["SearchBase"].empty()) {
      searchBase = make_shared<string>(boost::any_cast<string>(m["SearchBase"]));
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
  shared_ptr<CreateLDAPConfigResponseBody> body{};

  CreateLDAPConfigResponse() {}

  explicit CreateLDAPConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> path{};
  shared_ptr<string> lifecycleRuleName{};
  shared_ptr<string> storageType{};
  shared_ptr<vector<string>> paths{};

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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (lifecycleRuleName) {
      res["LifecycleRuleName"] = boost::any(*lifecycleRuleName);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("LifecycleRuleName") != m.end() && !m["LifecycleRuleName"].empty()) {
      lifecycleRuleName = make_shared<string>(boost::any_cast<string>(m["LifecycleRuleName"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
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
  shared_ptr<CreateLifecyclePolicyResponseBody> body{};

  CreateLifecyclePolicyResponse() {}

  explicit CreateLifecyclePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  }


  virtual ~CreateLifecycleRetrieveJobRequest() = default;
};
class CreateLifecycleRetrieveJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};

  CreateLifecycleRetrieveJobResponseBody() {}

  explicit CreateLifecycleRetrieveJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CreateLifecycleRetrieveJobResponseBody() = default;
};
class CreateLifecycleRetrieveJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLifecycleRetrieveJobResponseBody> body{};

  CreateLifecycleRetrieveJobResponse() {}

  explicit CreateLifecycleRetrieveJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateMountTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> networkType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<bool> enableIpv6{};
  shared_ptr<bool> dryRun{};

  CreateMountTargetRequest() {}

  explicit CreateMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (enableIpv6) {
      res["EnableIpv6"] = boost::any(*enableIpv6);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("EnableIpv6") != m.end() && !m["EnableIpv6"].empty()) {
      enableIpv6 = make_shared<bool>(boost::any_cast<bool>(m["EnableIpv6"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<CreateMountTargetResponseBodyMountTargetExtra> mountTargetExtra{};

  CreateMountTargetResponseBody() {}

  explicit CreateMountTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (mountTargetExtra) {
      res["MountTargetExtra"] = mountTargetExtra ? boost::any(mountTargetExtra->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~CreateMountTargetResponseBody() = default;
};
class CreateMountTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMountTargetResponseBody> body{};

  CreateMountTargetResponse() {}

  explicit CreateMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateRecycleBinDeleteJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileId{};
  shared_ptr<string> clientToken{};

  CreateRecycleBinDeleteJobRequest() {}

  explicit CreateRecycleBinDeleteJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateRecycleBinDeleteJobRequest() = default;
};
class CreateRecycleBinDeleteJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};

  CreateRecycleBinDeleteJobResponseBody() {}

  explicit CreateRecycleBinDeleteJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CreateRecycleBinDeleteJobResponseBody() = default;
};
class CreateRecycleBinDeleteJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRecycleBinDeleteJobResponseBody> body{};

  CreateRecycleBinDeleteJobResponse() {}

  explicit CreateRecycleBinDeleteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileId{};
  shared_ptr<string> targetFileId{};
  shared_ptr<string> clientToken{};

  CreateRecycleBinRestoreJobRequest() {}

  explicit CreateRecycleBinRestoreJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (targetFileId) {
      res["TargetFileId"] = boost::any(*targetFileId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("TargetFileId") != m.end() && !m["TargetFileId"].empty()) {
      targetFileId = make_shared<string>(boost::any_cast<string>(m["TargetFileId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateRecycleBinRestoreJobRequest() = default;
};
class CreateRecycleBinRestoreJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};

  CreateRecycleBinRestoreJobResponseBody() {}

  explicit CreateRecycleBinRestoreJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CreateRecycleBinRestoreJobResponseBody() = default;
};
class CreateRecycleBinRestoreJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRecycleBinRestoreJobResponseBody> body{};

  CreateRecycleBinRestoreJobResponse() {}

  explicit CreateRecycleBinRestoreJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> description{};
  shared_ptr<long> retentionDays{};

  CreateSnapshotRequest() {}

  explicit CreateSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
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
  shared_ptr<DeleteAccessGroupResponseBody> body{};

  DeleteAccessGroupResponse() {}

  explicit DeleteAccessGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteAccessRuleResponseBody> body{};

  DeleteAccessRuleResponse() {}

  explicit DeleteAccessRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteAutoSnapshotPolicyResponseBody> body{};

  DeleteAutoSnapshotPolicyResponse() {}

  explicit DeleteAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteFileSystemResponseBody> body{};

  DeleteFileSystemResponse() {}

  explicit DeleteFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteLDAPConfigResponseBody> body{};

  DeleteLDAPConfigResponse() {}

  explicit DeleteLDAPConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  DeleteLifecyclePolicyResponseBody() {}

  explicit DeleteLifecyclePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteLifecyclePolicyResponseBody() = default;
};
class DeleteLifecyclePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLifecyclePolicyResponseBody> body{};

  DeleteLifecyclePolicyResponse() {}

  explicit DeleteLifecyclePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteMountTargetResponseBody> body{};

  DeleteMountTargetResponse() {}

  explicit DeleteMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeAccessGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<bool> useUTCDateTime{};
  shared_ptr<string> fileSystemType{};

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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (useUTCDateTime) {
      res["UseUTCDateTime"] = boost::any(*useUTCDateTime);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("UseUTCDateTime") != m.end() && !m["UseUTCDateTime"].empty()) {
      useUTCDateTime = make_shared<bool>(boost::any_cast<bool>(m["UseUTCDateTime"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
  }


  virtual ~DescribeAccessGroupsRequest() = default;
};
class DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> accessGroupType{};
  shared_ptr<long> ruleCount{};
  shared_ptr<long> mountTargetCount{};

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
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (accessGroupType) {
      res["AccessGroupType"] = boost::any(*accessGroupType);
    }
    if (ruleCount) {
      res["RuleCount"] = boost::any(*ruleCount);
    }
    if (mountTargetCount) {
      res["MountTargetCount"] = boost::any(*mountTargetCount);
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
    if (m.find("AccessGroupType") != m.end() && !m["AccessGroupType"].empty()) {
      accessGroupType = make_shared<string>(boost::any_cast<string>(m["AccessGroupType"]));
    }
    if (m.find("RuleCount") != m.end() && !m["RuleCount"].empty()) {
      ruleCount = make_shared<long>(boost::any_cast<long>(m["RuleCount"]));
    }
    if (m.find("MountTargetCount") != m.end() && !m["MountTargetCount"].empty()) {
      mountTargetCount = make_shared<long>(boost::any_cast<long>(m["MountTargetCount"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeAccessGroupsResponseBodyAccessGroups> accessGroups{};

  DescribeAccessGroupsResponseBody() {}

  explicit DescribeAccessGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (accessGroups) {
      res["AccessGroups"] = accessGroups ? boost::any(accessGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("AccessGroups") != m.end() && !m["AccessGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessGroups"].type()) {
        DescribeAccessGroupsResponseBodyAccessGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessGroups"]));
        accessGroups = make_shared<DescribeAccessGroupsResponseBodyAccessGroups>(model1);
      }
    }
  }


  virtual ~DescribeAccessGroupsResponseBody() = default;
};
class DescribeAccessGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccessGroupsResponseBody> body{};

  DescribeAccessGroupsResponse() {}

  explicit DescribeAccessGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeAccessRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> fileSystemType{};

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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
  }


  virtual ~DescribeAccessRulesRequest() = default;
};
class DescribeAccessRulesResponseBodyAccessRulesAccessRule : public Darabonba::Model {
public:
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> sourceCidrIp{};
  shared_ptr<string> ipv6SourceCidrIp{};
  shared_ptr<string> RWAccess{};
  shared_ptr<string> userAccess{};
  shared_ptr<long> priority{};

  DescribeAccessRulesResponseBodyAccessRulesAccessRule() {}

  explicit DescribeAccessRulesResponseBodyAccessRulesAccessRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessRuleId) {
      res["AccessRuleId"] = boost::any(*accessRuleId);
    }
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    if (ipv6SourceCidrIp) {
      res["Ipv6SourceCidrIp"] = boost::any(*ipv6SourceCidrIp);
    }
    if (RWAccess) {
      res["RWAccess"] = boost::any(*RWAccess);
    }
    if (userAccess) {
      res["UserAccess"] = boost::any(*userAccess);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessRuleId") != m.end() && !m["AccessRuleId"].empty()) {
      accessRuleId = make_shared<string>(boost::any_cast<string>(m["AccessRuleId"]));
    }
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
    if (m.find("Ipv6SourceCidrIp") != m.end() && !m["Ipv6SourceCidrIp"].empty()) {
      ipv6SourceCidrIp = make_shared<string>(boost::any_cast<string>(m["Ipv6SourceCidrIp"]));
    }
    if (m.find("RWAccess") != m.end() && !m["RWAccess"].empty()) {
      RWAccess = make_shared<string>(boost::any_cast<string>(m["RWAccess"]));
    }
    if (m.find("UserAccess") != m.end() && !m["UserAccess"].empty()) {
      userAccess = make_shared<string>(boost::any_cast<string>(m["UserAccess"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeAccessRulesResponseBodyAccessRules> accessRules{};

  DescribeAccessRulesResponseBody() {}

  explicit DescribeAccessRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (accessRules) {
      res["AccessRules"] = accessRules ? boost::any(accessRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("AccessRules") != m.end() && !m["AccessRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessRules"].type()) {
        DescribeAccessRulesResponseBodyAccessRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessRules"]));
        accessRules = make_shared<DescribeAccessRulesResponseBodyAccessRules>(model1);
      }
    }
  }


  virtual ~DescribeAccessRulesResponseBody() = default;
};
class DescribeAccessRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccessRulesResponseBody> body{};

  DescribeAccessRulesResponse() {}

  explicit DescribeAccessRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> fileSystemType{};

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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
  }


  virtual ~DescribeAutoSnapshotPoliciesRequest() = default;
};
class DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy : public Darabonba::Model {
public:
  shared_ptr<string> timePoints{};
  shared_ptr<string> status{};
  shared_ptr<string> repeatWeekdays{};
  shared_ptr<string> autoSnapshotPolicyName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<long> fileSystemNums{};
  shared_ptr<string> regionId{};

  DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy() {}

  explicit DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timePoints) {
      res["TimePoints"] = boost::any(*timePoints);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (repeatWeekdays) {
      res["RepeatWeekdays"] = boost::any(*repeatWeekdays);
    }
    if (autoSnapshotPolicyName) {
      res["AutoSnapshotPolicyName"] = boost::any(*autoSnapshotPolicyName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (fileSystemNums) {
      res["FileSystemNums"] = boost::any(*fileSystemNums);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimePoints") != m.end() && !m["TimePoints"].empty()) {
      timePoints = make_shared<string>(boost::any_cast<string>(m["TimePoints"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RepeatWeekdays") != m.end() && !m["RepeatWeekdays"].empty()) {
      repeatWeekdays = make_shared<string>(boost::any_cast<string>(m["RepeatWeekdays"]));
    }
    if (m.find("AutoSnapshotPolicyName") != m.end() && !m["AutoSnapshotPolicyName"].empty()) {
      autoSnapshotPolicyName = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("FileSystemNums") != m.end() && !m["FileSystemNums"].empty()) {
      fileSystemNums = make_shared<long>(boost::any_cast<long>(m["FileSystemNums"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies> autoSnapshotPolicies{};

  DescribeAutoSnapshotPoliciesResponseBody() {}

  explicit DescribeAutoSnapshotPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (autoSnapshotPolicies) {
      res["AutoSnapshotPolicies"] = autoSnapshotPolicies ? boost::any(autoSnapshotPolicies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("AutoSnapshotPolicies") != m.end() && !m["AutoSnapshotPolicies"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoSnapshotPolicies"].type()) {
        DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoSnapshotPolicies"]));
        autoSnapshotPolicies = make_shared<DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies>(model1);
      }
    }
  }


  virtual ~DescribeAutoSnapshotPoliciesResponseBody() = default;
};
class DescribeAutoSnapshotPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAutoSnapshotPoliciesResponseBody> body{};

  DescribeAutoSnapshotPoliciesResponse() {}

  explicit DescribeAutoSnapshotPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemIds{};
  shared_ptr<string> autoSnapshotPolicyIds{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeAutoSnapshotTasksRequest() {}

  explicit DescribeAutoSnapshotTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemIds) {
      res["FileSystemIds"] = boost::any(*fileSystemIds);
    }
    if (autoSnapshotPolicyIds) {
      res["AutoSnapshotPolicyIds"] = boost::any(*autoSnapshotPolicyIds);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
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
    if (m.find("FileSystemIds") != m.end() && !m["FileSystemIds"].empty()) {
      fileSystemIds = make_shared<string>(boost::any_cast<string>(m["FileSystemIds"]));
    }
    if (m.find("AutoSnapshotPolicyIds") != m.end() && !m["AutoSnapshotPolicyIds"].empty()) {
      autoSnapshotPolicyIds = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyIds"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks> autoSnapshotTasks{};

  DescribeAutoSnapshotTasksResponseBody() {}

  explicit DescribeAutoSnapshotTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (autoSnapshotTasks) {
      res["AutoSnapshotTasks"] = autoSnapshotTasks ? boost::any(autoSnapshotTasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("AutoSnapshotTasks") != m.end() && !m["AutoSnapshotTasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoSnapshotTasks"].type()) {
        DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoSnapshotTasks"]));
        autoSnapshotTasks = make_shared<DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks>(model1);
      }
    }
  }


  virtual ~DescribeAutoSnapshotTasksResponseBody() = default;
};
class DescribeAutoSnapshotTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAutoSnapshotTasksResponseBody> body{};

  DescribeAutoSnapshotTasksResponse() {}

  explicit DescribeAutoSnapshotTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> clientIP{};

  DescribeBlackListClientsRequest() {}

  explicit DescribeBlackListClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
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
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
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
  shared_ptr<DescribeBlackListClientsResponseBody> body{};

  DescribeBlackListClientsResponse() {}

  explicit DescribeBlackListClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeDirQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> path{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

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
    if (path) {
      res["Path"] = boost::any(*path);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeDirQuotasRequest() = default;
};
class DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos : public Darabonba::Model {
public:
  shared_ptr<long> fileCountReal{};
  shared_ptr<string> userType{};
  shared_ptr<long> fileCountLimit{};
  shared_ptr<string> userId{};
  shared_ptr<long> sizeLimit{};
  shared_ptr<string> quotaType{};
  shared_ptr<long> sizeReal{};

  DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos() {}

  explicit DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileCountReal) {
      res["FileCountReal"] = boost::any(*fileCountReal);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    if (fileCountLimit) {
      res["FileCountLimit"] = boost::any(*fileCountLimit);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (sizeReal) {
      res["SizeReal"] = boost::any(*sizeReal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileCountReal") != m.end() && !m["FileCountReal"].empty()) {
      fileCountReal = make_shared<long>(boost::any_cast<long>(m["FileCountReal"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
    if (m.find("FileCountLimit") != m.end() && !m["FileCountLimit"].empty()) {
      fileCountLimit = make_shared<long>(boost::any_cast<long>(m["FileCountLimit"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<long>(boost::any_cast<long>(m["SizeLimit"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("SizeReal") != m.end() && !m["SizeReal"].empty()) {
      sizeReal = make_shared<long>(boost::any_cast<long>(m["SizeReal"]));
    }
  }


  virtual ~DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos() = default;
};
class DescribeDirQuotasResponseBodyDirQuotaInfos : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> status{};
  shared_ptr<string> dirInode{};
  shared_ptr<vector<DescribeDirQuotasResponseBodyDirQuotaInfosUserQuotaInfos>> userQuotaInfos{};

  DescribeDirQuotasResponseBodyDirQuotaInfos() {}

  explicit DescribeDirQuotasResponseBodyDirQuotaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (dirInode) {
      res["DirInode"] = boost::any(*dirInode);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DirInode") != m.end() && !m["DirInode"].empty()) {
      dirInode = make_shared<string>(boost::any_cast<string>(m["DirInode"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeDirQuotasResponseBodyDirQuotaInfos>> dirQuotaInfos{};

  DescribeDirQuotasResponseBody() {}

  explicit DescribeDirQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (dirQuotaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*dirQuotaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DirQuotaInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeDirQuotasResponseBody() = default;
};
class DescribeDirQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDirQuotasResponseBody> body{};

  DescribeDirQuotasResponse() {}

  explicit DescribeDirQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> vpcId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeFileSystemsRequestTag>> tag{};

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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeFileSystemsRequest() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode : public Darabonba::Model {
public:
  shared_ptr<string> ecsIp{};
  shared_ptr<string> ecsId{};
  shared_ptr<string> defaultPasswd{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsIp) {
      res["EcsIp"] = boost::any(*ecsIp);
    }
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (defaultPasswd) {
      res["DefaultPasswd"] = boost::any(*defaultPasswd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsIp") != m.end() && !m["EcsIp"].empty()) {
      ecsIp = make_shared<string>(boost::any_cast<string>(m["EcsIp"]));
    }
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("DefaultPasswd") != m.end() && !m["DefaultPasswd"].empty()) {
      defaultPasswd = make_shared<string>(boost::any_cast<string>(m["DefaultPasswd"]));
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
  shared_ptr<string> vpcId{};
  shared_ptr<string> status{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> dualStackMountTargetDomain{};
  shared_ptr<string> vswId{};
  shared_ptr<string> networkType{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes> clientMasterNodes{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags> tags{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (clientMasterNodes) {
      res["ClientMasterNodes"] = clientMasterNodes ? boost::any(clientMasterNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ClientMasterNodes") != m.end() && !m["ClientMasterNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientMasterNodes"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientMasterNodes"]));
        clientMasterNodes = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags>(model1);
      }
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
class DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> packageId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<long> size{};
  shared_ptr<string> packageType{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemPackagesPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
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
class DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap : public Darabonba::Model {
public:
  shared_ptr<string> searchBase{};
  shared_ptr<string> URI{};
  shared_ptr<string> bindDN{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchBase) {
      res["SearchBase"] = boost::any(*searchBase);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (bindDN) {
      res["BindDN"] = boost::any(*bindDN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchBase") != m.end() && !m["SearchBase"].empty()) {
      searchBase = make_shared<string>(boost::any_cast<string>(m["SearchBase"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("BindDN") != m.end() && !m["BindDN"].empty()) {
      bindDN = make_shared<string>(boost::any_cast<string>(m["BindDN"]));
    }
  }


  virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap() = default;
};
class DescribeFileSystemsResponseBodyFileSystemsFileSystem : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> capacity{};
  shared_ptr<long> meteredIASize{};
  shared_ptr<string> createTime{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> storageType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> meteredSize{};
  shared_ptr<long> encryptType{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> description{};
  shared_ptr<string> version{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets> mountTargets{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages> packages{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemTags> tags{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures> supportedFeatures{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap> ldap{};

  DescribeFileSystemsResponseBodyFileSystemsFileSystem() {}

  explicit DescribeFileSystemsResponseBodyFileSystemsFileSystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (meteredIASize) {
      res["MeteredIASize"] = boost::any(*meteredIASize);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (meteredSize) {
      res["MeteredSize"] = boost::any(*meteredSize);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (mountTargets) {
      res["MountTargets"] = mountTargets ? boost::any(mountTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (packages) {
      res["Packages"] = packages ? boost::any(packages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportedFeatures) {
      res["SupportedFeatures"] = supportedFeatures ? boost::any(supportedFeatures->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ldap) {
      res["Ldap"] = ldap ? boost::any(ldap->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("MeteredIASize") != m.end() && !m["MeteredIASize"].empty()) {
      meteredIASize = make_shared<long>(boost::any_cast<long>(m["MeteredIASize"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MeteredSize") != m.end() && !m["MeteredSize"].empty()) {
      meteredSize = make_shared<long>(boost::any_cast<long>(m["MeteredSize"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("MountTargets") != m.end() && !m["MountTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountTargets"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountTargets"]));
        mountTargets = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets>(model1);
      }
    }
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      if (typeid(map<string, boost::any>) == m["Packages"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Packages"]));
        packages = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemTags>(model1);
      }
    }
    if (m.find("SupportedFeatures") != m.end() && !m["SupportedFeatures"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedFeatures"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedFeatures"]));
        supportedFeatures = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures>(model1);
      }
    }
    if (m.find("Ldap") != m.end() && !m["Ldap"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ldap"].type()) {
        DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ldap"]));
        ldap = make_shared<DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap>(model1);
      }
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeFileSystemsResponseBodyFileSystems> fileSystems{};

  DescribeFileSystemsResponseBody() {}

  explicit DescribeFileSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (fileSystems) {
      res["FileSystems"] = fileSystems ? boost::any(fileSystems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("FileSystems") != m.end() && !m["FileSystems"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileSystems"].type()) {
        DescribeFileSystemsResponseBodyFileSystems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystems"]));
        fileSystems = make_shared<DescribeFileSystemsResponseBodyFileSystems>(model1);
      }
    }
  }


  virtual ~DescribeFileSystemsResponseBody() = default;
};
class DescribeFileSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeFileSystemsResponseBody> body{};

  DescribeFileSystemsResponse() {}

  explicit DescribeFileSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeFileSystemStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeFileSystemStatisticsRequest() {}

  explicit DescribeFileSystemStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeFileSystemStatisticsRequest() = default;
};
class DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic : public Darabonba::Model {
public:
  shared_ptr<long> expiringCount{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> meteredSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> expiredCount{};

  DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (expiredCount) {
      res["ExpiredCount"] = boost::any(*expiredCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("ExpiredCount") != m.end() && !m["ExpiredCount"].empty()) {
      expiredCount = make_shared<long>(boost::any_cast<long>(m["ExpiredCount"]));
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
  shared_ptr<string> startTime{};
  shared_ptr<string> packageId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<long> size{};

  DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackagesPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
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
  shared_ptr<string> status{};
  shared_ptr<long> meteredIASize{};
  shared_ptr<long> capacity{};
  shared_ptr<string> createTime{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> storageType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> meteredSize{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> protocolType{};
  shared_ptr<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages> packages{};

  DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem() {}

  explicit DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (meteredIASize) {
      res["MeteredIASize"] = boost::any(*meteredIASize);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
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
    if (meteredSize) {
      res["MeteredSize"] = boost::any(*meteredSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (packages) {
      res["Packages"] = packages ? boost::any(packages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("MeteredIASize") != m.end() && !m["MeteredIASize"].empty()) {
      meteredIASize = make_shared<long>(boost::any_cast<long>(m["MeteredIASize"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
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
    if (m.find("MeteredSize") != m.end() && !m["MeteredSize"].empty()) {
      meteredSize = make_shared<long>(boost::any_cast<long>(m["MeteredSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      if (typeid(map<string, boost::any>) == m["Packages"].type()) {
        DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Packages"]));
        packages = make_shared<DescribeFileSystemStatisticsResponseBodyFileSystemsFileSystemPackages>(model1);
      }
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
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeFileSystemStatisticsResponseBodyFileSystemStatistics> fileSystemStatistics{};
  shared_ptr<DescribeFileSystemStatisticsResponseBodyFileSystems> fileSystems{};

  DescribeFileSystemStatisticsResponseBody() {}

  explicit DescribeFileSystemStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (fileSystemStatistics) {
      res["FileSystemStatistics"] = fileSystemStatistics ? boost::any(fileSystemStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileSystems) {
      res["FileSystems"] = fileSystems ? boost::any(fileSystems->toMap()) : boost::any(map<string,boost::any>({}));
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
  }


  virtual ~DescribeFileSystemStatisticsResponseBody() = default;
};
class DescribeFileSystemStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeFileSystemStatisticsResponseBody> body{};

  DescribeFileSystemStatisticsResponse() {}

  explicit DescribeFileSystemStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeLDAPConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};

  DescribeLDAPConfigRequest() {}

  explicit DescribeLDAPConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeLDAPConfigRequest() = default;
};
class DescribeLDAPConfigResponseBodyLdap : public Darabonba::Model {
public:
  shared_ptr<string> searchBase{};
  shared_ptr<string> URI{};
  shared_ptr<string> bindDN{};

  DescribeLDAPConfigResponseBodyLdap() {}

  explicit DescribeLDAPConfigResponseBodyLdap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchBase) {
      res["SearchBase"] = boost::any(*searchBase);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (bindDN) {
      res["BindDN"] = boost::any(*bindDN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchBase") != m.end() && !m["SearchBase"].empty()) {
      searchBase = make_shared<string>(boost::any_cast<string>(m["SearchBase"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("BindDN") != m.end() && !m["BindDN"].empty()) {
      bindDN = make_shared<string>(boost::any_cast<string>(m["BindDN"]));
    }
  }


  virtual ~DescribeLDAPConfigResponseBodyLdap() = default;
};
class DescribeLDAPConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeLDAPConfigResponseBodyLdap> ldap{};

  DescribeLDAPConfigResponseBody() {}

  explicit DescribeLDAPConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ldap) {
      res["Ldap"] = ldap ? boost::any(ldap->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Ldap") != m.end() && !m["Ldap"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ldap"].type()) {
        DescribeLDAPConfigResponseBodyLdap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ldap"]));
        ldap = make_shared<DescribeLDAPConfigResponseBodyLdap>(model1);
      }
    }
  }


  virtual ~DescribeLDAPConfigResponseBody() = default;
};
class DescribeLDAPConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLDAPConfigResponseBody> body{};

  DescribeLDAPConfigResponse() {}

  explicit DescribeLDAPConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeLDAPConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLDAPConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLDAPConfigResponse() = default;
};
class DescribeLifecyclePoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeLifecyclePoliciesRequest() = default;
};
class DescribeLifecyclePoliciesResponseBodyLifecyclePolicies : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> lifecycleRuleName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> path{};
  shared_ptr<string> storageType{};
  shared_ptr<string> lifecyclePolicyName{};
  shared_ptr<vector<string>> paths{};

  DescribeLifecyclePoliciesResponseBodyLifecyclePolicies() {}

  explicit DescribeLifecyclePoliciesResponseBodyLifecyclePolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (lifecycleRuleName) {
      res["LifecycleRuleName"] = boost::any(*lifecycleRuleName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (lifecyclePolicyName) {
      res["LifecyclePolicyName"] = boost::any(*lifecyclePolicyName);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("LifecycleRuleName") != m.end() && !m["LifecycleRuleName"].empty()) {
      lifecycleRuleName = make_shared<string>(boost::any_cast<string>(m["LifecycleRuleName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("LifecyclePolicyName") != m.end() && !m["LifecyclePolicyName"].empty()) {
      lifecyclePolicyName = make_shared<string>(boost::any_cast<string>(m["LifecyclePolicyName"]));
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
  }


  virtual ~DescribeLifecyclePoliciesResponseBodyLifecyclePolicies() = default;
};
class DescribeLifecyclePoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeLifecyclePoliciesResponseBodyLifecyclePolicies>> lifecyclePolicies{};

  DescribeLifecyclePoliciesResponseBody() {}

  explicit DescribeLifecyclePoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (lifecyclePolicies) {
      vector<boost::any> temp1;
      for(auto item1:*lifecyclePolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecyclePolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
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
  }


  virtual ~DescribeLifecyclePoliciesResponseBody() = default;
};
class DescribeLifecyclePoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLifecyclePoliciesResponseBody> body{};

  DescribeLifecyclePoliciesResponse() {}

  explicit DescribeLifecyclePoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> regionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeLogAnalysisRequest() {}

  explicit DescribeLogAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeLogAnalysisRequest() = default;
};
class DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> project{};
  shared_ptr<string> region{};

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
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logstore") != m.end() && !m["Logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["Logstore"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
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
  shared_ptr<string> code{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeLogAnalysisResponseBodyAnalyses> analyses{};

  DescribeLogAnalysisResponseBody() {}

  explicit DescribeLogAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (analyses) {
      res["Analyses"] = analyses ? boost::any(analyses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Analyses") != m.end() && !m["Analyses"].empty()) {
      if (typeid(map<string, boost::any>) == m["Analyses"].type()) {
        DescribeLogAnalysisResponseBodyAnalyses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Analyses"]));
        analyses = make_shared<DescribeLogAnalysisResponseBodyAnalyses>(model1);
      }
    }
  }


  virtual ~DescribeLogAnalysisResponseBody() = default;
};
class DescribeLogAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLogAnalysisResponseBody> body{};

  DescribeLogAnalysisResponse() {}

  explicit DescribeLogAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeMountedClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> clientIP{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<long> pageNumber{};

  DescribeMountedClientsRequest() {}

  explicit DescribeMountedClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeMountedClientsResponseBodyClients> clients{};

  DescribeMountedClientsResponseBody() {}

  explicit DescribeMountedClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (clients) {
      res["Clients"] = clients ? boost::any(clients->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(map<string, boost::any>) == m["Clients"].type()) {
        DescribeMountedClientsResponseBodyClients model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clients"]));
        clients = make_shared<DescribeMountedClientsResponseBodyClients>(model1);
      }
    }
  }


  virtual ~DescribeMountedClientsResponseBody() = default;
};
class DescribeMountedClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMountedClientsResponseBody> body{};

  DescribeMountedClientsResponse() {}

  explicit DescribeMountedClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeMountTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> dualStackMountTargetDomain{};

  DescribeMountTargetsRequest() {}

  explicit DescribeMountTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
  }


  virtual ~DescribeMountTargetsRequest() = default;
};
class DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode : public Darabonba::Model {
public:
  shared_ptr<string> ecsIp{};
  shared_ptr<string> ecsId{};
  shared_ptr<string> defaultPasswd{};

  DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode() {}

  explicit DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodesClientMasterNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsIp) {
      res["EcsIp"] = boost::any(*ecsIp);
    }
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (defaultPasswd) {
      res["DefaultPasswd"] = boost::any(*defaultPasswd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsIp") != m.end() && !m["EcsIp"].empty()) {
      ecsIp = make_shared<string>(boost::any_cast<string>(m["EcsIp"]));
    }
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("DefaultPasswd") != m.end() && !m["DefaultPasswd"].empty()) {
      defaultPasswd = make_shared<string>(boost::any_cast<string>(m["DefaultPasswd"]));
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
  shared_ptr<string> vpcId{};
  shared_ptr<string> status{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> accessGroup{};
  shared_ptr<string> dualStackMountTargetDomain{};
  shared_ptr<string> vswId{};
  shared_ptr<string> networkType{};
  shared_ptr<DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes> clientMasterNodes{};

  DescribeMountTargetsResponseBodyMountTargetsMountTarget() {}

  explicit DescribeMountTargetsResponseBodyMountTargetsMountTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (clientMasterNodes) {
      res["ClientMasterNodes"] = clientMasterNodes ? boost::any(clientMasterNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ClientMasterNodes") != m.end() && !m["ClientMasterNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientMasterNodes"].type()) {
        DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientMasterNodes"]));
        clientMasterNodes = make_shared<DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes>(model1);
      }
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeMountTargetsResponseBodyMountTargets> mountTargets{};

  DescribeMountTargetsResponseBody() {}

  explicit DescribeMountTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (mountTargets) {
      res["MountTargets"] = mountTargets ? boost::any(mountTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("MountTargets") != m.end() && !m["MountTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountTargets"].type()) {
        DescribeMountTargetsResponseBodyMountTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountTargets"]));
        mountTargets = make_shared<DescribeMountTargetsResponseBodyMountTargets>(model1);
      }
    }
  }


  virtual ~DescribeMountTargetsResponseBody() = default;
};
class DescribeMountTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMountTargetsResponseBody> body{};

  DescribeMountTargetsResponse() {}

  explicit DescribeMountTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> fileSystemType{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
class DescribeSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> snapshotIds{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> snapshotType{};
  shared_ptr<string> status{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeSnapshotsRequest() {}

  explicit DescribeSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeSnapshotsRequest() = default;
};
class DescribeSnapshotsResponseBodySnapshotsSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> progress{};
  shared_ptr<string> createTime{};
  shared_ptr<string> sourceFileSystemId{};
  shared_ptr<long> remainTime{};
  shared_ptr<long> retentionDays{};
  shared_ptr<long> sourceFileSystemSize{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> sourceFileSystemVersion{};
  shared_ptr<long> encryptType{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};

  DescribeSnapshotsResponseBodySnapshotsSnapshot() {}

  explicit DescribeSnapshotsResponseBodySnapshotsSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (sourceFileSystemId) {
      res["SourceFileSystemId"] = boost::any(*sourceFileSystemId);
    }
    if (remainTime) {
      res["RemainTime"] = boost::any(*remainTime);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (sourceFileSystemSize) {
      res["SourceFileSystemSize"] = boost::any(*sourceFileSystemSize);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (sourceFileSystemVersion) {
      res["SourceFileSystemVersion"] = boost::any(*sourceFileSystemVersion);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SourceFileSystemId") != m.end() && !m["SourceFileSystemId"].empty()) {
      sourceFileSystemId = make_shared<string>(boost::any_cast<string>(m["SourceFileSystemId"]));
    }
    if (m.find("RemainTime") != m.end() && !m["RemainTime"].empty()) {
      remainTime = make_shared<long>(boost::any_cast<long>(m["RemainTime"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SourceFileSystemSize") != m.end() && !m["SourceFileSystemSize"].empty()) {
      sourceFileSystemSize = make_shared<long>(boost::any_cast<long>(m["SourceFileSystemSize"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("SourceFileSystemVersion") != m.end() && !m["SourceFileSystemVersion"].empty()) {
      sourceFileSystemVersion = make_shared<string>(boost::any_cast<string>(m["SourceFileSystemVersion"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeSnapshotsResponseBodySnapshots> snapshots{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (snapshots) {
      res["Snapshots"] = snapshots ? boost::any(snapshots->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(map<string, boost::any>) == m["Snapshots"].type()) {
        DescribeSnapshotsResponseBodySnapshots model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Snapshots"]));
        snapshots = make_shared<DescribeSnapshotsResponseBodySnapshots>(model1);
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
class DescribeStoragePackagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> useUTCDateTime{};
  shared_ptr<long> pageNumber{};

  DescribeStoragePackagesRequest() {}

  explicit DescribeStoragePackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (useUTCDateTime) {
      res["UseUTCDateTime"] = boost::any(*useUTCDateTime);
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
    if (m.find("UseUTCDateTime") != m.end() && !m["UseUTCDateTime"].empty()) {
      useUTCDateTime = make_shared<bool>(boost::any_cast<bool>(m["UseUTCDateTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeStoragePackagesRequest() = default;
};
class DescribeStoragePackagesResponseBodyPackagesPackage : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<long> size{};
  shared_ptr<string> storageType{};
  shared_ptr<string> packageId{};

  DescribeStoragePackagesResponseBodyPackagesPackage() {}

  explicit DescribeStoragePackagesResponseBodyPackagesPackage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeStoragePackagesResponseBodyPackages> packages{};

  DescribeStoragePackagesResponseBody() {}

  explicit DescribeStoragePackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (packages) {
      res["Packages"] = packages ? boost::any(packages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      if (typeid(map<string, boost::any>) == m["Packages"].type()) {
        DescribeStoragePackagesResponseBodyPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Packages"]));
        packages = make_shared<DescribeStoragePackagesResponseBodyPackages>(model1);
      }
    }
  }


  virtual ~DescribeStoragePackagesResponseBody() = default;
};
class DescribeStoragePackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStoragePackagesResponseBody> body{};

  DescribeStoragePackagesResponse() {}

  explicit DescribeStoragePackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeTagsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeTagsRequestTag() {}

  explicit DescribeTagsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeTagsRequestTag() = default;
};
class DescribeTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeTagsRequestTag>> tag{};

  DescribeTagsRequest() {}

  explicit DescribeTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeTagsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeTagsRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeTagsRequest() = default;
};
class DescribeTagsResponseBodyTagsTagFileSystemIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fileSystemId{};

  DescribeTagsResponseBodyTagsTagFileSystemIds() {}

  explicit DescribeTagsResponseBodyTagsTagFileSystemIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeTagsResponseBodyTagsTagFileSystemIds() = default;
};
class DescribeTagsResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<DescribeTagsResponseBodyTagsTagFileSystemIds> fileSystemIds{};

  DescribeTagsResponseBodyTagsTag() {}

  explicit DescribeTagsResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (fileSystemIds) {
      res["FileSystemIds"] = fileSystemIds ? boost::any(fileSystemIds->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("FileSystemIds") != m.end() && !m["FileSystemIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileSystemIds"].type()) {
        DescribeTagsResponseBodyTagsTagFileSystemIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystemIds"]));
        fileSystemIds = make_shared<DescribeTagsResponseBodyTagsTagFileSystemIds>(model1);
      }
    }
  }


  virtual ~DescribeTagsResponseBodyTagsTag() = default;
};
class DescribeTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTagsResponseBodyTagsTag>> tag{};

  DescribeTagsResponseBodyTags() {}

  explicit DescribeTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeTagsResponseBodyTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsResponseBodyTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeTagsResponseBodyTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeTagsResponseBodyTags() = default;
};
class DescribeTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeTagsResponseBodyTags> tags{};

  DescribeTagsResponseBody() {}

  explicit DescribeTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeTagsResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeTagsResponseBodyTags>(model1);
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
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemType{};

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
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
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
  shared_ptr<string> storageType{};
  shared_ptr<string> protocolType{};

  DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType() {}

  explicit DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
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
class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
public:
  shared_ptr<DescribeZonesResponseBodyZonesZonePerformance> performance{};
  shared_ptr<DescribeZonesResponseBodyZonesZoneCapacity> capacity{};
  shared_ptr<string> zoneId{};
  shared_ptr<DescribeZonesResponseBodyZonesZoneInstanceTypes> instanceTypes{};

  DescribeZonesResponseBodyZonesZone() {}

  explicit DescribeZonesResponseBodyZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performance) {
      res["Performance"] = performance ? boost::any(performance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (capacity) {
      res["Capacity"] = capacity ? boost::any(capacity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = instanceTypes ? boost::any(instanceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Performance") != m.end() && !m["Performance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Performance"].type()) {
        DescribeZonesResponseBodyZonesZonePerformance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Performance"]));
        performance = make_shared<DescribeZonesResponseBodyZonesZonePerformance>(model1);
      }
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capacity"].type()) {
        DescribeZonesResponseBodyZonesZoneCapacity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capacity"]));
        capacity = make_shared<DescribeZonesResponseBodyZonesZoneCapacity>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypes"].type()) {
        DescribeZonesResponseBodyZonesZoneInstanceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypes"]));
        instanceTypes = make_shared<DescribeZonesResponseBodyZonesZoneInstanceTypes>(model1);
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
  shared_ptr<DisableAndCleanRecycleBinResponseBody> body{};

  DisableAndCleanRecycleBinResponse() {}

  explicit DisableAndCleanRecycleBinResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<EnableRecycleBinResponseBody> body{};

  EnableRecycleBinResponse() {}

  explicit EnableRecycleBinResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> type{};
  shared_ptr<bool> hasInfrequentAccessFile{};
  shared_ptr<string> MTime{};
  shared_ptr<string> ATime{};
  shared_ptr<long> size{};
  shared_ptr<string> CTime{};
  shared_ptr<string> storageType{};
  shared_ptr<string> name{};
  shared_ptr<string> retrieveTime{};
  shared_ptr<string> inode{};

  GetDirectoryOrFilePropertiesResponseBodyEntry() {}

  explicit GetDirectoryOrFilePropertiesResponseBodyEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (hasInfrequentAccessFile) {
      res["HasInfrequentAccessFile"] = boost::any(*hasInfrequentAccessFile);
    }
    if (MTime) {
      res["MTime"] = boost::any(*MTime);
    }
    if (ATime) {
      res["ATime"] = boost::any(*ATime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (CTime) {
      res["CTime"] = boost::any(*CTime);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (retrieveTime) {
      res["RetrieveTime"] = boost::any(*retrieveTime);
    }
    if (inode) {
      res["Inode"] = boost::any(*inode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("HasInfrequentAccessFile") != m.end() && !m["HasInfrequentAccessFile"].empty()) {
      hasInfrequentAccessFile = make_shared<bool>(boost::any_cast<bool>(m["HasInfrequentAccessFile"]));
    }
    if (m.find("MTime") != m.end() && !m["MTime"].empty()) {
      MTime = make_shared<string>(boost::any_cast<string>(m["MTime"]));
    }
    if (m.find("ATime") != m.end() && !m["ATime"].empty()) {
      ATime = make_shared<string>(boost::any_cast<string>(m["ATime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("CTime") != m.end() && !m["CTime"].empty()) {
      CTime = make_shared<string>(boost::any_cast<string>(m["CTime"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RetrieveTime") != m.end() && !m["RetrieveTime"].empty()) {
      retrieveTime = make_shared<string>(boost::any_cast<string>(m["RetrieveTime"]));
    }
    if (m.find("Inode") != m.end() && !m["Inode"].empty()) {
      inode = make_shared<string>(boost::any_cast<string>(m["Inode"]));
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
  shared_ptr<GetDirectoryOrFilePropertiesResponseBody> body{};

  GetDirectoryOrFilePropertiesResponse() {}

  explicit GetDirectoryOrFilePropertiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<long> reservedDays{};
  shared_ptr<string> enableTime{};

  GetRecycleBinAttributeResponseBodyRecycleBinAttribute() {}

  explicit GetRecycleBinAttributeResponseBodyRecycleBinAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (reservedDays) {
      res["ReservedDays"] = boost::any(*reservedDays);
    }
    if (enableTime) {
      res["EnableTime"] = boost::any(*enableTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ReservedDays") != m.end() && !m["ReservedDays"].empty()) {
      reservedDays = make_shared<long>(boost::any_cast<long>(m["ReservedDays"]));
    }
    if (m.find("EnableTime") != m.end() && !m["EnableTime"].empty()) {
      enableTime = make_shared<string>(boost::any_cast<string>(m["EnableTime"]));
    }
  }


  virtual ~GetRecycleBinAttributeResponseBodyRecycleBinAttribute() = default;
};
class GetRecycleBinAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRecycleBinAttributeResponseBodyRecycleBinAttribute> recycleBinAttribute{};

  GetRecycleBinAttributeResponseBody() {}

  explicit GetRecycleBinAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (recycleBinAttribute) {
      res["RecycleBinAttribute"] = recycleBinAttribute ? boost::any(recycleBinAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RecycleBinAttribute") != m.end() && !m["RecycleBinAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecycleBinAttribute"].type()) {
        GetRecycleBinAttributeResponseBodyRecycleBinAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecycleBinAttribute"]));
        recycleBinAttribute = make_shared<GetRecycleBinAttributeResponseBodyRecycleBinAttribute>(model1);
      }
    }
  }


  virtual ~GetRecycleBinAttributeResponseBody() = default;
};
class GetRecycleBinAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRecycleBinAttributeResponseBody> body{};

  GetRecycleBinAttributeResponse() {}

  explicit GetRecycleBinAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> path{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> storageType{};
  shared_ptr<bool> directoryOnly{};
  shared_ptr<long> maxResults{};

  ListDirectoriesAndFilesRequest() {}

  explicit ListDirectoriesAndFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (directoryOnly) {
      res["DirectoryOnly"] = boost::any(*directoryOnly);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("DirectoryOnly") != m.end() && !m["DirectoryOnly"].empty()) {
      directoryOnly = make_shared<bool>(boost::any_cast<bool>(m["DirectoryOnly"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListDirectoriesAndFilesRequest() = default;
};
class ListDirectoriesAndFilesResponseBodyEntries : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<bool> hasInfrequentAccessFile{};
  shared_ptr<string> ctime{};
  shared_ptr<string> mtime{};
  shared_ptr<long> size{};
  shared_ptr<string> storageType{};
  shared_ptr<string> atime{};
  shared_ptr<string> name{};
  shared_ptr<string> retrieveTime{};
  shared_ptr<string> inode{};
  shared_ptr<string> fileId{};

  ListDirectoriesAndFilesResponseBodyEntries() {}

  explicit ListDirectoriesAndFilesResponseBodyEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (hasInfrequentAccessFile) {
      res["HasInfrequentAccessFile"] = boost::any(*hasInfrequentAccessFile);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (mtime) {
      res["Mtime"] = boost::any(*mtime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (atime) {
      res["Atime"] = boost::any(*atime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (retrieveTime) {
      res["RetrieveTime"] = boost::any(*retrieveTime);
    }
    if (inode) {
      res["Inode"] = boost::any(*inode);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("HasInfrequentAccessFile") != m.end() && !m["HasInfrequentAccessFile"].empty()) {
      hasInfrequentAccessFile = make_shared<bool>(boost::any_cast<bool>(m["HasInfrequentAccessFile"]));
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<string>(boost::any_cast<string>(m["Ctime"]));
    }
    if (m.find("Mtime") != m.end() && !m["Mtime"].empty()) {
      mtime = make_shared<string>(boost::any_cast<string>(m["Mtime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Atime") != m.end() && !m["Atime"].empty()) {
      atime = make_shared<string>(boost::any_cast<string>(m["Atime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RetrieveTime") != m.end() && !m["RetrieveTime"].empty()) {
      retrieveTime = make_shared<string>(boost::any_cast<string>(m["RetrieveTime"]));
    }
    if (m.find("Inode") != m.end() && !m["Inode"].empty()) {
      inode = make_shared<string>(boost::any_cast<string>(m["Inode"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
  }


  virtual ~ListDirectoriesAndFilesResponseBodyEntries() = default;
};
class ListDirectoriesAndFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDirectoriesAndFilesResponseBodyEntries>> entries{};

  ListDirectoriesAndFilesResponseBody() {}

  explicit ListDirectoriesAndFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (entries) {
      vector<boost::any> temp1;
      for(auto item1:*entries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entries"] = boost::any(temp1);
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
  }


  virtual ~ListDirectoriesAndFilesResponseBody() = default;
};
class ListDirectoriesAndFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDirectoriesAndFilesResponseBody> body{};

  ListDirectoriesAndFilesResponse() {}

  explicit ListDirectoriesAndFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> status{};

  ListLifecycleRetrieveJobsRequest() {}

  explicit ListLifecycleRetrieveJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListLifecycleRetrieveJobsRequest() = default;
};
class ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> status{};
  shared_ptr<long> discoveredFileCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<vector<string>> paths{};
  shared_ptr<long> retrievedFileCount{};
  shared_ptr<string> jobId{};
  shared_ptr<string> createTime{};

  ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs() {}

  explicit ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (discoveredFileCount) {
      res["DiscoveredFileCount"] = boost::any(*discoveredFileCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    if (retrievedFileCount) {
      res["RetrievedFileCount"] = boost::any(*retrievedFileCount);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DiscoveredFileCount") != m.end() && !m["DiscoveredFileCount"].empty()) {
      discoveredFileCount = make_shared<long>(boost::any_cast<long>(m["DiscoveredFileCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs() = default;
};
class ListLifecycleRetrieveJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListLifecycleRetrieveJobsResponseBodyLifecycleRetrieveJobs>> lifecycleRetrieveJobs{};

  ListLifecycleRetrieveJobsResponseBody() {}

  explicit ListLifecycleRetrieveJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (lifecycleRetrieveJobs) {
      vector<boost::any> temp1;
      for(auto item1:*lifecycleRetrieveJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecycleRetrieveJobs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
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
  }


  virtual ~ListLifecycleRetrieveJobsResponseBody() = default;
};
class ListLifecycleRetrieveJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListLifecycleRetrieveJobsResponseBody> body{};

  ListLifecycleRetrieveJobsResponse() {}

  explicit ListLifecycleRetrieveJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListRecentlyRecycledDirectoriesRequest() = default;
};
class ListRecentlyRecycledDirectoriesResponseBodyEntries : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<string> path{};
  shared_ptr<string> name{};
  shared_ptr<string> lastDeleteTime{};

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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (lastDeleteTime) {
      res["LastDeleteTime"] = boost::any(*lastDeleteTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("LastDeleteTime") != m.end() && !m["LastDeleteTime"].empty()) {
      lastDeleteTime = make_shared<string>(boost::any_cast<string>(m["LastDeleteTime"]));
    }
  }


  virtual ~ListRecentlyRecycledDirectoriesResponseBodyEntries() = default;
};
class ListRecentlyRecycledDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListRecentlyRecycledDirectoriesResponseBodyEntries>> entries{};

  ListRecentlyRecycledDirectoriesResponseBody() {}

  explicit ListRecentlyRecycledDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (entries) {
      vector<boost::any> temp1;
      for(auto item1:*entries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
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
  }


  virtual ~ListRecentlyRecycledDirectoriesResponseBody() = default;
};
class ListRecentlyRecycledDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRecentlyRecycledDirectoriesResponseBody> body{};

  ListRecentlyRecycledDirectoriesResponse() {}

  explicit ListRecentlyRecycledDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListRecycleBinJobsRequest() = default;
};
class ListRecycleBinJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> type{};
  shared_ptr<string> fileId{};
  shared_ptr<string> status{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> progress{};
  shared_ptr<string> createTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> errorMessage{};

  ListRecycleBinJobsResponseBodyJobs() {}

  explicit ListRecycleBinJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~ListRecycleBinJobsResponseBodyJobs() = default;
};
class ListRecycleBinJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListRecycleBinJobsResponseBodyJobs>> jobs{};

  ListRecycleBinJobsResponseBody() {}

  explicit ListRecycleBinJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
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
  }


  virtual ~ListRecycleBinJobsResponseBody() = default;
};
class ListRecycleBinJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRecycleBinJobsResponseBody> body{};

  ListRecycleBinJobsResponse() {}

  explicit ListRecycleBinJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListRecycledDirectoriesAndFilesRequest() {}

  explicit ListRecycledDirectoriesAndFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListRecycledDirectoriesAndFilesRequest() = default;
};
class ListRecycledDirectoriesAndFilesResponseBodyEntries : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<string> type{};
  shared_ptr<string> name{};
  shared_ptr<string> deleteTime{};
  shared_ptr<string> inode{};
  shared_ptr<string> ATime{};
  shared_ptr<string> MTime{};
  shared_ptr<string> CTime{};
  shared_ptr<long> size{};

  ListRecycledDirectoriesAndFilesResponseBodyEntries() {}

  explicit ListRecycledDirectoriesAndFilesResponseBodyEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (deleteTime) {
      res["DeleteTime"] = boost::any(*deleteTime);
    }
    if (inode) {
      res["Inode"] = boost::any(*inode);
    }
    if (ATime) {
      res["ATime"] = boost::any(*ATime);
    }
    if (MTime) {
      res["MTime"] = boost::any(*MTime);
    }
    if (CTime) {
      res["CTime"] = boost::any(*CTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("DeleteTime") != m.end() && !m["DeleteTime"].empty()) {
      deleteTime = make_shared<string>(boost::any_cast<string>(m["DeleteTime"]));
    }
    if (m.find("Inode") != m.end() && !m["Inode"].empty()) {
      inode = make_shared<string>(boost::any_cast<string>(m["Inode"]));
    }
    if (m.find("ATime") != m.end() && !m["ATime"].empty()) {
      ATime = make_shared<string>(boost::any_cast<string>(m["ATime"]));
    }
    if (m.find("MTime") != m.end() && !m["MTime"].empty()) {
      MTime = make_shared<string>(boost::any_cast<string>(m["MTime"]));
    }
    if (m.find("CTime") != m.end() && !m["CTime"].empty()) {
      CTime = make_shared<string>(boost::any_cast<string>(m["CTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListRecycledDirectoriesAndFilesResponseBodyEntries() = default;
};
class ListRecycledDirectoriesAndFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListRecycledDirectoriesAndFilesResponseBodyEntries>> entries{};

  ListRecycledDirectoriesAndFilesResponseBody() {}

  explicit ListRecycledDirectoriesAndFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (entries) {
      vector<boost::any> temp1;
      for(auto item1:*entries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
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
  }


  virtual ~ListRecycledDirectoriesAndFilesResponseBody() = default;
};
class ListRecycledDirectoriesAndFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRecycledDirectoriesAndFilesResponseBody> body{};

  ListRecycledDirectoriesAndFilesResponse() {}

  explicit ListRecycledDirectoriesAndFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<ModifyAccessGroupResponseBody> body{};

  ModifyAccessGroupResponse() {}

  explicit ModifyAccessGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> accessRuleId{};
  shared_ptr<string> sourceCidrIp{};
  shared_ptr<string> RWAccessType{};
  shared_ptr<string> userAccessType{};
  shared_ptr<long> priority{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<string> ipv6SourceCidrIp{};

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
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    if (RWAccessType) {
      res["RWAccessType"] = boost::any(*RWAccessType);
    }
    if (userAccessType) {
      res["UserAccessType"] = boost::any(*userAccessType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (ipv6SourceCidrIp) {
      res["Ipv6SourceCidrIp"] = boost::any(*ipv6SourceCidrIp);
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
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
    if (m.find("RWAccessType") != m.end() && !m["RWAccessType"].empty()) {
      RWAccessType = make_shared<string>(boost::any_cast<string>(m["RWAccessType"]));
    }
    if (m.find("UserAccessType") != m.end() && !m["UserAccessType"].empty()) {
      userAccessType = make_shared<string>(boost::any_cast<string>(m["UserAccessType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("Ipv6SourceCidrIp") != m.end() && !m["Ipv6SourceCidrIp"].empty()) {
      ipv6SourceCidrIp = make_shared<string>(boost::any_cast<string>(m["Ipv6SourceCidrIp"]));
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
  shared_ptr<ModifyAccessRuleResponseBody> body{};

  ModifyAccessRuleResponse() {}

  explicit ModifyAccessRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<ModifyAutoSnapshotPolicyResponseBody> body{};

  ModifyAutoSnapshotPolicyResponse() {}

  explicit ModifyAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ModifyFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> description{};

  ModifyFileSystemRequest() {}

  explicit ModifyFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
  shared_ptr<ModifyFileSystemResponseBody> body{};

  ModifyFileSystemResponse() {}

  explicit ModifyFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ModifyLDAPConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> URI{};
  shared_ptr<string> bindDN{};
  shared_ptr<string> searchBase{};

  ModifyLDAPConfigRequest() {}

  explicit ModifyLDAPConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (bindDN) {
      res["BindDN"] = boost::any(*bindDN);
    }
    if (searchBase) {
      res["SearchBase"] = boost::any(*searchBase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("BindDN") != m.end() && !m["BindDN"].empty()) {
      bindDN = make_shared<string>(boost::any_cast<string>(m["BindDN"]));
    }
    if (m.find("SearchBase") != m.end() && !m["SearchBase"].empty()) {
      searchBase = make_shared<string>(boost::any_cast<string>(m["SearchBase"]));
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
  shared_ptr<ModifyLDAPConfigResponseBody> body{};

  ModifyLDAPConfigResponse() {}

  explicit ModifyLDAPConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> path{};
  shared_ptr<string> lifecycleRuleName{};
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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (lifecycleRuleName) {
      res["LifecycleRuleName"] = boost::any(*lifecycleRuleName);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("LifecycleRuleName") != m.end() && !m["LifecycleRuleName"].empty()) {
      lifecycleRuleName = make_shared<string>(boost::any_cast<string>(m["LifecycleRuleName"]));
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
  shared_ptr<ModifyLifecyclePolicyResponseBody> body{};

  ModifyLifecyclePolicyResponse() {}

  explicit ModifyLifecyclePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> accessGroupName{};
  shared_ptr<string> status{};
  shared_ptr<string> dualStackMountTargetDomain{};

  ModifyMountTargetRequest() {}

  explicit ModifyMountTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accessGroupName) {
      res["AccessGroupName"] = boost::any(*accessGroupName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (dualStackMountTargetDomain) {
      res["DualStackMountTargetDomain"] = boost::any(*dualStackMountTargetDomain);
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
    if (m.find("AccessGroupName") != m.end() && !m["AccessGroupName"].empty()) {
      accessGroupName = make_shared<string>(boost::any_cast<string>(m["AccessGroupName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DualStackMountTargetDomain") != m.end() && !m["DualStackMountTargetDomain"].empty()) {
      dualStackMountTargetDomain = make_shared<string>(boost::any_cast<string>(m["DualStackMountTargetDomain"]));
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
  shared_ptr<ModifyMountTargetResponseBody> body{};

  ModifyMountTargetResponse() {}

  explicit ModifyMountTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class OpenNASServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenNASServiceResponseBody() {}

  explicit OpenNASServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenNASServiceResponseBody() = default;
};
class OpenNASServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenNASServiceResponseBody> body{};

  OpenNASServiceResponse() {}

  explicit OpenNASServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> regionId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> clientIP{};
  shared_ptr<string> clientToken{};

  RemoveClientFromBlackListRequest() {}

  explicit RemoveClientFromBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  shared_ptr<RemoveClientFromBlackListResponseBody> body{};

  RemoveClientFromBlackListResponse() {}

  explicit RemoveClientFromBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<ResetFileSystemResponseBody> body{};

  ResetFileSystemResponse() {}

  explicit ResetFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<RetryLifecycleRetrieveJobResponseBody> body{};

  RetryLifecycleRetrieveJobResponse() {}

  explicit RetryLifecycleRetrieveJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> path{};
  shared_ptr<string> quotaType{};
  shared_ptr<string> userType{};
  shared_ptr<string> userId{};
  shared_ptr<long> sizeLimit{};
  shared_ptr<long> fileCountLimit{};

  SetDirQuotaRequest() {}

  explicit SetDirQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    if (fileCountLimit) {
      res["FileCountLimit"] = boost::any(*fileCountLimit);
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
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<long>(boost::any_cast<long>(m["SizeLimit"]));
    }
    if (m.find("FileCountLimit") != m.end() && !m["FileCountLimit"].empty()) {
      fileCountLimit = make_shared<long>(boost::any_cast<long>(m["FileCountLimit"]));
    }
  }


  virtual ~SetDirQuotaRequest() = default;
};
class SetDirQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  SetDirQuotaResponseBody() {}

  explicit SetDirQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDirQuotaResponseBody() = default;
};
class SetDirQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDirQuotaResponseBody> body{};

  SetDirQuotaResponse() {}

  explicit SetDirQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<UpdateRecycleBinAttributeResponseBody> body{};

  UpdateRecycleBinAttributeResponse() {}

  explicit UpdateRecycleBinAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> capacity{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> clientToken{};

  UpgradeFileSystemRequest() {}

  explicit UpgradeFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  shared_ptr<UpgradeFileSystemResponseBody> body{};

  UpgradeFileSystemResponse() {}

  explicit UpgradeFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(shared_ptr<CancelAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(shared_ptr<CancelAutoSnapshotPolicyRequest> request);
  CancelDirQuotaResponse cancelDirQuotaWithOptions(shared_ptr<CancelDirQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDirQuotaResponse cancelDirQuota(shared_ptr<CancelDirQuotaRequest> request);
  CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJobWithOptions(shared_ptr<CancelLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJob(shared_ptr<CancelLifecycleRetrieveJobRequest> request);
  CancelRecycleBinJobResponse cancelRecycleBinJobWithOptions(shared_ptr<CancelRecycleBinJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRecycleBinJobResponse cancelRecycleBinJob(shared_ptr<CancelRecycleBinJobRequest> request);
  CreateAccessGroupResponse createAccessGroupWithOptions(shared_ptr<CreateAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessGroupResponse createAccessGroup(shared_ptr<CreateAccessGroupRequest> request);
  CreateAccessRuleResponse createAccessRuleWithOptions(shared_ptr<CreateAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessRuleResponse createAccessRule(shared_ptr<CreateAccessRuleRequest> request);
  CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(shared_ptr<CreateAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(shared_ptr<CreateAutoSnapshotPolicyRequest> request);
  CreateFileSystemResponse createFileSystemWithOptions(shared_ptr<CreateFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileSystemResponse createFileSystem(shared_ptr<CreateFileSystemRequest> request);
  CreateLDAPConfigResponse createLDAPConfigWithOptions(shared_ptr<CreateLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLDAPConfigResponse createLDAPConfig(shared_ptr<CreateLDAPConfigRequest> request);
  CreateLifecyclePolicyResponse createLifecyclePolicyWithOptions(shared_ptr<CreateLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLifecyclePolicyResponse createLifecyclePolicy(shared_ptr<CreateLifecyclePolicyRequest> request);
  CreateLifecycleRetrieveJobResponse createLifecycleRetrieveJobWithOptions(shared_ptr<CreateLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLifecycleRetrieveJobResponse createLifecycleRetrieveJob(shared_ptr<CreateLifecycleRetrieveJobRequest> request);
  CreateMountTargetResponse createMountTargetWithOptions(shared_ptr<CreateMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMountTargetResponse createMountTarget(shared_ptr<CreateMountTargetRequest> request);
  CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJobWithOptions(shared_ptr<CreateRecycleBinDeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJob(shared_ptr<CreateRecycleBinDeleteJobRequest> request);
  CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJobWithOptions(shared_ptr<CreateRecycleBinRestoreJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJob(shared_ptr<CreateRecycleBinRestoreJobRequest> request);
  CreateSnapshotResponse createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSnapshotResponse createSnapshot(shared_ptr<CreateSnapshotRequest> request);
  DeleteAccessGroupResponse deleteAccessGroupWithOptions(shared_ptr<DeleteAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessGroupResponse deleteAccessGroup(shared_ptr<DeleteAccessGroupRequest> request);
  DeleteAccessRuleResponse deleteAccessRuleWithOptions(shared_ptr<DeleteAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessRuleResponse deleteAccessRule(shared_ptr<DeleteAccessRuleRequest> request);
  DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicyWithOptions(shared_ptr<DeleteAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicy(shared_ptr<DeleteAutoSnapshotPolicyRequest> request);
  DeleteFileSystemResponse deleteFileSystemWithOptions(shared_ptr<DeleteFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileSystemResponse deleteFileSystem(shared_ptr<DeleteFileSystemRequest> request);
  DeleteLDAPConfigResponse deleteLDAPConfigWithOptions(shared_ptr<DeleteLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLDAPConfigResponse deleteLDAPConfig(shared_ptr<DeleteLDAPConfigRequest> request);
  DeleteLifecyclePolicyResponse deleteLifecyclePolicyWithOptions(shared_ptr<DeleteLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLifecyclePolicyResponse deleteLifecyclePolicy(shared_ptr<DeleteLifecyclePolicyRequest> request);
  DeleteMountTargetResponse deleteMountTargetWithOptions(shared_ptr<DeleteMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMountTargetResponse deleteMountTarget(shared_ptr<DeleteMountTargetRequest> request);
  DeleteSnapshotResponse deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSnapshotResponse deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request);
  DescribeAccessGroupsResponse describeAccessGroupsWithOptions(shared_ptr<DescribeAccessGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessGroupsResponse describeAccessGroups(shared_ptr<DescribeAccessGroupsRequest> request);
  DescribeAccessRulesResponse describeAccessRulesWithOptions(shared_ptr<DescribeAccessRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccessRulesResponse describeAccessRules(shared_ptr<DescribeAccessRulesRequest> request);
  DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPoliciesWithOptions(shared_ptr<DescribeAutoSnapshotPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPolicies(shared_ptr<DescribeAutoSnapshotPoliciesRequest> request);
  DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasksWithOptions(shared_ptr<DescribeAutoSnapshotTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasks(shared_ptr<DescribeAutoSnapshotTasksRequest> request);
  DescribeBlackListClientsResponse describeBlackListClientsWithOptions(shared_ptr<DescribeBlackListClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBlackListClientsResponse describeBlackListClients(shared_ptr<DescribeBlackListClientsRequest> request);
  DescribeDirQuotasResponse describeDirQuotasWithOptions(shared_ptr<DescribeDirQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirQuotasResponse describeDirQuotas(shared_ptr<DescribeDirQuotasRequest> request);
  DescribeFileSystemsResponse describeFileSystemsWithOptions(shared_ptr<DescribeFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileSystemsResponse describeFileSystems(shared_ptr<DescribeFileSystemsRequest> request);
  DescribeFileSystemStatisticsResponse describeFileSystemStatisticsWithOptions(shared_ptr<DescribeFileSystemStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileSystemStatisticsResponse describeFileSystemStatistics(shared_ptr<DescribeFileSystemStatisticsRequest> request);
  DescribeLDAPConfigResponse describeLDAPConfigWithOptions(shared_ptr<DescribeLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLDAPConfigResponse describeLDAPConfig(shared_ptr<DescribeLDAPConfigRequest> request);
  DescribeLifecyclePoliciesResponse describeLifecyclePoliciesWithOptions(shared_ptr<DescribeLifecyclePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLifecyclePoliciesResponse describeLifecyclePolicies(shared_ptr<DescribeLifecyclePoliciesRequest> request);
  DescribeLogAnalysisResponse describeLogAnalysisWithOptions(shared_ptr<DescribeLogAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogAnalysisResponse describeLogAnalysis(shared_ptr<DescribeLogAnalysisRequest> request);
  DescribeMountedClientsResponse describeMountedClientsWithOptions(shared_ptr<DescribeMountedClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMountedClientsResponse describeMountedClients(shared_ptr<DescribeMountedClientsRequest> request);
  DescribeMountTargetsResponse describeMountTargetsWithOptions(shared_ptr<DescribeMountTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMountTargetsResponse describeMountTargets(shared_ptr<DescribeMountTargetsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSnapshotsResponse describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSnapshotsResponse describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request);
  DescribeStoragePackagesResponse describeStoragePackagesWithOptions(shared_ptr<DescribeStoragePackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStoragePackagesResponse describeStoragePackages(shared_ptr<DescribeStoragePackagesRequest> request);
  DescribeTagsResponse describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTagsResponse describeTags(shared_ptr<DescribeTagsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  DisableAndCleanRecycleBinResponse disableAndCleanRecycleBinWithOptions(shared_ptr<DisableAndCleanRecycleBinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAndCleanRecycleBinResponse disableAndCleanRecycleBin(shared_ptr<DisableAndCleanRecycleBinRequest> request);
  EnableRecycleBinResponse enableRecycleBinWithOptions(shared_ptr<EnableRecycleBinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRecycleBinResponse enableRecycleBin(shared_ptr<EnableRecycleBinRequest> request);
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
  ModifyAccessRuleResponse modifyAccessRuleWithOptions(shared_ptr<ModifyAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccessRuleResponse modifyAccessRule(shared_ptr<ModifyAccessRuleRequest> request);
  ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicyWithOptions(shared_ptr<ModifyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicy(shared_ptr<ModifyAutoSnapshotPolicyRequest> request);
  ModifyFileSystemResponse modifyFileSystemWithOptions(shared_ptr<ModifyFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFileSystemResponse modifyFileSystem(shared_ptr<ModifyFileSystemRequest> request);
  ModifyLDAPConfigResponse modifyLDAPConfigWithOptions(shared_ptr<ModifyLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLDAPConfigResponse modifyLDAPConfig(shared_ptr<ModifyLDAPConfigRequest> request);
  ModifyLifecyclePolicyResponse modifyLifecyclePolicyWithOptions(shared_ptr<ModifyLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLifecyclePolicyResponse modifyLifecyclePolicy(shared_ptr<ModifyLifecyclePolicyRequest> request);
  ModifyMountTargetResponse modifyMountTargetWithOptions(shared_ptr<ModifyMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMountTargetResponse modifyMountTarget(shared_ptr<ModifyMountTargetRequest> request);
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
