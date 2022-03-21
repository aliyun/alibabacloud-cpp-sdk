// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SCHEDULERX220190430_H_
#define ALIBABACLOUD_SCHEDULERX220190430_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Schedulerx220190430 {
class BatchDeleteJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<vector<long>> jobIdList{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  BatchDeleteJobsRequest() {}

  explicit BatchDeleteJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobIdList) {
      res["JobIdList"] = boost::any(*jobIdList);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobIdList") != m.end() && !m["JobIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["JobIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      jobIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~BatchDeleteJobsRequest() = default;
};
class BatchDeleteJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchDeleteJobsResponseBody() {}

  explicit BatchDeleteJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchDeleteJobsResponseBody() = default;
};
class BatchDeleteJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchDeleteJobsResponseBody> body{};

  BatchDeleteJobsResponse() {}

  explicit BatchDeleteJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchDeleteJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteJobsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteJobsResponse() = default;
};
class BatchDisableJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<vector<long>> jobIdList{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  BatchDisableJobsRequest() {}

  explicit BatchDisableJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobIdList) {
      res["JobIdList"] = boost::any(*jobIdList);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobIdList") != m.end() && !m["JobIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["JobIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      jobIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~BatchDisableJobsRequest() = default;
};
class BatchDisableJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchDisableJobsResponseBody() {}

  explicit BatchDisableJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchDisableJobsResponseBody() = default;
};
class BatchDisableJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchDisableJobsResponseBody> body{};

  BatchDisableJobsResponse() {}

  explicit BatchDisableJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchDisableJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDisableJobsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDisableJobsResponse() = default;
};
class BatchEnableJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<vector<long>> jobIdList{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  BatchEnableJobsRequest() {}

