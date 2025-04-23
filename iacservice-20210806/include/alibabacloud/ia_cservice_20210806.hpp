// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IACSERVICE20210806_H_
#define ALIBABACLOUD_IACSERVICE20210806_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_IaCService20210806 {
class JobStatusDetailValue : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> jobResult{};
  shared_ptr<string> timeStamps{};

  JobStatusDetailValue() {}

  explicit JobStatusDetailValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (jobResult) {
      res["jobResult"] = boost::any(*jobResult);
    }
    if (timeStamps) {
      res["timeStamps"] = boost::any(*timeStamps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("jobResult") != m.end() && !m["jobResult"].empty()) {
      jobResult = make_shared<string>(boost::any_cast<string>(m["jobResult"]));
    }
    if (m.find("timeStamps") != m.end() && !m["timeStamps"].empty()) {
      timeStamps = make_shared<string>(boost::any_cast<string>(m["timeStamps"]));
    }
  }


  virtual ~JobStatusDetailValue() = default;
};
class JobsStatusDetailValue : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> jobResult{};
  shared_ptr<string> timeStamps{};

  JobsStatusDetailValue() {}

  explicit JobsStatusDetailValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (jobResult) {
      res["jobResult"] = boost::any(*jobResult);
    }
    if (timeStamps) {
      res["timeStamps"] = boost::any(*timeStamps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("jobResult") != m.end() && !m["jobResult"].empty()) {
      jobResult = make_shared<string>(boost::any_cast<string>(m["jobResult"]));
    }
    if (m.find("timeStamps") != m.end() && !m["timeStamps"].empty()) {
      timeStamps = make_shared<string>(boost::any_cast<string>(m["timeStamps"]));
    }
  }


  virtual ~JobsStatusDetailValue() = default;
};
class AssociateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  AssociateGroupRequest() {}

  explicit AssociateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~AssociateGroupRequest() = default;
};
class AssociateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateGroupResponseBody() {}

  explicit AssociateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AssociateGroupResponseBody() = default;
};
class AssociateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateGroupResponseBody> body{};

  AssociateGroupResponse() {}

  explicit AssociateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateGroupResponse() = default;
};
class AssociateParameterSetRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> parameterSetIds{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  AssociateParameterSetRequest() {}

  explicit AssociateParameterSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterSetIds) {
      res["parameterSetIds"] = boost::any(*parameterSetIds);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameterSetIds") != m.end() && !m["parameterSetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["parameterSetIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["parameterSetIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parameterSetIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~AssociateParameterSetRequest() = default;
};
class AssociateParameterSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateParameterSetResponseBody() {}

  explicit AssociateParameterSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AssociateParameterSetResponseBody() = default;
};
class AssociateParameterSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateParameterSetResponseBody> body{};

  AssociateParameterSetResponse() {}

  explicit AssociateParameterSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateParameterSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateParameterSetResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateParameterSetResponse() = default;
};
class AttachRabbitmqPublisherRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  AttachRabbitmqPublisherRequest() {}

  explicit AttachRabbitmqPublisherRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~AttachRabbitmqPublisherRequest() = default;
};
class AttachRabbitmqPublisherResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachRabbitmqPublisherResponseBody() {}

  explicit AttachRabbitmqPublisherResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AttachRabbitmqPublisherResponseBody() = default;
};
class AttachRabbitmqPublisherResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachRabbitmqPublisherResponseBody> body{};

  AttachRabbitmqPublisherResponse() {}

  explicit AttachRabbitmqPublisherResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachRabbitmqPublisherResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachRabbitmqPublisherResponseBody>(model1);
      }
    }
  }


  virtual ~AttachRabbitmqPublisherResponse() = default;
};
class CancelProjectBuildResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelProjectBuildResponseBody() {}

  explicit CancelProjectBuildResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CancelProjectBuildResponseBody() = default;
};
class CancelProjectBuildResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelProjectBuildResponseBody> body{};

  CancelProjectBuildResponse() {}

  explicit CancelProjectBuildResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelProjectBuildResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelProjectBuildResponseBody>(model1);
      }
    }
  }


  virtual ~CancelProjectBuildResponse() = default;
};
class CancelRamPolicyExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelRamPolicyExportTaskResponseBody() {}

  explicit CancelRamPolicyExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CancelRamPolicyExportTaskResponseBody() = default;
};
class CancelRamPolicyExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelRamPolicyExportTaskResponseBody> body{};

  CancelRamPolicyExportTaskResponse() {}

  explicit CancelRamPolicyExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelRamPolicyExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelRamPolicyExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelRamPolicyExportTaskResponse() = default;
};
class CancelResourceExportTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ramRole{};

  CancelResourceExportTaskRequest() {}

  explicit CancelResourceExportTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
  }


  virtual ~CancelResourceExportTaskRequest() = default;
};
class CancelResourceExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> requestId{};

  CancelResourceExportTaskResponseBody() {}

  explicit CancelResourceExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CancelResourceExportTaskResponseBody() = default;
};
class CancelResourceExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelResourceExportTaskResponseBody> body{};

  CancelResourceExportTaskResponse() {}

  explicit CancelResourceExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelResourceExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelResourceExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelResourceExportTaskResponse() = default;
};
class CheckResourceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> parentId{};
  shared_ptr<string> resourceType{};

  CheckResourceNameRequest() {}

  explicit CheckResourceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~CheckResourceNameRequest() = default;
};
class CheckResourceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CheckResourceNameResponseBody() {}

  explicit CheckResourceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~CheckResourceNameResponseBody() = default;
};
class CheckResourceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckResourceNameResponseBody> body{};

  CheckResourceNameResponse() {}

  explicit CheckResourceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckResourceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckResourceNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckResourceNameResponse() = default;
};
class CloneGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<string>> resourceTypes{};

  CloneGroupRequest() {}

  explicit CloneGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (resourceTypes) {
      res["resourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("resourceTypes") != m.end() && !m["resourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CloneGroupRequest() = default;
};
class CloneGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CloneGroupResponseBody() {}

  explicit CloneGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CloneGroupResponseBody() = default;
};
class CloneGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneGroupResponseBody> body{};

  CloneGroupResponse() {}

  explicit CloneGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CloneGroupResponse() = default;
};
class CloneModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleSource{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};

  CloneModuleRequest() {}

  explicit CloneModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleSource) {
      res["moduleSource"] = boost::any(*moduleSource);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleSource") != m.end() && !m["moduleSource"].empty()) {
      moduleSource = make_shared<string>(boost::any_cast<string>(m["moduleSource"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CloneModuleRequest() = default;
};
class CloneModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> moduleId{};
  shared_ptr<string> requestId{};

  CloneModuleResponseBody() {}

  explicit CloneModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CloneModuleResponseBody() = default;
};
class CloneModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneModuleResponseBody> body{};

  CloneModuleResponse() {}

  explicit CloneModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneModuleResponseBody>(model1);
      }
    }
  }


  virtual ~CloneModuleResponse() = default;
};
class CreateAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dueTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<long> uid{};

  CreateAuthorizationRequest() {}

  explicit CreateAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (dueTime) {
      res["dueTime"] = boost::any(*dueTime);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("dueTime") != m.end() && !m["dueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["dueTime"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~CreateAuthorizationRequest() = default;
};
class CreateAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationId{};
  shared_ptr<string> requestId{};

  CreateAuthorizationResponseBody() {}

  explicit CreateAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationId) {
      res["authorizationId"] = boost::any(*authorizationId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizationId") != m.end() && !m["authorizationId"].empty()) {
      authorizationId = make_shared<string>(boost::any_cast<string>(m["authorizationId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateAuthorizationResponseBody() = default;
};
class CreateAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAuthorizationResponseBody> body{};

  CreateAuthorizationResponse() {}

  explicit CreateAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuthorizationResponse() = default;
};
class CreateExplorerTaskRequest : public Darabonba::Model {
public:
  shared_ptr<bool> initModuleState{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<bool> autoApply{};
  shared_ptr<bool> autoDestroy{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<bool> skipPropertyValidation{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> triggerValue{};

  CreateExplorerTaskRequest() {}

  explicit CreateExplorerTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initModuleState) {
      res["InitModuleState"] = boost::any(*initModuleState);
    }
    if (terraformVersion) {
      res["TerraformVersion"] = boost::any(*terraformVersion);
    }
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (skipPropertyValidation) {
      res["skipPropertyValidation"] = boost::any(*skipPropertyValidation);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitModuleState") != m.end() && !m["InitModuleState"].empty()) {
      initModuleState = make_shared<bool>(boost::any_cast<bool>(m["InitModuleState"]));
    }
    if (m.find("TerraformVersion") != m.end() && !m["TerraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["TerraformVersion"]));
    }
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("skipPropertyValidation") != m.end() && !m["skipPropertyValidation"].empty()) {
      skipPropertyValidation = make_shared<bool>(boost::any_cast<bool>(m["skipPropertyValidation"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
  }


  virtual ~CreateExplorerTaskRequest() = default;
};
class CreateExplorerTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> explorerTaskId{};
  shared_ptr<string> requestId{};

  CreateExplorerTaskResponseBody() {}

  explicit CreateExplorerTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (explorerTaskId) {
      res["explorerTaskId"] = boost::any(*explorerTaskId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("explorerTaskId") != m.end() && !m["explorerTaskId"].empty()) {
      explorerTaskId = make_shared<string>(boost::any_cast<string>(m["explorerTaskId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateExplorerTaskResponseBody() = default;
};
class CreateExplorerTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExplorerTaskResponseBody> body{};

  CreateExplorerTaskResponse() {}

  explicit CreateExplorerTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExplorerTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExplorerTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExplorerTaskResponse() = default;
};
class CreateGroupRequestNotifyConfig : public Darabonba::Model {
public:
  shared_ptr<string> notifyPath{};
  shared_ptr<string> notifyType{};

  CreateGroupRequestNotifyConfig() {}

  explicit CreateGroupRequestNotifyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyPath) {
      res["notifyPath"] = boost::any(*notifyPath);
    }
    if (notifyType) {
      res["notifyType"] = boost::any(*notifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("notifyPath") != m.end() && !m["notifyPath"].empty()) {
      notifyPath = make_shared<string>(boost::any_cast<string>(m["notifyPath"]));
    }
    if (m.find("notifyType") != m.end() && !m["notifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["notifyType"]));
    }
  }


  virtual ~CreateGroupRequestNotifyConfig() = default;
};
class CreateGroupRequestTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> triggerStrategy{};
  shared_ptr<string> triggerValue{};

  CreateGroupRequestTriggerConfig() {}

  explicit CreateGroupRequestTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
  }


  virtual ~CreateGroupRequestTriggerConfig() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoDestroy{};
  shared_ptr<bool> autoTrigger{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> forcedSetting{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateGroupRequestNotifyConfig>> notifyConfig{};
  shared_ptr<vector<string>> notifyOperationTypes{};
  shared_ptr<string> projectId{};
  shared_ptr<string> ramRole{};
  shared_ptr<vector<string>> reportExportField{};
  shared_ptr<string> reportExportPath{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<vector<CreateGroupRequestTriggerConfig>> triggerConfig{};
  shared_ptr<vector<string>> triggerResourceType{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (autoTrigger) {
      res["autoTrigger"] = boost::any(*autoTrigger);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (forcedSetting) {
      res["forcedSetting"] = boost::any(*forcedSetting);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (notifyConfig) {
      vector<boost::any> temp1;
      for(auto item1:*notifyConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyConfig"] = boost::any(temp1);
    }
    if (notifyOperationTypes) {
      res["notifyOperationTypes"] = boost::any(*notifyOperationTypes);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (reportExportField) {
      res["reportExportField"] = boost::any(*reportExportField);
    }
    if (reportExportPath) {
      res["reportExportPath"] = boost::any(*reportExportPath);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (triggerConfig) {
      vector<boost::any> temp1;
      for(auto item1:*triggerConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["triggerConfig"] = boost::any(temp1);
    }
    if (triggerResourceType) {
      res["triggerResourceType"] = boost::any(*triggerResourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("autoTrigger") != m.end() && !m["autoTrigger"].empty()) {
      autoTrigger = make_shared<bool>(boost::any_cast<bool>(m["autoTrigger"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("forcedSetting") != m.end() && !m["forcedSetting"].empty()) {
      forcedSetting = make_shared<bool>(boost::any_cast<bool>(m["forcedSetting"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("notifyConfig") != m.end() && !m["notifyConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyConfig"].type()) {
        vector<CreateGroupRequestNotifyConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateGroupRequestNotifyConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyConfig = make_shared<vector<CreateGroupRequestNotifyConfig>>(expect1);
      }
    }
    if (m.find("notifyOperationTypes") != m.end() && !m["notifyOperationTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["notifyOperationTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["notifyOperationTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyOperationTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("reportExportField") != m.end() && !m["reportExportField"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["reportExportField"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["reportExportField"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reportExportField = make_shared<vector<string>>(toVec1);
    }
    if (m.find("reportExportPath") != m.end() && !m["reportExportPath"].empty()) {
      reportExportPath = make_shared<string>(boost::any_cast<string>(m["reportExportPath"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["triggerConfig"].type()) {
        vector<CreateGroupRequestTriggerConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["triggerConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateGroupRequestTriggerConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        triggerConfig = make_shared<vector<CreateGroupRequestTriggerConfig>>(expect1);
      }
    }
    if (m.find("triggerResourceType") != m.end() && !m["triggerResourceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["triggerResourceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["triggerResourceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      triggerResourceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> requestId{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class CreateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executeType{};
  shared_ptr<string> subCommand{};
  shared_ptr<string> taskType{};

  CreateJobRequest() {}

  explicit CreateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (executeType) {
      res["executeType"] = boost::any(*executeType);
    }
    if (subCommand) {
      res["subCommand"] = boost::any(*subCommand);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("executeType") != m.end() && !m["executeType"].empty()) {
      executeType = make_shared<string>(boost::any_cast<string>(m["executeType"]));
    }
    if (m.find("subCommand") != m.end() && !m["subCommand"].empty()) {
      subCommand = make_shared<string>(boost::any_cast<string>(m["subCommand"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~CreateJobRequest() = default;
};
class CreateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CreateJobResponseBody() {}

  explicit CreateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateJobResponseBody() = default;
};
class CreateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateJobResponseBody> body{};

  CreateJobResponse() {}

  explicit CreateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobResponse() = default;
};
class CreateModuleRequestGroupInfo : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> projectId{};

  CreateModuleRequestGroupInfo() {}

  explicit CreateModuleRequestGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~CreateModuleRequestGroupInfo() = default;
};
class CreateModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<CreateModuleRequestGroupInfo> groupInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};
  shared_ptr<string> versionStrategy{};

  CreateModuleRequest() {}

  explicit CreateModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    if (versionStrategy) {
      res["versionStrategy"] = boost::any(*versionStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        CreateModuleRequestGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<CreateModuleRequestGroupInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
    if (m.find("versionStrategy") != m.end() && !m["versionStrategy"].empty()) {
      versionStrategy = make_shared<string>(boost::any_cast<string>(m["versionStrategy"]));
    }
  }


  virtual ~CreateModuleRequest() = default;
};
class CreateModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> moduleId{};
  shared_ptr<string> requestId{};

  CreateModuleResponseBody() {}

  explicit CreateModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateModuleResponseBody() = default;
};
class CreateModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModuleResponseBody> body{};

  CreateModuleResponse() {}

  explicit CreateModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModuleResponse() = default;
};
class CreateModuleVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateModuleVersionRequest() {}

  explicit CreateModuleVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateModuleVersionRequest() = default;
};
class CreateModuleVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> requestId{};

  CreateModuleVersionResponseBody() {}

  explicit CreateModuleVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateModuleVersionResponseBody() = default;
};
class CreateModuleVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModuleVersionResponseBody> body{};

  CreateModuleVersionResponse() {}

  explicit CreateModuleVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModuleVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModuleVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModuleVersionResponse() = default;
};
class CreateParameterSetRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CreateParameterSetRequestParameters() {}

  explicit CreateParameterSetRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateParameterSetRequestParameters() = default;
};
class CreateParameterSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateParameterSetRequestParameters>> parameters{};

  CreateParameterSetRequest() {}

  explicit CreateParameterSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["parameters"].type()) {
        vector<CreateParameterSetRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateParameterSetRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<CreateParameterSetRequestParameters>>(expect1);
      }
    }
  }


  virtual ~CreateParameterSetRequest() = default;
};
class CreateParameterSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> parameterSetId{};
  shared_ptr<string> requestId{};

  CreateParameterSetResponseBody() {}

  explicit CreateParameterSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterSetId) {
      res["parameterSetId"] = boost::any(*parameterSetId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameterSetId") != m.end() && !m["parameterSetId"].empty()) {
      parameterSetId = make_shared<string>(boost::any_cast<string>(m["parameterSetId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateParameterSetResponseBody() = default;
};
class CreateParameterSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateParameterSetResponseBody> body{};

  CreateParameterSetResponse() {}

  explicit CreateParameterSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateParameterSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateParameterSetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateParameterSetResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateProjectBuildRequestTaskPolicies : public Darabonba::Model {
public:
  shared_ptr<bool> destroyAfterExecution{};
  shared_ptr<long> priority{};
  shared_ptr<string> taskId{};

  CreateProjectBuildRequestTaskPolicies() {}

  explicit CreateProjectBuildRequestTaskPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destroyAfterExecution) {
      res["destroyAfterExecution"] = boost::any(*destroyAfterExecution);
    }
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destroyAfterExecution") != m.end() && !m["destroyAfterExecution"].empty()) {
      destroyAfterExecution = make_shared<bool>(boost::any_cast<bool>(m["destroyAfterExecution"]));
    }
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["priority"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateProjectBuildRequestTaskPolicies() = default;
};
class CreateProjectBuildRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> groupId{};
  shared_ptr<string> projectBuildAction{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<vector<CreateProjectBuildRequestTaskPolicies>> taskPolicies{};

  CreateProjectBuildRequest() {}

  explicit CreateProjectBuildRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (projectBuildAction) {
      res["projectBuildAction"] = boost::any(*projectBuildAction);
    }
    if (taskIds) {
      res["taskIds"] = boost::any(*taskIds);
    }
    if (taskPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*taskPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("projectBuildAction") != m.end() && !m["projectBuildAction"].empty()) {
      projectBuildAction = make_shared<string>(boost::any_cast<string>(m["projectBuildAction"]));
    }
    if (m.find("taskIds") != m.end() && !m["taskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["taskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["taskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("taskPolicies") != m.end() && !m["taskPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["taskPolicies"].type()) {
        vector<CreateProjectBuildRequestTaskPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProjectBuildRequestTaskPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskPolicies = make_shared<vector<CreateProjectBuildRequestTaskPolicies>>(expect1);
      }
    }
  }


  virtual ~CreateProjectBuildRequest() = default;
};
class CreateProjectBuildResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateProjectBuildResponseBody() {}

  explicit CreateProjectBuildResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateProjectBuildResponseBody() = default;
};
class CreateProjectBuildResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectBuildResponseBody> body{};

  CreateProjectBuildResponse() {}

  explicit CreateProjectBuildResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectBuildResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectBuildResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectBuildResponse() = default;
};
class CreateRabbitmqPublisherRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> exchangeName{};
  shared_ptr<string> exchangeType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> name{};
  shared_ptr<string> password{};
  shared_ptr<long> port{};
  shared_ptr<string> userName{};
  shared_ptr<string> virtualHost{};

  CreateRabbitmqPublisherRequest() {}

  explicit CreateRabbitmqPublisherRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (exchangeName) {
      res["exchangeName"] = boost::any(*exchangeName);
    }
    if (exchangeType) {
      res["exchangeType"] = boost::any(*exchangeType);
    }
    if (hostName) {
      res["hostName"] = boost::any(*hostName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (virtualHost) {
      res["virtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("exchangeName") != m.end() && !m["exchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["exchangeName"]));
    }
    if (m.find("exchangeType") != m.end() && !m["exchangeType"].empty()) {
      exchangeType = make_shared<string>(boost::any_cast<string>(m["exchangeType"]));
    }
    if (m.find("hostName") != m.end() && !m["hostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["hostName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("virtualHost") != m.end() && !m["virtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["virtualHost"]));
    }
  }


  virtual ~CreateRabbitmqPublisherRequest() = default;
};
class CreateRabbitmqPublisherResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> publisherId{};
  shared_ptr<string> requestId{};

  CreateRabbitmqPublisherResponseBody() {}

  explicit CreateRabbitmqPublisherResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publisherId) {
      res["publisherId"] = boost::any(*publisherId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("publisherId") != m.end() && !m["publisherId"].empty()) {
      publisherId = make_shared<string>(boost::any_cast<string>(m["publisherId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateRabbitmqPublisherResponseBody() = default;
};
class CreateRabbitmqPublisherResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRabbitmqPublisherResponseBody> body{};

  CreateRabbitmqPublisherResponse() {}

  explicit CreateRabbitmqPublisherResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRabbitmqPublisherResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRabbitmqPublisherResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRabbitmqPublisherResponse() = default;
};
class CreateRamPolicyExportTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> authorizationAccountIds{};
  shared_ptr<vector<string>> authorizationActions{};
  shared_ptr<vector<string>> authorizationRegionIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> triggerStrategy{};

  CreateRamPolicyExportTaskRequest() {}

  explicit CreateRamPolicyExportTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationAccountIds) {
      res["authorizationAccountIds"] = boost::any(*authorizationAccountIds);
    }
    if (authorizationActions) {
      res["authorizationActions"] = boost::any(*authorizationActions);
    }
    if (authorizationRegionIds) {
      res["authorizationRegionIds"] = boost::any(*authorizationRegionIds);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizationAccountIds") != m.end() && !m["authorizationAccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationAccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationAccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      authorizationAccountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("authorizationActions") != m.end() && !m["authorizationActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authorizationRegionIds") != m.end() && !m["authorizationRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
  }


  virtual ~CreateRamPolicyExportTaskRequest() = default;
};
class CreateRamPolicyExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateRamPolicyExportTaskResponseBody() {}

  explicit CreateRamPolicyExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateRamPolicyExportTaskResponseBody() = default;
};
class CreateRamPolicyExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRamPolicyExportTaskResponseBody> body{};

  CreateRamPolicyExportTaskResponse() {}

  explicit CreateRamPolicyExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRamPolicyExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRamPolicyExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRamPolicyExportTaskResponse() = default;
};
class CreateResourceExportTaskRequestExcludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  CreateResourceExportTaskRequestExcludeRules() {}

  explicit CreateResourceExportTaskRequestExcludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateResourceExportTaskRequestExcludeRules() = default;
};
class CreateResourceExportTaskRequestExportToModule : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};

  CreateResourceExportTaskRequestExportToModule() {}

  explicit CreateResourceExportTaskRequestExportToModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
  }


  virtual ~CreateResourceExportTaskRequestExportToModule() = default;
};
class CreateResourceExportTaskRequestIncludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  CreateResourceExportTaskRequestIncludeRules() {}

  explicit CreateResourceExportTaskRequestIncludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateResourceExportTaskRequestIncludeRules() = default;
};
class CreateResourceExportTaskRequestVariables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> properties{};
  shared_ptr<string> resourceType{};

  CreateResourceExportTaskRequestVariables() {}

  explicit CreateResourceExportTaskRequestVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["properties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      properties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~CreateResourceExportTaskRequestVariables() = default;
};
class CreateResourceExportTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configPath{};
  shared_ptr<string> description{};
  shared_ptr<vector<CreateResourceExportTaskRequestExcludeRules>> excludeRules{};
  shared_ptr<CreateResourceExportTaskRequestExportToModule> exportToModule{};
  shared_ptr<vector<CreateResourceExportTaskRequestIncludeRules>> includeRules{};
  shared_ptr<string> name{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};
  shared_ptr<vector<CreateResourceExportTaskRequestVariables>> variables{};

  CreateResourceExportTaskRequest() {}

  explicit CreateResourceExportTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (configPath) {
      res["configPath"] = boost::any(*configPath);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (excludeRules) {
      vector<boost::any> temp1;
      for(auto item1:*excludeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["excludeRules"] = boost::any(temp1);
    }
    if (exportToModule) {
      res["exportToModule"] = exportToModule ? boost::any(exportToModule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (includeRules) {
      vector<boost::any> temp1;
      for(auto item1:*includeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["includeRules"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("configPath") != m.end() && !m["configPath"].empty()) {
      configPath = make_shared<string>(boost::any_cast<string>(m["configPath"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("excludeRules") != m.end() && !m["excludeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["excludeRules"].type()) {
        vector<CreateResourceExportTaskRequestExcludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["excludeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceExportTaskRequestExcludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        excludeRules = make_shared<vector<CreateResourceExportTaskRequestExcludeRules>>(expect1);
      }
    }
    if (m.find("exportToModule") != m.end() && !m["exportToModule"].empty()) {
      if (typeid(map<string, boost::any>) == m["exportToModule"].type()) {
        CreateResourceExportTaskRequestExportToModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["exportToModule"]));
        exportToModule = make_shared<CreateResourceExportTaskRequestExportToModule>(model1);
      }
    }
    if (m.find("includeRules") != m.end() && !m["includeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["includeRules"].type()) {
        vector<CreateResourceExportTaskRequestIncludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["includeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceExportTaskRequestIncludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        includeRules = make_shared<vector<CreateResourceExportTaskRequestIncludeRules>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<CreateResourceExportTaskRequestVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceExportTaskRequestVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<CreateResourceExportTaskRequestVariables>>(expect1);
      }
    }
  }


  virtual ~CreateResourceExportTaskRequest() = default;
};
class CreateResourceExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> requestId{};

  CreateResourceExportTaskResponseBody() {}

  explicit CreateResourceExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateResourceExportTaskResponseBody() = default;
};
class CreateResourceExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceExportTaskResponseBody> body{};

  CreateResourceExportTaskResponse() {}

  explicit CreateResourceExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceExportTaskResponse() = default;
};
class CreateTaskRequestGroupInfo : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> projectId{};

  CreateTaskRequestGroupInfo() {}

  explicit CreateTaskRequestGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~CreateTaskRequestGroupInfo() = default;
};
class CreateTaskRequestTaskBackend : public Darabonba::Model {
public:
  shared_ptr<string> bucketEndpoint{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> objectPath{};

  CreateTaskRequestTaskBackend() {}

  explicit CreateTaskRequestTaskBackend(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketEndpoint) {
      res["bucketEndpoint"] = boost::any(*bucketEndpoint);
    }
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (objectPath) {
      res["objectPath"] = boost::any(*objectPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketEndpoint") != m.end() && !m["bucketEndpoint"].empty()) {
      bucketEndpoint = make_shared<string>(boost::any_cast<string>(m["bucketEndpoint"]));
    }
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("objectPath") != m.end() && !m["objectPath"].empty()) {
      objectPath = make_shared<string>(boost::any_cast<string>(m["objectPath"]));
    }
  }


  virtual ~CreateTaskRequestTaskBackend() = default;
};
class CreateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<bool> autoDestroy{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<CreateTaskRequestGroupInfo> groupInfo{};
  shared_ptr<bool> initModuleState{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<vector<string>> protectionStrategy{};
  shared_ptr<string> ramRole{};
  shared_ptr<bool> skipPropertyValidation{};
  shared_ptr<CreateTaskRequestTaskBackend> taskBackend{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};
  shared_ptr<string> triggerValue{};

  CreateTaskRequest() {}

  explicit CreateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initModuleState) {
      res["initModuleState"] = boost::any(*initModuleState);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (protectionStrategy) {
      res["protectionStrategy"] = boost::any(*protectionStrategy);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (skipPropertyValidation) {
      res["skipPropertyValidation"] = boost::any(*skipPropertyValidation);
    }
    if (taskBackend) {
      res["taskBackend"] = taskBackend ? boost::any(taskBackend->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        CreateTaskRequestGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<CreateTaskRequestGroupInfo>(model1);
      }
    }
    if (m.find("initModuleState") != m.end() && !m["initModuleState"].empty()) {
      initModuleState = make_shared<bool>(boost::any_cast<bool>(m["initModuleState"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("protectionStrategy") != m.end() && !m["protectionStrategy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protectionStrategy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protectionStrategy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protectionStrategy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("skipPropertyValidation") != m.end() && !m["skipPropertyValidation"].empty()) {
      skipPropertyValidation = make_shared<bool>(boost::any_cast<bool>(m["skipPropertyValidation"]));
    }
    if (m.find("taskBackend") != m.end() && !m["taskBackend"].empty()) {
      if (typeid(map<string, boost::any>) == m["taskBackend"].type()) {
        CreateTaskRequestTaskBackend model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["taskBackend"]));
        taskBackend = make_shared<CreateTaskRequestTaskBackend>(model1);
      }
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
  }


  virtual ~CreateTaskRequest() = default;
};
class CreateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateTaskResponseBody() {}

  explicit CreateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateTaskResponseBody() = default;
};
class CreateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTaskResponseBody> body{};

  CreateTaskResponse() {}

  explicit CreateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskResponse() = default;
};
class DeleteAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAuthorizationResponseBody() {}

  explicit DeleteAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteAuthorizationResponseBody() = default;
};
class DeleteAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAuthorizationResponseBody> body{};

  DeleteAuthorizationResponse() {}

  explicit DeleteAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAuthorizationResponse() = default;
};
class DeleteGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupResponseBody() {}

  explicit DeleteGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteGroupResponseBody() = default;
};
class DeleteGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupResponse() = default;
};
class DeleteModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModuleResponseBody() {}

  explicit DeleteModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteModuleResponseBody() = default;
};
class DeleteModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModuleResponseBody> body{};

  DeleteModuleResponse() {}

  explicit DeleteModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModuleResponse() = default;
};
class DeleteParameterSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteParameterSetResponseBody() {}

  explicit DeleteParameterSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteParameterSetResponseBody() = default;
};
class DeleteParameterSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteParameterSetResponseBody> body{};

  DeleteParameterSetResponse() {}

  explicit DeleteParameterSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteParameterSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteParameterSetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteParameterSetResponse() = default;
};
class DeleteProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProjectResponseBody() {}

  explicit DeleteProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteProjectResponseBody() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class DeleteRabbitmqPublisherResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRabbitmqPublisherResponseBody() {}

  explicit DeleteRabbitmqPublisherResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteRabbitmqPublisherResponseBody() = default;
};
class DeleteRabbitmqPublisherResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRabbitmqPublisherResponseBody> body{};

  DeleteRabbitmqPublisherResponse() {}

  explicit DeleteRabbitmqPublisherResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRabbitmqPublisherResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRabbitmqPublisherResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRabbitmqPublisherResponse() = default;
};
class DeleteRamPolicyExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRamPolicyExportTaskResponseBody() {}

  explicit DeleteRamPolicyExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteRamPolicyExportTaskResponseBody() = default;
};
class DeleteRamPolicyExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRamPolicyExportTaskResponseBody> body{};

  DeleteRamPolicyExportTaskResponse() {}

  explicit DeleteRamPolicyExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRamPolicyExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRamPolicyExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRamPolicyExportTaskResponse() = default;
};
class DeleteRamPolicyExportTaskVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRamPolicyExportTaskVersionResponseBody() {}

  explicit DeleteRamPolicyExportTaskVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteRamPolicyExportTaskVersionResponseBody() = default;
};
class DeleteRamPolicyExportTaskVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRamPolicyExportTaskVersionResponseBody> body{};

  DeleteRamPolicyExportTaskVersionResponse() {}

  explicit DeleteRamPolicyExportTaskVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRamPolicyExportTaskVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRamPolicyExportTaskVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRamPolicyExportTaskVersionResponse() = default;
};
class DeleteResourceExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteResourceExportTaskResponseBody() {}

  explicit DeleteResourceExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteResourceExportTaskResponseBody() = default;
};
class DeleteResourceExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceExportTaskResponseBody> body{};

  DeleteResourceExportTaskResponse() {}

  explicit DeleteResourceExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceExportTaskResponse() = default;
};
class DeleteSceneTestingTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSceneTestingTaskResponseBody() {}

  explicit DeleteSceneTestingTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteSceneTestingTaskResponseBody() = default;
};
class DeleteSceneTestingTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSceneTestingTaskResponseBody> body{};

  DeleteSceneTestingTaskResponse() {}

  explicit DeleteSceneTestingTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSceneTestingTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSceneTestingTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSceneTestingTaskResponse() = default;
};
class DeleteTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTaskResponseBody() {}

  explicit DeleteTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteTaskResponseBody() = default;
};
class DeleteTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTaskResponseBody> body{};

  DeleteTaskResponse() {}

  explicit DeleteTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTaskResponse() = default;
};
class DetachRabbitmqPublisherRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  DetachRabbitmqPublisherRequest() {}

  explicit DetachRabbitmqPublisherRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~DetachRabbitmqPublisherRequest() = default;
};
class DetachRabbitmqPublisherResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachRabbitmqPublisherResponseBody() {}

  explicit DetachRabbitmqPublisherResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DetachRabbitmqPublisherResponseBody() = default;
};
class DetachRabbitmqPublisherResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachRabbitmqPublisherResponseBody> body{};

  DetachRabbitmqPublisherResponse() {}

  explicit DetachRabbitmqPublisherResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachRabbitmqPublisherResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachRabbitmqPublisherResponseBody>(model1);
      }
    }
  }


  virtual ~DetachRabbitmqPublisherResponse() = default;
};
class DissociateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  DissociateGroupRequest() {}

  explicit DissociateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~DissociateGroupRequest() = default;
};
class DissociateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateGroupResponseBody() {}

  explicit DissociateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DissociateGroupResponseBody() = default;
};
class DissociateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DissociateGroupResponseBody> body{};

  DissociateGroupResponse() {}

  explicit DissociateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DissociateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateGroupResponse() = default;
};
class DissociateParameterSetRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> parameterSetIds{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  DissociateParameterSetRequest() {}

