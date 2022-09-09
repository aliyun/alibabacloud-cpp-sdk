// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IACSERVICE20210806_H_
#define ALIBABACLOUD_IACSERVICE20210806_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
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
  shared_ptr<string> timeStamps{};
  shared_ptr<string> jobResult{};

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
    if (timeStamps) {
      res["timeStamps"] = boost::any(*timeStamps);
    }
    if (jobResult) {
      res["jobResult"] = boost::any(*jobResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("timeStamps") != m.end() && !m["timeStamps"].empty()) {
      timeStamps = make_shared<string>(boost::any_cast<string>(m["timeStamps"]));
    }
    if (m.find("jobResult") != m.end() && !m["jobResult"].empty()) {
      jobResult = make_shared<string>(boost::any_cast<string>(m["jobResult"]));
    }
  }


  virtual ~JobStatusDetailValue() = default;
};
class ProjectBuildConfigTaskPoliciesValue : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<long> priority{};
  shared_ptr<bool> destroyAfterExecution{};

  ProjectBuildConfigTaskPoliciesValue() {}

  explicit ProjectBuildConfigTaskPoliciesValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (destroyAfterExecution) {
      res["destroyAfterExecution"] = boost::any(*destroyAfterExecution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["priority"]));
    }
    if (m.find("destroyAfterExecution") != m.end() && !m["destroyAfterExecution"].empty()) {
      destroyAfterExecution = make_shared<bool>(boost::any_cast<bool>(m["destroyAfterExecution"]));
    }
  }


  virtual ~ProjectBuildConfigTaskPoliciesValue() = default;
};
class JobsStatusDetailValue : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> timeStamps{};
  shared_ptr<string> jobResult{};

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
    if (timeStamps) {
      res["timeStamps"] = boost::any(*timeStamps);
    }
    if (jobResult) {
      res["jobResult"] = boost::any(*jobResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("timeStamps") != m.end() && !m["timeStamps"].empty()) {
      timeStamps = make_shared<string>(boost::any_cast<string>(m["timeStamps"]));
    }
    if (m.find("jobResult") != m.end() && !m["jobResult"].empty()) {
      jobResult = make_shared<string>(boost::any_cast<string>(m["jobResult"]));
    }
  }


  virtual ~JobsStatusDetailValue() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class AssociateTaskGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> taskIds{};

  AssociateTaskGroupRequest() {}

  explicit AssociateTaskGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskIds) {
      res["taskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~AssociateTaskGroupRequest() = default;
};
class AssociateTaskGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateTaskGroupResponseBody() {}

  explicit AssociateTaskGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateTaskGroupResponseBody() = default;
};
class AssociateTaskGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateTaskGroupResponseBody> body{};

  AssociateTaskGroupResponse() {}

  explicit AssociateTaskGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        AssociateTaskGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateTaskGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateTaskGroupResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<string> subCommand{};

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
    if (subCommand) {
      res["subCommand"] = boost::any(*subCommand);
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
    if (m.find("subCommand") != m.end() && !m["subCommand"].empty()) {
      subCommand = make_shared<string>(boost::any_cast<string>(m["subCommand"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class CreateModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class CreateModuleMarketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> codeUrl{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleDetail{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};

  CreateModuleMarketRequest() {}

  explicit CreateModuleMarketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (moduleDetail) {
      res["moduleDetail"] = boost::any(*moduleDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("moduleDetail") != m.end() && !m["moduleDetail"].empty()) {
      moduleDetail = make_shared<string>(boost::any_cast<string>(m["moduleDetail"]));
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
  }


  virtual ~CreateModuleMarketRequest() = default;
};
class CreateModuleMarketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> moduleMarketId{};
  shared_ptr<string> requestId{};

  CreateModuleMarketResponseBody() {}

  explicit CreateModuleMarketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleMarketId) {
      res["moduleMarketId"] = boost::any(*moduleMarketId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("moduleMarketId") != m.end() && !m["moduleMarketId"].empty()) {
      moduleMarketId = make_shared<string>(boost::any_cast<string>(m["moduleMarketId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateModuleMarketResponseBody() = default;
};
class CreateModuleMarketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModuleMarketResponseBody> body{};

  CreateModuleMarketResponse() {}

  explicit CreateModuleMarketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        CreateModuleMarketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModuleMarketResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModuleMarketResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<string> description{};
  shared_ptr<vector<CreateResourceExportTaskRequestExcludeRules>> excludeRules{};
  shared_ptr<CreateResourceExportTaskRequestExportToModule> exportToModule{};
  shared_ptr<vector<CreateResourceExportTaskRequestIncludeRules>> includeRules{};
  shared_ptr<string> name{};
  shared_ptr<string> ramRole{};
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class CreateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<string> clientToken{};
  shared_ptr<CreateTaskRequestGroupInfo> groupInfo{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<vector<string>> protectionStrategy{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};

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
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        CreateTaskRequestGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<CreateTaskRequestGroupInfo>(model1);
      }
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
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class DeleteResourceLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> resourceTypeCode{};

  DeleteResourceLinkRequest() {}

  explicit DeleteResourceLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (resourceTypeCode) {
      res["resourceTypeCode"] = boost::any(*resourceTypeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("resourceTypeCode") != m.end() && !m["resourceTypeCode"].empty()) {
      resourceTypeCode = make_shared<string>(boost::any_cast<string>(m["resourceTypeCode"]));
    }
  }


  virtual ~DeleteResourceLinkRequest() = default;
};
class DeleteResourceLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteResourceLinkResponseBody() {}

  explicit DeleteResourceLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteResourceLinkResponseBody() = default;
};
class DeleteResourceLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceLinkResponseBody> body{};

  DeleteResourceLinkResponse() {}

  explicit DeleteResourceLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        DeleteResourceLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceLinkResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceLinkResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class DissociateTaskGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> taskIds{};

  DissociateTaskGroupRequest() {}

  explicit DissociateTaskGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskIds) {
      res["taskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~DissociateTaskGroupRequest() = default;
};
class DissociateTaskGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateTaskGroupResponseBody() {}

  explicit DissociateTaskGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DissociateTaskGroupResponseBody() = default;
};
class DissociateTaskGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DissociateTaskGroupResponseBody> body{};

  DissociateTaskGroupResponse() {}

  explicit DissociateTaskGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        DissociateTaskGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateTaskGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateTaskGroupResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class GetGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<long> taskCnt{};

  GetGroupResponseBodyGroup() {}

  explicit GetGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["id"] = boost::any(*id);
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class GetJobResponseBodyJobConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<bool> isDestroy{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> resourcesChanged{};

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
  }


  virtual ~GetJobResponseBodyJobConfig() = default;
};
class GetJobResponseBodyJob : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJobConfig> config{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<string> runtimeType{};
  shared_ptr<string> status{};
  shared_ptr<map<string, JobStatusDetailValue>> statusDetail{};
  shared_ptr<string> taskId{};

  GetJobResponseBodyJob() {}

  explicit GetJobResponseBodyJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class GetModuleMarketResponseBodyModuleMarket : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> message{};
  shared_ptr<string> moduleDetail{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleMarketId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  GetModuleMarketResponseBodyModuleMarket() {}

  explicit GetModuleMarketResponseBodyModuleMarket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (moduleDetail) {
      res["moduleDetail"] = boost::any(*moduleDetail);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleMarketId) {
      res["moduleMarketId"] = boost::any(*moduleMarketId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("moduleDetail") != m.end() && !m["moduleDetail"].empty()) {
      moduleDetail = make_shared<string>(boost::any_cast<string>(m["moduleDetail"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleMarketId") != m.end() && !m["moduleMarketId"].empty()) {
      moduleMarketId = make_shared<string>(boost::any_cast<string>(m["moduleMarketId"]));
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
  }


  virtual ~GetModuleMarketResponseBodyModuleMarket() = default;
};
class GetModuleMarketResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetModuleMarketResponseBodyModuleMarket> moduleMarket{};
  shared_ptr<string> requestId{};

  GetModuleMarketResponseBody() {}

  explicit GetModuleMarketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleMarket) {
      res["moduleMarket"] = moduleMarket ? boost::any(moduleMarket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("moduleMarket") != m.end() && !m["moduleMarket"].empty()) {
      if (typeid(map<string, boost::any>) == m["moduleMarket"].type()) {
        GetModuleMarketResponseBodyModuleMarket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["moduleMarket"]));
        moduleMarket = make_shared<GetModuleMarketResponseBodyModuleMarket>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetModuleMarketResponseBody() = default;
};
class GetModuleMarketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModuleMarketResponseBody> body{};

  GetModuleMarketResponse() {}

  explicit GetModuleMarketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetModuleMarketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModuleMarketResponseBody>(model1);
      }
    }
  }


  virtual ~GetModuleMarketResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<string> id{};
  shared_ptr<string> name{};
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
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class GetProjectBuildConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectBuildId{};

  GetProjectBuildConfigRequest() {}

  explicit GetProjectBuildConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectBuildId) {
      res["projectBuildId"] = boost::any(*projectBuildId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectBuildId") != m.end() && !m["projectBuildId"].empty()) {
      projectBuildId = make_shared<string>(boost::any_cast<string>(m["projectBuildId"]));
    }
  }


  virtual ~GetProjectBuildConfigRequest() = default;
};
class GetProjectBuildConfigResponseBodyProjectBuildConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, ProjectBuildConfigTaskPoliciesValue>> taskPolicies{};

  GetProjectBuildConfigResponseBodyProjectBuildConfig() {}

  explicit GetProjectBuildConfigResponseBodyProjectBuildConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskPolicies) {
      map<string, boost::any> temp1;
      for(auto item1:*taskPolicies){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["taskPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskPolicies") != m.end() && !m["taskPolicies"].empty()) {
      if (typeid(map<string, boost::any>) == m["taskPolicies"].type()) {
        map<string, ProjectBuildConfigTaskPoliciesValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["taskPolicies"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ProjectBuildConfigTaskPoliciesValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        taskPolicies = make_shared<map<string, ProjectBuildConfigTaskPoliciesValue>>(expect1);
      }
    }
  }


  virtual ~GetProjectBuildConfigResponseBodyProjectBuildConfig() = default;
};
class GetProjectBuildConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProjectBuildConfigResponseBodyProjectBuildConfig> projectBuildConfig{};
  shared_ptr<string> requestId{};

  GetProjectBuildConfigResponseBody() {}

  explicit GetProjectBuildConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectBuildConfig) {
      res["projectBuildConfig"] = projectBuildConfig ? boost::any(projectBuildConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectBuildConfig") != m.end() && !m["projectBuildConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["projectBuildConfig"].type()) {
        GetProjectBuildConfigResponseBodyProjectBuildConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["projectBuildConfig"]));
        projectBuildConfig = make_shared<GetProjectBuildConfigResponseBodyProjectBuildConfig>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProjectBuildConfigResponseBody() = default;
};
class GetProjectBuildConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectBuildConfigResponseBody> body{};

  GetProjectBuildConfigResponse() {}

  explicit GetProjectBuildConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetProjectBuildConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectBuildConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectBuildConfigResponse() = default;
};
class GetProjectBuildContextResponseBodyProjectBuildJobList : public Darabonba::Model {
public:
  shared_ptr<long> isDeleted{};
  shared_ptr<string> jobId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  GetProjectBuildContextResponseBodyProjectBuildJobList() {}