  explicit BatchEnableJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobIdList) {
      res["JobIdList"] = boost::any(*jobIdList);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobIdList") != m.end() && !m["JobIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["JobIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      jobIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~BatchEnableJobsRequest() = default;
};
class BatchEnableJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchEnableJobsResponseBody() {}

  explicit BatchEnableJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchEnableJobsResponseBody() = default;
};
class BatchEnableJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchEnableJobsResponseBody> body{};

  BatchEnableJobsResponse() {}

  explicit BatchEnableJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchEnableJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchEnableJobsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchEnableJobsResponse() = default;
};
class CreateAppGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmJson{};
  shared_ptr<string> appKey{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<long> maxJobs{};
  shared_ptr<string> monitorConfigJson{};
  shared_ptr<string> monitorContactsJson{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  CreateAppGroupRequest() {}

  explicit CreateAppGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmJson) {
      res["AlarmJson"] = boost::any(*alarmJson);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (maxJobs) {
      res["MaxJobs"] = boost::any(*maxJobs);
    }
    if (monitorConfigJson) {
      res["MonitorConfigJson"] = boost::any(*monitorConfigJson);
    }
    if (monitorContactsJson) {
      res["MonitorContactsJson"] = boost::any(*monitorContactsJson);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmJson") != m.end() && !m["AlarmJson"].empty()) {
      alarmJson = make_shared<string>(boost::any_cast<string>(m["AlarmJson"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("MaxJobs") != m.end() && !m["MaxJobs"].empty()) {
      maxJobs = make_shared<long>(boost::any_cast<long>(m["MaxJobs"]));
    }
    if (m.find("MonitorConfigJson") != m.end() && !m["MonitorConfigJson"].empty()) {
      monitorConfigJson = make_shared<string>(boost::any_cast<string>(m["MonitorConfigJson"]));
    }
    if (m.find("MonitorContactsJson") != m.end() && !m["MonitorContactsJson"].empty()) {
      monitorContactsJson = make_shared<string>(boost::any_cast<string>(m["MonitorContactsJson"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateAppGroupRequest() = default;
};
class CreateAppGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> appGroupId{};
  shared_ptr<string> appKey{};

  CreateAppGroupResponseBodyData() {}

  explicit CreateAppGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appGroupId) {
      res["AppGroupId"] = boost::any(*appGroupId);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppGroupId") != m.end() && !m["AppGroupId"].empty()) {
      appGroupId = make_shared<long>(boost::any_cast<long>(m["AppGroupId"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~CreateAppGroupResponseBodyData() = default;
};
class CreateAppGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateAppGroupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAppGroupResponseBody() {}

  explicit CreateAppGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateAppGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAppGroupResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateAppGroupResponseBody() = default;
};
class CreateAppGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAppGroupResponseBody> body{};

  CreateAppGroupResponse() {}

  explicit CreateAppGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppGroupResponse() = default;
};
class CreateJobRequestContactInfo : public Darabonba::Model {
public:
  shared_ptr<string> ding{};
  shared_ptr<string> userMail{};
  shared_ptr<string> userName{};
  shared_ptr<string> userPhone{};

  CreateJobRequestContactInfo() {}

  explicit CreateJobRequestContactInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ding) {
      res["Ding"] = boost::any(*ding);
    }
    if (userMail) {
      res["UserMail"] = boost::any(*userMail);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userPhone) {
      res["UserPhone"] = boost::any(*userPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ding") != m.end() && !m["Ding"].empty()) {
      ding = make_shared<string>(boost::any_cast<string>(m["Ding"]));
    }
    if (m.find("UserMail") != m.end() && !m["UserMail"].empty()) {
      userMail = make_shared<string>(boost::any_cast<string>(m["UserMail"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserPhone") != m.end() && !m["UserPhone"].empty()) {
      userPhone = make_shared<string>(boost::any_cast<string>(m["UserPhone"]));
    }
  }


  virtual ~CreateJobRequestContactInfo() = default;
};
class CreateJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> calendar{};
  shared_ptr<string> className{};
  shared_ptr<long> consumerSize{};
  shared_ptr<vector<CreateJobRequestContactInfo>> contactInfo{};
  shared_ptr<string> content{};
  shared_ptr<long> dataOffset{};
  shared_ptr<string> description{};
  shared_ptr<long> dispatcherSize{};
  shared_ptr<string> executeMode{};
  shared_ptr<bool> failEnable{};
  shared_ptr<string> groupId{};
  shared_ptr<string> jarUrl{};
  shared_ptr<string> jobType{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<bool> missWorkerEnable{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parameters{};
  shared_ptr<long> queueSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sendChannel{};
  shared_ptr<long> taskAttemptInterval{};
  shared_ptr<long> taskMaxAttempt{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<long> timeout{};
  shared_ptr<bool> timeoutEnable{};
  shared_ptr<bool> timeoutKillEnable{};

  CreateJobRequest() {}

  explicit CreateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (className) {
      res["ClassName"] = boost::any(*className);
    }
    if (consumerSize) {
      res["ConsumerSize"] = boost::any(*consumerSize);
    }
    if (contactInfo) {
      vector<boost::any> temp1;
      for(auto item1:*contactInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContactInfo"] = boost::any(temp1);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataOffset) {
      res["DataOffset"] = boost::any(*dataOffset);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dispatcherSize) {
      res["DispatcherSize"] = boost::any(*dispatcherSize);
    }
    if (executeMode) {
      res["ExecuteMode"] = boost::any(*executeMode);
    }
    if (failEnable) {
      res["FailEnable"] = boost::any(*failEnable);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jarUrl) {
      res["JarUrl"] = boost::any(*jarUrl);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (missWorkerEnable) {
      res["MissWorkerEnable"] = boost::any(*missWorkerEnable);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (queueSize) {
      res["QueueSize"] = boost::any(*queueSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sendChannel) {
      res["SendChannel"] = boost::any(*sendChannel);
    }
    if (taskAttemptInterval) {
      res["TaskAttemptInterval"] = boost::any(*taskAttemptInterval);
    }
    if (taskMaxAttempt) {
      res["TaskMaxAttempt"] = boost::any(*taskMaxAttempt);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutEnable) {
      res["TimeoutEnable"] = boost::any(*timeoutEnable);
    }
    if (timeoutKillEnable) {
      res["TimeoutKillEnable"] = boost::any(*timeoutKillEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("ClassName") != m.end() && !m["ClassName"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["ClassName"]));
    }
    if (m.find("ConsumerSize") != m.end() && !m["ConsumerSize"].empty()) {
      consumerSize = make_shared<long>(boost::any_cast<long>(m["ConsumerSize"]));
    }
    if (m.find("ContactInfo") != m.end() && !m["ContactInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ContactInfo"].type()) {
        vector<CreateJobRequestContactInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContactInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestContactInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contactInfo = make_shared<vector<CreateJobRequestContactInfo>>(expect1);
      }
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataOffset") != m.end() && !m["DataOffset"].empty()) {
      dataOffset = make_shared<long>(boost::any_cast<long>(m["DataOffset"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DispatcherSize") != m.end() && !m["DispatcherSize"].empty()) {
      dispatcherSize = make_shared<long>(boost::any_cast<long>(m["DispatcherSize"]));
    }
    if (m.find("ExecuteMode") != m.end() && !m["ExecuteMode"].empty()) {
      executeMode = make_shared<string>(boost::any_cast<string>(m["ExecuteMode"]));
    }
    if (m.find("FailEnable") != m.end() && !m["FailEnable"].empty()) {
      failEnable = make_shared<bool>(boost::any_cast<bool>(m["FailEnable"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JarUrl") != m.end() && !m["JarUrl"].empty()) {
      jarUrl = make_shared<string>(boost::any_cast<string>(m["JarUrl"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("MissWorkerEnable") != m.end() && !m["MissWorkerEnable"].empty()) {
      missWorkerEnable = make_shared<bool>(boost::any_cast<bool>(m["MissWorkerEnable"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("QueueSize") != m.end() && !m["QueueSize"].empty()) {
      queueSize = make_shared<long>(boost::any_cast<long>(m["QueueSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SendChannel") != m.end() && !m["SendChannel"].empty()) {
      sendChannel = make_shared<string>(boost::any_cast<string>(m["SendChannel"]));
    }
    if (m.find("TaskAttemptInterval") != m.end() && !m["TaskAttemptInterval"].empty()) {
      taskAttemptInterval = make_shared<long>(boost::any_cast<long>(m["TaskAttemptInterval"]));
    }
    if (m.find("TaskMaxAttempt") != m.end() && !m["TaskMaxAttempt"].empty()) {
      taskMaxAttempt = make_shared<long>(boost::any_cast<long>(m["TaskMaxAttempt"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutEnable") != m.end() && !m["TimeoutEnable"].empty()) {
      timeoutEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutEnable"]));
    }
    if (m.find("TimeoutKillEnable") != m.end() && !m["TimeoutKillEnable"].empty()) {
      timeoutKillEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutKillEnable"]));
    }
  }


  virtual ~CreateJobRequest() = default;
};
class CreateJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  CreateJobResponseBodyData() {}

  explicit CreateJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~CreateJobResponseBodyData() = default;
};
class CreateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateJobResponseBody() {}

  explicit CreateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateJobResponseBody() = default;
};
class CreateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateJobResponseBody> body{};

  CreateJobResponse() {}

  explicit CreateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobResponse() = default;
};
class CreateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> uid{};

  CreateNamespaceRequest() {}

  explicit CreateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~CreateNamespaceRequest() = default;
};
class CreateNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> namespaceUid{};

  CreateNamespaceResponseBodyData() {}

  explicit CreateNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceUid) {
      res["NamespaceUid"] = boost::any(*namespaceUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceUid") != m.end() && !m["NamespaceUid"].empty()) {
      namespaceUid = make_shared<string>(boost::any_cast<string>(m["NamespaceUid"]));
    }
  }


  virtual ~CreateNamespaceResponseBodyData() = default;
};
class CreateNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateNamespaceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateNamespaceResponseBody() {}

  explicit CreateNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateNamespaceResponseBody() = default;
};
class CreateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNamespaceResponseBody> body{};

  CreateNamespaceResponse() {}

  explicit CreateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNamespaceResponse() = default;
};
class DeleteJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  DeleteJobRequest() {}

  explicit DeleteJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteJobRequest() = default;
};
class DeleteJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteJobResponseBody() {}

  explicit DeleteJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteJobResponseBody() = default;
};
class DeleteJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteJobResponseBody> body{};

  DeleteJobResponse() {}

  explicit DeleteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobResponse() = default;
};
class DeleteWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<long> workflowId{};

  DeleteWorkflowRequest() {}

  explicit DeleteWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (workflowId) {
      res["WorkflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WorkflowId") != m.end() && !m["WorkflowId"].empty()) {
      workflowId = make_shared<long>(boost::any_cast<long>(m["WorkflowId"]));
    }
  }


  virtual ~DeleteWorkflowRequest() = default;
};
class DeleteWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteWorkflowResponseBody() {}

  explicit DeleteWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteWorkflowResponseBody() = default;
};
class DeleteWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteWorkflowResponseBody> body{};

  DeleteWorkflowResponse() {}

  explicit DeleteWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkflowResponse() = default;
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
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DesignateWorkersRequest : public Darabonba::Model {
public:
  shared_ptr<long> designateType{};
  shared_ptr<string> groupId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> labels{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> transferable{};
  shared_ptr<string> workers{};

  DesignateWorkersRequest() {}

  explicit DesignateWorkersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (designateType) {
      res["DesignateType"] = boost::any(*designateType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (transferable) {
      res["Transferable"] = boost::any(*transferable);
    }
    if (workers) {
      res["Workers"] = boost::any(*workers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesignateType") != m.end() && !m["DesignateType"].empty()) {
      designateType = make_shared<long>(boost::any_cast<long>(m["DesignateType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Transferable") != m.end() && !m["Transferable"].empty()) {
      transferable = make_shared<bool>(boost::any_cast<bool>(m["Transferable"]));
    }
    if (m.find("Workers") != m.end() && !m["Workers"].empty()) {
      workers = make_shared<string>(boost::any_cast<string>(m["Workers"]));
    }
  }


  virtual ~DesignateWorkersRequest() = default;
};
class DesignateWorkersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DesignateWorkersResponseBody() {}

  explicit DesignateWorkersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DesignateWorkersResponseBody() = default;
};
class DesignateWorkersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DesignateWorkersResponseBody> body{};

  DesignateWorkersResponse() {}

  explicit DesignateWorkersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DesignateWorkersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DesignateWorkersResponseBody>(model1);
      }
    }
  }


  virtual ~DesignateWorkersResponse() = default;
};
class DisableJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  DisableJobRequest() {}

  explicit DisableJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisableJobRequest() = default;
};
class DisableJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableJobResponseBody() {}

  explicit DisableJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableJobResponseBody() = default;
};
class DisableJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableJobResponseBody> body{};

  DisableJobResponse() {}

  explicit DisableJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableJobResponseBody>(model1);
      }
    }
  }


  virtual ~DisableJobResponse() = default;
};
class DisableWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<long> workflowId{};

  DisableWorkflowRequest() {}

  explicit DisableWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (workflowId) {
      res["WorkflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WorkflowId") != m.end() && !m["WorkflowId"].empty()) {
      workflowId = make_shared<long>(boost::any_cast<long>(m["WorkflowId"]));
    }
  }


  virtual ~DisableWorkflowRequest() = default;
};
class DisableWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableWorkflowResponseBody() {}

  explicit DisableWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableWorkflowResponseBody() = default;
};
class DisableWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableWorkflowResponseBody> body{};

  DisableWorkflowResponse() {}

  explicit DisableWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~DisableWorkflowResponse() = default;
};
class EnableJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  EnableJobRequest() {}

  explicit EnableJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~EnableJobRequest() = default;
};
class EnableJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableJobResponseBody() {}

  explicit EnableJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableJobResponseBody() = default;
};
class EnableJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableJobResponseBody> body{};

  EnableJobResponse() {}

  explicit EnableJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableJobResponseBody>(model1);
      }
    }
  }


  virtual ~EnableJobResponse() = default;
};
class EnableWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<long> workflowId{};

  EnableWorkflowRequest() {}

  explicit EnableWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (workflowId) {
      res["WorkflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WorkflowId") != m.end() && !m["WorkflowId"].empty()) {
      workflowId = make_shared<long>(boost::any_cast<long>(m["WorkflowId"]));
    }
  }


  virtual ~EnableWorkflowRequest() = default;
};
class EnableWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableWorkflowResponseBody() {}

  explicit EnableWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableWorkflowResponseBody() = default;
};
class EnableWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableWorkflowResponseBody> body{};

  EnableWorkflowResponse() {}

  explicit EnableWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~EnableWorkflowResponse() = default;
};
class ExecuteJobRequest : public Darabonba::Model {
public:
  shared_ptr<bool> checkJobStatus{};
  shared_ptr<long> designateType{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceParameters{};
  shared_ptr<long> jobId{};
  shared_ptr<string> label{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<string> worker{};

  ExecuteJobRequest() {}

  explicit ExecuteJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkJobStatus) {
      res["CheckJobStatus"] = boost::any(*checkJobStatus);
    }
    if (designateType) {
      res["DesignateType"] = boost::any(*designateType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceParameters) {
      res["InstanceParameters"] = boost::any(*instanceParameters);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (worker) {
      res["Worker"] = boost::any(*worker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckJobStatus") != m.end() && !m["CheckJobStatus"].empty()) {
      checkJobStatus = make_shared<bool>(boost::any_cast<bool>(m["CheckJobStatus"]));
    }
    if (m.find("DesignateType") != m.end() && !m["DesignateType"].empty()) {
      designateType = make_shared<long>(boost::any_cast<long>(m["DesignateType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceParameters") != m.end() && !m["InstanceParameters"].empty()) {
      instanceParameters = make_shared<string>(boost::any_cast<string>(m["InstanceParameters"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Worker") != m.end() && !m["Worker"].empty()) {
      worker = make_shared<string>(boost::any_cast<string>(m["Worker"]));
    }
  }


  virtual ~ExecuteJobRequest() = default;
};
class ExecuteJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> jobInstanceId{};

  ExecuteJobResponseBodyData() {}

  explicit ExecuteJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInstanceId) {
      res["JobInstanceId"] = boost::any(*jobInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInstanceId") != m.end() && !m["JobInstanceId"].empty()) {
      jobInstanceId = make_shared<long>(boost::any_cast<long>(m["JobInstanceId"]));
    }
  }


  virtual ~ExecuteJobResponseBodyData() = default;
};
class ExecuteJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ExecuteJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteJobResponseBody() {}

  explicit ExecuteJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExecuteJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExecuteJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteJobResponseBody() = default;
};
class ExecuteJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteJobResponseBody> body{};

  ExecuteJobResponse() {}

  explicit ExecuteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecuteJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteJobResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteJobResponse() = default;
};
class ExecuteWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceParameters{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<long> workflowId{};

  ExecuteWorkflowRequest() {}

  explicit ExecuteWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceParameters) {
      res["InstanceParameters"] = boost::any(*instanceParameters);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (workflowId) {
      res["WorkflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceParameters") != m.end() && !m["InstanceParameters"].empty()) {
      instanceParameters = make_shared<string>(boost::any_cast<string>(m["InstanceParameters"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("WorkflowId") != m.end() && !m["WorkflowId"].empty()) {
      workflowId = make_shared<long>(boost::any_cast<long>(m["WorkflowId"]));
    }
  }


  virtual ~ExecuteWorkflowRequest() = default;
};
class ExecuteWorkflowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> wfInstanceId{};

  ExecuteWorkflowResponseBodyData() {}

  explicit ExecuteWorkflowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (wfInstanceId) {
      res["WfInstanceId"] = boost::any(*wfInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WfInstanceId") != m.end() && !m["WfInstanceId"].empty()) {
      wfInstanceId = make_shared<long>(boost::any_cast<long>(m["WfInstanceId"]));
    }
  }


  virtual ~ExecuteWorkflowResponseBodyData() = default;
};
class ExecuteWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ExecuteWorkflowResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteWorkflowResponseBody() {}

  explicit ExecuteWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExecuteWorkflowResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExecuteWorkflowResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteWorkflowResponseBody() = default;
};
class ExecuteWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteWorkflowResponseBody> body{};

  ExecuteWorkflowResponse() {}

  explicit ExecuteWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecuteWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteWorkflowResponse() = default;
};
class GetJobInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  GetJobInfoRequest() {}

  explicit GetJobInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetJobInfoRequest() = default;
};
class GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo : public Darabonba::Model {
public:
  shared_ptr<string> ding{};
  shared_ptr<string> userMail{};
  shared_ptr<string> userName{};
  shared_ptr<string> userPhone{};

  GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo() {}

  explicit GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ding) {
      res["Ding"] = boost::any(*ding);
    }
    if (userMail) {
      res["UserMail"] = boost::any(*userMail);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userPhone) {
      res["UserPhone"] = boost::any(*userPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ding") != m.end() && !m["Ding"].empty()) {
      ding = make_shared<string>(boost::any_cast<string>(m["Ding"]));
    }
    if (m.find("UserMail") != m.end() && !m["UserMail"].empty()) {
      userMail = make_shared<string>(boost::any_cast<string>(m["UserMail"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserPhone") != m.end() && !m["UserPhone"].empty()) {
      userPhone = make_shared<string>(boost::any_cast<string>(m["UserPhone"]));
    }
  }


  virtual ~GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo() = default;
};
class GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig : public Darabonba::Model {
public:
  shared_ptr<bool> failEnable{};
  shared_ptr<bool> missWorkerEnable{};
  shared_ptr<string> sendChannel{};
  shared_ptr<long> timeout{};
  shared_ptr<bool> timeoutEnable{};
  shared_ptr<bool> timeoutKillEnable{};

  GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig() {}

  explicit GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failEnable) {
      res["FailEnable"] = boost::any(*failEnable);
    }
    if (missWorkerEnable) {
      res["MissWorkerEnable"] = boost::any(*missWorkerEnable);
    }
    if (sendChannel) {
      res["SendChannel"] = boost::any(*sendChannel);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutEnable) {
      res["TimeoutEnable"] = boost::any(*timeoutEnable);
    }
    if (timeoutKillEnable) {
      res["TimeoutKillEnable"] = boost::any(*timeoutKillEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailEnable") != m.end() && !m["FailEnable"].empty()) {
      failEnable = make_shared<bool>(boost::any_cast<bool>(m["FailEnable"]));
    }
    if (m.find("MissWorkerEnable") != m.end() && !m["MissWorkerEnable"].empty()) {
      missWorkerEnable = make_shared<bool>(boost::any_cast<bool>(m["MissWorkerEnable"]));
    }
    if (m.find("SendChannel") != m.end() && !m["SendChannel"].empty()) {
      sendChannel = make_shared<string>(boost::any_cast<string>(m["SendChannel"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutEnable") != m.end() && !m["TimeoutEnable"].empty()) {
      timeoutEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutEnable"]));
    }
    if (m.find("TimeoutKillEnable") != m.end() && !m["TimeoutKillEnable"].empty()) {
      timeoutKillEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutKillEnable"]));
    }
  }


  virtual ~GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig() = default;
};
class GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo>> contactInfo{};
  shared_ptr<GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig> monitorConfig{};

  GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo() {}

  explicit GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactInfo) {
      vector<boost::any> temp1;
      for(auto item1:*contactInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContactInfo"] = boost::any(temp1);
    }
    if (monitorConfig) {
      res["MonitorConfig"] = monitorConfig ? boost::any(monitorConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactInfo") != m.end() && !m["ContactInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ContactInfo"].type()) {
        vector<GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContactInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contactInfo = make_shared<vector<GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo>>(expect1);
      }
    }
    if (m.find("MonitorConfig") != m.end() && !m["MonitorConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorConfig"].type()) {
        GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorConfig"]));
        monitorConfig = make_shared<GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig>(model1);
      }
    }
  }


  virtual ~GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo() = default;
};
class GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs : public Darabonba::Model {
public:
  shared_ptr<long> consumerSize{};
  shared_ptr<long> dispatcherSize{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> queueSize{};
  shared_ptr<long> taskAttemptInterval{};
  shared_ptr<long> taskMaxAttempt{};

  GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs() {}

  explicit GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerSize) {
      res["ConsumerSize"] = boost::any(*consumerSize);
    }
    if (dispatcherSize) {
      res["DispatcherSize"] = boost::any(*dispatcherSize);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queueSize) {
      res["QueueSize"] = boost::any(*queueSize);
    }
    if (taskAttemptInterval) {
      res["TaskAttemptInterval"] = boost::any(*taskAttemptInterval);
    }
    if (taskMaxAttempt) {
      res["TaskMaxAttempt"] = boost::any(*taskMaxAttempt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerSize") != m.end() && !m["ConsumerSize"].empty()) {
      consumerSize = make_shared<long>(boost::any_cast<long>(m["ConsumerSize"]));
    }
    if (m.find("DispatcherSize") != m.end() && !m["DispatcherSize"].empty()) {
      dispatcherSize = make_shared<long>(boost::any_cast<long>(m["DispatcherSize"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueueSize") != m.end() && !m["QueueSize"].empty()) {
      queueSize = make_shared<long>(boost::any_cast<long>(m["QueueSize"]));
    }
    if (m.find("TaskAttemptInterval") != m.end() && !m["TaskAttemptInterval"].empty()) {
      taskAttemptInterval = make_shared<long>(boost::any_cast<long>(m["TaskAttemptInterval"]));
    }
    if (m.find("TaskMaxAttempt") != m.end() && !m["TaskMaxAttempt"].empty()) {
      taskMaxAttempt = make_shared<long>(boost::any_cast<long>(m["TaskMaxAttempt"]));
    }
  }


  virtual ~GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs() = default;
};
class GetJobInfoResponseBodyDataJobConfigInfoTimeConfig : public Darabonba::Model {
public:
  shared_ptr<string> calendar{};
  shared_ptr<long> dataOffset{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};

  GetJobInfoResponseBodyDataJobConfigInfoTimeConfig() {}

  explicit GetJobInfoResponseBodyDataJobConfigInfoTimeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (dataOffset) {
      res["DataOffset"] = boost::any(*dataOffset);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("DataOffset") != m.end() && !m["DataOffset"].empty()) {
      dataOffset = make_shared<long>(boost::any_cast<long>(m["DataOffset"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
  }


  virtual ~GetJobInfoResponseBodyDataJobConfigInfoTimeConfig() = default;
};
class GetJobInfoResponseBodyDataJobConfigInfo : public Darabonba::Model {
public:
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> className{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> executeMode{};
  shared_ptr<string> jarUrl{};
  shared_ptr<long> jobId{};
  shared_ptr<GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo> jobMonitorInfo{};
  shared_ptr<GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs> mapTaskXAttrs{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<string> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<string> parameters{};
  shared_ptr<long> status{};
  shared_ptr<GetJobInfoResponseBodyDataJobConfigInfoTimeConfig> timeConfig{};

  GetJobInfoResponseBodyDataJobConfigInfo() {}

  explicit GetJobInfoResponseBodyDataJobConfigInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (className) {
      res["ClassName"] = boost::any(*className);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executeMode) {
      res["ExecuteMode"] = boost::any(*executeMode);
    }
    if (jarUrl) {
      res["JarUrl"] = boost::any(*jarUrl);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobMonitorInfo) {
      res["JobMonitorInfo"] = jobMonitorInfo ? boost::any(jobMonitorInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mapTaskXAttrs) {
      res["MapTaskXAttrs"] = mapTaskXAttrs ? boost::any(mapTaskXAttrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeConfig) {
      res["TimeConfig"] = timeConfig ? boost::any(timeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("ClassName") != m.end() && !m["ClassName"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["ClassName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecuteMode") != m.end() && !m["ExecuteMode"].empty()) {
      executeMode = make_shared<string>(boost::any_cast<string>(m["ExecuteMode"]));
    }
    if (m.find("JarUrl") != m.end() && !m["JarUrl"].empty()) {
      jarUrl = make_shared<string>(boost::any_cast<string>(m["JarUrl"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobMonitorInfo") != m.end() && !m["JobMonitorInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobMonitorInfo"].type()) {
        GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobMonitorInfo"]));
        jobMonitorInfo = make_shared<GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo>(model1);
      }
    }
    if (m.find("MapTaskXAttrs") != m.end() && !m["MapTaskXAttrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["MapTaskXAttrs"].type()) {
        GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MapTaskXAttrs"]));
        mapTaskXAttrs = make_shared<GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs>(model1);
      }
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<string>(boost::any_cast<string>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeConfig") != m.end() && !m["TimeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeConfig"].type()) {
        GetJobInfoResponseBodyDataJobConfigInfoTimeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeConfig"]));
        timeConfig = make_shared<GetJobInfoResponseBodyDataJobConfigInfoTimeConfig>(model1);
      }
    }
  }


  virtual ~GetJobInfoResponseBodyDataJobConfigInfo() = default;
};
class GetJobInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetJobInfoResponseBodyDataJobConfigInfo> jobConfigInfo{};

  GetJobInfoResponseBodyData() {}

  explicit GetJobInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobConfigInfo) {
      res["JobConfigInfo"] = jobConfigInfo ? boost::any(jobConfigInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobConfigInfo") != m.end() && !m["JobConfigInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobConfigInfo"].type()) {
        GetJobInfoResponseBodyDataJobConfigInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobConfigInfo"]));
        jobConfigInfo = make_shared<GetJobInfoResponseBodyDataJobConfigInfo>(model1);
      }
    }
  }


  virtual ~GetJobInfoResponseBodyData() = default;
};
class GetJobInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetJobInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetJobInfoResponseBody() {}

  explicit GetJobInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetJobInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetJobInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetJobInfoResponseBody() = default;
};
class GetJobInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJobInfoResponseBody> body{};

  GetJobInfoResponse() {}

  explicit GetJobInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobInfoResponse() = default;
};
class GetJobInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> jobId{};
  shared_ptr<long> jobInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};

  GetJobInstanceRequest() {}

  explicit GetJobInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobInstanceId) {
      res["JobInstanceId"] = boost::any(*jobInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobInstanceId") != m.end() && !m["JobInstanceId"].empty()) {
      jobInstanceId = make_shared<long>(boost::any_cast<long>(m["JobInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
  }


  virtual ~GetJobInstanceRequest() = default;
};
class GetJobInstanceResponseBodyDataJobInstanceDetail : public Darabonba::Model {
public:
  shared_ptr<string> dataTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executor{};
  shared_ptr<long> instanceId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> progress{};
  shared_ptr<string> result{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<long> timeType{};
  shared_ptr<long> triggerType{};
  shared_ptr<string> workAddr{};

  GetJobInstanceResponseBodyDataJobInstanceDetail() {}

  explicit GetJobInstanceResponseBodyDataJobInstanceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataTime) {
      res["DataTime"] = boost::any(*dataTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executor) {
      res["Executor"] = boost::any(*executor);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (workAddr) {
      res["WorkAddr"] = boost::any(*workAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataTime") != m.end() && !m["DataTime"].empty()) {
      dataTime = make_shared<string>(boost::any_cast<string>(m["DataTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      executor = make_shared<string>(boost::any_cast<string>(m["Executor"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<long>(boost::any_cast<long>(m["TriggerType"]));
    }
    if (m.find("WorkAddr") != m.end() && !m["WorkAddr"].empty()) {
      workAddr = make_shared<string>(boost::any_cast<string>(m["WorkAddr"]));
    }
  }


  virtual ~GetJobInstanceResponseBodyDataJobInstanceDetail() = default;
};
class GetJobInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetJobInstanceResponseBodyDataJobInstanceDetail> jobInstanceDetail{};

  GetJobInstanceResponseBodyData() {}

  explicit GetJobInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInstanceDetail) {
      res["JobInstanceDetail"] = jobInstanceDetail ? boost::any(jobInstanceDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInstanceDetail") != m.end() && !m["JobInstanceDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobInstanceDetail"].type()) {
        GetJobInstanceResponseBodyDataJobInstanceDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobInstanceDetail"]));
        jobInstanceDetail = make_shared<GetJobInstanceResponseBodyDataJobInstanceDetail>(model1);
      }
    }
  }


  virtual ~GetJobInstanceResponseBodyData() = default;
};
class GetJobInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetJobInstanceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetJobInstanceResponseBody() {}

  explicit GetJobInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetJobInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetJobInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetJobInstanceResponseBody() = default;
};
class GetJobInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJobInstanceResponseBody> body{};

  GetJobInstanceResponse() {}

  explicit GetJobInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobInstanceResponse() = default;
};
class GetJobInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  GetJobInstanceListRequest() {}

  explicit GetJobInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetJobInstanceListRequest() = default;
};
class GetJobInstanceListResponseBodyDataJobInstanceDetails : public Darabonba::Model {
public:
  shared_ptr<string> dataTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executor{};
  shared_ptr<long> instanceId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> progress{};
  shared_ptr<string> result{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<long> timeType{};
  shared_ptr<long> triggerType{};
  shared_ptr<string> workAddr{};

  GetJobInstanceListResponseBodyDataJobInstanceDetails() {}

  explicit GetJobInstanceListResponseBodyDataJobInstanceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataTime) {
      res["DataTime"] = boost::any(*dataTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executor) {
      res["Executor"] = boost::any(*executor);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (workAddr) {
      res["WorkAddr"] = boost::any(*workAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataTime") != m.end() && !m["DataTime"].empty()) {
      dataTime = make_shared<string>(boost::any_cast<string>(m["DataTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      executor = make_shared<string>(boost::any_cast<string>(m["Executor"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<long>(boost::any_cast<long>(m["TriggerType"]));
    }
    if (m.find("WorkAddr") != m.end() && !m["WorkAddr"].empty()) {
      workAddr = make_shared<string>(boost::any_cast<string>(m["WorkAddr"]));
    }
  }


  virtual ~GetJobInstanceListResponseBodyDataJobInstanceDetails() = default;
};
class GetJobInstanceListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetJobInstanceListResponseBodyDataJobInstanceDetails>> jobInstanceDetails{};

  GetJobInstanceListResponseBodyData() {}

  explicit GetJobInstanceListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInstanceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*jobInstanceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobInstanceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInstanceDetails") != m.end() && !m["JobInstanceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["JobInstanceDetails"].type()) {
        vector<GetJobInstanceListResponseBodyDataJobInstanceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobInstanceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobInstanceListResponseBodyDataJobInstanceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobInstanceDetails = make_shared<vector<GetJobInstanceListResponseBodyDataJobInstanceDetails>>(expect1);
      }
    }
  }


  virtual ~GetJobInstanceListResponseBodyData() = default;
};
class GetJobInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetJobInstanceListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetJobInstanceListResponseBody() {}

  explicit GetJobInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetJobInstanceListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetJobInstanceListResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetJobInstanceListResponseBody() = default;
};
class GetJobInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJobInstanceListResponseBody> body{};

  GetJobInstanceListResponse() {}

  explicit GetJobInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobInstanceListResponse() = default;
};
class GetWorkFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<long> workflowId{};

  GetWorkFlowRequest() {}

  explicit GetWorkFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (workflowId) {
      res["WorkflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WorkflowId") != m.end() && !m["WorkflowId"].empty()) {
      workflowId = make_shared<long>(boost::any_cast<long>(m["WorkflowId"]));
    }
  }


  virtual ~GetWorkFlowRequest() = default;
};
class GetWorkFlowResponseBodyDataWorkFlowInfo : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> timeExpression{};
  shared_ptr<string> timeType{};
  shared_ptr<long> workflowId{};

  GetWorkFlowResponseBodyDataWorkFlowInfo() {}

  explicit GetWorkFlowResponseBodyDataWorkFlowInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (workflowId) {
      res["WorkflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<string>(boost::any_cast<string>(m["TimeType"]));
    }
    if (m.find("WorkflowId") != m.end() && !m["WorkflowId"].empty()) {
      workflowId = make_shared<long>(boost::any_cast<long>(m["WorkflowId"]));
    }
  }


  virtual ~GetWorkFlowResponseBodyDataWorkFlowInfo() = default;
};
class GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges : public Darabonba::Model {
public:
  shared_ptr<long> source{};
  shared_ptr<long> target{};

  GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges() {}

  explicit GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
  }


  virtual ~GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges() = default;
};
class GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> label{};
  shared_ptr<long> status{};

  GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes() {}

  explicit GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes() = default;
};
class GetWorkFlowResponseBodyDataWorkFlowNodeInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges>> edges{};
  shared_ptr<vector<GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes>> nodes{};

  GetWorkFlowResponseBodyDataWorkFlowNodeInfo() {}

  explicit GetWorkFlowResponseBodyDataWorkFlowNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edges) {
      vector<boost::any> temp1;
      for(auto item1:*edges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Edges"] = boost::any(temp1);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Edges") != m.end() && !m["Edges"].empty()) {
      if (typeid(vector<boost::any>) == m["Edges"].type()) {
        vector<GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Edges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        edges = make_shared<vector<GetWorkFlowResponseBodyDataWorkFlowNodeInfoEdges>>(expect1);
      }
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<GetWorkFlowResponseBodyDataWorkFlowNodeInfoNodes>>(expect1);
      }
    }
  }


  virtual ~GetWorkFlowResponseBodyDataWorkFlowNodeInfo() = default;
};
class GetWorkFlowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetWorkFlowResponseBodyDataWorkFlowInfo> workFlowInfo{};
  shared_ptr<GetWorkFlowResponseBodyDataWorkFlowNodeInfo> workFlowNodeInfo{};