  explicit DissociateParameterSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterSetIds) {
      res["parameterSetIds"] = boost::any(*parameterSetIds);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameterSetIds") != m.end() && !m["parameterSetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["parameterSetIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["parameterSetIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parameterSetIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~DissociateParameterSetRequest() = default;
};
class DissociateParameterSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateParameterSetResponseBody() {}

  explicit DissociateParameterSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DissociateParameterSetResponseBody() = default;
};
class DissociateParameterSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DissociateParameterSetResponseBody> body{};

  DissociateParameterSetResponse() {}

  explicit DissociateParameterSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DissociateParameterSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateParameterSetResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateParameterSetResponse() = default;
};
class ExecuteRamPolicyExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportVersion{};
  shared_ptr<string> requestId{};

  ExecuteRamPolicyExportTaskResponseBody() {}

  explicit ExecuteRamPolicyExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExecuteRamPolicyExportTaskResponseBody() = default;
};
class ExecuteRamPolicyExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteRamPolicyExportTaskResponseBody> body{};

  ExecuteRamPolicyExportTaskResponse() {}

  explicit ExecuteRamPolicyExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteRamPolicyExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteRamPolicyExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteRamPolicyExportTaskResponse() = default;
};
class ExecuteResourceExportTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ramRole{};

  ExecuteResourceExportTaskRequest() {}

  explicit ExecuteResourceExportTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
  }


  virtual ~ExecuteResourceExportTaskRequest() = default;
};
class ExecuteResourceExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> requestId{};

  ExecuteResourceExportTaskResponseBody() {}

  explicit ExecuteResourceExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExecuteResourceExportTaskResponseBody() = default;
};
class ExecuteResourceExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteResourceExportTaskResponseBody> body{};

  ExecuteResourceExportTaskResponse() {}

  explicit ExecuteResourceExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteResourceExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteResourceExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteResourceExportTaskResponse() = default;
};
class GetExplorerTaskResponseBodyTaskUploadSignature : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> key{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<string> url{};

  GetExplorerTaskResponseBodyTaskUploadSignature() {}