  explicit GetProjectBuildContextResponseBodyProjectBuildJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDeleted) {
      res["isDeleted"] = boost::any(*isDeleted);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isDeleted") != m.end() && !m["isDeleted"].empty()) {
      isDeleted = make_shared<long>(boost::any_cast<long>(m["isDeleted"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class GetProjectJobSummaryResponseBodyJobSummaryDetail : public Darabonba::Model {
public:
  shared_ptr<long> failCnt{};
  shared_ptr<long> runningCnt{};
  shared_ptr<long> successCnt{};
  shared_ptr<string> taskId{};
  shared_ptr<long> total{};

  GetProjectJobSummaryResponseBodyJobSummaryDetail() {}

  explicit GetProjectJobSummaryResponseBodyJobSummaryDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failCnt) {
      res["failCnt"] = boost::any(*failCnt);
    }
    if (runningCnt) {
      res["runningCnt"] = boost::any(*runningCnt);
    }
    if (successCnt) {
      res["successCnt"] = boost::any(*successCnt);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failCnt") != m.end() && !m["failCnt"].empty()) {
      failCnt = make_shared<long>(boost::any_cast<long>(m["failCnt"]));
    }
    if (m.find("runningCnt") != m.end() && !m["runningCnt"].empty()) {
      runningCnt = make_shared<long>(boost::any_cast<long>(m["runningCnt"]));
    }
    if (m.find("successCnt") != m.end() && !m["successCnt"].empty()) {
      successCnt = make_shared<long>(boost::any_cast<long>(m["successCnt"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetProjectJobSummaryResponseBodyJobSummaryDetail() = default;
};
class GetProjectJobSummaryResponseBodyJobSummary : public Darabonba::Model {
public:
  shared_ptr<vector<GetProjectJobSummaryResponseBodyJobSummaryDetail>> detail{};
  shared_ptr<long> failCnt{};
  shared_ptr<long> runningCnt{};
  shared_ptr<long> successCnt{};
  shared_ptr<long> total{};

  GetProjectJobSummaryResponseBodyJobSummary() {}

  explicit GetProjectJobSummaryResponseBodyJobSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      vector<boost::any> temp1;
      for(auto item1:*detail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["detail"] = boost::any(temp1);
    }
    if (failCnt) {
      res["failCnt"] = boost::any(*failCnt);
    }
    if (runningCnt) {
      res["runningCnt"] = boost::any(*runningCnt);
    }
    if (successCnt) {
      res["successCnt"] = boost::any(*successCnt);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<GetProjectJobSummaryResponseBodyJobSummaryDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProjectJobSummaryResponseBodyJobSummaryDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<GetProjectJobSummaryResponseBodyJobSummaryDetail>>(expect1);
      }
    }
    if (m.find("failCnt") != m.end() && !m["failCnt"].empty()) {
      failCnt = make_shared<long>(boost::any_cast<long>(m["failCnt"]));
    }
    if (m.find("runningCnt") != m.end() && !m["runningCnt"].empty()) {
      runningCnt = make_shared<long>(boost::any_cast<long>(m["runningCnt"]));
    }
    if (m.find("successCnt") != m.end() && !m["successCnt"].empty()) {
      successCnt = make_shared<long>(boost::any_cast<long>(m["successCnt"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetProjectJobSummaryResponseBodyJobSummary() = default;
};
class GetProjectJobSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProjectJobSummaryResponseBodyJobSummary> jobSummary{};
  shared_ptr<string> requestId{};

  GetProjectJobSummaryResponseBody() {}

  explicit GetProjectJobSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobSummary) {
      res["jobSummary"] = jobSummary ? boost::any(jobSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobSummary") != m.end() && !m["jobSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobSummary"].type()) {
        GetProjectJobSummaryResponseBodyJobSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobSummary"]));
        jobSummary = make_shared<GetProjectJobSummaryResponseBodyJobSummary>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProjectJobSummaryResponseBody() = default;
};
class GetProjectJobSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectJobSummaryResponseBody> body{};

  GetProjectJobSummaryResponse() {}

  explicit GetProjectJobSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetProjectJobSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectJobSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectJobSummaryResponse() = default;
};
class GetProjectResourceSummaryResponseBodyResourceSummaryDetail : public Darabonba::Model {
public:
  shared_ptr<long> resourceCnt{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> taskIds{};

  GetProjectResourceSummaryResponseBodyResourceSummaryDetail() {}

  explicit GetProjectResourceSummaryResponseBodyResourceSummaryDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCnt) {
      res["resourceCnt"] = boost::any(*resourceCnt);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (taskIds) {
      res["taskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceCnt") != m.end() && !m["resourceCnt"].empty()) {
      resourceCnt = make_shared<long>(boost::any_cast<long>(m["resourceCnt"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
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
  }


  virtual ~GetProjectResourceSummaryResponseBodyResourceSummaryDetail() = default;
};
class GetProjectResourceSummaryResponseBodyResourceSummary : public Darabonba::Model {
public:
  shared_ptr<vector<GetProjectResourceSummaryResponseBodyResourceSummaryDetail>> detail{};
  shared_ptr<long> resourceCnt{};
  shared_ptr<long> resourceTypeCnt{};

  GetProjectResourceSummaryResponseBodyResourceSummary() {}

  explicit GetProjectResourceSummaryResponseBodyResourceSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      vector<boost::any> temp1;
      for(auto item1:*detail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["detail"] = boost::any(temp1);
    }
    if (resourceCnt) {
      res["resourceCnt"] = boost::any(*resourceCnt);
    }
    if (resourceTypeCnt) {
      res["resourceTypeCnt"] = boost::any(*resourceTypeCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<GetProjectResourceSummaryResponseBodyResourceSummaryDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProjectResourceSummaryResponseBodyResourceSummaryDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<GetProjectResourceSummaryResponseBodyResourceSummaryDetail>>(expect1);
      }
    }
    if (m.find("resourceCnt") != m.end() && !m["resourceCnt"].empty()) {
      resourceCnt = make_shared<long>(boost::any_cast<long>(m["resourceCnt"]));
    }
    if (m.find("resourceTypeCnt") != m.end() && !m["resourceTypeCnt"].empty()) {
      resourceTypeCnt = make_shared<long>(boost::any_cast<long>(m["resourceTypeCnt"]));
    }
  }


  virtual ~GetProjectResourceSummaryResponseBodyResourceSummary() = default;
};
class GetProjectResourceSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetProjectResourceSummaryResponseBodyResourceSummary> resourceSummary{};

  GetProjectResourceSummaryResponseBody() {}

  explicit GetProjectResourceSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceSummary) {
      res["resourceSummary"] = resourceSummary ? boost::any(resourceSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceSummary") != m.end() && !m["resourceSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["resourceSummary"].type()) {
        GetProjectResourceSummaryResponseBodyResourceSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resourceSummary"]));
        resourceSummary = make_shared<GetProjectResourceSummaryResponseBodyResourceSummary>(model1);
      }
    }
  }


  virtual ~GetProjectResourceSummaryResponseBody() = default;
};
class GetProjectResourceSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResourceSummaryResponseBody> body{};

  GetProjectResourceSummaryResponse() {}

  explicit GetProjectResourceSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetProjectResourceSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResourceSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResourceSummaryResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
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
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
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
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class GetResourceLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> resourceTypeCode{};

  GetResourceLinkRequest() {}

  explicit GetResourceLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (resourceTypeCode) {
      res["resourceTypeCode"] = boost::any(*resourceTypeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("resourceTypeCode") != m.end() && !m["resourceTypeCode"].empty()) {
      resourceTypeCode = make_shared<string>(boost::any_cast<string>(m["resourceTypeCode"]));
    }
  }


  virtual ~GetResourceLinkRequest() = default;
};
class GetResourceLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> link{};
  shared_ptr<string> requestId{};

  GetResourceLinkResponseBody() {}

  explicit GetResourceLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (link) {
      res["link"] = boost::any(*link);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("link") != m.end() && !m["link"].empty()) {
      link = make_shared<string>(boost::any_cast<string>(m["link"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetResourceLinkResponseBody() = default;
};
class GetResourceLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceLinkResponseBody> body{};

  GetResourceLinkResponse() {}

  explicit GetResourceLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetResourceLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceLinkResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceLinkResponse() = default;
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
  shared_ptr<string> createTime{};
  shared_ptr<string> currentJobId{};
  shared_ptr<GetTaskResponseBodyTaskGroupInfo> groupInfo{};
  shared_ptr<map<string, string>> meta{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<vector<string>> protectionStrategy{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskOutputPath{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};

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
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (currentJobId) {
      res["currentJobId"] = boost::any(*currentJobId);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
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
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        GetTaskResponseBodyTaskGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<GetTaskResponseBodyTaskGroupInfo>(model1);
      }
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["meta"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, string>>(toMap1);
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class GetTaskContextResponseBodyTaskJobConfig : public Darabonba::Model {
public:
  shared_ptr<bool> isDestroy{};
  shared_ptr<string> jobModuleVersion{};
  shared_ptr<string> resourcesChanged{};

  GetTaskContextResponseBodyTaskJobConfig() {}

  explicit GetTaskContextResponseBodyTaskJobConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDestroy) {
      res["isDestroy"] = boost::any(*isDestroy);
    }
    if (jobModuleVersion) {
      res["jobModuleVersion"] = boost::any(*jobModuleVersion);
    }
    if (resourcesChanged) {
      res["resourcesChanged"] = boost::any(*resourcesChanged);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isDestroy") != m.end() && !m["isDestroy"].empty()) {
      isDestroy = make_shared<bool>(boost::any_cast<bool>(m["isDestroy"]));
    }
    if (m.find("jobModuleVersion") != m.end() && !m["jobModuleVersion"].empty()) {
      jobModuleVersion = make_shared<string>(boost::any_cast<string>(m["jobModuleVersion"]));
    }
    if (m.find("resourcesChanged") != m.end() && !m["resourcesChanged"].empty()) {
      resourcesChanged = make_shared<string>(boost::any_cast<string>(m["resourcesChanged"]));
    }
  }


  virtual ~GetTaskContextResponseBodyTaskJobConfig() = default;
};
class GetTaskContextResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<bool> autoApply{};
  shared_ptr<GetTaskContextResponseBodyTaskJobConfig> jobConfig{};
  shared_ptr<string> jobDescription{};
  shared_ptr<string> jobGmtCreate{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobStatus{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> modulePath{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<string> ramRole{};
  shared_ptr<long> resourceCount{};
  shared_ptr<string> taskGmtCreate{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskOutputPath{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};

  GetTaskContextResponseBodyTask() {}

  explicit GetTaskContextResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoApply) {
      res["autoApply"] = boost::any(*autoApply);
    }
    if (jobConfig) {
      res["jobConfig"] = jobConfig ? boost::any(jobConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobDescription) {
      res["jobDescription"] = boost::any(*jobDescription);
    }
    if (jobGmtCreate) {
      res["jobGmtCreate"] = boost::any(*jobGmtCreate);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (modulePath) {
      res["modulePath"] = boost::any(*modulePath);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (ramRole) {
      res["ramRole"] = boost::any(*ramRole);
    }
    if (resourceCount) {
      res["resourceCount"] = boost::any(*resourceCount);
    }
    if (taskGmtCreate) {
      res["taskGmtCreate"] = boost::any(*taskGmtCreate);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    if (taskOutputPath) {
      res["taskOutputPath"] = boost::any(*taskOutputPath);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("jobConfig") != m.end() && !m["jobConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobConfig"].type()) {
        GetTaskContextResponseBodyTaskJobConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobConfig"]));
        jobConfig = make_shared<GetTaskContextResponseBodyTaskJobConfig>(model1);
      }
    }
    if (m.find("jobDescription") != m.end() && !m["jobDescription"].empty()) {
      jobDescription = make_shared<string>(boost::any_cast<string>(m["jobDescription"]));
    }
    if (m.find("jobGmtCreate") != m.end() && !m["jobGmtCreate"].empty()) {
      jobGmtCreate = make_shared<string>(boost::any_cast<string>(m["jobGmtCreate"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("modulePath") != m.end() && !m["modulePath"].empty()) {
      modulePath = make_shared<string>(boost::any_cast<string>(m["modulePath"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ramRole") != m.end() && !m["ramRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["ramRole"]));
    }
    if (m.find("resourceCount") != m.end() && !m["resourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["resourceCount"]));
    }
    if (m.find("taskGmtCreate") != m.end() && !m["taskGmtCreate"].empty()) {
      taskGmtCreate = make_shared<string>(boost::any_cast<string>(m["taskGmtCreate"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
    if (m.find("taskOutputPath") != m.end() && !m["taskOutputPath"].empty()) {
      taskOutputPath = make_shared<string>(boost::any_cast<string>(m["taskOutputPath"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
    }
  }


  virtual ~GetTaskContextResponseBodyTask() = default;
};
class GetTaskContextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTaskContextResponseBodyTask> task{};

  GetTaskContextResponseBody() {}

  explicit GetTaskContextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskContextResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["task"]));
        task = make_shared<GetTaskContextResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetTaskContextResponseBody() = default;
};
class GetTaskContextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskContextResponseBody> body{};

  GetTaskContextResponse() {}

  explicit GetTaskContextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        GetTaskContextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskContextResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskContextResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class ListGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> projectId{};

  ListGroupRequest() {}

  explicit ListGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~ListGroupRequest() = default;
};
class ListGroupResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
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
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["isDefault"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBodyJobsConfig : public Darabonba::Model {
public:
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> resourcesChanged{};

  ListJobsResponseBodyJobsConfig() {}

  explicit ListJobsResponseBodyJobsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (resourcesChanged) {
      res["resourcesChanged"] = boost::any(*resourcesChanged);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("resourcesChanged") != m.end() && !m["resourcesChanged"].empty()) {
      resourcesChanged = make_shared<string>(boost::any_cast<string>(m["resourcesChanged"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsConfig() = default;
};
class ListJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<ListJobsResponseBodyJobsConfig> config{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> jobId{};
  shared_ptr<string> status{};
  shared_ptr<map<string, JobsStatusDetailValue>> statusDetail{};
  shared_ptr<string> taskId{};

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class ListModuleMarketsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListModuleMarketsRequest() {}

  explicit ListModuleMarketsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListModuleMarketsRequest() = default;
};
class ListModuleMarketsResponseBodyModuleMarkets : public Darabonba::Model {
public:
  shared_ptr<long> cloneCount{};
  shared_ptr<string> codeUrl{};
  shared_ptr<map<string, string>> config{};
  shared_ptr<string> description{};
  shared_ptr<string> message{};
  shared_ptr<string> moduleDetail{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleMarketId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<long> relatedId{};
  shared_ptr<string> status{};

  ListModuleMarketsResponseBodyModuleMarkets() {}

  explicit ListModuleMarketsResponseBodyModuleMarkets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloneCount) {
      res["cloneCount"] = boost::any(*cloneCount);
    }
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (moduleDetail) {
      res["moduleDetail"] = boost::any(*moduleDetail);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleMarketId) {
      res["moduleMarketId"] = boost::any(*moduleMarketId);
    }
    if (moduleVersion) {
      res["moduleVersion"] = boost::any(*moduleVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (relatedId) {
      res["relatedId"] = boost::any(*relatedId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cloneCount") != m.end() && !m["cloneCount"].empty()) {
      cloneCount = make_shared<long>(boost::any_cast<long>(m["cloneCount"]));
    }
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["config"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("moduleDetail") != m.end() && !m["moduleDetail"].empty()) {
      moduleDetail = make_shared<string>(boost::any_cast<string>(m["moduleDetail"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("moduleMarketId") != m.end() && !m["moduleMarketId"].empty()) {
      moduleMarketId = make_shared<string>(boost::any_cast<string>(m["moduleMarketId"]));
    }
    if (m.find("moduleVersion") != m.end() && !m["moduleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["moduleVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("relatedId") != m.end() && !m["relatedId"].empty()) {
      relatedId = make_shared<long>(boost::any_cast<long>(m["relatedId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListModuleMarketsResponseBodyModuleMarkets() = default;
};
class ListModuleMarketsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListModuleMarketsResponseBodyModuleMarkets>> moduleMarkets{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListModuleMarketsResponseBody() {}

  explicit ListModuleMarketsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleMarkets) {
      vector<boost::any> temp1;
      for(auto item1:*moduleMarkets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["moduleMarkets"] = boost::any(temp1);
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
    if (m.find("moduleMarkets") != m.end() && !m["moduleMarkets"].empty()) {
      if (typeid(vector<boost::any>) == m["moduleMarkets"].type()) {
        vector<ListModuleMarketsResponseBodyModuleMarkets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["moduleMarkets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModuleMarketsResponseBodyModuleMarkets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleMarkets = make_shared<vector<ListModuleMarketsResponseBodyModuleMarkets>>(expect1);
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


  virtual ~ListModuleMarketsResponseBody() = default;
};
class ListModuleMarketsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModuleMarketsResponseBody> body{};

  ListModuleMarketsResponse() {}

  explicit ListModuleMarketsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        ListModuleMarketsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModuleMarketsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModuleMarketsResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class ListModulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListModulesRequest() {}

  explicit ListModulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListModulesRequest() = default;
};
class ListModulesResponseBodyModules : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> description{};
  shared_ptr<string> latestVersion{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<map<string, boost::any>> sourceConfig{};
  shared_ptr<string> status{};

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class ListProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListProjectRequest() {}

  explicit ListProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
  }


  virtual ~ListProjectRequest() = default;
};
class ListProjectResponseBodyProjects : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
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
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class ListProjectBuildsResponseBodyProjectBuilds : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> projectBuildAction{};
  shared_ptr<string> projectBuildId{};
  shared_ptr<long> projectBuildIndex{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<long> timestamp{};

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
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
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
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["timestamp"]));
    }
  }


  virtual ~ListProjectBuildsResponseBodyProjectBuilds() = default;
};
class ListProjectBuildsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectBuildsResponseBodyProjectBuilds>> projectBuilds{};
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class ListRelationModulesResponseBodyModules : public Darabonba::Model {
public:
  shared_ptr<string> latestVersion{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> name{};

  ListRelationModulesResponseBodyModules() {}

  explicit ListRelationModulesResponseBodyModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latestVersion) {
      res["latestVersion"] = boost::any(*latestVersion);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("latestVersion") != m.end() && !m["latestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["latestVersion"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["moduleId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListRelationModulesResponseBodyModules() = default;
};
class ListRelationModulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRelationModulesResponseBodyModules>> modules{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListRelationModulesResponseBody() {}

  explicit ListRelationModulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListRelationModulesResponseBodyModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["modules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRelationModulesResponseBodyModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modules = make_shared<vector<ListRelationModulesResponseBodyModules>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListRelationModulesResponseBody() = default;
};
class ListRelationModulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRelationModulesResponseBody> body{};

  ListRelationModulesResponse() {}

  explicit ListRelationModulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        ListRelationModulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRelationModulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRelationModulesResponse() = default;
};
class ListRelationTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> moduleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};

  ListRelationTasksRequest() {}

  explicit ListRelationTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
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
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~ListRelationTasksRequest() = default;
};
class ListRelationTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  ListRelationTasksResponseBodyTasks() {}

  explicit ListRelationTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListRelationTasksResponseBodyTasks() = default;
};
class ListRelationTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRelationTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListRelationTasksResponseBody() {}

  explicit ListRelationTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListRelationTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRelationTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListRelationTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListRelationTasksResponseBody() = default;
};
class ListRelationTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRelationTasksResponseBody> body{};

  ListRelationTasksResponse() {}

  explicit ListRelationTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        ListRelationTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRelationTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListRelationTasksResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<vector<ListResourceExportTasksResponseBodyExportTasksExcludeRules>> excludeRules{};
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class ListTaskResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListTaskResourceRequest() {}

  explicit ListTaskResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
  }


  virtual ~ListTaskResourceRequest() = default;
};
class ListTaskResourceResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> instanceAttribute{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListTaskResourceResponseBodyResources() {}

  explicit ListTaskResourceResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceAttribute) {
      res["instanceAttribute"] = boost::any(*instanceAttribute);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceAttribute") != m.end() && !m["instanceAttribute"].empty()) {
      instanceAttribute = make_shared<string>(boost::any_cast<string>(m["instanceAttribute"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListTaskResourceResponseBodyResources() = default;
};
class ListTaskResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTaskResourceResponseBodyResources>> resources{};

  ListTaskResourceResponseBody() {}

  explicit ListTaskResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resources"] = boost::any(temp1);
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
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      if (typeid(vector<boost::any>) == m["resources"].type()) {
        vector<ListTaskResourceResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskResourceResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListTaskResourceResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~ListTaskResourceResponseBody() = default;
};
class ListTaskResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTaskResourceResponseBody> body{};

  ListTaskResourceResponse() {}

  explicit ListTaskResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        ListTaskResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaskResourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaskResourceResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> moduleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> taskId{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListTasksRequest() = default;
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
class ListTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> currentJobId{};
  shared_ptr<string> currentJobStatus{};
  shared_ptr<ListTasksResponseBodyTasksGroupInfo> groupInfo{};
  shared_ptr<bool> hasDestroy{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  ListTasksResponseBodyTasks() {}

  explicit ListTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (currentJobId) {
      res["currentJobId"] = boost::any(*currentJobId);
    }
    if (currentJobStatus) {
      res["currentJobStatus"] = boost::any(*currentJobStatus);
    }
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hasDestroy) {
      res["hasDestroy"] = boost::any(*hasDestroy);
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
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("currentJobId") != m.end() && !m["currentJobId"].empty()) {
      currentJobId = make_shared<string>(boost::any_cast<string>(m["currentJobId"]));
    }
    if (m.find("currentJobStatus") != m.end() && !m["currentJobStatus"].empty()) {
      currentJobStatus = make_shared<string>(boost::any_cast<string>(m["currentJobStatus"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        ListTasksResponseBodyTasksGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<ListTasksResponseBodyTasksGroupInfo>(model1);
      }
    }
    if (m.find("hasDestroy") != m.end() && !m["hasDestroy"].empty()) {
      hasDestroy = make_shared<bool>(boost::any_cast<bool>(m["hasDestroy"]));
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class OperateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<long> taskCnt{};

  UpdateGroupResponseBodyGroup() {}

  explicit UpdateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["id"] = boost::any(*id);
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
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


  virtual ~UpdateGroupResponseBodyGroup() = default;
};
class UpdateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  UpdateGroupResponseBody() {}

  explicit UpdateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["group"]));
        group = make_shared<UpdateGroupResponseBodyGroup>(model1);
      }
    }
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class UpdateModuleAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class UpdateModuleMarketAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> moduleDetail{};
  shared_ptr<string> name{};

  UpdateModuleMarketAttributeRequest() {}

  explicit UpdateModuleMarketAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (moduleDetail) {
      res["moduleDetail"] = boost::any(*moduleDetail);
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
    if (m.find("moduleDetail") != m.end() && !m["moduleDetail"].empty()) {
      moduleDetail = make_shared<string>(boost::any_cast<string>(m["moduleDetail"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateModuleMarketAttributeRequest() = default;
};
class UpdateModuleMarketAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModuleMarketAttributeResponseBody() {}

  explicit UpdateModuleMarketAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateModuleMarketAttributeResponseBody() = default;
};
class UpdateModuleMarketAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModuleMarketAttributeResponseBody> body{};

  UpdateModuleMarketAttributeResponse() {}

  explicit UpdateModuleMarketAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        UpdateModuleMarketAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModuleMarketAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModuleMarketAttributeResponse() = default;
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
class UpdateProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> groupCnt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> taskCnt{};

  UpdateProjectResponseBodyProject() {}

  explicit UpdateProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (groupCnt) {
      res["groupCnt"] = boost::any(*groupCnt);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
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
    if (m.find("groupCnt") != m.end() && !m["groupCnt"].empty()) {
      groupCnt = make_shared<long>(boost::any_cast<long>(m["groupCnt"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("taskCnt") != m.end() && !m["taskCnt"].empty()) {
      taskCnt = make_shared<long>(boost::any_cast<long>(m["taskCnt"]));
    }
  }


  virtual ~UpdateProjectResponseBodyProject() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateProjectResponseBodyProject> project{};
  shared_ptr<string> requestId{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["project"]));
        project = make_shared<UpdateProjectResponseBodyProject>(model1);
      }
    }
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateResourceExportTaskAttributeRequestExcludeRules>> excludeRules{};
  shared_ptr<UpdateResourceExportTaskAttributeRequestExportToModule> exportToModule{};
  shared_ptr<vector<UpdateResourceExportTaskAttributeRequestIncludeRules>> includeRules{};
  shared_ptr<string> name{};
  shared_ptr<string> ramRole{};
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  shared_ptr<UpdateTaskAttributeRequestGroupInfo> groupInfo{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<vector<string>> protectionStrategy{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> triggerStrategy{};

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
    if (groupInfo) {
      res["groupInfo"] = groupInfo ? boost::any(groupInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (terraformVersion) {
      res["terraformVersion"] = boost::any(*terraformVersion);
    }
    if (triggerStrategy) {
      res["triggerStrategy"] = boost::any(*triggerStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoApply") != m.end() && !m["autoApply"].empty()) {
      autoApply = make_shared<bool>(boost::any_cast<bool>(m["autoApply"]));
    }
    if (m.find("groupInfo") != m.end() && !m["groupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupInfo"].type()) {
        UpdateTaskAttributeRequestGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupInfo"]));
        groupInfo = make_shared<UpdateTaskAttributeRequestGroupInfo>(model1);
      }
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
    if (m.find("terraformVersion") != m.end() && !m["terraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["terraformVersion"]));
    }
    if (m.find("triggerStrategy") != m.end() && !m["triggerStrategy"].empty()) {
      triggerStrategy = make_shared<string>(boost::any_cast<string>(m["triggerStrategy"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
  AssociateParameterSetResponse associateParameterSet(shared_ptr<AssociateParameterSetRequest> request);
  AssociateParameterSetResponse associateParameterSetWithOptions(shared_ptr<AssociateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateTaskGroupResponse associateTaskGroup(shared_ptr<string> projectId, shared_ptr<string> groupId, shared_ptr<AssociateTaskGroupRequest> request);
  AssociateTaskGroupResponse associateTaskGroupWithOptions(shared_ptr<string> projectId,
                                                           shared_ptr<string> groupId,
                                                           shared_ptr<AssociateTaskGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachRabbitmqPublisherResponse attachRabbitmqPublisher(shared_ptr<string> publisherId, shared_ptr<AttachRabbitmqPublisherRequest> request);
  AttachRabbitmqPublisherResponse attachRabbitmqPublisherWithOptions(shared_ptr<string> publisherId,
                                                                     shared_ptr<AttachRabbitmqPublisherRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelResourceExportTaskResponse cancelResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<CancelResourceExportTaskRequest> request);
  CancelResourceExportTaskResponse cancelResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                       shared_ptr<CancelResourceExportTaskRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneModuleResponse cloneModule(shared_ptr<CloneModuleRequest> request);
  CloneModuleResponse cloneModuleWithOptions(shared_ptr<CloneModuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthorizationResponse createAuthorization(shared_ptr<CreateAuthorizationRequest> request);
  CreateAuthorizationResponse createAuthorizationWithOptions(shared_ptr<CreateAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<string> taskId, shared_ptr<CreateJobRequest> request);
  CreateJobResponse createJobWithOptions(shared_ptr<string> taskId,
                                         shared_ptr<CreateJobRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModuleResponse createModule(shared_ptr<CreateModuleRequest> request);
  CreateModuleResponse createModuleWithOptions(shared_ptr<CreateModuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModuleMarketResponse createModuleMarket(shared_ptr<CreateModuleMarketRequest> request);
  CreateModuleMarketResponse createModuleMarketWithOptions(shared_ptr<CreateModuleMarketRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModuleVersionResponse createModuleVersion(shared_ptr<string> moduleId, shared_ptr<CreateModuleVersionRequest> request);
  CreateModuleVersionResponse createModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                             shared_ptr<CreateModuleVersionRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateParameterSetResponse createParameterSet(shared_ptr<CreateParameterSetRequest> request);
  CreateParameterSetResponse createParameterSetWithOptions(shared_ptr<CreateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectBuildResponse createProjectBuild(shared_ptr<string> projectId, shared_ptr<CreateProjectBuildRequest> request);
  CreateProjectBuildResponse createProjectBuildWithOptions(shared_ptr<string> projectId,
                                                           shared_ptr<CreateProjectBuildRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRabbitmqPublisherResponse createRabbitmqPublisher(shared_ptr<CreateRabbitmqPublisherRequest> request);
  CreateRabbitmqPublisherResponse createRabbitmqPublisherWithOptions(shared_ptr<CreateRabbitmqPublisherRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceExportTaskResponse createResourceExportTask(shared_ptr<CreateResourceExportTaskRequest> request);
  CreateResourceExportTaskResponse createResourceExportTaskWithOptions(shared_ptr<CreateResourceExportTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<CreateTaskRequest> request);
  CreateTaskResponse createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAuthorizationResponse deleteAuthorization(shared_ptr<string> authorizationId);
  DeleteAuthorizationResponse deleteAuthorizationWithOptions(shared_ptr<string> authorizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<string> id);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModuleResponse deleteModule(shared_ptr<string> moduleId);
  DeleteModuleResponse deleteModuleWithOptions(shared_ptr<string> moduleId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteParameterSetResponse deleteParameterSet(shared_ptr<string> parameterSetId);
  DeleteParameterSetResponse deleteParameterSetWithOptions(shared_ptr<string> parameterSetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> id);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRabbitmqPublisherResponse deleteRabbitmqPublisher(shared_ptr<string> publisherId);
  DeleteRabbitmqPublisherResponse deleteRabbitmqPublisherWithOptions(shared_ptr<string> publisherId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceExportTaskResponse deleteResourceExportTask(shared_ptr<string> exportTaskId);
  DeleteResourceExportTaskResponse deleteResourceExportTaskWithOptions(shared_ptr<string> exportTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceLinkResponse deleteResourceLink(shared_ptr<DeleteResourceLinkRequest> request);
  DeleteResourceLinkResponse deleteResourceLinkWithOptions(shared_ptr<DeleteResourceLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTaskResponse deleteTask(shared_ptr<string> taskId);
  DeleteTaskResponse deleteTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachRabbitmqPublisherResponse detachRabbitmqPublisher(shared_ptr<string> publisherId, shared_ptr<DetachRabbitmqPublisherRequest> request);
  DetachRabbitmqPublisherResponse detachRabbitmqPublisherWithOptions(shared_ptr<string> publisherId,
                                                                     shared_ptr<DetachRabbitmqPublisherRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateParameterSetResponse dissociateParameterSet(shared_ptr<DissociateParameterSetRequest> request);
  DissociateParameterSetResponse dissociateParameterSetWithOptions(shared_ptr<DissociateParameterSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateTaskGroupResponse dissociateTaskGroup(shared_ptr<string> projectId, shared_ptr<string> groupId, shared_ptr<DissociateTaskGroupRequest> request);
  DissociateTaskGroupResponse dissociateTaskGroupWithOptions(shared_ptr<string> projectId,
                                                             shared_ptr<string> groupId,
                                                             shared_ptr<DissociateTaskGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteResourceExportTaskResponse executeResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<ExecuteResourceExportTaskRequest> request);
  ExecuteResourceExportTaskResponse executeResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                         shared_ptr<ExecuteResourceExportTaskRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<string> id);
  GetGroupResponse getGroupWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<string> taskId, shared_ptr<string> jobId);
  GetJobResponse getJobWithOptions(shared_ptr<string> taskId,
                                   shared_ptr<string> jobId,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModuleResponse getModule(shared_ptr<string> moduleId);
  GetModuleResponse getModuleWithOptions(shared_ptr<string> moduleId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModuleMarketResponse getModuleMarket(shared_ptr<string> moduleMarketId);
  GetModuleMarketResponse getModuleMarketWithOptions(shared_ptr<string> moduleMarketId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModuleVersionResponse getModuleVersion(shared_ptr<string> moduleId, shared_ptr<string> moduleVersion);
  GetModuleVersionResponse getModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                       shared_ptr<string> moduleVersion,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParameterSetResponse getParameterSet(shared_ptr<string> parameterSetId);
  GetParameterSetResponse getParameterSetWithOptions(shared_ptr<string> parameterSetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> id);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectBuildConfigResponse getProjectBuildConfig(shared_ptr<string> projectId, shared_ptr<GetProjectBuildConfigRequest> request);
  GetProjectBuildConfigResponse getProjectBuildConfigWithOptions(shared_ptr<string> projectId,
                                                                 shared_ptr<GetProjectBuildConfigRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectBuildContextResponse getProjectBuildContext(shared_ptr<string> projectId, shared_ptr<string> projectBuildId);
  GetProjectBuildContextResponse getProjectBuildContextWithOptions(shared_ptr<string> projectId,
                                                                   shared_ptr<string> projectBuildId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectJobSummaryResponse getProjectJobSummary(shared_ptr<string> projectId);
  GetProjectJobSummaryResponse getProjectJobSummaryWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResourceSummaryResponse getProjectResourceSummary(shared_ptr<string> projectId);
  GetProjectResourceSummaryResponse getProjectResourceSummaryWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRabbitmqPublisherResponse getRabbitmqPublisher(shared_ptr<string> publisherId);
  GetRabbitmqPublisherResponse getRabbitmqPublisherWithOptions(shared_ptr<string> publisherId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceExportTaskResponse getResourceExportTask(shared_ptr<string> exportTaskId, shared_ptr<GetResourceExportTaskRequest> request);
  GetResourceExportTaskResponse getResourceExportTaskWithOptions(shared_ptr<string> exportTaskId,
                                                                 shared_ptr<GetResourceExportTaskRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceLinkResponse getResourceLink(shared_ptr<GetResourceLinkRequest> request);
  GetResourceLinkResponse getResourceLinkWithOptions(shared_ptr<GetResourceLinkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> taskId);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskContextResponse getTaskContext(shared_ptr<string> taskId);
  GetTaskContextResponse getTaskContextWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthorizationsResponse listAuthorizations(shared_ptr<ListAuthorizationsRequest> request);
  ListAuthorizationsResponse listAuthorizationsWithOptions(shared_ptr<ListAuthorizationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupResponse listGroup(shared_ptr<ListGroupRequest> request);
  ListGroupResponse listGroupWithOptions(shared_ptr<ListGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<string> taskId, shared_ptr<ListJobsRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<string> taskId,
                                       shared_ptr<ListJobsRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModuleMarketsResponse listModuleMarkets(shared_ptr<ListModuleMarketsRequest> request);
  ListModuleMarketsResponse listModuleMarketsWithOptions(shared_ptr<ListModuleMarketsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModuleVersionResponse listModuleVersion(shared_ptr<string> moduleId, shared_ptr<ListModuleVersionRequest> request);
  ListModuleVersionResponse listModuleVersionWithOptions(shared_ptr<string> moduleId,
                                                         shared_ptr<ListModuleVersionRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModulesResponse listModules(shared_ptr<ListModulesRequest> request);
  ListModulesResponse listModulesWithOptions(shared_ptr<ListModulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParameterSetRelationResponse listParameterSetRelation(shared_ptr<ListParameterSetRelationRequest> request);
  ListParameterSetRelationResponse listParameterSetRelationWithOptions(shared_ptr<ListParameterSetRelationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParameterSetsResponse listParameterSets(shared_ptr<ListParameterSetsRequest> request);
  ListParameterSetsResponse listParameterSetsWithOptions(shared_ptr<ListParameterSetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectResponse listProject(shared_ptr<ListProjectRequest> request);
  ListProjectResponse listProjectWithOptions(shared_ptr<ListProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectBuildsResponse listProjectBuilds(shared_ptr<string> projectId);
  ListProjectBuildsResponse listProjectBuildsWithOptions(shared_ptr<string> projectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRabbitmqPublishersResponse listRabbitmqPublishers(shared_ptr<ListRabbitmqPublishersRequest> request);
  ListRabbitmqPublishersResponse listRabbitmqPublishersWithOptions(shared_ptr<ListRabbitmqPublishersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRelationModulesResponse listRelationModules(shared_ptr<string> type);
  ListRelationModulesResponse listRelationModulesWithOptions(shared_ptr<string> type, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRelationTasksResponse listRelationTasks(shared_ptr<string> type, shared_ptr<ListRelationTasksRequest> request);
  ListRelationTasksResponse listRelationTasksWithOptions(shared_ptr<string> type,
                                                         shared_ptr<ListRelationTasksRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceExportTaskVersionsResponse listResourceExportTaskVersions(shared_ptr<string> exportTaskId, shared_ptr<ListResourceExportTaskVersionsRequest> request);
  ListResourceExportTaskVersionsResponse listResourceExportTaskVersionsWithOptions(shared_ptr<string> exportTaskId,
                                                                                   shared_ptr<ListResourceExportTaskVersionsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceExportTasksResponse listResourceExportTasks(shared_ptr<ListResourceExportTasksRequest> request);
  ListResourceExportTasksResponse listResourceExportTasksWithOptions(shared_ptr<ListResourceExportTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskResourceResponse listTaskResource(shared_ptr<string> taskId, shared_ptr<ListTaskResourceRequest> request);
  ListTaskResourceResponse listTaskResourceWithOptions(shared_ptr<string> taskId,
                                                       shared_ptr<ListTaskResourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateJobResponse operateJob(shared_ptr<string> taskId,
                                shared_ptr<string> jobId,
                                shared_ptr<string> operationType,
                                shared_ptr<OperateJobRequest> request);
  OperateJobResponse operateJobWithOptions(shared_ptr<string> taskId,
                                           shared_ptr<string> jobId,
                                           shared_ptr<string> operationType,
                                           shared_ptr<OperateJobRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveResourceExportTaskVersionResponse removeResourceExportTaskVersion(shared_ptr<string> exportTaskId, shared_ptr<string> exportVersion);
  RemoveResourceExportTaskVersionResponse removeResourceExportTaskVersionWithOptions(shared_ptr<string> exportTaskId,
                                                                                     shared_ptr<string> exportVersion,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuthorizationAttributeResponse updateAuthorizationAttribute(shared_ptr<string> authorizationId, shared_ptr<UpdateAuthorizationAttributeRequest> request);
  UpdateAuthorizationAttributeResponse updateAuthorizationAttributeWithOptions(shared_ptr<string> authorizationId,
                                                                               shared_ptr<UpdateAuthorizationAttributeRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<string> id, shared_ptr<UpdateGroupRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<string> id,
                                             shared_ptr<UpdateGroupRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModuleAttributeResponse updateModuleAttribute(shared_ptr<string> moduleId, shared_ptr<UpdateModuleAttributeRequest> request);
  UpdateModuleAttributeResponse updateModuleAttributeWithOptions(shared_ptr<string> moduleId,
                                                                 shared_ptr<UpdateModuleAttributeRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModuleMarketAttributeResponse updateModuleMarketAttribute(shared_ptr<string> moduleMarketId, shared_ptr<UpdateModuleMarketAttributeRequest> request);
  UpdateModuleMarketAttributeResponse updateModuleMarketAttributeWithOptions(shared_ptr<string> moduleMarketId,
                                                                             shared_ptr<UpdateModuleMarketAttributeRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateParameterSetAttributeResponse updateParameterSetAttribute(shared_ptr<string> parameterSetId, shared_ptr<UpdateParameterSetAttributeRequest> request);
  UpdateParameterSetAttributeResponse updateParameterSetAttributeWithOptions(shared_ptr<string> parameterSetId,
                                                                             shared_ptr<UpdateParameterSetAttributeRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> id, shared_ptr<UpdateProjectRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> id,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRabbitmqPublisherAttributeResponse updateRabbitmqPublisherAttribute(shared_ptr<string> publisherId, shared_ptr<UpdateRabbitmqPublisherAttributeRequest> request);
  UpdateRabbitmqPublisherAttributeResponse updateRabbitmqPublisherAttributeWithOptions(shared_ptr<string> publisherId,
                                                                                       shared_ptr<UpdateRabbitmqPublisherAttributeRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttribute(shared_ptr<string> exportTaskId, shared_ptr<UpdateResourceExportTaskAttributeRequest> request);
  UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttributeWithOptions(shared_ptr<string> exportTaskId,
                                                                                         shared_ptr<UpdateResourceExportTaskAttributeRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskAttributeResponse updateTaskAttribute(shared_ptr<string> taskId, shared_ptr<UpdateTaskAttributeRequest> request);
  UpdateTaskAttributeResponse updateTaskAttributeWithOptions(shared_ptr<string> taskId,
                                                             shared_ptr<UpdateTaskAttributeRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IaCService20210806

#endif