  GetWorkFlowResponseBodyData() {}

  explicit GetWorkFlowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workFlowInfo) {
      res["WorkFlowInfo"] = workFlowInfo ? boost::any(workFlowInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workFlowNodeInfo) {
      res["WorkFlowNodeInfo"] = workFlowNodeInfo ? boost::any(workFlowNodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkFlowInfo") != m.end() && !m["WorkFlowInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkFlowInfo"].type()) {
        GetWorkFlowResponseBodyDataWorkFlowInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkFlowInfo"]));
        workFlowInfo = make_shared<GetWorkFlowResponseBodyDataWorkFlowInfo>(model1);
      }
    }
    if (m.find("WorkFlowNodeInfo") != m.end() && !m["WorkFlowNodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkFlowNodeInfo"].type()) {
        GetWorkFlowResponseBodyDataWorkFlowNodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkFlowNodeInfo"]));
        workFlowNodeInfo = make_shared<GetWorkFlowResponseBodyDataWorkFlowNodeInfo>(model1);
      }
    }
  }


  virtual ~GetWorkFlowResponseBodyData() = default;
};
class GetWorkFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetWorkFlowResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWorkFlowResponseBody() {}

  explicit GetWorkFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetWorkFlowResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWorkFlowResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetWorkFlowResponseBody() = default;
};
class GetWorkFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWorkFlowResponseBody> body{};

  GetWorkFlowResponse() {}

  explicit GetWorkFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWorkFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkFlowResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkFlowResponse() = default;
};
class GetWorkerListRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  GetWorkerListRequest() {}

  explicit GetWorkerListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetWorkerListRequest() = default;
};
class GetWorkerListResponseBodyDataWorkerInfos : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> label{};
  shared_ptr<long> port{};
  shared_ptr<string> starter{};
  shared_ptr<string> version{};
  shared_ptr<string> workerAddress{};

  GetWorkerListResponseBodyDataWorkerInfos() {}

  explicit GetWorkerListResponseBodyDataWorkerInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (starter) {
      res["Starter"] = boost::any(*starter);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (workerAddress) {
      res["WorkerAddress"] = boost::any(*workerAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Starter") != m.end() && !m["Starter"].empty()) {
      starter = make_shared<string>(boost::any_cast<string>(m["Starter"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("WorkerAddress") != m.end() && !m["WorkerAddress"].empty()) {
      workerAddress = make_shared<string>(boost::any_cast<string>(m["WorkerAddress"]));
    }
  }


  virtual ~GetWorkerListResponseBodyDataWorkerInfos() = default;
};
class GetWorkerListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetWorkerListResponseBodyDataWorkerInfos>> workerInfos{};

  GetWorkerListResponseBodyData() {}

  explicit GetWorkerListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workerInfos) {
      vector<boost::any> temp1;
      for(auto item1:*workerInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkerInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkerInfos") != m.end() && !m["WorkerInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkerInfos"].type()) {
        vector<GetWorkerListResponseBodyDataWorkerInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkerInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkerListResponseBodyDataWorkerInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workerInfos = make_shared<vector<GetWorkerListResponseBodyDataWorkerInfos>>(expect1);
      }
    }
  }


  virtual ~GetWorkerListResponseBodyData() = default;
};
class GetWorkerListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetWorkerListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWorkerListResponseBody() {}

  explicit GetWorkerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetWorkerListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWorkerListResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetWorkerListResponseBody() = default;
};
class GetWorkerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWorkerListResponseBody> body{};

  GetWorkerListResponse() {}

  explicit GetWorkerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWorkerListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkerListResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkerListResponse() = default;
};
class GrantPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> grantOption{};
  shared_ptr<string> groupId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  GrantPermissionRequest() {}

  explicit GrantPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantOption) {
      res["GrantOption"] = boost::any(*grantOption);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantOption") != m.end() && !m["GrantOption"].empty()) {
      grantOption = make_shared<bool>(boost::any_cast<bool>(m["GrantOption"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GrantPermissionRequest() = default;
};
class GrantPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GrantPermissionResponseBody() {}

  explicit GrantPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GrantPermissionResponseBody() = default;
};
class GrantPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantPermissionResponseBody> body{};

  GrantPermissionResponse() {}

  explicit GrantPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GrantPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GrantPermissionResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyDataAppGroups : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};

  ListGroupsResponseBodyDataAppGroups() {}

  explicit ListGroupsResponseBodyDataAppGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~ListGroupsResponseBodyDataAppGroups() = default;
};
class ListGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsResponseBodyDataAppGroups>> appGroups{};

  ListGroupsResponseBodyData() {}

  explicit ListGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appGroups) {
      vector<boost::any> temp1;
      for(auto item1:*appGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppGroups") != m.end() && !m["AppGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["AppGroups"].type()) {
        vector<ListGroupsResponseBodyDataAppGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsResponseBodyDataAppGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appGroups = make_shared<vector<ListGroupsResponseBodyDataAppGroups>>(expect1);
      }
    }
  }


  virtual ~ListGroupsResponseBodyData() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListGroupsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGroupsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGroupsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsResponse() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo : public Darabonba::Model {
public:
  shared_ptr<string> ding{};
  shared_ptr<string> userMail{};
  shared_ptr<string> userName{};
  shared_ptr<string> userPhone{};

  ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo() {}

  explicit ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ding) {
      res["Ding"] = boost::any(*ding);
    }
    if (userMail) {
      res["UserMail"] = boost::any(*userMail);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userPhone) {
      res["UserPhone"] = boost::any(*userPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ding") != m.end() && !m["Ding"].empty()) {
      ding = make_shared<string>(boost::any_cast<string>(m["Ding"]));
    }
    if (m.find("UserMail") != m.end() && !m["UserMail"].empty()) {
      userMail = make_shared<string>(boost::any_cast<string>(m["UserMail"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserPhone") != m.end() && !m["UserPhone"].empty()) {
      userPhone = make_shared<string>(boost::any_cast<string>(m["UserPhone"]));
    }
  }


  virtual ~ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo() = default;
};
class ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig : public Darabonba::Model {
public:
  shared_ptr<bool> failEnable{};
  shared_ptr<bool> missWorkerEnable{};
  shared_ptr<string> sendChannel{};
  shared_ptr<long> timeout{};
  shared_ptr<bool> timeoutEnable{};
  shared_ptr<bool> timeoutKillEnable{};

  ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig() {}

  explicit ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failEnable) {
      res["FailEnable"] = boost::any(*failEnable);
    }
    if (missWorkerEnable) {
      res["MissWorkerEnable"] = boost::any(*missWorkerEnable);
    }
    if (sendChannel) {
      res["SendChannel"] = boost::any(*sendChannel);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutEnable) {
      res["TimeoutEnable"] = boost::any(*timeoutEnable);
    }
    if (timeoutKillEnable) {
      res["TimeoutKillEnable"] = boost::any(*timeoutKillEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailEnable") != m.end() && !m["FailEnable"].empty()) {
      failEnable = make_shared<bool>(boost::any_cast<bool>(m["FailEnable"]));
    }
    if (m.find("MissWorkerEnable") != m.end() && !m["MissWorkerEnable"].empty()) {
      missWorkerEnable = make_shared<bool>(boost::any_cast<bool>(m["MissWorkerEnable"]));
    }
    if (m.find("SendChannel") != m.end() && !m["SendChannel"].empty()) {
      sendChannel = make_shared<string>(boost::any_cast<string>(m["SendChannel"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutEnable") != m.end() && !m["TimeoutEnable"].empty()) {
      timeoutEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutEnable"]));
    }
    if (m.find("TimeoutKillEnable") != m.end() && !m["TimeoutKillEnable"].empty()) {
      timeoutKillEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutKillEnable"]));
    }
  }


  virtual ~ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig() = default;
};
class ListJobsResponseBodyDataJobsJobMonitorInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo>> contactInfo{};
  shared_ptr<ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig> monitorConfig{};

  ListJobsResponseBodyDataJobsJobMonitorInfo() {}

  explicit ListJobsResponseBodyDataJobsJobMonitorInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactInfo) {
      vector<boost::any> temp1;
      for(auto item1:*contactInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContactInfo"] = boost::any(temp1);
    }
    if (monitorConfig) {
      res["MonitorConfig"] = monitorConfig ? boost::any(monitorConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactInfo") != m.end() && !m["ContactInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ContactInfo"].type()) {
        vector<ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContactInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contactInfo = make_shared<vector<ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo>>(expect1);
      }
    }
    if (m.find("MonitorConfig") != m.end() && !m["MonitorConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorConfig"].type()) {
        ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorConfig"]));
        monitorConfig = make_shared<ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig>(model1);
      }
    }
  }


  virtual ~ListJobsResponseBodyDataJobsJobMonitorInfo() = default;
};
class ListJobsResponseBodyDataJobsMapTaskXAttrs : public Darabonba::Model {
public:
  shared_ptr<long> consumerSize{};
  shared_ptr<long> dispatcherSize{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> queueSize{};
  shared_ptr<long> taskAttemptInterval{};
  shared_ptr<long> taskMaxAttempt{};

  ListJobsResponseBodyDataJobsMapTaskXAttrs() {}

  explicit ListJobsResponseBodyDataJobsMapTaskXAttrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerSize) {
      res["ConsumerSize"] = boost::any(*consumerSize);
    }
    if (dispatcherSize) {
      res["DispatcherSize"] = boost::any(*dispatcherSize);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queueSize) {
      res["QueueSize"] = boost::any(*queueSize);
    }
    if (taskAttemptInterval) {
      res["TaskAttemptInterval"] = boost::any(*taskAttemptInterval);
    }
    if (taskMaxAttempt) {
      res["TaskMaxAttempt"] = boost::any(*taskMaxAttempt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerSize") != m.end() && !m["ConsumerSize"].empty()) {
      consumerSize = make_shared<long>(boost::any_cast<long>(m["ConsumerSize"]));
    }
    if (m.find("DispatcherSize") != m.end() && !m["DispatcherSize"].empty()) {
      dispatcherSize = make_shared<long>(boost::any_cast<long>(m["DispatcherSize"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueueSize") != m.end() && !m["QueueSize"].empty()) {
      queueSize = make_shared<long>(boost::any_cast<long>(m["QueueSize"]));
    }
    if (m.find("TaskAttemptInterval") != m.end() && !m["TaskAttemptInterval"].empty()) {
      taskAttemptInterval = make_shared<long>(boost::any_cast<long>(m["TaskAttemptInterval"]));
    }
    if (m.find("TaskMaxAttempt") != m.end() && !m["TaskMaxAttempt"].empty()) {
      taskMaxAttempt = make_shared<long>(boost::any_cast<long>(m["TaskMaxAttempt"]));
    }
  }


  virtual ~ListJobsResponseBodyDataJobsMapTaskXAttrs() = default;
};
class ListJobsResponseBodyDataJobsTimeConfig : public Darabonba::Model {
public:
  shared_ptr<string> calendar{};
  shared_ptr<long> dataOffset{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};

  ListJobsResponseBodyDataJobsTimeConfig() {}

  explicit ListJobsResponseBodyDataJobsTimeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (dataOffset) {
      res["DataOffset"] = boost::any(*dataOffset);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("DataOffset") != m.end() && !m["DataOffset"].empty()) {
      dataOffset = make_shared<long>(boost::any_cast<long>(m["DataOffset"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
  }


  virtual ~ListJobsResponseBodyDataJobsTimeConfig() = default;
};
class ListJobsResponseBodyDataJobs : public Darabonba::Model {
public:
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> className{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> executeMode{};
  shared_ptr<string> jarUrl{};
  shared_ptr<long> jobId{};
  shared_ptr<ListJobsResponseBodyDataJobsJobMonitorInfo> jobMonitorInfo{};
  shared_ptr<ListJobsResponseBodyDataJobsMapTaskXAttrs> mapTaskXAttrs{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<string> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<string> parameters{};
  shared_ptr<long> status{};
  shared_ptr<ListJobsResponseBodyDataJobsTimeConfig> timeConfig{};

  ListJobsResponseBodyDataJobs() {}

  explicit ListJobsResponseBodyDataJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (className) {
      res["ClassName"] = boost::any(*className);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executeMode) {
      res["ExecuteMode"] = boost::any(*executeMode);
    }
    if (jarUrl) {
      res["JarUrl"] = boost::any(*jarUrl);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobMonitorInfo) {
      res["JobMonitorInfo"] = jobMonitorInfo ? boost::any(jobMonitorInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mapTaskXAttrs) {
      res["MapTaskXAttrs"] = mapTaskXAttrs ? boost::any(mapTaskXAttrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeConfig) {
      res["TimeConfig"] = timeConfig ? boost::any(timeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("ClassName") != m.end() && !m["ClassName"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["ClassName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecuteMode") != m.end() && !m["ExecuteMode"].empty()) {
      executeMode = make_shared<string>(boost::any_cast<string>(m["ExecuteMode"]));
    }
    if (m.find("JarUrl") != m.end() && !m["JarUrl"].empty()) {
      jarUrl = make_shared<string>(boost::any_cast<string>(m["JarUrl"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobMonitorInfo") != m.end() && !m["JobMonitorInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobMonitorInfo"].type()) {
        ListJobsResponseBodyDataJobsJobMonitorInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobMonitorInfo"]));
        jobMonitorInfo = make_shared<ListJobsResponseBodyDataJobsJobMonitorInfo>(model1);
      }
    }
    if (m.find("MapTaskXAttrs") != m.end() && !m["MapTaskXAttrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["MapTaskXAttrs"].type()) {
        ListJobsResponseBodyDataJobsMapTaskXAttrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MapTaskXAttrs"]));
        mapTaskXAttrs = make_shared<ListJobsResponseBodyDataJobsMapTaskXAttrs>(model1);
      }
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<string>(boost::any_cast<string>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeConfig") != m.end() && !m["TimeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeConfig"].type()) {
        ListJobsResponseBodyDataJobsTimeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeConfig"]));
        timeConfig = make_shared<ListJobsResponseBodyDataJobsTimeConfig>(model1);
      }
    }
  }


  virtual ~ListJobsResponseBodyDataJobs() = default;
};
class ListJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobsResponseBodyDataJobs>> jobs{};

  ListJobsResponseBodyData() {}

  explicit ListJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<ListJobsResponseBodyDataJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyDataJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListJobsResponseBodyDataJobs>>(expect1);
      }
    }
  }


  virtual ~ListJobsResponseBodyData() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListJobsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListJobsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListJobsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListJobsResponseBody() = default;
};
class ListJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobsResponse() = default;
};
class ListNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListNamespacesRequest() {}

  explicit ListNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNamespacesRequest() = default;
};
class ListNamespacesResponseBodyDataNamespaces : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> UId{};

  ListNamespacesResponseBodyDataNamespaces() {}

  explicit ListNamespacesResponseBodyDataNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (UId) {
      res["UId"] = boost::any(*UId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UId") != m.end() && !m["UId"].empty()) {
      UId = make_shared<string>(boost::any_cast<string>(m["UId"]));
    }
  }


  virtual ~ListNamespacesResponseBodyDataNamespaces() = default;
};
class ListNamespacesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListNamespacesResponseBodyDataNamespaces>> namespaces{};

  ListNamespacesResponseBodyData() {}

  explicit ListNamespacesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaces) {
      vector<boost::any> temp1;
      for(auto item1:*namespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Namespaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<ListNamespacesResponseBodyDataNamespaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Namespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNamespacesResponseBodyDataNamespaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaces = make_shared<vector<ListNamespacesResponseBodyDataNamespaces>>(expect1);
      }
    }
  }


  virtual ~ListNamespacesResponseBodyData() = default;
};
class ListNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListNamespacesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListNamespacesResponseBody() {}

  explicit ListNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListNamespacesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListNamespacesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListNamespacesResponseBody() = default;
};
class ListNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNamespacesResponseBody> body{};

  ListNamespacesResponse() {}

  explicit ListNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNamespacesResponse() = default;
};
class RevokePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};

  RevokePermissionRequest() {}

  explicit RevokePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~RevokePermissionRequest() = default;
};
class RevokePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RevokePermissionResponseBody() {}

  explicit RevokePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RevokePermissionResponseBody() = default;
};
class RevokePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevokePermissionResponseBody> body{};

  RevokePermissionResponse() {}

  explicit RevokePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RevokePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~RevokePermissionResponse() = default;
};
class StopInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> instanceId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<string> regionId{};

  StopInstanceRequest() {}

  explicit StopInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopInstanceRequest() = default;
};
class StopInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopInstanceResponseBody() {}

  explicit StopInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopInstanceResponseBody() = default;
};
class StopInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopInstanceResponseBody> body{};

  StopInstanceResponse() {}

  explicit StopInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopInstanceResponse() = default;
};
class UpdateJobRequestContactInfo : public Darabonba::Model {
public:
  shared_ptr<string> ding{};
  shared_ptr<string> userMail{};
  shared_ptr<string> userName{};
  shared_ptr<string> userPhone{};