  explicit GetExplorerTaskResponseBodyTaskUploadSignature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetExplorerTaskResponseBodyTaskUploadSignature() = default;
};
class GetExplorerTaskResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<bool> autoDestroy{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentJobId{};
  shared_ptr<string> description{};
  shared_ptr<string> explorerTaskId{};
  shared_ptr<bool> initModuleState{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<bool> skipPropertyValidation{};
  shared_ptr<string> status{};
  shared_ptr<string> taskOutputPath{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerValue{};
  shared_ptr<GetExplorerTaskResponseBodyTaskUploadSignature> uploadSignature{};

  GetExplorerTaskResponseBodyTask() {}

  explicit GetExplorerTaskResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (currentJobId) {
      res["currentJobId"] = boost::any(*currentJobId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (explorerTaskId) {
      res["explorerTaskId"] = boost::any(*explorerTaskId);
    }
    if (initModuleState) {
      res["initModuleState"] = boost::any(*initModuleState);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (skipPropertyValidation) {
      res["skipPropertyValidation"] = boost::any(*skipPropertyValidation);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskOutputPath) {
      res["taskOutputPath"] = boost::any(*taskOutputPath);
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    if (uploadSignature) {
      res["uploadSignature"] = uploadSignature ? boost::any(uploadSignature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("currentJobId") != m.end() && !m["currentJobId"].empty()) {
      currentJobId = make_shared<string>(boost::any_cast<string>(m["currentJobId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("explorerTaskId") != m.end() && !m["explorerTaskId"].empty()) {
      explorerTaskId = make_shared<string>(boost::any_cast<string>(m["explorerTaskId"]));
    }
    if (m.find("initModuleState") != m.end() && !m["initModuleState"].empty()) {
      initModuleState = make_shared<bool>(boost::any_cast<bool>(m["initModuleState"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("skipPropertyValidation") != m.end() && !m["skipPropertyValidation"].empty()) {
      skipPropertyValidation = make_shared<bool>(boost::any_cast<bool>(m["skipPropertyValidation"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskOutputPath") != m.end() && !m["taskOutputPath"].empty()) {
      taskOutputPath = make_shared<string>(boost::any_cast<string>(m["taskOutputPath"]));
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
    if (m.find("uploadSignature") != m.end() && !m["uploadSignature"].empty()) {
      if (typeid(map<string, boost::any>) == m["uploadSignature"].type()) {
        GetExplorerTaskResponseBodyTaskUploadSignature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["uploadSignature"]));
        uploadSignature = make_shared<GetExplorerTaskResponseBodyTaskUploadSignature>(model1);
      }
    }
  }


  virtual ~GetExplorerTaskResponseBodyTask() = default;
};
class GetExplorerTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetExplorerTaskResponseBodyTask> task{};

  GetExplorerTaskResponseBody() {}

  explicit GetExplorerTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (task) {
      res["task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("task") != m.end() && !m["task"].empty()) {
      if (typeid(map<string, boost::any>) == m["task"].type()) {
        GetExplorerTaskResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["task"]));
        task = make_shared<GetExplorerTaskResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetExplorerTaskResponseBody() = default;
};
class GetExplorerTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExplorerTaskResponseBody> body{};

  GetExplorerTaskResponse() {}

  explicit GetExplorerTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExplorerTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExplorerTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetExplorerTaskResponse() = default;
};
class GetGroupResponseBodyGroupNotifyConfig : public Darabonba::Model {
public:
  shared_ptr<string> notifyPath{};
  shared_ptr<string> notifyType{};

  GetGroupResponseBodyGroupNotifyConfig() {}

  explicit GetGroupResponseBodyGroupNotifyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyPath) {
      res["notifyPath"] = boost::any(*notifyPath);
    }
    if (notifyType) {
      res["notifyType"] = boost::any(*notifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("notifyPath") != m.end() && !m["notifyPath"].empty()) {
      notifyPath = make_shared<string>(boost::any_cast<string>(m["notifyPath"]));
    }
    if (m.find("notifyType") != m.end() && !m["notifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["notifyType"]));
    }
  }


  virtual ~GetGroupResponseBodyGroupNotifyConfig() = default;
};
class GetGroupResponseBodyGroupTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> triggerStrategy{};
  shared_ptr<string> triggerValue{};

  GetGroupResponseBodyGroupTriggerConfig() {}

  explicit GetGroupResponseBodyGroupTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
  }


  virtual ~GetGroupResponseBodyGroupTriggerConfig() = default;
};
class GetGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<bool> autoDestroy{};
  shared_ptr<bool> autoTrigger{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> forcedSetting{};
  shared_ptr<string> groupId{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetGroupResponseBodyGroupNotifyConfig>> notifyConfig{};
  shared_ptr<vector<string>> notifyOperationTypes{};
  shared_ptr<string> projectId{};
  shared_ptr<string> ramRole{};
  shared_ptr<vector<string>> reportExportField{};
  shared_ptr<string> reportExportPath{};
  shared_ptr<long> taskCnt{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<vector<GetGroupResponseBodyGroupTriggerConfig>> triggerConfig{};
  shared_ptr<vector<string>> triggerResourceType{};

  GetGroupResponseBodyGroup() {}

  explicit GetGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (autoTrigger) {
      res["autoTrigger"] = boost::any(*autoTrigger);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (forcedSetting) {
      res["forcedSetting"] = boost::any(*forcedSetting);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (notifyConfig) {
      vector<boost::any> temp1;
      for(auto item1:*notifyConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyConfig"] = boost::any(temp1);
    }
    if (notifyOperationTypes) {
      res["notifyOperationTypes"] = boost::any(*notifyOperationTypes);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (reportExportField) {
      res["reportExportField"] = boost::any(*reportExportField);
    }
    if (reportExportPath) {
      res["reportExportPath"] = boost::any(*reportExportPath);
    }
    if (taskCnt) {
      res["taskCnt"] = boost::any(*taskCnt);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (triggerConfig) {
      vector<boost::any> temp1;
      for(auto item1:*triggerConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["triggerConfig"] = boost::any(temp1);
    }
    if (triggerResourceType) {
      res["triggerResourceType"] = boost::any(*triggerResourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("autoTrigger") != m.end() && !m["autoTrigger"].empty()) {
      autoTrigger = make_shared<bool>(boost::any_cast<bool>(m["autoTrigger"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("forcedSetting") != m.end() && !m["forcedSetting"].empty()) {
      forcedSetting = make_shared<bool>(boost::any_cast<bool>(m["forcedSetting"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("notifyConfig") != m.end() && !m["notifyConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyConfig"].type()) {
        vector<GetGroupResponseBodyGroupNotifyConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGroupResponseBodyGroupNotifyConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyConfig = make_shared<vector<GetGroupResponseBodyGroupNotifyConfig>>(expect1);
      }
    }
    if (m.find("notifyOperationTypes") != m.end() && !m["notifyOperationTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["notifyOperationTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["notifyOperationTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyOperationTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("reportExportField") != m.end() && !m["reportExportField"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["reportExportField"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["reportExportField"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reportExportField = make_shared<vector<string>>(toVec1);
    }
    if (m.find("reportExportPath") != m.end() && !m["reportExportPath"].empty()) {
      reportExportPath = make_shared<string>(boost::any_cast<string>(m["reportExportPath"]));
    }
    if (m.find("taskCnt") != m.end() && !m["taskCnt"].empty()) {
      taskCnt = make_shared<long>(boost::any_cast<long>(m["taskCnt"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["triggerConfig"].type()) {
        vector<GetGroupResponseBodyGroupTriggerConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["triggerConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGroupResponseBodyGroupTriggerConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        triggerConfig = make_shared<vector<GetGroupResponseBodyGroupTriggerConfig>>(expect1);
      }
    }
    if (m.find("triggerResourceType") != m.end() && !m["triggerResourceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["triggerResourceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["triggerResourceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      triggerResourceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetGroupResponseBodyGroup() = default;
};
class GetGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  GetGroupResponseBody() {}

  explicit GetGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("group") != m.end() && !m["group"].empty()) {
      if (typeid(map<string, boost::any>) == m["group"].type()) {
        GetGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["group"]));
        group = make_shared<GetGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGroupResponseBody() = default;
};
class GetGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupResponseBody> body{};

  GetGroupResponse() {}

  explicit GetGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupResponse() = default;
};
class GetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskType{};

  GetJobRequest() {}

  explicit GetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~GetJobRequest() = default;
};
class GetJobResponseBodyJobAssertCheckDetail : public Darabonba::Model {
public:
  shared_ptr<string> comparison{};
  shared_ptr<string> expectedValue{};
  shared_ptr<bool> isPass{};
  shared_ptr<string> type{};

  GetJobResponseBodyJobAssertCheckDetail() {}

  explicit GetJobResponseBodyJobAssertCheckDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparison) {
      res["comparison"] = boost::any(*comparison);
    }
    if (expectedValue) {
      res["expectedValue"] = boost::any(*expectedValue);
    }
    if (isPass) {
      res["isPass"] = boost::any(*isPass);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comparison") != m.end() && !m["comparison"].empty()) {
      comparison = make_shared<string>(boost::any_cast<string>(m["comparison"]));
    }
    expectedValue = make_shared<string>(boost::any_cast<string>(m["expectedValue"]));
    if (m.find("isPass") != m.end() && !m["isPass"].empty()) {
      isPass = make_shared<bool>(boost::any_cast<bool>(m["isPass"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetJobResponseBodyJobAssertCheckDetail() = default;
};
class GetJobResponseBodyJobConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<bool> isDestroy{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> resourcesChanged{};
  shared_ptr<string> subCommand{};

  GetJobResponseBodyJobConfig() {}

  explicit GetJobResponseBodyJobConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (isDestroy) {
      res["isDestroy"] = boost::any(*isDestroy);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (resourcesChanged) {
      res["resourcesChanged"] = boost::any(*resourcesChanged);
    }
    if (subCommand) {
      res["subCommand"] = boost::any(*subCommand);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("isDestroy") != m.end() && !m["isDestroy"].empty()) {
      isDestroy = make_shared<bool>(boost::any_cast<bool>(m["isDestroy"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("resourcesChanged") != m.end() && !m["resourcesChanged"].empty()) {
      resourcesChanged = make_shared<string>(boost::any_cast<string>(m["resourcesChanged"]));
    }
    if (m.find("subCommand") != m.end() && !m["subCommand"].empty()) {
      subCommand = make_shared<string>(boost::any_cast<string>(m["subCommand"]));
    }
  }


  virtual ~GetJobResponseBodyJobConfig() = default;
};
class GetJobResponseBodyJob : public Darabonba::Model {
public:
  shared_ptr<vector<GetJobResponseBodyJobAssertCheckDetail>> assertCheckDetail{};
  shared_ptr<GetJobResponseBodyJobConfig> config{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> downloadUrl{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<string> executeType{};
  shared_ptr<bool> isPassAssertCheck{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<string> runtimeType{};
  shared_ptr<string> status{};
  shared_ptr<map<string, JobStatusDetailValue>> statusDetail{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> terraformProviderVersion{};

  GetJobResponseBodyJob() {}

  explicit GetJobResponseBodyJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assertCheckDetail) {
      vector<boost::any> temp1;
      for(auto item1:*assertCheckDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["assertCheckDetail"] = boost::any(temp1);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (downloadUrl) {
      res["downloadUrl"] = boost::any(*downloadUrl);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (executeType) {
      res["executeType"] = boost::any(*executeType);
    }
    if (isPassAssertCheck) {
      res["isPassAssertCheck"] = boost::any(*isPassAssertCheck);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (runtimeType) {
      res["runtimeType"] = boost::any(*runtimeType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDetail) {
      map<string, boost::any> temp1;
      for(auto item1:*statusDetail){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["statusDetail"] = boost::any(temp1);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assertCheckDetail") != m.end() && !m["assertCheckDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["assertCheckDetail"].type()) {
        vector<GetJobResponseBodyJobAssertCheckDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["assertCheckDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyJobAssertCheckDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assertCheckDetail = make_shared<vector<GetJobResponseBodyJobAssertCheckDetail>>(expect1);
      }
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        GetJobResponseBodyJobConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<GetJobResponseBodyJobConfig>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("downloadUrl") != m.end() && !m["downloadUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["downloadUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      downloadUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("executeType") != m.end() && !m["executeType"].empty()) {
      executeType = make_shared<string>(boost::any_cast<string>(m["executeType"]));
    }
    if (m.find("isPassAssertCheck") != m.end() && !m["isPassAssertCheck"].empty()) {
      isPassAssertCheck = make_shared<bool>(boost::any_cast<bool>(m["isPassAssertCheck"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["output"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("runtimeType") != m.end() && !m["runtimeType"].empty()) {
      runtimeType = make_shared<string>(boost::any_cast<string>(m["runtimeType"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusDetail") != m.end() && !m["statusDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["statusDetail"].type()) {
        map<string, JobStatusDetailValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["statusDetail"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            JobStatusDetailValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        statusDetail = make_shared<map<string, JobStatusDetailValue>>(expect1);
      }
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
  }


  virtual ~GetJobResponseBodyJob() = default;
};
class GetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJob> job{};
  shared_ptr<string> requestId{};

  GetJobResponseBody() {}

  explicit GetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (job) {
      res["job"] = job ? boost::any(job->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("job") != m.end() && !m["job"].empty()) {
      if (typeid(map<string, boost::any>) == m["job"].type()) {
        GetJobResponseBodyJob model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["job"]));
        job = make_shared<GetJobResponseBodyJob>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetJobResponseBody() = default;
};
class GetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobResponseBody> body{};

  GetJobResponse() {}

  explicit GetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobResponse() = default;
};
class GetModuleResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> latestVersion{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> name{};
  shared_ptr<string> outputPath{};
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};
  shared_ptr<string> status{};
  shared_ptr<string> versionStrategy{};

  GetModuleResponseBodyModule() {}

  explicit GetModuleResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (latestVersion) {
      res["latestVersion"] = boost::any(*latestVersion);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (outputPath) {
      res["outputPath"] = boost::any(*outputPath);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (versionStrategy) {
      res["versionStrategy"] = boost::any(*versionStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("latestVersion") != m.end() && !m["latestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["latestVersion"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("outputPath") != m.end() && !m["outputPath"].empty()) {
      outputPath = make_shared<string>(boost::any_cast<string>(m["outputPath"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("versionStrategy") != m.end() && !m["versionStrategy"].empty()) {
      versionStrategy = make_shared<string>(boost::any_cast<string>(m["versionStrategy"]));
    }
  }


  virtual ~GetModuleResponseBodyModule() = default;
};
class GetModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetModuleResponseBodyModule> module{};
  shared_ptr<string> requestId{};

  GetModuleResponseBody() {}

  explicit GetModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        GetModuleResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<GetModuleResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetModuleResponseBody() = default;
};
class GetModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModuleResponseBody> body{};

  GetModuleResponse() {}

  explicit GetModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetModuleResponse() = default;
};
class GetModuleVersionResponseBodyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};
  shared_ptr<map<string, boost::any>> terraformContext{};
  shared_ptr<string> versionStrategy{};

  GetModuleVersionResponseBodyVersion() {}

  explicit GetModuleVersionResponseBodyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    if (terraformContext) {
      res["terraformContext"] = boost::any(*terraformContext);
    }
    if (versionStrategy) {
      res["versionStrategy"] = boost::any(*versionStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
    if (m.find("terraformContext") != m.end() && !m["terraformContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["terraformContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      terraformContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("versionStrategy") != m.end() && !m["versionStrategy"].empty()) {
      versionStrategy = make_shared<string>(boost::any_cast<string>(m["versionStrategy"]));
    }
  }


  virtual ~GetModuleVersionResponseBodyVersion() = default;
};
class GetModuleVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetModuleVersionResponseBodyVersion> version{};

  GetModuleVersionResponseBody() {}

  explicit GetModuleVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (version) {
      res["version"] = version ? boost::any(version->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      if (typeid(map<string, boost::any>) == m["version"].type()) {
        GetModuleVersionResponseBodyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["version"]));
        version = make_shared<GetModuleVersionResponseBodyVersion>(model1);
      }
    }
  }


  virtual ~GetModuleVersionResponseBody() = default;
};
class GetModuleVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModuleVersionResponseBody> body{};

  GetModuleVersionResponse() {}

  explicit GetModuleVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModuleVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModuleVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetModuleVersionResponse() = default;
};
class GetParameterSetResponseBodyParameterSetParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<boost::any> value{};

  GetParameterSetResponseBodyParameterSetParameters() {}

  explicit GetParameterSetResponseBodyParameterSetParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
  }


  virtual ~GetParameterSetResponseBodyParameterSetParameters() = default;
};
class GetParameterSetResponseBodyParameterSetRelationList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  GetParameterSetResponseBodyParameterSetRelationList() {}

  explicit GetParameterSetResponseBodyParameterSetRelationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetParameterSetResponseBodyParameterSetRelationList() = default;
};
class GetParameterSetResponseBodyParameterSet : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parameterSetId{};
  shared_ptr<vector<GetParameterSetResponseBodyParameterSetParameters>> parameters{};
  shared_ptr<vector<GetParameterSetResponseBodyParameterSetRelationList>> relationList{};

  GetParameterSetResponseBodyParameterSet() {}

  explicit GetParameterSetResponseBodyParameterSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameterSetId) {
      res["parameterSetId"] = boost::any(*parameterSetId);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameters"] = boost::any(temp1);
    }
    if (relationList) {
      vector<boost::any> temp1;
      for(auto item1:*relationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relationList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameterSetId") != m.end() && !m["parameterSetId"].empty()) {
      parameterSetId = make_shared<string>(boost::any_cast<string>(m["parameterSetId"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["parameters"].type()) {
        vector<GetParameterSetResponseBodyParameterSetParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetParameterSetResponseBodyParameterSetParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetParameterSetResponseBodyParameterSetParameters>>(expect1);
      }
    }
    if (m.find("relationList") != m.end() && !m["relationList"].empty()) {
      if (typeid(vector<boost::any>) == m["relationList"].type()) {
        vector<GetParameterSetResponseBodyParameterSetRelationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["relationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetParameterSetResponseBodyParameterSetRelationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationList = make_shared<vector<GetParameterSetResponseBodyParameterSetRelationList>>(expect1);
      }
    }
  }


  virtual ~GetParameterSetResponseBodyParameterSet() = default;
};
class GetParameterSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetParameterSetResponseBodyParameterSet> parameterSet{};
  shared_ptr<string> requestId{};

  GetParameterSetResponseBody() {}

  explicit GetParameterSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterSet) {
      res["parameterSet"] = parameterSet ? boost::any(parameterSet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameterSet") != m.end() && !m["parameterSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameterSet"].type()) {
        GetParameterSetResponseBodyParameterSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameterSet"]));
        parameterSet = make_shared<GetParameterSetResponseBodyParameterSet>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetParameterSetResponseBody() = default;
};
class GetParameterSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetParameterSetResponseBody> body{};

  GetParameterSetResponse() {}

  explicit GetParameterSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetParameterSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetParameterSetResponseBody>(model1);
      }
    }
  }


  virtual ~GetParameterSetResponse() = default;
};
class GetProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<long> taskCnt{};

  GetProjectResponseBodyProject() {}

  explicit GetProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (taskCnt) {
      res["taskCnt"] = boost::any(*taskCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("taskCnt") != m.end() && !m["taskCnt"].empty()) {
      taskCnt = make_shared<long>(boost::any_cast<long>(m["taskCnt"]));
    }
  }


  virtual ~GetProjectResponseBodyProject() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProjectResponseBodyProject> project{};
  shared_ptr<string> requestId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("project") != m.end() && !m["project"].empty()) {
      if (typeid(map<string, boost::any>) == m["project"].type()) {
        GetProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["project"]));
        project = make_shared<GetProjectResponseBodyProject>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProjectResponseBody() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetProjectBuildContextRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isPassAssertCheck{};
  shared_ptr<string> status{};

  GetProjectBuildContextRequest() {}

  explicit GetProjectBuildContextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isPassAssertCheck) {
      res["isPassAssertCheck"] = boost::any(*isPassAssertCheck);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isPassAssertCheck") != m.end() && !m["isPassAssertCheck"].empty()) {
      isPassAssertCheck = make_shared<bool>(boost::any_cast<bool>(m["isPassAssertCheck"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetProjectBuildContextRequest() = default;
};
class GetProjectBuildContextResponseBodyProjectBuildJobList : public Darabonba::Model {
public:
  shared_ptr<long> elapsedTime{};
  shared_ptr<long> isDeleted{};
  shared_ptr<bool> isPassAssertCheck{};
  shared_ptr<string> jobId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> type{};

  GetProjectBuildContextResponseBodyProjectBuildJobList() {}

  explicit GetProjectBuildContextResponseBodyProjectBuildJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (isDeleted) {
      res["isDeleted"] = boost::any(*isDeleted);
    }
    if (isPassAssertCheck) {
      res["isPassAssertCheck"] = boost::any(*isPassAssertCheck);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["moduleName"] = boost::any(*moduleName);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("isDeleted") != m.end() && !m["isDeleted"].empty()) {
      isDeleted = make_shared<long>(boost::any_cast<long>(m["isDeleted"]));
    }
    if (m.find("isPassAssertCheck") != m.end() && !m["isPassAssertCheck"].empty()) {
      isPassAssertCheck = make_shared<bool>(boost::any_cast<bool>(m["isPassAssertCheck"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleName") != m.end() && !m["moduleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["moduleName"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetProjectBuildContextResponseBodyProjectBuildJobList() = default;
};
class GetProjectBuildContextResponseBodyProjectBuildResourceList : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> info{};
  shared_ptr<long> resourceCnt{};
  shared_ptr<string> resourceType{};

  GetProjectBuildContextResponseBodyProjectBuildResourceList() {}

  explicit GetProjectBuildContextResponseBodyProjectBuildResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (info) {
      res["info"] = boost::any(*info);
    }
    if (resourceCnt) {
      res["resourceCnt"] = boost::any(*resourceCnt);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("info") != m.end() && !m["info"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["info"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      info = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("resourceCnt") != m.end() && !m["resourceCnt"].empty()) {
      resourceCnt = make_shared<long>(boost::any_cast<long>(m["resourceCnt"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetProjectBuildContextResponseBodyProjectBuildResourceList() = default;
};
class GetProjectBuildContextResponseBodyProjectBuild : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> failCnt{};
  shared_ptr<vector<GetProjectBuildContextResponseBodyProjectBuildJobList>> jobList{};
  shared_ptr<long> jobTotalCnt{};
  shared_ptr<string> projectBuildId{};
  shared_ptr<string> projectId{};
  shared_ptr<long> resourceCnt{};
  shared_ptr<vector<GetProjectBuildContextResponseBodyProjectBuildResourceList>> resourceList{};
  shared_ptr<long> resourceTypeCnt{};
  shared_ptr<string> status{};
  shared_ptr<long> successCnt{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> triggerStrategy{};

  GetProjectBuildContextResponseBodyProjectBuild() {}

  explicit GetProjectBuildContextResponseBodyProjectBuild(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (failCnt) {
      res["failCnt"] = boost::any(*failCnt);
    }
    if (jobList) {
      vector<boost::any> temp1;
      for(auto item1:*jobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobList"] = boost::any(temp1);
    }
    if (jobTotalCnt) {
      res["jobTotalCnt"] = boost::any(*jobTotalCnt);
    }
    if (projectBuildId) {
      res["projectBuildId"] = boost::any(*projectBuildId);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (resourceCnt) {
      res["resourceCnt"] = boost::any(*resourceCnt);
    }
    if (resourceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceList"] = boost::any(temp1);
    }
    if (resourceTypeCnt) {
      res["resourceTypeCnt"] = boost::any(*resourceTypeCnt);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (successCnt) {
      res["successCnt"] = boost::any(*successCnt);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("failCnt") != m.end() && !m["failCnt"].empty()) {
      failCnt = make_shared<long>(boost::any_cast<long>(m["failCnt"]));
    }
    if (m.find("jobList") != m.end() && !m["jobList"].empty()) {
      if (typeid(vector<boost::any>) == m["jobList"].type()) {
        vector<GetProjectBuildContextResponseBodyProjectBuildJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProjectBuildContextResponseBodyProjectBuildJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobList = make_shared<vector<GetProjectBuildContextResponseBodyProjectBuildJobList>>(expect1);
      }
    }
    if (m.find("jobTotalCnt") != m.end() && !m["jobTotalCnt"].empty()) {
      jobTotalCnt = make_shared<long>(boost::any_cast<long>(m["jobTotalCnt"]));
    }
    if (m.find("projectBuildId") != m.end() && !m["projectBuildId"].empty()) {
      projectBuildId = make_shared<string>(boost::any_cast<string>(m["projectBuildId"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("resourceCnt") != m.end() && !m["resourceCnt"].empty()) {
      resourceCnt = make_shared<long>(boost::any_cast<long>(m["resourceCnt"]));
    }
    if (m.find("resourceList") != m.end() && !m["resourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceList"].type()) {
        vector<GetProjectBuildContextResponseBodyProjectBuildResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProjectBuildContextResponseBodyProjectBuildResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceList = make_shared<vector<GetProjectBuildContextResponseBodyProjectBuildResourceList>>(expect1);
      }
    }
    if (m.find("resourceTypeCnt") != m.end() && !m["resourceTypeCnt"].empty()) {
      resourceTypeCnt = make_shared<long>(boost::any_cast<long>(m["resourceTypeCnt"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("successCnt") != m.end() && !m["successCnt"].empty()) {
      successCnt = make_shared<long>(boost::any_cast<long>(m["successCnt"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
  }


  virtual ~GetProjectBuildContextResponseBodyProjectBuild() = default;
};
class GetProjectBuildContextResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProjectBuildContextResponseBodyProjectBuild> projectBuild{};
  shared_ptr<string> requestId{};

  GetProjectBuildContextResponseBody() {}

  explicit GetProjectBuildContextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectBuild) {
      res["ProjectBuild"] = projectBuild ? boost::any(projectBuild->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectBuild") != m.end() && !m["ProjectBuild"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectBuild"].type()) {
        GetProjectBuildContextResponseBodyProjectBuild model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectBuild"]));
        projectBuild = make_shared<GetProjectBuildContextResponseBodyProjectBuild>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProjectBuildContextResponseBody() = default;
};
class GetProjectBuildContextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectBuildContextResponseBody> body{};

  GetProjectBuildContextResponse() {}

  explicit GetProjectBuildContextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectBuildContextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectBuildContextResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectBuildContextResponse() = default;
};
class GetRabbitmqPublisherResponseBodyPublisher : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> exchangeName{};
  shared_ptr<string> exchangeType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<string> publisherId{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<string> userName{};
  shared_ptr<string> virtualHost{};

  GetRabbitmqPublisherResponseBodyPublisher() {}

  explicit GetRabbitmqPublisherResponseBodyPublisher(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (exchangeName) {
      res["exchangeName"] = boost::any(*exchangeName);
    }
    if (exchangeType) {
      res["exchangeType"] = boost::any(*exchangeType);
    }
    if (hostName) {
      res["hostName"] = boost::any(*hostName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (publisherId) {
      res["publisherId"] = boost::any(*publisherId);
    }
    if (taskIds) {
      res["taskIds"] = boost::any(*taskIds);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (virtualHost) {
      res["virtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("exchangeName") != m.end() && !m["exchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["exchangeName"]));
    }
    if (m.find("exchangeType") != m.end() && !m["exchangeType"].empty()) {
      exchangeType = make_shared<string>(boost::any_cast<string>(m["exchangeType"]));
    }
    if (m.find("hostName") != m.end() && !m["hostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["hostName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("publisherId") != m.end() && !m["publisherId"].empty()) {
      publisherId = make_shared<string>(boost::any_cast<string>(m["publisherId"]));
    }
    if (m.find("taskIds") != m.end() && !m["taskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["taskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["taskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("virtualHost") != m.end() && !m["virtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["virtualHost"]));
    }
  }


  virtual ~GetRabbitmqPublisherResponseBodyPublisher() = default;
};
class GetRabbitmqPublisherResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRabbitmqPublisherResponseBodyPublisher> publisher{};
  shared_ptr<string> requestId{};

  GetRabbitmqPublisherResponseBody() {}

  explicit GetRabbitmqPublisherResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publisher) {
      res["publisher"] = publisher ? boost::any(publisher->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("publisher") != m.end() && !m["publisher"].empty()) {
      if (typeid(map<string, boost::any>) == m["publisher"].type()) {
        GetRabbitmqPublisherResponseBodyPublisher model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["publisher"]));
        publisher = make_shared<GetRabbitmqPublisherResponseBodyPublisher>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRabbitmqPublisherResponseBody() = default;
};
class GetRabbitmqPublisherResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRabbitmqPublisherResponseBody> body{};

  GetRabbitmqPublisherResponse() {}

  explicit GetRabbitmqPublisherResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRabbitmqPublisherResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRabbitmqPublisherResponseBody>(model1);
      }
    }
  }


  virtual ~GetRabbitmqPublisherResponse() = default;
};
class GetRamPolicyExportTaskResponseBodyRamPolicyExportTask : public Darabonba::Model {
public:
  shared_ptr<vector<long>> authorizationAccountIds{};
  shared_ptr<vector<string>> authorizationActions{};
  shared_ptr<vector<string>> authorizationRegionIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> ramPolicyExportTaskId{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> status{};
  shared_ptr<string> taskOutputPath{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> triggerStrategy{};

  GetRamPolicyExportTaskResponseBodyRamPolicyExportTask() {}

  explicit GetRamPolicyExportTaskResponseBodyRamPolicyExportTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationAccountIds) {
      res["authorizationAccountIds"] = boost::any(*authorizationAccountIds);
    }
    if (authorizationActions) {
      res["authorizationActions"] = boost::any(*authorizationActions);
    }
    if (authorizationRegionIds) {
      res["authorizationRegionIds"] = boost::any(*authorizationRegionIds);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ramPolicyExportTaskId) {
      res["ramPolicyExportTaskId"] = boost::any(*ramPolicyExportTaskId);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskOutputPath) {
      res["taskOutputPath"] = boost::any(*taskOutputPath);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizationAccountIds") != m.end() && !m["authorizationAccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationAccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationAccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      authorizationAccountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("authorizationActions") != m.end() && !m["authorizationActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authorizationRegionIds") != m.end() && !m["authorizationRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ramPolicyExportTaskId") != m.end() && !m["ramPolicyExportTaskId"].empty()) {
      ramPolicyExportTaskId = make_shared<string>(boost::any_cast<string>(m["ramPolicyExportTaskId"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskOutputPath") != m.end() && !m["taskOutputPath"].empty()) {
      taskOutputPath = make_shared<string>(boost::any_cast<string>(m["taskOutputPath"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
  }


  virtual ~GetRamPolicyExportTaskResponseBodyRamPolicyExportTask() = default;
};
class GetRamPolicyExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRamPolicyExportTaskResponseBodyRamPolicyExportTask> ramPolicyExportTask{};
  shared_ptr<string> requestId{};

  GetRamPolicyExportTaskResponseBody() {}

  explicit GetRamPolicyExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ramPolicyExportTask) {
      res["ramPolicyExportTask"] = ramPolicyExportTask ? boost::any(ramPolicyExportTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ramPolicyExportTask") != m.end() && !m["ramPolicyExportTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["ramPolicyExportTask"].type()) {
        GetRamPolicyExportTaskResponseBodyRamPolicyExportTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ramPolicyExportTask"]));
        ramPolicyExportTask = make_shared<GetRamPolicyExportTaskResponseBodyRamPolicyExportTask>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRamPolicyExportTaskResponseBody() = default;
};
class GetRamPolicyExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRamPolicyExportTaskResponseBody> body{};

  GetRamPolicyExportTaskResponse() {}

  explicit GetRamPolicyExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRamPolicyExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRamPolicyExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetRamPolicyExportTaskResponse() = default;
};
class GetRamPolicyExportTaskVersionResponseBodyRamPolicyExportTaskVersion : public Darabonba::Model {
public:
  shared_ptr<vector<long>> authorizationAccountIds{};
  shared_ptr<vector<string>> authorizationActions{};
  shared_ptr<vector<string>> authorizationRegionIds{};
  shared_ptr<string> createTime{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> failedReason{};
  shared_ptr<vector<string>> missingActions{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<vector<string>> noSupportResourceTypes{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> ramPolicyExportTaskId{};
  shared_ptr<string> status{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<vector<string>> unauthorizedActions{};
  shared_ptr<string> warnMessage{};

  GetRamPolicyExportTaskVersionResponseBodyRamPolicyExportTaskVersion() {}

  explicit GetRamPolicyExportTaskVersionResponseBodyRamPolicyExportTaskVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationAccountIds) {
      res["authorizationAccountIds"] = boost::any(*authorizationAccountIds);
    }
    if (authorizationActions) {
      res["authorizationActions"] = boost::any(*authorizationActions);
    }
    if (authorizationRegionIds) {
      res["authorizationRegionIds"] = boost::any(*authorizationRegionIds);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (failedReason) {
      res["failedReason"] = boost::any(*failedReason);
    }
    if (missingActions) {
      res["missingActions"] = boost::any(*missingActions);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (noSupportResourceTypes) {
      res["noSupportResourceTypes"] = boost::any(*noSupportResourceTypes);
    }
    if (policyDocument) {
      res["policyDocument"] = boost::any(*policyDocument);
    }
    if (ramPolicyExportTaskId) {
      res["ramPolicyExportTaskId"] = boost::any(*ramPolicyExportTaskId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (unauthorizedActions) {
      res["unauthorizedActions"] = boost::any(*unauthorizedActions);
    }
    if (warnMessage) {
      res["warnMessage"] = boost::any(*warnMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizationAccountIds") != m.end() && !m["authorizationAccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationAccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationAccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      authorizationAccountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("authorizationActions") != m.end() && !m["authorizationActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authorizationRegionIds") != m.end() && !m["authorizationRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("failedReason") != m.end() && !m["failedReason"].empty()) {
      failedReason = make_shared<string>(boost::any_cast<string>(m["failedReason"]));
    }
    if (m.find("missingActions") != m.end() && !m["missingActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["missingActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["missingActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      missingActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("noSupportResourceTypes") != m.end() && !m["noSupportResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["noSupportResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noSupportResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      noSupportResourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("policyDocument") != m.end() && !m["policyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["policyDocument"]));
    }
    if (m.find("ramPolicyExportTaskId") != m.end() && !m["ramPolicyExportTaskId"].empty()) {
      ramPolicyExportTaskId = make_shared<string>(boost::any_cast<string>(m["ramPolicyExportTaskId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("unauthorizedActions") != m.end() && !m["unauthorizedActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["unauthorizedActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["unauthorizedActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unauthorizedActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("warnMessage") != m.end() && !m["warnMessage"].empty()) {
      warnMessage = make_shared<string>(boost::any_cast<string>(m["warnMessage"]));
    }
  }


  virtual ~GetRamPolicyExportTaskVersionResponseBodyRamPolicyExportTaskVersion() = default;
};
class GetRamPolicyExportTaskVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRamPolicyExportTaskVersionResponseBodyRamPolicyExportTaskVersion> ramPolicyExportTaskVersion{};
  shared_ptr<string> requestId{};

  GetRamPolicyExportTaskVersionResponseBody() {}

  explicit GetRamPolicyExportTaskVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ramPolicyExportTaskVersion) {
      res["ramPolicyExportTaskVersion"] = ramPolicyExportTaskVersion ? boost::any(ramPolicyExportTaskVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ramPolicyExportTaskVersion") != m.end() && !m["ramPolicyExportTaskVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["ramPolicyExportTaskVersion"].type()) {
        GetRamPolicyExportTaskVersionResponseBodyRamPolicyExportTaskVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ramPolicyExportTaskVersion"]));
        ramPolicyExportTaskVersion = make_shared<GetRamPolicyExportTaskVersionResponseBodyRamPolicyExportTaskVersion>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRamPolicyExportTaskVersionResponseBody() = default;
};
class GetRamPolicyExportTaskVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRamPolicyExportTaskVersionResponseBody> body{};

  GetRamPolicyExportTaskVersionResponse() {}

  explicit GetRamPolicyExportTaskVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRamPolicyExportTaskVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRamPolicyExportTaskVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetRamPolicyExportTaskVersionResponse() = default;
};
class GetResourceExportTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> exportVersion{};

  GetResourceExportTaskRequest() {}

  explicit GetResourceExportTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
  }


  virtual ~GetResourceExportTaskRequest() = default;
};
class GetResourceExportTaskResponseBodyTaskExcludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  GetResourceExportTaskResponseBodyTaskExcludeRules() {}

  explicit GetResourceExportTaskResponseBodyTaskExcludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceExportTaskResponseBodyTaskExcludeRules() = default;
};
class GetResourceExportTaskResponseBodyTaskExportToModule : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};

  GetResourceExportTaskResponseBodyTaskExportToModule() {}

  explicit GetResourceExportTaskResponseBodyTaskExportToModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
  }


  virtual ~GetResourceExportTaskResponseBodyTaskExportToModule() = default;
};
class GetResourceExportTaskResponseBodyTaskIncludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  GetResourceExportTaskResponseBodyTaskIncludeRules() {}

  explicit GetResourceExportTaskResponseBodyTaskIncludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceExportTaskResponseBodyTaskIncludeRules() = default;
};
class GetResourceExportTaskResponseBodyTaskModules : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> version{};

  GetResourceExportTaskResponseBodyTaskModules() {}

  explicit GetResourceExportTaskResponseBodyTaskModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetResourceExportTaskResponseBodyTaskModules() = default;
};
class GetResourceExportTaskResponseBodyTaskVariables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> properties{};
  shared_ptr<string> resourceType{};

  GetResourceExportTaskResponseBodyTaskVariables() {}

  explicit GetResourceExportTaskResponseBodyTaskVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["properties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      properties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetResourceExportTaskResponseBodyTaskVariables() = default;
};
class GetResourceExportTaskResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<string> configPath{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<vector<GetResourceExportTaskResponseBodyTaskExcludeRules>> excludeRules{};
  shared_ptr<string> exportTaskId{};
  shared_ptr<GetResourceExportTaskResponseBodyTaskExportToModule> exportToModule{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> failedReason{};
  shared_ptr<vector<GetResourceExportTaskResponseBodyTaskIncludeRules>> includeRules{};
  shared_ptr<vector<GetResourceExportTaskResponseBodyTaskModules>> modules{};
  shared_ptr<string> name{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> status{};
  shared_ptr<string> taskOutputPath{};
  shared_ptr<map<string, boost::any>> terraformContext{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};
  shared_ptr<vector<GetResourceExportTaskResponseBodyTaskVariables>> variables{};

  GetResourceExportTaskResponseBodyTask() {}

  explicit GetResourceExportTaskResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configPath) {
      res["configPath"] = boost::any(*configPath);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (excludeRules) {
      vector<boost::any> temp1;
      for(auto item1:*excludeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["excludeRules"] = boost::any(temp1);
    }
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (exportToModule) {
      res["exportToModule"] = exportToModule ? boost::any(exportToModule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (failedReason) {
      res["failedReason"] = boost::any(*failedReason);
    }
    if (includeRules) {
      vector<boost::any> temp1;
      for(auto item1:*includeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["includeRules"] = boost::any(temp1);
    }
    if (modules) {
      vector<boost::any> temp1;
      for(auto item1:*modules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["modules"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskOutputPath) {
      res["taskOutputPath"] = boost::any(*taskOutputPath);
    }
    if (terraformContext) {
      res["terraformContext"] = boost::any(*terraformContext);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configPath") != m.end() && !m["configPath"].empty()) {
      configPath = make_shared<string>(boost::any_cast<string>(m["configPath"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("excludeRules") != m.end() && !m["excludeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["excludeRules"].type()) {
        vector<GetResourceExportTaskResponseBodyTaskExcludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["excludeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceExportTaskResponseBodyTaskExcludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        excludeRules = make_shared<vector<GetResourceExportTaskResponseBodyTaskExcludeRules>>(expect1);
      }
    }
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("exportToModule") != m.end() && !m["exportToModule"].empty()) {
      if (typeid(map<string, boost::any>) == m["exportToModule"].type()) {
        GetResourceExportTaskResponseBodyTaskExportToModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["exportToModule"]));
        exportToModule = make_shared<GetResourceExportTaskResponseBodyTaskExportToModule>(model1);
      }
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("failedReason") != m.end() && !m["failedReason"].empty()) {
      failedReason = make_shared<string>(boost::any_cast<string>(m["failedReason"]));
    }
    if (m.find("includeRules") != m.end() && !m["includeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["includeRules"].type()) {
        vector<GetResourceExportTaskResponseBodyTaskIncludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["includeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceExportTaskResponseBodyTaskIncludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        includeRules = make_shared<vector<GetResourceExportTaskResponseBodyTaskIncludeRules>>(expect1);
      }
    }
    if (m.find("modules") != m.end() && !m["modules"].empty()) {
      if (typeid(vector<boost::any>) == m["modules"].type()) {
        vector<GetResourceExportTaskResponseBodyTaskModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["modules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceExportTaskResponseBodyTaskModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modules = make_shared<vector<GetResourceExportTaskResponseBodyTaskModules>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskOutputPath") != m.end() && !m["taskOutputPath"].empty()) {
      taskOutputPath = make_shared<string>(boost::any_cast<string>(m["taskOutputPath"]));
    }
    if (m.find("terraformContext") != m.end() && !m["terraformContext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["terraformContext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      terraformContext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<GetResourceExportTaskResponseBodyTaskVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceExportTaskResponseBodyTaskVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<GetResourceExportTaskResponseBodyTaskVariables>>(expect1);
      }
    }
  }


  virtual ~GetResourceExportTaskResponseBodyTask() = default;
};
class GetResourceExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceExportTaskResponseBodyTask> task{};

  GetResourceExportTaskResponseBody() {}

  explicit GetResourceExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (task) {
      res["task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("task") != m.end() && !m["task"].empty()) {
      if (typeid(map<string, boost::any>) == m["task"].type()) {
        GetResourceExportTaskResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["task"]));
        task = make_shared<GetResourceExportTaskResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetResourceExportTaskResponseBody() = default;
};
class GetResourceExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceExportTaskResponseBody> body{};

  GetResourceExportTaskResponse() {}

  explicit GetResourceExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceExportTaskResponse() = default;
};
class GetTaskResponseBodyTaskGroupInfo : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  GetTaskResponseBodyTaskGroupInfo() {}

  explicit GetTaskResponseBodyTaskGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
  }


  virtual ~GetTaskResponseBodyTaskGroupInfo() = default;
};
class GetTaskResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<bool> autoDestroy{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentJobId{};
  shared_ptr<string> description{};
  shared_ptr<GetTaskResponseBodyTaskGroupInfo> groupInfo{};
  shared_ptr<bool> initModuleState{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<vector<string>> protectionStrategy{};
  shared_ptr<string> ramRole{};
  shared_ptr<bool> skipPropertyValidation{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskOutputPath{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};
  shared_ptr<string> triggerValue{};

  GetTaskResponseBodyTask() {}

  explicit GetTaskResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (currentJobId) {
      res["currentJobId"] = boost::any(*currentJobId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initModuleState) {
      res["initModuleState"] = boost::any(*initModuleState);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (protectionStrategy) {
      res["protectionStrategy"] = boost::any(*protectionStrategy);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (skipPropertyValidation) {
      res["skipPropertyValidation"] = boost::any(*skipPropertyValidation);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskOutputPath) {
      res["taskOutputPath"] = boost::any(*taskOutputPath);
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("currentJobId") != m.end() && !m["currentJobId"].empty()) {
      currentJobId = make_shared<string>(boost::any_cast<string>(m["currentJobId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        GetTaskResponseBodyTaskGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<GetTaskResponseBodyTaskGroupInfo>(model1);
      }
    }
    if (m.find("initModuleState") != m.end() && !m["initModuleState"].empty()) {
      initModuleState = make_shared<bool>(boost::any_cast<bool>(m["initModuleState"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("protectionStrategy") != m.end() && !m["protectionStrategy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protectionStrategy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protectionStrategy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protectionStrategy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("skipPropertyValidation") != m.end() && !m["skipPropertyValidation"].empty()) {
      skipPropertyValidation = make_shared<bool>(boost::any_cast<bool>(m["skipPropertyValidation"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskOutputPath") != m.end() && !m["taskOutputPath"].empty()) {
      taskOutputPath = make_shared<string>(boost::any_cast<string>(m["taskOutputPath"]));
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
  }


  virtual ~GetTaskResponseBodyTask() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTaskResponseBodyTask> task{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (task) {
      res["task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("task") != m.end() && !m["task"].empty()) {
      if (typeid(map<string, boost::any>) == m["task"].type()) {
        GetTaskResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["task"]));
        task = make_shared<GetTaskResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetTaskPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  GetTaskPolicyRequest() {}

  explicit GetTaskPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetTaskPolicyRequest() = default;
};
class GetTaskPolicyResponseBodyTaskPolicyTaskPolicies : public Darabonba::Model {
public:
  shared_ptr<long> priority{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> type{};

  GetTaskPolicyResponseBodyTaskPolicyTaskPolicies() {}

  explicit GetTaskPolicyResponseBodyTaskPolicyTaskPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["priority"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetTaskPolicyResponseBodyTaskPolicyTaskPolicies() = default;
};
class GetTaskPolicyResponseBodyTaskPolicy : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<vector<GetTaskPolicyResponseBodyTaskPolicyTaskPolicies>> taskPolicies{};

  GetTaskPolicyResponseBodyTaskPolicy() {}

  explicit GetTaskPolicyResponseBodyTaskPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (taskPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*taskPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("taskPolicies") != m.end() && !m["taskPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["taskPolicies"].type()) {
        vector<GetTaskPolicyResponseBodyTaskPolicyTaskPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskPolicyResponseBodyTaskPolicyTaskPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskPolicies = make_shared<vector<GetTaskPolicyResponseBodyTaskPolicyTaskPolicies>>(expect1);
      }
    }
  }


  virtual ~GetTaskPolicyResponseBodyTaskPolicy() = default;
};
class GetTaskPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTaskPolicyResponseBodyTaskPolicy> taskPolicy{};

  GetTaskPolicyResponseBody() {}

  explicit GetTaskPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskPolicy) {
      res["taskPolicy"] = taskPolicy ? boost::any(taskPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskPolicy") != m.end() && !m["taskPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["taskPolicy"].type()) {
        GetTaskPolicyResponseBodyTaskPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["taskPolicy"]));
        taskPolicy = make_shared<GetTaskPolicyResponseBodyTaskPolicy>(model1);
      }
    }
  }


  virtual ~GetTaskPolicyResponseBody() = default;
};
class GetTaskPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskPolicyResponseBody> body{};

  GetTaskPolicyResponse() {}

  explicit GetTaskPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskPolicyResponse() = default;
};
class ListAuthorizationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationId{};
  shared_ptr<string> authorizationType{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAuthorizationsRequest() {}

  explicit ListAuthorizationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationId) {
      res["authorizationId"] = boost::any(*authorizationId);
    }
    if (authorizationType) {
      res["authorizationType"] = boost::any(*authorizationType);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizationId") != m.end() && !m["authorizationId"].empty()) {
      authorizationId = make_shared<string>(boost::any_cast<string>(m["authorizationId"]));
    }
    if (m.find("authorizationType") != m.end() && !m["authorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["authorizationType"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListAuthorizationsRequest() = default;
};
class ListAuthorizationsResponseBodyAuthorizations : public Darabonba::Model {
public:
  shared_ptr<string> authorizationId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dueTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerUid{};
  shared_ptr<long> uid{};

  ListAuthorizationsResponseBodyAuthorizations() {}

  explicit ListAuthorizationsResponseBodyAuthorizations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationId) {
      res["authorizationId"] = boost::any(*authorizationId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dueTime) {
      res["dueTime"] = boost::any(*dueTime);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ownerUid) {
      res["ownerUid"] = boost::any(*ownerUid);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizationId") != m.end() && !m["authorizationId"].empty()) {
      authorizationId = make_shared<string>(boost::any_cast<string>(m["authorizationId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dueTime") != m.end() && !m["dueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["dueTime"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ownerUid") != m.end() && !m["ownerUid"].empty()) {
      ownerUid = make_shared<long>(boost::any_cast<long>(m["ownerUid"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["uid"]));
    }
  }


  virtual ~ListAuthorizationsResponseBodyAuthorizations() = default;
};
class ListAuthorizationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAuthorizationsResponseBodyAuthorizations>> authorizations{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAuthorizationsResponseBody() {}

  explicit ListAuthorizationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizations) {
      vector<boost::any> temp1;
      for(auto item1:*authorizations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["authorizations"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizations") != m.end() && !m["authorizations"].empty()) {
      if (typeid(vector<boost::any>) == m["authorizations"].type()) {
        vector<ListAuthorizationsResponseBodyAuthorizations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["authorizations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAuthorizationsResponseBodyAuthorizations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizations = make_shared<vector<ListAuthorizationsResponseBodyAuthorizations>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListAuthorizationsResponseBody() = default;
};
class ListAuthorizationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAuthorizationsResponseBody> body{};

  ListAuthorizationsResponse() {}

  explicit ListAuthorizationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAuthorizationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthorizationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthorizationsResponse() = default;
};
class ListAvailableTerraformVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAvailableTerraformVersionsRequest() {}

  explicit ListAvailableTerraformVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["keyWord"] = boost::any(*keyWord);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyWord") != m.end() && !m["keyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["keyWord"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListAvailableTerraformVersionsRequest() = default;
};
class ListAvailableTerraformVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> verisonList{};

  ListAvailableTerraformVersionsResponseBody() {}

  explicit ListAvailableTerraformVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (verisonList) {
      res["verisonList"] = boost::any(*verisonList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("verisonList") != m.end() && !m["verisonList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["verisonList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["verisonList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      verisonList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAvailableTerraformVersionsResponseBody() = default;
};
class ListAvailableTerraformVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAvailableTerraformVersionsResponseBody> body{};

  ListAvailableTerraformVersionsResponse() {}

  explicit ListAvailableTerraformVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAvailableTerraformVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableTerraformVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableTerraformVersionsResponse() = default;
};
class ListExplorerTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> maxResult{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> nextToken{};

  ListExplorerTasksRequest() {}

  explicit ListExplorerTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (maxResult) {
      res["maxResult"] = boost::any(*maxResult);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("maxResult") != m.end() && !m["maxResult"].empty()) {
      maxResult = make_shared<string>(boost::any_cast<string>(m["maxResult"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListExplorerTasksRequest() = default;
};
class ListExplorerTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentJobId{};
  shared_ptr<string> currentJobStatus{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  ListExplorerTasksResponseBodyTasks() {}

  explicit ListExplorerTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (currentJobId) {
      res["currentJobId"] = boost::any(*currentJobId);
    }
    if (currentJobStatus) {
      res["currentJobStatus"] = boost::any(*currentJobStatus);
    }
    if (deletionProtection) {
      res["deletionProtection"] = boost::any(*deletionProtection);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["moduleName"] = boost::any(*moduleName);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("currentJobId") != m.end() && !m["currentJobId"].empty()) {
      currentJobId = make_shared<string>(boost::any_cast<string>(m["currentJobId"]));
    }
    if (m.find("currentJobStatus") != m.end() && !m["currentJobStatus"].empty()) {
      currentJobStatus = make_shared<string>(boost::any_cast<string>(m["currentJobStatus"]));
    }
    if (m.find("deletionProtection") != m.end() && !m["deletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletionProtection"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleName") != m.end() && !m["moduleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["moduleName"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListExplorerTasksResponseBodyTasks() = default;
};
class ListExplorerTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListExplorerTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListExplorerTasksResponseBody() {}

  explicit ListExplorerTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tasks"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("tasks") != m.end() && !m["tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["tasks"].type()) {
        vector<ListExplorerTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExplorerTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListExplorerTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListExplorerTasksResponseBody() = default;
};
class ListExplorerTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExplorerTasksResponseBody> body{};

  ListExplorerTasksResponse() {}

  explicit ListExplorerTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExplorerTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExplorerTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListExplorerTasksResponse() = default;
};
class ListGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListGroupRequestTag() {}

  explicit ListGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListGroupRequestTag() = default;
};
class ListGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<ListGroupRequestTag>> tag{};

  ListGroupRequest() {}

  explicit ListGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<ListGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListGroupRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListGroupRequest() = default;
};
class ListGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> tagShrink{};

  ListGroupShrinkRequest() {}

  explicit ListGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (tagShrink) {
      res["tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~ListGroupShrinkRequest() = default;
};
class ListGroupResponseBodyGroupsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListGroupResponseBodyGroupsTags() {}

  explicit ListGroupResponseBodyGroupsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListGroupResponseBodyGroupsTags() = default;
};
class ListGroupResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> isDefault{};
  shared_ptr<long> moduleCnt{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<long> sceneTestingTaskCnt{};
  shared_ptr<vector<ListGroupResponseBodyGroupsTags>> tags{};
  shared_ptr<long> taskCnt{};

  ListGroupResponseBodyGroups() {}

  explicit ListGroupResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
    }
    if (moduleCnt) {
      res["moduleCnt"] = boost::any(*moduleCnt);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (sceneTestingTaskCnt) {
      res["sceneTestingTaskCnt"] = boost::any(*sceneTestingTaskCnt);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskCnt) {
      res["taskCnt"] = boost::any(*taskCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["isDefault"]));
    }
    if (m.find("moduleCnt") != m.end() && !m["moduleCnt"].empty()) {
      moduleCnt = make_shared<long>(boost::any_cast<long>(m["moduleCnt"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("sceneTestingTaskCnt") != m.end() && !m["sceneTestingTaskCnt"].empty()) {
      sceneTestingTaskCnt = make_shared<long>(boost::any_cast<long>(m["sceneTestingTaskCnt"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListGroupResponseBodyGroupsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupResponseBodyGroupsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListGroupResponseBodyGroupsTags>>(expect1);
      }
    }
    if (m.find("taskCnt") != m.end() && !m["taskCnt"].empty()) {
      taskCnt = make_shared<long>(boost::any_cast<long>(m["taskCnt"]));
    }
  }


  virtual ~ListGroupResponseBodyGroups() = default;
};
class ListGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListGroupResponseBodyGroups>> groups{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};

  ListGroupResponseBody() {}

  explicit ListGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["groups"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("groups") != m.end() && !m["groups"].empty()) {
      if (typeid(vector<boost::any>) == m["groups"].type()) {
        vector<ListGroupResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<ListGroupResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListGroupResponseBody() = default;
};
class ListGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupResponseBody> body{};

  ListGroupResponse() {}

  explicit ListGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupResponse() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<string> taskType{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBodyJobsConfig : public Darabonba::Model {
public:
  shared_ptr<bool> isDestroy{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> resourcesChanged{};
  shared_ptr<string> subCommand{};

  ListJobsResponseBodyJobsConfig() {}

  explicit ListJobsResponseBodyJobsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDestroy) {
      res["isDestroy"] = boost::any(*isDestroy);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (resourcesChanged) {
      res["resourcesChanged"] = boost::any(*resourcesChanged);
    }
    if (subCommand) {
      res["subCommand"] = boost::any(*subCommand);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isDestroy") != m.end() && !m["isDestroy"].empty()) {
      isDestroy = make_shared<bool>(boost::any_cast<bool>(m["isDestroy"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("resourcesChanged") != m.end() && !m["resourcesChanged"].empty()) {
      resourcesChanged = make_shared<string>(boost::any_cast<string>(m["resourcesChanged"]));
    }
    if (m.find("subCommand") != m.end() && !m["subCommand"].empty()) {
      subCommand = make_shared<string>(boost::any_cast<string>(m["subCommand"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsConfig() = default;
};
class ListJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<ListJobsResponseBodyJobsConfig> config{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<string> executeType{};
  shared_ptr<bool> isPassAssertCheck{};
  shared_ptr<string> jobId{};
  shared_ptr<string> status{};
  shared_ptr<map<string, JobsStatusDetailValue>> statusDetail{};
  shared_ptr<string> taskId{};
  shared_ptr<string> terraformProviderVersion{};

  ListJobsResponseBodyJobs() {}

  explicit ListJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (executeType) {
      res["executeType"] = boost::any(*executeType);
    }
    if (isPassAssertCheck) {
      res["isPassAssertCheck"] = boost::any(*isPassAssertCheck);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusDetail) {
      map<string, boost::any> temp1;
      for(auto item1:*statusDetail){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["statusDetail"] = boost::any(temp1);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        ListJobsResponseBodyJobsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<ListJobsResponseBodyJobsConfig>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("executeType") != m.end() && !m["executeType"].empty()) {
      executeType = make_shared<string>(boost::any_cast<string>(m["executeType"]));
    }
    if (m.find("isPassAssertCheck") != m.end() && !m["isPassAssertCheck"].empty()) {
      isPassAssertCheck = make_shared<bool>(boost::any_cast<bool>(m["isPassAssertCheck"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusDetail") != m.end() && !m["statusDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["statusDetail"].type()) {
        map<string, JobsStatusDetailValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["statusDetail"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            JobsStatusDetailValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        statusDetail = make_shared<map<string, JobsStatusDetailValue>>(expect1);
      }
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
  }


  virtual ~ListJobsResponseBodyJobs() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobsResponseBodyJobs>> jobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["jobs"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobs") != m.end() && !m["jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["jobs"].type()) {
        vector<ListJobsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListJobsResponseBodyJobs>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListJobsResponseBody() = default;
};
class ListJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobsResponse() = default;
};
class ListModuleVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListModuleVersionRequest() {}

  explicit ListModuleVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListModuleVersionRequest() = default;
};
class ListModuleVersionResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> sourcePath{};

  ListModuleVersionResponseBodyVersions() {}

  explicit ListModuleVersionResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
  }


  virtual ~ListModuleVersionResponseBodyVersions() = default;
};
class ListModuleVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListModuleVersionResponseBodyVersions>> versions{};

  ListModuleVersionResponseBody() {}

  explicit ListModuleVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<ListModuleVersionResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModuleVersionResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListModuleVersionResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~ListModuleVersionResponseBody() = default;
};
class ListModuleVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModuleVersionResponseBody> body{};

  ListModuleVersionResponse() {}

  explicit ListModuleVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModuleVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModuleVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ListModuleVersionResponse() = default;
};
class ListModulesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListModulesRequestTag() {}

  explicit ListModulesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListModulesRequestTag() = default;
};
class ListModulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeModuleIds{};
  shared_ptr<string> groupId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<ListModulesRequestTag>> tag{};

  ListModulesRequest() {}

  explicit ListModulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeModuleIds) {
      res["excludeModuleIds"] = boost::any(*excludeModuleIds);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("excludeModuleIds") != m.end() && !m["excludeModuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeModuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeModuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeModuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<ListModulesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModulesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListModulesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListModulesRequest() = default;
};
class ListModulesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludeModuleIdsShrink{};
  shared_ptr<string> groupId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> tagShrink{};

  ListModulesShrinkRequest() {}

  explicit ListModulesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeModuleIdsShrink) {
      res["excludeModuleIds"] = boost::any(*excludeModuleIdsShrink);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (tagShrink) {
      res["tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("excludeModuleIds") != m.end() && !m["excludeModuleIds"].empty()) {
      excludeModuleIdsShrink = make_shared<string>(boost::any_cast<string>(m["excludeModuleIds"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~ListModulesShrinkRequest() = default;
};
class ListModulesResponseBodyModulesGroupInfo : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  ListModulesResponseBodyModulesGroupInfo() {}

  explicit ListModulesResponseBodyModulesGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
  }


  virtual ~ListModulesResponseBodyModulesGroupInfo() = default;
};
class ListModulesResponseBodyModulesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListModulesResponseBodyModulesTags() {}

  explicit ListModulesResponseBodyModulesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListModulesResponseBodyModulesTags() = default;
};
class ListModulesResponseBodyModules : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> description{};
  shared_ptr<ListModulesResponseBodyModulesGroupInfo> groupInfo{};
  shared_ptr<string> latestVersion{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<map<string, boost::any>> sourceConfig{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListModulesResponseBodyModulesTags>> tags{};

  ListModulesResponseBodyModules() {}

  explicit ListModulesResponseBodyModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (deletionProtection) {
      res["deletionProtection"] = boost::any(*deletionProtection);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (latestVersion) {
      res["latestVersion"] = boost::any(*latestVersion);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourceConfig) {
      res["sourceConfig"] = boost::any(*sourceConfig);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("deletionProtection") != m.end() && !m["deletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletionProtection"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        ListModulesResponseBodyModulesGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<ListModulesResponseBodyModulesGroupInfo>(model1);
      }
    }
    if (m.find("latestVersion") != m.end() && !m["latestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["latestVersion"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourceConfig") != m.end() && !m["sourceConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["sourceConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sourceConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListModulesResponseBodyModulesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModulesResponseBodyModulesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListModulesResponseBodyModulesTags>>(expect1);
      }
    }
  }


  virtual ~ListModulesResponseBodyModules() = default;
};
class ListModulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListModulesResponseBodyModules>> modules{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListModulesResponseBody() {}

  explicit ListModulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modules) {
      vector<boost::any> temp1;
      for(auto item1:*modules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["modules"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modules") != m.end() && !m["modules"].empty()) {
      if (typeid(vector<boost::any>) == m["modules"].type()) {
        vector<ListModulesResponseBodyModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["modules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModulesResponseBodyModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modules = make_shared<vector<ListModulesResponseBodyModules>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListModulesResponseBody() = default;
};
class ListModulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModulesResponseBody> body{};

  ListModulesResponse() {}

  explicit ListModulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListModulesResponse() = default;
};
class ListParameterSetRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListParameterSetRelationRequest() {}

  explicit ListParameterSetRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListParameterSetRelationRequest() = default;
};
class ListParameterSetRelationResponseBodyParameterSets : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parameterSetId{};
  shared_ptr<map<string, string>> parameters{};

  ListParameterSetRelationResponseBodyParameterSets() {}

  explicit ListParameterSetRelationResponseBodyParameterSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameterSetId) {
      res["parameterSetId"] = boost::any(*parameterSetId);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameterSetId") != m.end() && !m["parameterSetId"].empty()) {
      parameterSetId = make_shared<string>(boost::any_cast<string>(m["parameterSetId"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListParameterSetRelationResponseBodyParameterSets() = default;
};
class ListParameterSetRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListParameterSetRelationResponseBodyParameterSets>> parameterSets{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListParameterSetRelationResponseBody() {}

  explicit ListParameterSetRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterSets) {
      vector<boost::any> temp1;
      for(auto item1:*parameterSets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameterSets"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameterSets") != m.end() && !m["parameterSets"].empty()) {
      if (typeid(vector<boost::any>) == m["parameterSets"].type()) {
        vector<ListParameterSetRelationResponseBodyParameterSets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameterSets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParameterSetRelationResponseBodyParameterSets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterSets = make_shared<vector<ListParameterSetRelationResponseBodyParameterSets>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListParameterSetRelationResponseBody() = default;
};
class ListParameterSetRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListParameterSetRelationResponseBody> body{};

  ListParameterSetRelationResponse() {}

  explicit ListParameterSetRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListParameterSetRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListParameterSetRelationResponseBody>(model1);
      }
    }
  }


  virtual ~ListParameterSetRelationResponse() = default;
};
class ListParameterSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListParameterSetsRequest() {}

  explicit ListParameterSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListParameterSetsRequest() = default;
};
class ListParameterSetsResponseBodyParameterSetsParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<boost::any> value{};

  ListParameterSetsResponseBodyParameterSetsParameters() {}

  explicit ListParameterSetsResponseBodyParameterSetsParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
  }


  virtual ~ListParameterSetsResponseBodyParameterSetsParameters() = default;
};
class ListParameterSetsResponseBodyParameterSetsRelationList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListParameterSetsResponseBodyParameterSetsRelationList() {}

  explicit ListParameterSetsResponseBodyParameterSetsRelationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListParameterSetsResponseBodyParameterSetsRelationList() = default;
};
class ListParameterSetsResponseBodyParameterSets : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parameterSetId{};
  shared_ptr<vector<ListParameterSetsResponseBodyParameterSetsParameters>> parameters{};
  shared_ptr<vector<ListParameterSetsResponseBodyParameterSetsRelationList>> relationList{};

  ListParameterSetsResponseBodyParameterSets() {}

  explicit ListParameterSetsResponseBodyParameterSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (deletionProtection) {
      res["deletionProtection"] = boost::any(*deletionProtection);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameterSetId) {
      res["parameterSetId"] = boost::any(*parameterSetId);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameters"] = boost::any(temp1);
    }
    if (relationList) {
      vector<boost::any> temp1;
      for(auto item1:*relationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relationList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("deletionProtection") != m.end() && !m["deletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletionProtection"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameterSetId") != m.end() && !m["parameterSetId"].empty()) {
      parameterSetId = make_shared<string>(boost::any_cast<string>(m["parameterSetId"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["parameters"].type()) {
        vector<ListParameterSetsResponseBodyParameterSetsParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParameterSetsResponseBodyParameterSetsParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<ListParameterSetsResponseBodyParameterSetsParameters>>(expect1);
      }
    }
    if (m.find("relationList") != m.end() && !m["relationList"].empty()) {
      if (typeid(vector<boost::any>) == m["relationList"].type()) {
        vector<ListParameterSetsResponseBodyParameterSetsRelationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["relationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParameterSetsResponseBodyParameterSetsRelationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationList = make_shared<vector<ListParameterSetsResponseBodyParameterSetsRelationList>>(expect1);
      }
    }
  }


  virtual ~ListParameterSetsResponseBodyParameterSets() = default;
};
class ListParameterSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListParameterSetsResponseBodyParameterSets>> parameterSets{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListParameterSetsResponseBody() {}

  explicit ListParameterSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (parameterSets) {
      vector<boost::any> temp1;
      for(auto item1:*parameterSets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameterSets"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("parameterSets") != m.end() && !m["parameterSets"].empty()) {
      if (typeid(vector<boost::any>) == m["parameterSets"].type()) {
        vector<ListParameterSetsResponseBodyParameterSets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameterSets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParameterSetsResponseBodyParameterSets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterSets = make_shared<vector<ListParameterSetsResponseBodyParameterSets>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListParameterSetsResponseBody() = default;
};
class ListParameterSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListParameterSetsResponseBody> body{};

  ListParameterSetsResponse() {}

  explicit ListParameterSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListParameterSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListParameterSetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListParameterSetsResponse() = default;
};
class ListProjectRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProjectRequestTag() {}

  explicit ListProjectRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListProjectRequestTag() = default;
};
class ListProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<ListProjectRequestTag>> tag{};

  ListProjectRequest() {}

  explicit ListProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<ListProjectRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListProjectRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListProjectRequest() = default;
};
class ListProjectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> tagShrink{};

  ListProjectShrinkRequest() {}

  explicit ListProjectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (tagShrink) {
      res["tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~ListProjectShrinkRequest() = default;
};
class ListProjectResponseBodyProjectsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProjectResponseBodyProjectsTags() {}

  explicit ListProjectResponseBodyProjectsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListProjectResponseBodyProjectsTags() = default;
};
class ListProjectResponseBodyProjects : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<ListProjectResponseBodyProjectsTags>> tags{};
  shared_ptr<long> taskCnt{};

  ListProjectResponseBodyProjects() {}

  explicit ListProjectResponseBodyProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskCnt) {
      res["taskCnt"] = boost::any(*taskCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListProjectResponseBodyProjectsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectResponseBodyProjectsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListProjectResponseBodyProjectsTags>>(expect1);
      }
    }
    if (m.find("taskCnt") != m.end() && !m["taskCnt"].empty()) {
      taskCnt = make_shared<long>(boost::any_cast<long>(m["taskCnt"]));
    }
  }


  virtual ~ListProjectResponseBodyProjects() = default;
};
class ListProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProjectResponseBodyProjects>> projects{};
  shared_ptr<string> requestId{};

  ListProjectResponseBody() {}

  explicit ListProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projects"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projects") != m.end() && !m["projects"].empty()) {
      if (typeid(vector<boost::any>) == m["projects"].type()) {
        vector<ListProjectResponseBodyProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectResponseBodyProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectResponseBodyProjects>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListProjectResponseBody() = default;
};
class ListProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectResponseBody> body{};

  ListProjectResponse() {}

  explicit ListProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectResponse() = default;
};
class ListProjectBuildsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> projectBuildAction{};

  ListProjectBuildsRequest() {}

  explicit ListProjectBuildsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectBuildAction) {
      res["projectBuildAction"] = boost::any(*projectBuildAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("projectBuildAction") != m.end() && !m["projectBuildAction"].empty()) {
      projectBuildAction = make_shared<string>(boost::any_cast<string>(m["projectBuildAction"]));
    }
  }


  virtual ~ListProjectBuildsRequest() = default;
};
class ListProjectBuildsResponseBodyProjectBuilds : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> projectBuildAction{};
  shared_ptr<string> projectBuildId{};
  shared_ptr<long> projectBuildIndex{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> triggerStrategy{};

  ListProjectBuildsResponseBodyProjectBuilds() {}

  explicit ListProjectBuildsResponseBodyProjectBuilds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (projectBuildAction) {
      res["projectBuildAction"] = boost::any(*projectBuildAction);
    }
    if (projectBuildId) {
      res["projectBuildId"] = boost::any(*projectBuildId);
    }
    if (projectBuildIndex) {
      res["projectBuildIndex"] = boost::any(*projectBuildIndex);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("projectBuildAction") != m.end() && !m["projectBuildAction"].empty()) {
      projectBuildAction = make_shared<string>(boost::any_cast<string>(m["projectBuildAction"]));
    }
    if (m.find("projectBuildId") != m.end() && !m["projectBuildId"].empty()) {
      projectBuildId = make_shared<string>(boost::any_cast<string>(m["projectBuildId"]));
    }
    if (m.find("projectBuildIndex") != m.end() && !m["projectBuildIndex"].empty()) {
      projectBuildIndex = make_shared<long>(boost::any_cast<long>(m["projectBuildIndex"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["timestamp"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
  }


  virtual ~ListProjectBuildsResponseBodyProjectBuilds() = default;
};
class ListProjectBuildsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectBuildsResponseBodyProjectBuilds>> projectBuilds{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProjectBuildsResponseBody() {}

  explicit ListProjectBuildsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectBuilds) {
      vector<boost::any> temp1;
      for(auto item1:*projectBuilds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectBuilds"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectBuilds") != m.end() && !m["ProjectBuilds"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectBuilds"].type()) {
        vector<ListProjectBuildsResponseBodyProjectBuilds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectBuilds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectBuildsResponseBodyProjectBuilds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectBuilds = make_shared<vector<ListProjectBuildsResponseBodyProjectBuilds>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListProjectBuildsResponseBody() = default;
};
class ListProjectBuildsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectBuildsResponseBody> body{};

  ListProjectBuildsResponse() {}

  explicit ListProjectBuildsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectBuildsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectBuildsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectBuildsResponse() = default;
};
class ListRabbitmqPublishersRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRabbitmqPublishersRequest() {}

  explicit ListRabbitmqPublishersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListRabbitmqPublishersRequest() = default;
};
class ListRabbitmqPublishersResponseBodyAuthorizations : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> exchangeName{};
  shared_ptr<string> exchangeType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<string> publisherId{};
  shared_ptr<string> userName{};
  shared_ptr<string> virtualHost{};

  ListRabbitmqPublishersResponseBodyAuthorizations() {}

  explicit ListRabbitmqPublishersResponseBodyAuthorizations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (exchangeName) {
      res["exchangeName"] = boost::any(*exchangeName);
    }
    if (exchangeType) {
      res["exchangeType"] = boost::any(*exchangeType);
    }
    if (hostName) {
      res["hostName"] = boost::any(*hostName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (publisherId) {
      res["publisherId"] = boost::any(*publisherId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (virtualHost) {
      res["virtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("exchangeName") != m.end() && !m["exchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["exchangeName"]));
    }
    if (m.find("exchangeType") != m.end() && !m["exchangeType"].empty()) {
      exchangeType = make_shared<string>(boost::any_cast<string>(m["exchangeType"]));
    }
    if (m.find("hostName") != m.end() && !m["hostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["hostName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("publisherId") != m.end() && !m["publisherId"].empty()) {
      publisherId = make_shared<string>(boost::any_cast<string>(m["publisherId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("virtualHost") != m.end() && !m["virtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["virtualHost"]));
    }
  }


  virtual ~ListRabbitmqPublishersResponseBodyAuthorizations() = default;
};
class ListRabbitmqPublishersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRabbitmqPublishersResponseBodyAuthorizations>> authorizations{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListRabbitmqPublishersResponseBody() {}

  explicit ListRabbitmqPublishersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizations) {
      vector<boost::any> temp1;
      for(auto item1:*authorizations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["authorizations"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizations") != m.end() && !m["authorizations"].empty()) {
      if (typeid(vector<boost::any>) == m["authorizations"].type()) {
        vector<ListRabbitmqPublishersResponseBodyAuthorizations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["authorizations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRabbitmqPublishersResponseBodyAuthorizations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizations = make_shared<vector<ListRabbitmqPublishersResponseBodyAuthorizations>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListRabbitmqPublishersResponseBody() = default;
};
class ListRabbitmqPublishersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRabbitmqPublishersResponseBody> body{};

  ListRabbitmqPublishersResponse() {}

  explicit ListRabbitmqPublishersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRabbitmqPublishersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRabbitmqPublishersResponseBody>(model1);
      }
    }
  }


  virtual ~ListRabbitmqPublishersResponse() = default;
};
class ListRamPolicyExportTaskVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListRamPolicyExportTaskVersionsRequest() {}

  explicit ListRamPolicyExportTaskVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListRamPolicyExportTaskVersionsRequest() = default;
};
class ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> ramPolicyExportTaskId{};
  shared_ptr<string> status{};

  ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions() {}

  explicit ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (ramPolicyExportTaskId) {
      res["ramPolicyExportTaskId"] = boost::any(*ramPolicyExportTaskId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("ramPolicyExportTaskId") != m.end() && !m["ramPolicyExportTaskId"].empty()) {
      ramPolicyExportTaskId = make_shared<string>(boost::any_cast<string>(m["ramPolicyExportTaskId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions() = default;
};
class ListRamPolicyExportTaskVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions>> ramPolicyExportTaskVersions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListRamPolicyExportTaskVersionsResponseBody() {}

  explicit ListRamPolicyExportTaskVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (ramPolicyExportTaskVersions) {
      vector<boost::any> temp1;
      for(auto item1:*ramPolicyExportTaskVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ramPolicyExportTaskVersions"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("ramPolicyExportTaskVersions") != m.end() && !m["ramPolicyExportTaskVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["ramPolicyExportTaskVersions"].type()) {
        vector<ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ramPolicyExportTaskVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ramPolicyExportTaskVersions = make_shared<vector<ListRamPolicyExportTaskVersionsResponseBodyRamPolicyExportTaskVersions>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListRamPolicyExportTaskVersionsResponseBody() = default;
};
class ListRamPolicyExportTaskVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRamPolicyExportTaskVersionsResponseBody> body{};

  ListRamPolicyExportTaskVersionsResponse() {}

  explicit ListRamPolicyExportTaskVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRamPolicyExportTaskVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRamPolicyExportTaskVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRamPolicyExportTaskVersionsResponse() = default;
};
class ListRamPolicyExportTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRamPolicyExportTasksRequest() {}

  explicit ListRamPolicyExportTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListRamPolicyExportTasksRequest() = default;
};
class ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> currentPolicyStatus{};
  shared_ptr<string> currentPolicyVersion{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<string> exportTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> ramPolicyExportTaskId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskOutputPath{};

  ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks() {}

  explicit ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (currentPolicyStatus) {
      res["currentPolicyStatus"] = boost::any(*currentPolicyStatus);
    }
    if (currentPolicyVersion) {
      res["currentPolicyVersion"] = boost::any(*currentPolicyVersion);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (exportTime) {
      res["exportTime"] = boost::any(*exportTime);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ramPolicyExportTaskId) {
      res["ramPolicyExportTaskId"] = boost::any(*ramPolicyExportTaskId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskOutputPath) {
      res["taskOutputPath"] = boost::any(*taskOutputPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("currentPolicyStatus") != m.end() && !m["currentPolicyStatus"].empty()) {
      currentPolicyStatus = make_shared<string>(boost::any_cast<string>(m["currentPolicyStatus"]));
    }
    if (m.find("currentPolicyVersion") != m.end() && !m["currentPolicyVersion"].empty()) {
      currentPolicyVersion = make_shared<string>(boost::any_cast<string>(m["currentPolicyVersion"]));
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("exportTime") != m.end() && !m["exportTime"].empty()) {
      exportTime = make_shared<string>(boost::any_cast<string>(m["exportTime"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ramPolicyExportTaskId") != m.end() && !m["ramPolicyExportTaskId"].empty()) {
      ramPolicyExportTaskId = make_shared<string>(boost::any_cast<string>(m["ramPolicyExportTaskId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskOutputPath") != m.end() && !m["taskOutputPath"].empty()) {
      taskOutputPath = make_shared<string>(boost::any_cast<string>(m["taskOutputPath"]));
    }
  }


  virtual ~ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks() = default;
};
class ListRamPolicyExportTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks>> ramPolicyExportTasks{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListRamPolicyExportTasksResponseBody() {}

  explicit ListRamPolicyExportTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (ramPolicyExportTasks) {
      vector<boost::any> temp1;
      for(auto item1:*ramPolicyExportTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ramPolicyExportTasks"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("ramPolicyExportTasks") != m.end() && !m["ramPolicyExportTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["ramPolicyExportTasks"].type()) {
        vector<ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ramPolicyExportTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ramPolicyExportTasks = make_shared<vector<ListRamPolicyExportTasksResponseBodyRamPolicyExportTasks>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListRamPolicyExportTasksResponseBody() = default;
};
class ListRamPolicyExportTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRamPolicyExportTasksResponseBody> body{};

  ListRamPolicyExportTasksResponse() {}

  explicit ListRamPolicyExportTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRamPolicyExportTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRamPolicyExportTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListRamPolicyExportTasksResponse() = default;
};
class ListResourceExportTaskVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> exportVersion{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListResourceExportTaskVersionsRequest() {}

  explicit ListResourceExportTaskVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListResourceExportTaskVersionsRequest() = default;
};
class ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules() {}

  explicit ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules() = default;
};
class ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};

  ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule() {}

  explicit ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
  }


  virtual ~ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule() = default;
};
class ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules() {}

  explicit ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules() = default;
};
class ListResourceExportTaskVersionsResponseBodyExportTasksModules : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> version{};

  ListResourceExportTaskVersionsResponseBodyExportTasksModules() {}

  explicit ListResourceExportTaskVersionsResponseBodyExportTasksModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListResourceExportTaskVersionsResponseBodyExportTasksModules() = default;
};
class ListResourceExportTaskVersionsResponseBodyExportTasksVariables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> properties{};
  shared_ptr<string> resourceType{};

  ListResourceExportTaskVersionsResponseBodyExportTasksVariables() {}

  explicit ListResourceExportTaskVersionsResponseBodyExportTasksVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["properties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      properties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListResourceExportTaskVersionsResponseBodyExportTasksVariables() = default;
};
class ListResourceExportTaskVersionsResponseBodyExportTasks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<vector<ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules>> excludeRules{};
  shared_ptr<string> exportTaskId{};
  shared_ptr<ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule> exportToModule{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> failedReason{};
  shared_ptr<bool> hasDestroy{};
  shared_ptr<vector<ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules>> includeRules{};
  shared_ptr<vector<ListResourceExportTaskVersionsResponseBodyExportTasksModules>> modules{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListResourceExportTaskVersionsResponseBodyExportTasksVariables>> variables{};

  ListResourceExportTaskVersionsResponseBodyExportTasks() {}

  explicit ListResourceExportTaskVersionsResponseBodyExportTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (excludeRules) {
      vector<boost::any> temp1;
      for(auto item1:*excludeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["excludeRules"] = boost::any(temp1);
    }
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (exportToModule) {
      res["exportToModule"] = exportToModule ? boost::any(exportToModule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (failedReason) {
      res["failedReason"] = boost::any(*failedReason);
    }
    if (hasDestroy) {
      res["hasDestroy"] = boost::any(*hasDestroy);
    }
    if (includeRules) {
      vector<boost::any> temp1;
      for(auto item1:*includeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["includeRules"] = boost::any(temp1);
    }
    if (modules) {
      vector<boost::any> temp1;
      for(auto item1:*modules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["modules"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("excludeRules") != m.end() && !m["excludeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["excludeRules"].type()) {
        vector<ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["excludeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        excludeRules = make_shared<vector<ListResourceExportTaskVersionsResponseBodyExportTasksExcludeRules>>(expect1);
      }
    }
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("exportToModule") != m.end() && !m["exportToModule"].empty()) {
      if (typeid(map<string, boost::any>) == m["exportToModule"].type()) {
        ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["exportToModule"]));
        exportToModule = make_shared<ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule>(model1);
      }
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("failedReason") != m.end() && !m["failedReason"].empty()) {
      failedReason = make_shared<string>(boost::any_cast<string>(m["failedReason"]));
    }
    if (m.find("hasDestroy") != m.end() && !m["hasDestroy"].empty()) {
      hasDestroy = make_shared<bool>(boost::any_cast<bool>(m["hasDestroy"]));
    }
    if (m.find("includeRules") != m.end() && !m["includeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["includeRules"].type()) {
        vector<ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["includeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        includeRules = make_shared<vector<ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules>>(expect1);
      }
    }
    if (m.find("modules") != m.end() && !m["modules"].empty()) {
      if (typeid(vector<boost::any>) == m["modules"].type()) {
        vector<ListResourceExportTaskVersionsResponseBodyExportTasksModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["modules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTaskVersionsResponseBodyExportTasksModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modules = make_shared<vector<ListResourceExportTaskVersionsResponseBodyExportTasksModules>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<ListResourceExportTaskVersionsResponseBodyExportTasksVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTaskVersionsResponseBodyExportTasksVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListResourceExportTaskVersionsResponseBodyExportTasksVariables>>(expect1);
      }
    }
  }


  virtual ~ListResourceExportTaskVersionsResponseBodyExportTasks() = default;
};
class ListResourceExportTaskVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceExportTaskVersionsResponseBodyExportTasks>> exportTasks{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListResourceExportTaskVersionsResponseBody() {}

  explicit ListResourceExportTaskVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTasks) {
      vector<boost::any> temp1;
      for(auto item1:*exportTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["exportTasks"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportTasks") != m.end() && !m["exportTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["exportTasks"].type()) {
        vector<ListResourceExportTaskVersionsResponseBodyExportTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["exportTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTaskVersionsResponseBodyExportTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exportTasks = make_shared<vector<ListResourceExportTaskVersionsResponseBodyExportTasks>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListResourceExportTaskVersionsResponseBody() = default;
};
class ListResourceExportTaskVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceExportTaskVersionsResponseBody> body{};

  ListResourceExportTaskVersionsResponse() {}

  explicit ListResourceExportTaskVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceExportTaskVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceExportTaskVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceExportTaskVersionsResponse() = default;
};
class ListResourceExportTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListResourceExportTasksRequest() {}

  explicit ListResourceExportTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListResourceExportTasksRequest() = default;
};
class ListResourceExportTasksResponseBodyExportTasksExcludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  ListResourceExportTasksResponseBodyExportTasksExcludeRules() {}

  explicit ListResourceExportTasksResponseBodyExportTasksExcludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceExportTasksResponseBodyExportTasksExcludeRules() = default;
};
class ListResourceExportTasksResponseBodyExportTasksExportToModule : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};

  ListResourceExportTasksResponseBodyExportTasksExportToModule() {}

  explicit ListResourceExportTasksResponseBodyExportTasksExportToModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
  }


  virtual ~ListResourceExportTasksResponseBodyExportTasksExportToModule() = default;
};
class ListResourceExportTasksResponseBodyExportTasksIncludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  ListResourceExportTasksResponseBodyExportTasksIncludeRules() {}

  explicit ListResourceExportTasksResponseBodyExportTasksIncludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceExportTasksResponseBodyExportTasksIncludeRules() = default;
};
class ListResourceExportTasksResponseBodyExportTasksModules : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> version{};

  ListResourceExportTasksResponseBodyExportTasksModules() {}

  explicit ListResourceExportTasksResponseBodyExportTasksModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListResourceExportTasksResponseBodyExportTasksModules() = default;
};
class ListResourceExportTasksResponseBodyExportTasksVariables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> properties{};
  shared_ptr<string> resourceType{};

  ListResourceExportTasksResponseBodyExportTasksVariables() {}

  explicit ListResourceExportTasksResponseBodyExportTasksVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["properties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      properties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ListResourceExportTasksResponseBodyExportTasksVariables() = default;
};
class ListResourceExportTasksResponseBodyExportTasks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<vector<ListResourceExportTasksResponseBodyExportTasksExcludeRules>> excludeRules{};
  shared_ptr<string> exportStatus{};
  shared_ptr<string> exportTaskId{};
  shared_ptr<ListResourceExportTasksResponseBodyExportTasksExportToModule> exportToModule{};
  shared_ptr<string> exportVersion{};
  shared_ptr<bool> hasDestroy{};
  shared_ptr<vector<ListResourceExportTasksResponseBodyExportTasksIncludeRules>> includeRules{};
  shared_ptr<vector<ListResourceExportTasksResponseBodyExportTasksModules>> modules{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListResourceExportTasksResponseBodyExportTasksVariables>> variables{};

  ListResourceExportTasksResponseBodyExportTasks() {}

  explicit ListResourceExportTasksResponseBodyExportTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (elapsedTime) {
      res["elapsedTime"] = boost::any(*elapsedTime);
    }
    if (excludeRules) {
      vector<boost::any> temp1;
      for(auto item1:*excludeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["excludeRules"] = boost::any(temp1);
    }
    if (exportStatus) {
      res["exportStatus"] = boost::any(*exportStatus);
    }
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (exportToModule) {
      res["exportToModule"] = exportToModule ? boost::any(exportToModule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (hasDestroy) {
      res["hasDestroy"] = boost::any(*hasDestroy);
    }
    if (includeRules) {
      vector<boost::any> temp1;
      for(auto item1:*includeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["includeRules"] = boost::any(temp1);
    }
    if (modules) {
      vector<boost::any> temp1;
      for(auto item1:*modules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["modules"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("elapsedTime") != m.end() && !m["elapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["elapsedTime"]));
    }
    if (m.find("excludeRules") != m.end() && !m["excludeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["excludeRules"].type()) {
        vector<ListResourceExportTasksResponseBodyExportTasksExcludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["excludeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTasksResponseBodyExportTasksExcludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        excludeRules = make_shared<vector<ListResourceExportTasksResponseBodyExportTasksExcludeRules>>(expect1);
      }
    }
    if (m.find("exportStatus") != m.end() && !m["exportStatus"].empty()) {
      exportStatus = make_shared<string>(boost::any_cast<string>(m["exportStatus"]));
    }
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("exportToModule") != m.end() && !m["exportToModule"].empty()) {
      if (typeid(map<string, boost::any>) == m["exportToModule"].type()) {
        ListResourceExportTasksResponseBodyExportTasksExportToModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["exportToModule"]));
        exportToModule = make_shared<ListResourceExportTasksResponseBodyExportTasksExportToModule>(model1);
      }
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("hasDestroy") != m.end() && !m["hasDestroy"].empty()) {
      hasDestroy = make_shared<bool>(boost::any_cast<bool>(m["hasDestroy"]));
    }
    if (m.find("includeRules") != m.end() && !m["includeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["includeRules"].type()) {
        vector<ListResourceExportTasksResponseBodyExportTasksIncludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["includeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTasksResponseBodyExportTasksIncludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        includeRules = make_shared<vector<ListResourceExportTasksResponseBodyExportTasksIncludeRules>>(expect1);
      }
    }
    if (m.find("modules") != m.end() && !m["modules"].empty()) {
      if (typeid(vector<boost::any>) == m["modules"].type()) {
        vector<ListResourceExportTasksResponseBodyExportTasksModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["modules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTasksResponseBodyExportTasksModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modules = make_shared<vector<ListResourceExportTasksResponseBodyExportTasksModules>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<ListResourceExportTasksResponseBodyExportTasksVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTasksResponseBodyExportTasksVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListResourceExportTasksResponseBodyExportTasksVariables>>(expect1);
      }
    }
  }


  virtual ~ListResourceExportTasksResponseBodyExportTasks() = default;
};
class ListResourceExportTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceExportTasksResponseBodyExportTasks>> exportTasks{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListResourceExportTasksResponseBody() {}

  explicit ListResourceExportTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTasks) {
      vector<boost::any> temp1;
      for(auto item1:*exportTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["exportTasks"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportTasks") != m.end() && !m["exportTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["exportTasks"].type()) {
        vector<ListResourceExportTasksResponseBodyExportTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["exportTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExportTasksResponseBodyExportTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exportTasks = make_shared<vector<ListResourceExportTasksResponseBodyExportTasks>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListResourceExportTasksResponseBody() = default;
};
class ListResourceExportTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceExportTasksResponseBody> body{};

  ListResourceExportTasksResponse() {}

  explicit ListResourceExportTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceExportTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceExportTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceExportTasksResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceValue{};
  shared_ptr<string> specType{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (sourceValue) {
      res["sourceValue"] = boost::any(*sourceValue);
    }
    if (specType) {
      res["specType"] = boost::any(*specType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("sourceValue") != m.end() && !m["sourceValue"].empty()) {
      sourceValue = make_shared<string>(boost::any_cast<string>(m["sourceValue"]));
    }
    if (m.find("specType") != m.end() && !m["specType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["specType"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListResourcesResponseBodyResourcesTags() {}

  explicit ListResourcesResponseBodyResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["tagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValue") != m.end() && !m["tagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["tagValue"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesTags() = default;
};
class ListResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> dependsOnResourceIds{};
  shared_ptr<string> productCode{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<map<string, boost::any>> propertyVariables{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListResourcesResponseBodyResourcesTags>> tags{};
  shared_ptr<string> terraformArn{};
  shared_ptr<string> terraformCode{};
  shared_ptr<string> zoneId{};

  ListResourcesResponseBodyResources() {}

  explicit ListResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dependsOnResourceIds) {
      res["dependsOnResourceIds"] = boost::any(*dependsOnResourceIds);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (propertyVariables) {
      res["propertyVariables"] = boost::any(*propertyVariables);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceArn) {
      res["resourceArn"] = boost::any(*resourceArn);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (terraformArn) {
      res["terraformArn"] = boost::any(*terraformArn);
    }
    if (terraformCode) {
      res["terraformCode"] = boost::any(*terraformCode);
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dependsOnResourceIds") != m.end() && !m["dependsOnResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dependsOnResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dependsOnResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependsOnResourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("propertyVariables") != m.end() && !m["propertyVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["propertyVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      propertyVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceArn") != m.end() && !m["resourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["resourceArn"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListResourcesResponseBodyResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListResourcesResponseBodyResourcesTags>>(expect1);
      }
    }
    if (m.find("terraformArn") != m.end() && !m["terraformArn"].empty()) {
      terraformArn = make_shared<string>(boost::any_cast<string>(m["terraformArn"]));
    }
    if (m.find("terraformCode") != m.end() && !m["terraformCode"].empty()) {
      terraformCode = make_shared<string>(boost::any_cast<string>(m["terraformCode"]));
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~ListResourcesResponseBodyResources() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourcesResponseBodyResources>> resources{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesResponseBodyResources>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListTasksRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTasksRequestTag() {}

  explicit ListTasksRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListTasksRequestTag() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeTaskIds{};
  shared_ptr<string> groupId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> moduleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListTasksRequestTag>> tag{};
  shared_ptr<string> taskId{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeTaskIds) {
      res["excludeTaskIds"] = boost::any(*excludeTaskIds);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("excludeTaskIds") != m.end() && !m["excludeTaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeTaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeTaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeTaskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<ListTasksRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTasksRequestTag>>(expect1);
      }
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludeTaskIdsShrink{};
  shared_ptr<string> groupId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> moduleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<string> tagShrink{};
  shared_ptr<string> taskId{};

  ListTasksShrinkRequest() {}

  explicit ListTasksShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeTaskIdsShrink) {
      res["excludeTaskIds"] = boost::any(*excludeTaskIdsShrink);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tagShrink) {
      res["tag"] = boost::any(*tagShrink);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("excludeTaskIds") != m.end() && !m["excludeTaskIds"].empty()) {
      excludeTaskIdsShrink = make_shared<string>(boost::any_cast<string>(m["excludeTaskIds"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListTasksShrinkRequest() = default;
};
class ListTasksResponseBodyTasksGroupInfo : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  ListTasksResponseBodyTasksGroupInfo() {}

  explicit ListTasksResponseBodyTasksGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
  }


  virtual ~ListTasksResponseBodyTasksGroupInfo() = default;
};
class ListTasksResponseBodyTasksTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTasksResponseBodyTasksTags() {}

  explicit ListTasksResponseBodyTasksTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListTasksResponseBodyTasksTags() = default;
};
class ListTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentJobId{};
  shared_ptr<string> currentJobStatus{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<ListTasksResponseBodyTasksGroupInfo> groupInfo{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListTasksResponseBodyTasksTags>> tags{};
  shared_ptr<string> taskId{};

  ListTasksResponseBodyTasks() {}

  explicit ListTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (currentJobId) {
      res["currentJobId"] = boost::any(*currentJobId);
    }
    if (currentJobStatus) {
      res["currentJobStatus"] = boost::any(*currentJobStatus);
    }
    if (deletionProtection) {
      res["deletionProtection"] = boost::any(*deletionProtection);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["moduleName"] = boost::any(*moduleName);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("currentJobId") != m.end() && !m["currentJobId"].empty()) {
      currentJobId = make_shared<string>(boost::any_cast<string>(m["currentJobId"]));
    }
    if (m.find("currentJobStatus") != m.end() && !m["currentJobStatus"].empty()) {
      currentJobStatus = make_shared<string>(boost::any_cast<string>(m["currentJobStatus"]));
    }
    if (m.find("deletionProtection") != m.end() && !m["deletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletionProtection"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        ListTasksResponseBodyTasksGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<ListTasksResponseBodyTasksGroupInfo>(model1);
      }
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleName") != m.end() && !m["moduleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["moduleName"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListTasksResponseBodyTasksTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTasksTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTasksResponseBodyTasksTags>>(expect1);
      }
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListTasksResponseBodyTasks() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tasks"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("tasks") != m.end() && !m["tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["tasks"].type()) {
        vector<ListTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class ListTerraformProviderVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> usage{};

  ListTerraformProviderVersionsRequest() {}

  explicit ListTerraformProviderVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (usage) {
      res["usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["usage"]));
    }
  }


  virtual ~ListTerraformProviderVersionsRequest() = default;
};
class ListTerraformProviderVersionsResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> publishedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  ListTerraformProviderVersionsResponseBodyVersions() {}

  explicit ListTerraformProviderVersionsResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publishedTime) {
      res["publishedTime"] = boost::any(*publishedTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("publishedTime") != m.end() && !m["publishedTime"].empty()) {
      publishedTime = make_shared<string>(boost::any_cast<string>(m["publishedTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListTerraformProviderVersionsResponseBodyVersions() = default;
};
class ListTerraformProviderVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> verisonList{};
  shared_ptr<vector<ListTerraformProviderVersionsResponseBodyVersions>> versions{};

  ListTerraformProviderVersionsResponseBody() {}

  explicit ListTerraformProviderVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (verisonList) {
      res["verisonList"] = boost::any(*verisonList);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("verisonList") != m.end() && !m["verisonList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["verisonList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["verisonList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      verisonList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<ListTerraformProviderVersionsResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTerraformProviderVersionsResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListTerraformProviderVersionsResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~ListTerraformProviderVersionsResponseBody() = default;
};
class ListTerraformProviderVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTerraformProviderVersionsResponseBody> body{};

  ListTerraformProviderVersionsResponse() {}

  explicit ListTerraformProviderVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTerraformProviderVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTerraformProviderVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTerraformProviderVersionsResponse() = default;
};
class OperateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> taskType{};

  OperateJobRequest() {}

  explicit OperateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~OperateJobRequest() = default;
};
class OperateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OperateJobResponseBody() {}

  explicit OperateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~OperateJobResponseBody() = default;
};
class OperateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateJobResponseBody> body{};

  OperateJobResponse() {}

  explicit OperateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateJobResponseBody>(model1);
      }
    }
  }


  virtual ~OperateJobResponse() = default;
};
class RemoveResourceExportTaskVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveResourceExportTaskVersionResponseBody() {}

  explicit RemoveResourceExportTaskVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RemoveResourceExportTaskVersionResponseBody() = default;
};
class RemoveResourceExportTaskVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveResourceExportTaskVersionResponseBody> body{};

  RemoveResourceExportTaskVersionResponse() {}

  explicit RemoveResourceExportTaskVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveResourceExportTaskVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveResourceExportTaskVersionResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveResourceExportTaskVersionResponse() = default;
};
class TagResourcesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTags() {}

  explicit TagResourcesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~TagResourcesRequestTags() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTags>> tags{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceIds) {
      res["resourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceIds") != m.end() && !m["resourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<TagResourcesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<TagResourcesRequestTags>>(expect1);
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
class UpdateAuthorizationAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> dueTime{};
  shared_ptr<string> name{};

  UpdateAuthorizationAttributeRequest() {}

  explicit UpdateAuthorizationAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dueTime) {
      res["dueTime"] = boost::any(*dueTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dueTime") != m.end() && !m["dueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["dueTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateAuthorizationAttributeRequest() = default;
};
class UpdateAuthorizationAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAuthorizationAttributeResponseBody() {}

  explicit UpdateAuthorizationAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateAuthorizationAttributeResponseBody() = default;
};
class UpdateAuthorizationAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAuthorizationAttributeResponseBody> body{};

  UpdateAuthorizationAttributeResponse() {}

  explicit UpdateAuthorizationAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAuthorizationAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuthorizationAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuthorizationAttributeResponse() = default;
};
class UpdateExplorerTaskAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<string> explorerTaskName{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> terraformProviderVersion{};

  UpdateExplorerTaskAttributeRequest() {}

  explicit UpdateExplorerTaskAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (explorerTaskName) {
      res["explorerTaskName"] = boost::any(*explorerTaskName);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("explorerTaskName") != m.end() && !m["explorerTaskName"].empty()) {
      explorerTaskName = make_shared<string>(boost::any_cast<string>(m["explorerTaskName"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
  }


  virtual ~UpdateExplorerTaskAttributeRequest() = default;
};
class UpdateExplorerTaskAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExplorerTaskAttributeResponseBody() {}

  explicit UpdateExplorerTaskAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateExplorerTaskAttributeResponseBody() = default;
};
class UpdateExplorerTaskAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExplorerTaskAttributeResponseBody> body{};

  UpdateExplorerTaskAttributeResponse() {}

  explicit UpdateExplorerTaskAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExplorerTaskAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExplorerTaskAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExplorerTaskAttributeResponse() = default;
};
class UpdateGroupRequestNotifyConfig : public Darabonba::Model {
public:
  shared_ptr<string> notifyPath{};
  shared_ptr<string> notifyType{};

  UpdateGroupRequestNotifyConfig() {}

  explicit UpdateGroupRequestNotifyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyPath) {
      res["notifyPath"] = boost::any(*notifyPath);
    }
    if (notifyType) {
      res["notifyType"] = boost::any(*notifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("notifyPath") != m.end() && !m["notifyPath"].empty()) {
      notifyPath = make_shared<string>(boost::any_cast<string>(m["notifyPath"]));
    }
    if (m.find("notifyType") != m.end() && !m["notifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["notifyType"]));
    }
  }


  virtual ~UpdateGroupRequestNotifyConfig() = default;
};
class UpdateGroupRequestTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> triggerStrategy{};
  shared_ptr<string> triggerValue{};

  UpdateGroupRequestTriggerConfig() {}

  explicit UpdateGroupRequestTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
  }


  virtual ~UpdateGroupRequestTriggerConfig() = default;
};
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoDestroy{};
  shared_ptr<bool> autoTrigger{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> forcedSetting{};
  shared_ptr<string> name{};
  shared_ptr<vector<UpdateGroupRequestNotifyConfig>> notifyConfig{};
  shared_ptr<vector<string>> notifyOperationTypes{};
  shared_ptr<string> ramRole{};
  shared_ptr<vector<string>> reportExportField{};
  shared_ptr<string> reportExportPath{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<vector<UpdateGroupRequestTriggerConfig>> triggerConfig{};
  shared_ptr<vector<string>> triggerResourceType{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (autoTrigger) {
      res["autoTrigger"] = boost::any(*autoTrigger);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (forcedSetting) {
      res["forcedSetting"] = boost::any(*forcedSetting);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (notifyConfig) {
      vector<boost::any> temp1;
      for(auto item1:*notifyConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["notifyConfig"] = boost::any(temp1);
    }
    if (notifyOperationTypes) {
      res["notifyOperationTypes"] = boost::any(*notifyOperationTypes);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (reportExportField) {
      res["reportExportField"] = boost::any(*reportExportField);
    }
    if (reportExportPath) {
      res["reportExportPath"] = boost::any(*reportExportPath);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (triggerConfig) {
      vector<boost::any> temp1;
      for(auto item1:*triggerConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["triggerConfig"] = boost::any(temp1);
    }
    if (triggerResourceType) {
      res["triggerResourceType"] = boost::any(*triggerResourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("autoTrigger") != m.end() && !m["autoTrigger"].empty()) {
      autoTrigger = make_shared<bool>(boost::any_cast<bool>(m["autoTrigger"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("forcedSetting") != m.end() && !m["forcedSetting"].empty()) {
      forcedSetting = make_shared<bool>(boost::any_cast<bool>(m["forcedSetting"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("notifyConfig") != m.end() && !m["notifyConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["notifyConfig"].type()) {
        vector<UpdateGroupRequestNotifyConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["notifyConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateGroupRequestNotifyConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyConfig = make_shared<vector<UpdateGroupRequestNotifyConfig>>(expect1);
      }
    }
    if (m.find("notifyOperationTypes") != m.end() && !m["notifyOperationTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["notifyOperationTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["notifyOperationTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyOperationTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("reportExportField") != m.end() && !m["reportExportField"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["reportExportField"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["reportExportField"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reportExportField = make_shared<vector<string>>(toVec1);
    }
    if (m.find("reportExportPath") != m.end() && !m["reportExportPath"].empty()) {
      reportExportPath = make_shared<string>(boost::any_cast<string>(m["reportExportPath"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["triggerConfig"].type()) {
        vector<UpdateGroupRequestTriggerConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["triggerConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateGroupRequestTriggerConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        triggerConfig = make_shared<vector<UpdateGroupRequestTriggerConfig>>(expect1);
      }
    }
    if (m.find("triggerResourceType") != m.end() && !m["triggerResourceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["triggerResourceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["triggerResourceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      triggerResourceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateGroupResponseBody() {}

  explicit UpdateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateGroupResponseBody() = default;
};
class UpdateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupResponseBody> body{};

  UpdateGroupResponse() {}

  explicit UpdateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupResponse() = default;
};
class UpdateModuleAttributeRequestGroupInfo : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> projectId{};

  UpdateModuleAttributeRequestGroupInfo() {}

  explicit UpdateModuleAttributeRequestGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~UpdateModuleAttributeRequestGroupInfo() = default;
};
class UpdateModuleAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<UpdateModuleAttributeRequestGroupInfo> groupInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};
  shared_ptr<string> versionStrategy{};

  UpdateModuleAttributeRequest() {}

  explicit UpdateModuleAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    if (versionStrategy) {
      res["versionStrategy"] = boost::any(*versionStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        UpdateModuleAttributeRequestGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<UpdateModuleAttributeRequestGroupInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
    if (m.find("versionStrategy") != m.end() && !m["versionStrategy"].empty()) {
      versionStrategy = make_shared<string>(boost::any_cast<string>(m["versionStrategy"]));
    }
  }


  virtual ~UpdateModuleAttributeRequest() = default;
};
class UpdateModuleAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModuleAttributeResponseBody() {}

  explicit UpdateModuleAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateModuleAttributeResponseBody() = default;
};
class UpdateModuleAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModuleAttributeResponseBody> body{};

  UpdateModuleAttributeResponse() {}

  explicit UpdateModuleAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateModuleAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModuleAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModuleAttributeResponse() = default;
};
class UpdateParameterSetAttributeRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  UpdateParameterSetAttributeRequestParameters() {}

  explicit UpdateParameterSetAttributeRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateParameterSetAttributeRequestParameters() = default;
};
class UpdateParameterSetAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<UpdateParameterSetAttributeRequestParameters>> parameters{};

  UpdateParameterSetAttributeRequest() {}

  explicit UpdateParameterSetAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["parameters"].type()) {
        vector<UpdateParameterSetAttributeRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateParameterSetAttributeRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<UpdateParameterSetAttributeRequestParameters>>(expect1);
      }
    }
  }


  virtual ~UpdateParameterSetAttributeRequest() = default;
};
class UpdateParameterSetAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateParameterSetAttributeResponseBody() {}

  explicit UpdateParameterSetAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateParameterSetAttributeResponseBody() = default;
};
class UpdateParameterSetAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateParameterSetAttributeResponseBody> body{};

  UpdateParameterSetAttributeResponse() {}

  explicit UpdateParameterSetAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateParameterSetAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateParameterSetAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateParameterSetAttributeResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateRabbitmqPublisherAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> exchangeName{};
  shared_ptr<string> exchangeType{};
  shared_ptr<string> name{};

  UpdateRabbitmqPublisherAttributeRequest() {}

  explicit UpdateRabbitmqPublisherAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (exchangeName) {
      res["exchangeName"] = boost::any(*exchangeName);
    }
    if (exchangeType) {
      res["exchangeType"] = boost::any(*exchangeType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("exchangeName") != m.end() && !m["exchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["exchangeName"]));
    }
    if (m.find("exchangeType") != m.end() && !m["exchangeType"].empty()) {
      exchangeType = make_shared<string>(boost::any_cast<string>(m["exchangeType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateRabbitmqPublisherAttributeRequest() = default;
};
class UpdateRabbitmqPublisherAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRabbitmqPublisherAttributeResponseBody() {}

  explicit UpdateRabbitmqPublisherAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateRabbitmqPublisherAttributeResponseBody() = default;
};
class UpdateRabbitmqPublisherAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRabbitmqPublisherAttributeResponseBody> body{};

  UpdateRabbitmqPublisherAttributeResponse() {}

  explicit UpdateRabbitmqPublisherAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRabbitmqPublisherAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRabbitmqPublisherAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRabbitmqPublisherAttributeResponse() = default;
};
class UpdateRamPolicyExportTaskAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> authorizationAccountIds{};
  shared_ptr<vector<string>> authorizationActions{};
  shared_ptr<vector<string>> authorizationRegionIds{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> triggerStrategy{};

  UpdateRamPolicyExportTaskAttributeRequest() {}

  explicit UpdateRamPolicyExportTaskAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationAccountIds) {
      res["authorizationAccountIds"] = boost::any(*authorizationAccountIds);
    }
    if (authorizationActions) {
      res["authorizationActions"] = boost::any(*authorizationActions);
    }
    if (authorizationRegionIds) {
      res["authorizationRegionIds"] = boost::any(*authorizationRegionIds);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizationAccountIds") != m.end() && !m["authorizationAccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationAccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationAccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      authorizationAccountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("authorizationActions") != m.end() && !m["authorizationActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authorizationRegionIds") != m.end() && !m["authorizationRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorizationRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorizationRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
  }


  virtual ~UpdateRamPolicyExportTaskAttributeRequest() = default;
};
class UpdateRamPolicyExportTaskAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRamPolicyExportTaskAttributeResponseBody() {}

  explicit UpdateRamPolicyExportTaskAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateRamPolicyExportTaskAttributeResponseBody() = default;
};
class UpdateRamPolicyExportTaskAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRamPolicyExportTaskAttributeResponseBody> body{};

  UpdateRamPolicyExportTaskAttributeResponse() {}

  explicit UpdateRamPolicyExportTaskAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRamPolicyExportTaskAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRamPolicyExportTaskAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRamPolicyExportTaskAttributeResponse() = default;
};
class UpdateResourceExportTaskAttributeRequestExcludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  UpdateResourceExportTaskAttributeRequestExcludeRules() {}

  explicit UpdateResourceExportTaskAttributeRequestExcludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateResourceExportTaskAttributeRequestExcludeRules() = default;
};
class UpdateResourceExportTaskAttributeRequestExportToModule : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> statePath{};

  UpdateResourceExportTaskAttributeRequestExportToModule() {}

  explicit UpdateResourceExportTaskAttributeRequestExportToModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (sourcePath) {
      res["sourcePath"] = boost::any(*sourcePath);
    }
    if (statePath) {
      res["statePath"] = boost::any(*statePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("sourcePath") != m.end() && !m["sourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["sourcePath"]));
    }
    if (m.find("statePath") != m.end() && !m["statePath"].empty()) {
      statePath = make_shared<string>(boost::any_cast<string>(m["statePath"]));
    }
  }


  virtual ~UpdateResourceExportTaskAttributeRequestExportToModule() = default;
};
class UpdateResourceExportTaskAttributeRequestIncludeRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  UpdateResourceExportTaskAttributeRequestIncludeRules() {}

  explicit UpdateResourceExportTaskAttributeRequestIncludeRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateResourceExportTaskAttributeRequestIncludeRules() = default;
};
class UpdateResourceExportTaskAttributeRequestVariables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> properties{};
  shared_ptr<string> resourceType{};

  UpdateResourceExportTaskAttributeRequestVariables() {}

  explicit UpdateResourceExportTaskAttributeRequestVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["properties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      properties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~UpdateResourceExportTaskAttributeRequestVariables() = default;
};
class UpdateResourceExportTaskAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configPath{};
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateResourceExportTaskAttributeRequestExcludeRules>> excludeRules{};
  shared_ptr<UpdateResourceExportTaskAttributeRequestExportToModule> exportToModule{};
  shared_ptr<vector<UpdateResourceExportTaskAttributeRequestIncludeRules>> includeRules{};
  shared_ptr<string> name{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> terraformProviderVersion{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};
  shared_ptr<vector<UpdateResourceExportTaskAttributeRequestVariables>> variables{};

  UpdateResourceExportTaskAttributeRequest() {}

  explicit UpdateResourceExportTaskAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (configPath) {
      res["configPath"] = boost::any(*configPath);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (excludeRules) {
      vector<boost::any> temp1;
      for(auto item1:*excludeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["excludeRules"] = boost::any(temp1);
    }
    if (exportToModule) {
      res["exportToModule"] = exportToModule ? boost::any(exportToModule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (includeRules) {
      vector<boost::any> temp1;
      for(auto item1:*includeRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["includeRules"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (terraformProviderVersion) {
      res["terraformProviderVersion"] = boost::any(*terraformProviderVersion);
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("configPath") != m.end() && !m["configPath"].empty()) {
      configPath = make_shared<string>(boost::any_cast<string>(m["configPath"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("excludeRules") != m.end() && !m["excludeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["excludeRules"].type()) {
        vector<UpdateResourceExportTaskAttributeRequestExcludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["excludeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateResourceExportTaskAttributeRequestExcludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        excludeRules = make_shared<vector<UpdateResourceExportTaskAttributeRequestExcludeRules>>(expect1);
      }
    }
    if (m.find("exportToModule") != m.end() && !m["exportToModule"].empty()) {
      if (typeid(map<string, boost::any>) == m["exportToModule"].type()) {
        UpdateResourceExportTaskAttributeRequestExportToModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["exportToModule"]));
        exportToModule = make_shared<UpdateResourceExportTaskAttributeRequestExportToModule>(model1);
      }
    }
    if (m.find("includeRules") != m.end() && !m["includeRules"].empty()) {
      if (typeid(vector<boost::any>) == m["includeRules"].type()) {
        vector<UpdateResourceExportTaskAttributeRequestIncludeRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["includeRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateResourceExportTaskAttributeRequestIncludeRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        includeRules = make_shared<vector<UpdateResourceExportTaskAttributeRequestIncludeRules>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("terraformProviderVersion") != m.end() && !m["terraformProviderVersion"].empty()) {
      terraformProviderVersion = make_shared<string>(boost::any_cast<string>(m["terraformProviderVersion"]));
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<UpdateResourceExportTaskAttributeRequestVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateResourceExportTaskAttributeRequestVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<UpdateResourceExportTaskAttributeRequestVariables>>(expect1);
      }
    }
  }


  virtual ~UpdateResourceExportTaskAttributeRequest() = default;
};
class UpdateResourceExportTaskAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> exportVersion{};
  shared_ptr<string> requestId{};

  UpdateResourceExportTaskAttributeResponseBody() {}

  explicit UpdateResourceExportTaskAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["exportTaskId"] = boost::any(*exportTaskId);
    }
    if (exportVersion) {
      res["exportVersion"] = boost::any(*exportVersion);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("exportTaskId") != m.end() && !m["exportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["exportTaskId"]));
    }
    if (m.find("exportVersion") != m.end() && !m["exportVersion"].empty()) {
      exportVersion = make_shared<string>(boost::any_cast<string>(m["exportVersion"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateResourceExportTaskAttributeResponseBody() = default;
};
class UpdateResourceExportTaskAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceExportTaskAttributeResponseBody> body{};

  UpdateResourceExportTaskAttributeResponse() {}

  explicit UpdateResourceExportTaskAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceExportTaskAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceExportTaskAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceExportTaskAttributeResponse() = default;
};
class UpdateTaskAttributeRequestGroupInfo : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> projectId{};

  UpdateTaskAttributeRequestGroupInfo() {}

  explicit UpdateTaskAttributeRequestGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~UpdateTaskAttributeRequestGroupInfo() = default;
};
class UpdateTaskAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<bool> autoDestroy{};
  shared_ptr<string> description{};
  shared_ptr<UpdateTaskAttributeRequestGroupInfo> groupInfo{};
  shared_ptr<bool> initModuleState{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<vector<string>> protectionStrategy{};
  shared_ptr<string> ramRole{};
  shared_ptr<bool> skipPropertyValidation{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};
  shared_ptr<string> triggerValue{};

  UpdateTaskAttributeRequest() {}

  explicit UpdateTaskAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (autoDestroy) {
      res["autoDestroy"] = boost::any(*autoDestroy);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initModuleState) {
      res["initModuleState"] = boost::any(*initModuleState);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (protectionStrategy) {
      res["protectionStrategy"] = boost::any(*protectionStrategy);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (skipPropertyValidation) {
      res["skipPropertyValidation"] = boost::any(*skipPropertyValidation);
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    if (triggerValue) {
      res["triggerValue"] = boost::any(*triggerValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("autoDestroy") != m.end() && !m["autoDestroy"].empty()) {
      autoDestroy = make_shared<bool>(boost::any_cast<bool>(m["autoDestroy"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        UpdateTaskAttributeRequestGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<UpdateTaskAttributeRequestGroupInfo>(model1);
      }
    }
    if (m.find("initModuleState") != m.end() && !m["initModuleState"].empty()) {
      initModuleState = make_shared<bool>(boost::any_cast<bool>(m["initModuleState"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("protectionStrategy") != m.end() && !m["protectionStrategy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protectionStrategy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protectionStrategy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protectionStrategy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("skipPropertyValidation") != m.end() && !m["skipPropertyValidation"].empty()) {
      skipPropertyValidation = make_shared<bool>(boost::any_cast<bool>(m["skipPropertyValidation"]));
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
    if (m.find("triggerValue") != m.end() && !m["triggerValue"].empty()) {
      triggerValue = make_shared<string>(boost::any_cast<string>(m["triggerValue"]));
    }
  }


  virtual ~UpdateTaskAttributeRequest() = default;
};
class UpdateTaskAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTaskAttributeResponseBody() {}

  explicit UpdateTaskAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateTaskAttributeResponseBody() = default;
};
class UpdateTaskAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTaskAttributeResponseBody> body{};

  UpdateTaskAttributeResponse() {}

  explicit UpdateTaskAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTaskAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTaskAttributeResponse() = default;
};
class UpdateTaskPolicyRequestTaskPolicies : public Darabonba::Model {
public:
  shared_ptr<string> priority{};
  shared_ptr<string> taskId{};
  shared_ptr<string> type{};

  UpdateTaskPolicyRequestTaskPolicies() {}

  explicit UpdateTaskPolicyRequestTaskPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["priority"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateTaskPolicyRequestTaskPolicies() = default;
};
class UpdateTaskPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<UpdateTaskPolicyRequestTaskPolicies>> taskPolicies{};

  UpdateTaskPolicyRequest() {}

  explicit UpdateTaskPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (taskPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*taskPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("taskPolicies") != m.end() && !m["taskPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["taskPolicies"].type()) {
        vector<UpdateTaskPolicyRequestTaskPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTaskPolicyRequestTaskPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskPolicies = make_shared<vector<UpdateTaskPolicyRequestTaskPolicies>>(expect1);
      }
    }
  }


  virtual ~UpdateTaskPolicyRequest() = default;
};
class UpdateTaskPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTaskPolicyResponseBody() {}

  explicit UpdateTaskPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateTaskPolicyResponseBody() = default;
};
class UpdateTaskPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTaskPolicyResponseBody> body{};

  UpdateTaskPolicyResponse() {}

  explicit UpdateTaskPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTaskPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTaskPolicyResponse() = default;
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
  AssociateGroupResponse associateGroupWithOptions(shared_ptr<string> groupId,
                                                   shared_ptr<AssociateGroupRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateGroupResponse associateGroup(shared_ptr<string> groupId, shared_ptr<AssociateGroupRequest> request);
  AssociateParameterSetResponse associateParameterSetWithOptions(shared_ptr<AssociateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateParameterSetResponse associateParameterSet(shared_ptr<AssociateParameterSetRequest> request);
  AttachRabbitmqPublisherResponse attachRabbitmqPublisherWithOptions(shared_ptr<string> publisherId,
                                                                     shared_ptr<AttachRabbitmqPublisherRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachRabbitmqPublisherResponse attachRabbitmqPublisher(shared_ptr<string> publisherId, shared_ptr<AttachRabbitmqPublisherRequest> request);
  CancelProjectBuildResponse cancelProjectBuildWithOptions(shared_ptr<string> projectId,
                                                           shared_ptr<string> projectBuildId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelProjectBuildResponse cancelProjectBuild(shared_ptr<string> projectId, shared_ptr<string> projectBuildId);
  CancelRamPolicyExportTaskResponse cancelRamPolicyExportTaskWithOptions(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRamPolicyExportTaskResponse cancelRamPolicyExportTask(shared_ptr<string> ramPolicyExportTaskId);
  CancelResourceExportTaskResponse cancelResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                       shared_ptr<CancelResourceExportTaskRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelResourceExportTaskResponse cancelResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<CancelResourceExportTaskRequest> request);
  CheckResourceNameResponse checkResourceNameWithOptions(shared_ptr<CheckResourceNameRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckResourceNameResponse checkResourceName(shared_ptr<CheckResourceNameRequest> request);
  CloneGroupResponse cloneGroupWithOptions(shared_ptr<string> groupId,
                                           shared_ptr<CloneGroupRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneGroupResponse cloneGroup(shared_ptr<string> groupId, shared_ptr<CloneGroupRequest> request);
  CloneModuleResponse cloneModuleWithOptions(shared_ptr<CloneModuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneModuleResponse cloneModule(shared_ptr<CloneModuleRequest> request);
  CreateAuthorizationResponse createAuthorizationWithOptions(shared_ptr<CreateAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthorizationResponse createAuthorization(shared_ptr<CreateAuthorizationRequest> request);
  CreateExplorerTaskResponse createExplorerTaskWithOptions(shared_ptr<CreateExplorerTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExplorerTaskResponse createExplorerTask(shared_ptr<CreateExplorerTaskRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateJobResponse createJobWithOptions(shared_ptr<string> taskId,
                                         shared_ptr<CreateJobRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<string> taskId, shared_ptr<CreateJobRequest> request);
  CreateModuleResponse createModuleWithOptions(shared_ptr<CreateModuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModuleResponse createModule(shared_ptr<CreateModuleRequest> request);
  CreateModuleVersionResponse createModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                             shared_ptr<CreateModuleVersionRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModuleVersionResponse createModuleVersion(shared_ptr<string> moduleId, shared_ptr<CreateModuleVersionRequest> request);
  CreateParameterSetResponse createParameterSetWithOptions(shared_ptr<CreateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateParameterSetResponse createParameterSet(shared_ptr<CreateParameterSetRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateProjectBuildResponse createProjectBuildWithOptions(shared_ptr<string> projectId,
                                                           shared_ptr<CreateProjectBuildRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectBuildResponse createProjectBuild(shared_ptr<string> projectId, shared_ptr<CreateProjectBuildRequest> request);
  CreateRabbitmqPublisherResponse createRabbitmqPublisherWithOptions(shared_ptr<CreateRabbitmqPublisherRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRabbitmqPublisherResponse createRabbitmqPublisher(shared_ptr<CreateRabbitmqPublisherRequest> request);
  CreateRamPolicyExportTaskResponse createRamPolicyExportTaskWithOptions(shared_ptr<CreateRamPolicyExportTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRamPolicyExportTaskResponse createRamPolicyExportTask(shared_ptr<CreateRamPolicyExportTaskRequest> request);
  CreateResourceExportTaskResponse createResourceExportTaskWithOptions(shared_ptr<CreateResourceExportTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceExportTaskResponse createResourceExportTask(shared_ptr<CreateResourceExportTaskRequest> request);
  CreateTaskResponse createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<CreateTaskRequest> request);
  DeleteAuthorizationResponse deleteAuthorizationWithOptions(shared_ptr<string> authorizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAuthorizationResponse deleteAuthorization(shared_ptr<string> authorizationId);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<string> groupId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<string> groupId);
  DeleteModuleResponse deleteModuleWithOptions(shared_ptr<string> moduleId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModuleResponse deleteModule(shared_ptr<string> moduleId);
  DeleteParameterSetResponse deleteParameterSetWithOptions(shared_ptr<string> parameterSetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteParameterSetResponse deleteParameterSet(shared_ptr<string> parameterSetId);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> projectId);
  DeleteRabbitmqPublisherResponse deleteRabbitmqPublisherWithOptions(shared_ptr<string> publisherId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRabbitmqPublisherResponse deleteRabbitmqPublisher(shared_ptr<string> publisherId);
  DeleteRamPolicyExportTaskResponse deleteRamPolicyExportTaskWithOptions(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRamPolicyExportTaskResponse deleteRamPolicyExportTask(shared_ptr<string> ramPolicyExportTaskId);
  DeleteRamPolicyExportTaskVersionResponse deleteRamPolicyExportTaskVersionWithOptions(shared_ptr<string> ramPolicyExportTaskId,
                                                                                       shared_ptr<string> exportVersion,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRamPolicyExportTaskVersionResponse deleteRamPolicyExportTaskVersion(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<string> exportVersion);
  DeleteResourceExportTaskResponse deleteResourceExportTaskWithOptions(shared_ptr<string> exportTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceExportTaskResponse deleteResourceExportTask(shared_ptr<string> exportTaskId);
  DeleteSceneTestingTaskResponse deleteSceneTestingTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSceneTestingTaskResponse deleteSceneTestingTask(shared_ptr<string> taskId);
  DeleteTaskResponse deleteTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTaskResponse deleteTask(shared_ptr<string> taskId);
  DetachRabbitmqPublisherResponse detachRabbitmqPublisherWithOptions(shared_ptr<string> publisherId,
                                                                     shared_ptr<DetachRabbitmqPublisherRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachRabbitmqPublisherResponse detachRabbitmqPublisher(shared_ptr<string> publisherId, shared_ptr<DetachRabbitmqPublisherRequest> request);
  DissociateGroupResponse dissociateGroupWithOptions(shared_ptr<string> projectId,
                                                     shared_ptr<string> groupId,
                                                     shared_ptr<DissociateGroupRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateGroupResponse dissociateGroup(shared_ptr<string> projectId, shared_ptr<string> groupId, shared_ptr<DissociateGroupRequest> request);
  DissociateParameterSetResponse dissociateParameterSetWithOptions(shared_ptr<DissociateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateParameterSetResponse dissociateParameterSet(shared_ptr<DissociateParameterSetRequest> request);
  ExecuteRamPolicyExportTaskResponse executeRamPolicyExportTaskWithOptions(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteRamPolicyExportTaskResponse executeRamPolicyExportTask(shared_ptr<string> ramPolicyExportTaskId);
  ExecuteResourceExportTaskResponse executeResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                         shared_ptr<ExecuteResourceExportTaskRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteResourceExportTaskResponse executeResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<ExecuteResourceExportTaskRequest> request);
  GetExplorerTaskResponse getExplorerTaskWithOptions(shared_ptr<string> explorerTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExplorerTaskResponse getExplorerTask(shared_ptr<string> explorerTaskId);
  GetGroupResponse getGroupWithOptions(shared_ptr<string> groupId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<string> groupId);
  GetJobResponse getJobWithOptions(shared_ptr<string> taskId,
                                   shared_ptr<string> jobId,
                                   shared_ptr<GetJobRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<string> taskId, shared_ptr<string> jobId, shared_ptr<GetJobRequest> request);
  GetModuleResponse getModuleWithOptions(shared_ptr<string> moduleId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModuleResponse getModule(shared_ptr<string> moduleId);
  GetModuleVersionResponse getModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                       shared_ptr<string> moduleVersion,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModuleVersionResponse getModuleVersion(shared_ptr<string> moduleId, shared_ptr<string> moduleVersion);
  GetParameterSetResponse getParameterSetWithOptions(shared_ptr<string> parameterSetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParameterSetResponse getParameterSet(shared_ptr<string> parameterSetId);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> projectId);
  GetProjectBuildContextResponse getProjectBuildContextWithOptions(shared_ptr<string> projectId,
                                                                   shared_ptr<string> projectBuildId,
                                                                   shared_ptr<GetProjectBuildContextRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectBuildContextResponse getProjectBuildContext(shared_ptr<string> projectId, shared_ptr<string> projectBuildId, shared_ptr<GetProjectBuildContextRequest> request);
  GetRabbitmqPublisherResponse getRabbitmqPublisherWithOptions(shared_ptr<string> publisherId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRabbitmqPublisherResponse getRabbitmqPublisher(shared_ptr<string> publisherId);
  GetRamPolicyExportTaskResponse getRamPolicyExportTaskWithOptions(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRamPolicyExportTaskResponse getRamPolicyExportTask(shared_ptr<string> ramPolicyExportTaskId);
  GetRamPolicyExportTaskVersionResponse getRamPolicyExportTaskVersionWithOptions(shared_ptr<string> ramPolicyExportTaskId,
                                                                                 shared_ptr<string> exportVersion,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRamPolicyExportTaskVersionResponse getRamPolicyExportTaskVersion(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<string> exportVersion);
  GetResourceExportTaskResponse getResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                 shared_ptr<GetResourceExportTaskRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceExportTaskResponse getResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<GetResourceExportTaskRequest> request);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> taskId);
  GetTaskPolicyResponse getTaskPolicyWithOptions(shared_ptr<string> groupId,
                                                 shared_ptr<GetTaskPolicyRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskPolicyResponse getTaskPolicy(shared_ptr<string> groupId, shared_ptr<GetTaskPolicyRequest> request);
  ListAuthorizationsResponse listAuthorizationsWithOptions(shared_ptr<ListAuthorizationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthorizationsResponse listAuthorizations(shared_ptr<ListAuthorizationsRequest> request);
  ListAvailableTerraformVersionsResponse listAvailableTerraformVersionsWithOptions(shared_ptr<ListAvailableTerraformVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableTerraformVersionsResponse listAvailableTerraformVersions(shared_ptr<ListAvailableTerraformVersionsRequest> request);
  ListExplorerTasksResponse listExplorerTasksWithOptions(shared_ptr<string> explorerTaskId,
                                                         shared_ptr<ListExplorerTasksRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExplorerTasksResponse listExplorerTasks(shared_ptr<string> explorerTaskId, shared_ptr<ListExplorerTasksRequest> request);
  ListGroupResponse listGroupWithOptions(shared_ptr<ListGroupRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupResponse listGroup(shared_ptr<ListGroupRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<string> taskId,
                                       shared_ptr<ListJobsRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<string> taskId, shared_ptr<ListJobsRequest> request);
  ListModuleVersionResponse listModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                         shared_ptr<ListModuleVersionRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModuleVersionResponse listModuleVersion(shared_ptr<string> moduleId, shared_ptr<ListModuleVersionRequest> request);
  ListModulesResponse listModulesWithOptions(shared_ptr<ListModulesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModulesResponse listModules(shared_ptr<ListModulesRequest> request);
  ListParameterSetRelationResponse listParameterSetRelationWithOptions(shared_ptr<ListParameterSetRelationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParameterSetRelationResponse listParameterSetRelation(shared_ptr<ListParameterSetRelationRequest> request);
  ListParameterSetsResponse listParameterSetsWithOptions(shared_ptr<ListParameterSetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParameterSetsResponse listParameterSets(shared_ptr<ListParameterSetsRequest> request);
  ListProjectResponse listProjectWithOptions(shared_ptr<ListProjectRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectResponse listProject(shared_ptr<ListProjectRequest> request);
  ListProjectBuildsResponse listProjectBuildsWithOptions(shared_ptr<string> projectId,
                                                         shared_ptr<ListProjectBuildsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectBuildsResponse listProjectBuilds(shared_ptr<string> projectId, shared_ptr<ListProjectBuildsRequest> request);
  ListRabbitmqPublishersResponse listRabbitmqPublishersWithOptions(shared_ptr<ListRabbitmqPublishersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRabbitmqPublishersResponse listRabbitmqPublishers(shared_ptr<ListRabbitmqPublishersRequest> request);
  ListRamPolicyExportTaskVersionsResponse listRamPolicyExportTaskVersionsWithOptions(shared_ptr<string> ramPolicyExportTaskId,
                                                                                     shared_ptr<ListRamPolicyExportTaskVersionsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRamPolicyExportTaskVersionsResponse listRamPolicyExportTaskVersions(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<ListRamPolicyExportTaskVersionsRequest> request);
  ListRamPolicyExportTasksResponse listRamPolicyExportTasksWithOptions(shared_ptr<ListRamPolicyExportTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRamPolicyExportTasksResponse listRamPolicyExportTasks(shared_ptr<ListRamPolicyExportTasksRequest> request);
  ListResourceExportTaskVersionsResponse listResourceExportTaskVersionsWithOptions(shared_ptr<string> exportTaskId,
                                                                                   shared_ptr<ListResourceExportTaskVersionsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceExportTaskVersionsResponse listResourceExportTaskVersions(shared_ptr<string> exportTaskId, shared_ptr<ListResourceExportTaskVersionsRequest> request);
  ListResourceExportTasksResponse listResourceExportTasksWithOptions(shared_ptr<ListResourceExportTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceExportTasksResponse listResourceExportTasks(shared_ptr<ListResourceExportTasksRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  ListTerraformProviderVersionsResponse listTerraformProviderVersionsWithOptions(shared_ptr<ListTerraformProviderVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTerraformProviderVersionsResponse listTerraformProviderVersions(shared_ptr<ListTerraformProviderVersionsRequest> request);
  OperateJobResponse operateJobWithOptions(shared_ptr<string> taskId,
                                           shared_ptr<string> jobId,
                                           shared_ptr<string> operationType,
                                           shared_ptr<OperateJobRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateJobResponse operateJob(shared_ptr<string> taskId,
                                shared_ptr<string> jobId,
                                shared_ptr<string> operationType,
                                shared_ptr<OperateJobRequest> request);
  RemoveResourceExportTaskVersionResponse removeResourceExportTaskVersionWithOptions(shared_ptr<string> exportTaskId,
                                                                                     shared_ptr<string> exportVersion,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveResourceExportTaskVersionResponse removeResourceExportTaskVersion(shared_ptr<string> exportTaskId, shared_ptr<string> exportVersion);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UpdateAuthorizationAttributeResponse updateAuthorizationAttributeWithOptions(shared_ptr<string> authorizationId,
                                                                               shared_ptr<UpdateAuthorizationAttributeRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuthorizationAttributeResponse updateAuthorizationAttribute(shared_ptr<string> authorizationId, shared_ptr<UpdateAuthorizationAttributeRequest> request);
  UpdateExplorerTaskAttributeResponse updateExplorerTaskAttributeWithOptions(shared_ptr<string> explorerTaskId,
                                                                             shared_ptr<UpdateExplorerTaskAttributeRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExplorerTaskAttributeResponse updateExplorerTaskAttribute(shared_ptr<string> explorerTaskId, shared_ptr<UpdateExplorerTaskAttributeRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<string> groupId,
                                             shared_ptr<UpdateGroupRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<string> groupId, shared_ptr<UpdateGroupRequest> request);
  UpdateModuleAttributeResponse updateModuleAttributeWithOptions(shared_ptr<string> moduleId,
                                                                 shared_ptr<UpdateModuleAttributeRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModuleAttributeResponse updateModuleAttribute(shared_ptr<string> moduleId, shared_ptr<UpdateModuleAttributeRequest> request);
  UpdateParameterSetAttributeResponse updateParameterSetAttributeWithOptions(shared_ptr<string> parameterSetId,
                                                                             shared_ptr<UpdateParameterSetAttributeRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateParameterSetAttributeResponse updateParameterSetAttribute(shared_ptr<string> parameterSetId, shared_ptr<UpdateParameterSetAttributeRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> projectId,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> projectId, shared_ptr<UpdateProjectRequest> request);
  UpdateRabbitmqPublisherAttributeResponse updateRabbitmqPublisherAttributeWithOptions(shared_ptr<string> publisherId,
                                                                                       shared_ptr<UpdateRabbitmqPublisherAttributeRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRabbitmqPublisherAttributeResponse updateRabbitmqPublisherAttribute(shared_ptr<string> publisherId, shared_ptr<UpdateRabbitmqPublisherAttributeRequest> request);
  UpdateRamPolicyExportTaskAttributeResponse updateRamPolicyExportTaskAttributeWithOptions(shared_ptr<string> ramPolicyExportTaskId,
                                                                                           shared_ptr<UpdateRamPolicyExportTaskAttributeRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRamPolicyExportTaskAttributeResponse updateRamPolicyExportTaskAttribute(shared_ptr<string> ramPolicyExportTaskId, shared_ptr<UpdateRamPolicyExportTaskAttributeRequest> request);
  UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttributeWithOptions(shared_ptr<string> exportTaskId,
                                                                                         shared_ptr<UpdateResourceExportTaskAttributeRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttribute(shared_ptr<string> exportTaskId, shared_ptr<UpdateResourceExportTaskAttributeRequest> request);
  UpdateTaskAttributeResponse updateTaskAttributeWithOptions(shared_ptr<string> taskId,
                                                             shared_ptr<UpdateTaskAttributeRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskAttributeResponse updateTaskAttribute(shared_ptr<string> taskId, shared_ptr<UpdateTaskAttributeRequest> request);
  UpdateTaskPolicyResponse updateTaskPolicyWithOptions(shared_ptr<string> groupId,
                                                       shared_ptr<UpdateTaskPolicyRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskPolicyResponse updateTaskPolicy(shared_ptr<string> groupId, shared_ptr<UpdateTaskPolicyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IaCService20210806

#endif