  UpdateJobRequestContactInfo() {}

  explicit UpdateJobRequestContactInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ding) {
      res["Ding"] = boost::any(*ding);
    }
    if (userMail) {
      res["UserMail"] = boost::any(*userMail);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userPhone) {
      res["UserPhone"] = boost::any(*userPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ding") != m.end() && !m["Ding"].empty()) {
      ding = make_shared<string>(boost::any_cast<string>(m["Ding"]));
    }
    if (m.find("UserMail") != m.end() && !m["UserMail"].empty()) {
      userMail = make_shared<string>(boost::any_cast<string>(m["UserMail"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserPhone") != m.end() && !m["UserPhone"].empty()) {
      userPhone = make_shared<string>(boost::any_cast<string>(m["UserPhone"]));
    }
  }


  virtual ~UpdateJobRequestContactInfo() = default;
};
class UpdateJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> calendar{};
  shared_ptr<string> className{};
  shared_ptr<long> consumerSize{};
  shared_ptr<vector<UpdateJobRequestContactInfo>> contactInfo{};
  shared_ptr<string> content{};
  shared_ptr<long> dataOffset{};
  shared_ptr<string> description{};
  shared_ptr<long> dispatcherSize{};
  shared_ptr<string> executeMode{};
  shared_ptr<bool> failEnable{};
  shared_ptr<string> groupId{};
  shared_ptr<string> jarUrl{};
  shared_ptr<long> jobId{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<bool> missWorkerEnable{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceSource{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parameters{};
  shared_ptr<long> queueSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sendChannel{};
  shared_ptr<long> taskAttemptInterval{};
  shared_ptr<long> taskMaxAttempt{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<long> timeout{};
  shared_ptr<bool> timeoutEnable{};
  shared_ptr<bool> timeoutKillEnable{};

  UpdateJobRequest() {}

  explicit UpdateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (className) {
      res["ClassName"] = boost::any(*className);
    }
    if (consumerSize) {
      res["ConsumerSize"] = boost::any(*consumerSize);
    }
    if (contactInfo) {
      vector<boost::any> temp1;
      for(auto item1:*contactInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContactInfo"] = boost::any(temp1);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataOffset) {
      res["DataOffset"] = boost::any(*dataOffset);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dispatcherSize) {
      res["DispatcherSize"] = boost::any(*dispatcherSize);
    }
    if (executeMode) {
      res["ExecuteMode"] = boost::any(*executeMode);
    }
    if (failEnable) {
      res["FailEnable"] = boost::any(*failEnable);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (jarUrl) {
      res["JarUrl"] = boost::any(*jarUrl);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (missWorkerEnable) {
      res["MissWorkerEnable"] = boost::any(*missWorkerEnable);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceSource) {
      res["NamespaceSource"] = boost::any(*namespaceSource);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (queueSize) {
      res["QueueSize"] = boost::any(*queueSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sendChannel) {
      res["SendChannel"] = boost::any(*sendChannel);
    }
    if (taskAttemptInterval) {
      res["TaskAttemptInterval"] = boost::any(*taskAttemptInterval);
    }
    if (taskMaxAttempt) {
      res["TaskMaxAttempt"] = boost::any(*taskMaxAttempt);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutEnable) {
      res["TimeoutEnable"] = boost::any(*timeoutEnable);
    }
    if (timeoutKillEnable) {
      res["TimeoutKillEnable"] = boost::any(*timeoutKillEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("ClassName") != m.end() && !m["ClassName"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["ClassName"]));
    }
    if (m.find("ConsumerSize") != m.end() && !m["ConsumerSize"].empty()) {
      consumerSize = make_shared<long>(boost::any_cast<long>(m["ConsumerSize"]));
    }
    if (m.find("ContactInfo") != m.end() && !m["ContactInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ContactInfo"].type()) {
        vector<UpdateJobRequestContactInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContactInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateJobRequestContactInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contactInfo = make_shared<vector<UpdateJobRequestContactInfo>>(expect1);
      }
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataOffset") != m.end() && !m["DataOffset"].empty()) {
      dataOffset = make_shared<long>(boost::any_cast<long>(m["DataOffset"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DispatcherSize") != m.end() && !m["DispatcherSize"].empty()) {
      dispatcherSize = make_shared<long>(boost::any_cast<long>(m["DispatcherSize"]));
    }
    if (m.find("ExecuteMode") != m.end() && !m["ExecuteMode"].empty()) {
      executeMode = make_shared<string>(boost::any_cast<string>(m["ExecuteMode"]));
    }
    if (m.find("FailEnable") != m.end() && !m["FailEnable"].empty()) {
      failEnable = make_shared<bool>(boost::any_cast<bool>(m["FailEnable"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JarUrl") != m.end() && !m["JarUrl"].empty()) {
      jarUrl = make_shared<string>(boost::any_cast<string>(m["JarUrl"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("MissWorkerEnable") != m.end() && !m["MissWorkerEnable"].empty()) {
      missWorkerEnable = make_shared<bool>(boost::any_cast<bool>(m["MissWorkerEnable"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceSource") != m.end() && !m["NamespaceSource"].empty()) {
      namespaceSource = make_shared<string>(boost::any_cast<string>(m["NamespaceSource"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("QueueSize") != m.end() && !m["QueueSize"].empty()) {
      queueSize = make_shared<long>(boost::any_cast<long>(m["QueueSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SendChannel") != m.end() && !m["SendChannel"].empty()) {
      sendChannel = make_shared<string>(boost::any_cast<string>(m["SendChannel"]));
    }
    if (m.find("TaskAttemptInterval") != m.end() && !m["TaskAttemptInterval"].empty()) {
      taskAttemptInterval = make_shared<long>(boost::any_cast<long>(m["TaskAttemptInterval"]));
    }
    if (m.find("TaskMaxAttempt") != m.end() && !m["TaskMaxAttempt"].empty()) {
      taskMaxAttempt = make_shared<long>(boost::any_cast<long>(m["TaskMaxAttempt"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutEnable") != m.end() && !m["TimeoutEnable"].empty()) {
      timeoutEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutEnable"]));
    }
    if (m.find("TimeoutKillEnable") != m.end() && !m["TimeoutKillEnable"].empty()) {
      timeoutKillEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutKillEnable"]));
    }
  }


  virtual ~UpdateJobRequest() = default;
};
class UpdateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateJobResponseBody() {}

  explicit UpdateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateJobResponseBody() = default;
};
class UpdateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateJobResponseBody> body{};

  UpdateJobResponse() {}

  explicit UpdateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateJobResponse() = default;
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
  BatchDeleteJobsResponse batchDeleteJobsWithOptions(shared_ptr<BatchDeleteJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteJobsResponse batchDeleteJobs(shared_ptr<BatchDeleteJobsRequest> request);
  BatchDisableJobsResponse batchDisableJobsWithOptions(shared_ptr<BatchDisableJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDisableJobsResponse batchDisableJobs(shared_ptr<BatchDisableJobsRequest> request);
  BatchEnableJobsResponse batchEnableJobsWithOptions(shared_ptr<BatchEnableJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchEnableJobsResponse batchEnableJobs(shared_ptr<BatchEnableJobsRequest> request);
  CreateAppGroupResponse createAppGroupWithOptions(shared_ptr<CreateAppGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppGroupResponse createAppGroup(shared_ptr<CreateAppGroupRequest> request);
  CreateJobResponse createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<CreateJobRequest> request);
  CreateNamespaceResponse createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNamespaceResponse createNamespace(shared_ptr<CreateNamespaceRequest> request);
  DeleteJobResponse deleteJobWithOptions(shared_ptr<DeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobResponse deleteJob(shared_ptr<DeleteJobRequest> request);
  DeleteWorkflowResponse deleteWorkflowWithOptions(shared_ptr<DeleteWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkflowResponse deleteWorkflow(shared_ptr<DeleteWorkflowRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DesignateWorkersResponse designateWorkersWithOptions(shared_ptr<DesignateWorkersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DesignateWorkersResponse designateWorkers(shared_ptr<DesignateWorkersRequest> request);
  DisableJobResponse disableJobWithOptions(shared_ptr<DisableJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableJobResponse disableJob(shared_ptr<DisableJobRequest> request);
  DisableWorkflowResponse disableWorkflowWithOptions(shared_ptr<DisableWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableWorkflowResponse disableWorkflow(shared_ptr<DisableWorkflowRequest> request);
  EnableJobResponse enableJobWithOptions(shared_ptr<EnableJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableJobResponse enableJob(shared_ptr<EnableJobRequest> request);
  EnableWorkflowResponse enableWorkflowWithOptions(shared_ptr<EnableWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableWorkflowResponse enableWorkflow(shared_ptr<EnableWorkflowRequest> request);
  ExecuteJobResponse executeJobWithOptions(shared_ptr<ExecuteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteJobResponse executeJob(shared_ptr<ExecuteJobRequest> request);
  ExecuteWorkflowResponse executeWorkflowWithOptions(shared_ptr<ExecuteWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteWorkflowResponse executeWorkflow(shared_ptr<ExecuteWorkflowRequest> request);
  GetJobInfoResponse getJobInfoWithOptions(shared_ptr<GetJobInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobInfoResponse getJobInfo(shared_ptr<GetJobInfoRequest> request);
  GetJobInstanceResponse getJobInstanceWithOptions(shared_ptr<GetJobInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobInstanceResponse getJobInstance(shared_ptr<GetJobInstanceRequest> request);
  GetJobInstanceListResponse getJobInstanceListWithOptions(shared_ptr<GetJobInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobInstanceListResponse getJobInstanceList(shared_ptr<GetJobInstanceListRequest> request);
  GetWorkFlowResponse getWorkFlowWithOptions(shared_ptr<GetWorkFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkFlowResponse getWorkFlow(shared_ptr<GetWorkFlowRequest> request);
  GetWorkerListResponse getWorkerListWithOptions(shared_ptr<GetWorkerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkerListResponse getWorkerList(shared_ptr<GetWorkerListRequest> request);
  GrantPermissionResponse grantPermissionWithOptions(shared_ptr<GrantPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantPermissionResponse grantPermission(shared_ptr<GrantPermissionRequest> request);
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  ListNamespacesResponse listNamespacesWithOptions(shared_ptr<ListNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNamespacesResponse listNamespaces(shared_ptr<ListNamespacesRequest> request);
  RevokePermissionResponse revokePermissionWithOptions(shared_ptr<RevokePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokePermissionResponse revokePermission(shared_ptr<RevokePermissionRequest> request);
  StopInstanceResponse stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInstanceResponse stopInstance(shared_ptr<StopInstanceRequest> request);
  UpdateJobResponse updateJobWithOptions(shared_ptr<UpdateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateJobResponse updateJob(shared_ptr<UpdateJobRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Schedulerx220190430

#endif
