// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FNF20190315_H_
#define ALIBABACLOUD_FNF20190315_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Fnf20190315 {
class CreateFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> externalStorageLocation{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> type{};

  CreateFlowRequest() {}

  explicit CreateFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (externalStorageLocation) {
      res["ExternalStorageLocation"] = boost::any(*externalStorageLocation);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("ExternalStorageLocation") != m.end() && !m["ExternalStorageLocation"].empty()) {
      externalStorageLocation = make_shared<string>(boost::any_cast<string>(m["ExternalStorageLocation"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateFlowRequest() = default;
};
class CreateFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> type{};

  CreateFlowResponseBody() {}

  explicit CreateFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateFlowResponseBody() = default;
};
class CreateFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFlowResponseBody> body{};

  CreateFlowResponse() {}

  explicit CreateFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowResponse() = default;
};
class CreateScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<string> flowName{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleName{};

  CreateScheduleRequest() {}

  explicit CreateScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~CreateScheduleRequest() = default;
};
class CreateScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> cronExpression{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> scheduleName{};

  CreateScheduleResponseBody() {}

  explicit CreateScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~CreateScheduleResponseBody() = default;
};
class CreateScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScheduleResponseBody> body{};

  CreateScheduleResponse() {}

  explicit CreateScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScheduleResponse() = default;
};
class DeleteFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};

  DeleteFlowRequest() {}

  explicit DeleteFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteFlowRequest() = default;
};
class DeleteFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFlowResponseBody() {}

  explicit DeleteFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFlowResponseBody() = default;
};
class DeleteFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFlowResponseBody> body{};

  DeleteFlowResponse() {}

  explicit DeleteFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowResponse() = default;
};
class DeleteScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleName{};

  DeleteScheduleRequest() {}

  explicit DeleteScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~DeleteScheduleRequest() = default;
};
class DeleteScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScheduleResponseBody() {}

  explicit DeleteScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScheduleResponseBody() = default;
};
class DeleteScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScheduleResponseBody> body{};

  DeleteScheduleResponse() {}

  explicit DeleteScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScheduleResponse() = default;
};
class DescribeExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionName{};
  shared_ptr<string> flowName{};
  shared_ptr<string> requestId{};
  shared_ptr<long> waitTimeSeconds{};

  DescribeExecutionRequest() {}

  explicit DescribeExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionName) {
      res["ExecutionName"] = boost::any(*executionName);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (waitTimeSeconds) {
      res["WaitTimeSeconds"] = boost::any(*waitTimeSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      executionName = make_shared<string>(boost::any_cast<string>(m["ExecutionName"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WaitTimeSeconds") != m.end() && !m["WaitTimeSeconds"].empty()) {
      waitTimeSeconds = make_shared<long>(boost::any_cast<long>(m["WaitTimeSeconds"]));
    }
  }


  virtual ~DescribeExecutionRequest() = default;
};
class DescribeExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowDefinition{};
  shared_ptr<string> flowName{};
  shared_ptr<string> input{};
  shared_ptr<string> name{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> stoppedTime{};

  DescribeExecutionResponseBody() {}

  explicit DescribeExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowDefinition) {
      res["FlowDefinition"] = boost::any(*flowDefinition);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startedTime) {
      res["StartedTime"] = boost::any(*startedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stoppedTime) {
      res["StoppedTime"] = boost::any(*stoppedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowDefinition") != m.end() && !m["FlowDefinition"].empty()) {
      flowDefinition = make_shared<string>(boost::any_cast<string>(m["FlowDefinition"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartedTime") != m.end() && !m["StartedTime"].empty()) {
      startedTime = make_shared<string>(boost::any_cast<string>(m["StartedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StoppedTime") != m.end() && !m["StoppedTime"].empty()) {
      stoppedTime = make_shared<string>(boost::any_cast<string>(m["StoppedTime"]));
    }
  }


  virtual ~DescribeExecutionResponseBody() = default;
};
class DescribeExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExecutionResponseBody> body{};

  DescribeExecutionResponse() {}

  explicit DescribeExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExecutionResponse() = default;
};
class DescribeFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};

  DescribeFlowRequest() {}

  explicit DescribeFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFlowRequest() = default;
};
class DescribeFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> type{};

  DescribeFlowResponseBody() {}

  explicit DescribeFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeFlowResponseBody() = default;
};
class DescribeFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFlowResponseBody> body{};

  DescribeFlowResponse() {}

  explicit DescribeFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFlowResponse() = default;
};
class DescribeScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleName{};

  DescribeScheduleRequest() {}

  explicit DescribeScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~DescribeScheduleRequest() = default;
};
class DescribeScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> cronExpression{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> scheduleName{};

  DescribeScheduleResponseBody() {}

  explicit DescribeScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~DescribeScheduleResponseBody() = default;
};
class DescribeScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScheduleResponseBody> body{};

  DescribeScheduleResponse() {}

  explicit DescribeScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduleResponse() = default;
};
class GetExecutionHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionName{};
  shared_ptr<string> flowName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  GetExecutionHistoryRequest() {}

  explicit GetExecutionHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionName) {
      res["ExecutionName"] = boost::any(*executionName);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      executionName = make_shared<string>(boost::any_cast<string>(m["ExecutionName"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetExecutionHistoryRequest() = default;
};
class GetExecutionHistoryResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<string> eventDetail{};
  shared_ptr<long> eventId{};
  shared_ptr<long> scheduleEventId{};
  shared_ptr<string> stepName{};
  shared_ptr<string> time{};
  shared_ptr<string> type{};

  GetExecutionHistoryResponseBodyEvents() {}

  explicit GetExecutionHistoryResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDetail) {
      res["EventDetail"] = boost::any(*eventDetail);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (scheduleEventId) {
      res["ScheduleEventId"] = boost::any(*scheduleEventId);
    }
    if (stepName) {
      res["StepName"] = boost::any(*stepName);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDetail") != m.end() && !m["EventDetail"].empty()) {
      eventDetail = make_shared<string>(boost::any_cast<string>(m["EventDetail"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<long>(boost::any_cast<long>(m["EventId"]));
    }
    if (m.find("ScheduleEventId") != m.end() && !m["ScheduleEventId"].empty()) {
      scheduleEventId = make_shared<long>(boost::any_cast<long>(m["ScheduleEventId"]));
    }
    if (m.find("StepName") != m.end() && !m["StepName"].empty()) {
      stepName = make_shared<string>(boost::any_cast<string>(m["StepName"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetExecutionHistoryResponseBodyEvents() = default;
};
class GetExecutionHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetExecutionHistoryResponseBodyEvents>> events{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  GetExecutionHistoryResponseBody() {}

  explicit GetExecutionHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
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
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<GetExecutionHistoryResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExecutionHistoryResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<GetExecutionHistoryResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetExecutionHistoryResponseBody() = default;
};
class GetExecutionHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExecutionHistoryResponseBody> body{};

  GetExecutionHistoryResponse() {}

  explicit GetExecutionHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExecutionHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExecutionHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetExecutionHistoryResponse() = default;
};
class ListExecutionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionNamePrefix{};
  shared_ptr<string> flowName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startedTimeBegin{};
  shared_ptr<string> startedTimeEnd{};
  shared_ptr<string> status{};

  ListExecutionsRequest() {}

  explicit ListExecutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionNamePrefix) {
      res["ExecutionNamePrefix"] = boost::any(*executionNamePrefix);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startedTimeBegin) {
      res["StartedTimeBegin"] = boost::any(*startedTimeBegin);
    }
    if (startedTimeEnd) {
      res["StartedTimeEnd"] = boost::any(*startedTimeEnd);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionNamePrefix") != m.end() && !m["ExecutionNamePrefix"].empty()) {
      executionNamePrefix = make_shared<string>(boost::any_cast<string>(m["ExecutionNamePrefix"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartedTimeBegin") != m.end() && !m["StartedTimeBegin"].empty()) {
      startedTimeBegin = make_shared<string>(boost::any_cast<string>(m["StartedTimeBegin"]));
    }
    if (m.find("StartedTimeEnd") != m.end() && !m["StartedTimeEnd"].empty()) {
      startedTimeEnd = make_shared<string>(boost::any_cast<string>(m["StartedTimeEnd"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListExecutionsRequest() = default;
};
class ListExecutionsResponseBodyExecutions : public Darabonba::Model {
public:
  shared_ptr<string> flowDefinition{};
  shared_ptr<string> flowName{};
  shared_ptr<string> input{};
  shared_ptr<string> name{};
  shared_ptr<string> output{};
  shared_ptr<string> startedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> stoppedTime{};

  ListExecutionsResponseBodyExecutions() {}

  explicit ListExecutionsResponseBodyExecutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowDefinition) {
      res["FlowDefinition"] = boost::any(*flowDefinition);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (startedTime) {
      res["StartedTime"] = boost::any(*startedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stoppedTime) {
      res["StoppedTime"] = boost::any(*stoppedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowDefinition") != m.end() && !m["FlowDefinition"].empty()) {
      flowDefinition = make_shared<string>(boost::any_cast<string>(m["FlowDefinition"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("StartedTime") != m.end() && !m["StartedTime"].empty()) {
      startedTime = make_shared<string>(boost::any_cast<string>(m["StartedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StoppedTime") != m.end() && !m["StoppedTime"].empty()) {
      stoppedTime = make_shared<string>(boost::any_cast<string>(m["StoppedTime"]));
    }
  }


  virtual ~ListExecutionsResponseBodyExecutions() = default;
};
class ListExecutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExecutionsResponseBodyExecutions>> executions{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListExecutionsResponseBody() {}

  explicit ListExecutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executions) {
      vector<boost::any> temp1;
      for(auto item1:*executions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Executions"] = boost::any(temp1);
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
    if (m.find("Executions") != m.end() && !m["Executions"].empty()) {
      if (typeid(vector<boost::any>) == m["Executions"].type()) {
        vector<ListExecutionsResponseBodyExecutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Executions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExecutionsResponseBodyExecutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executions = make_shared<vector<ListExecutionsResponseBodyExecutions>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListExecutionsResponseBody() = default;
};
class ListExecutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExecutionsResponseBody> body{};

  ListExecutionsResponse() {}

  explicit ListExecutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExecutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExecutionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExecutionsResponse() = default;
};
class ListFlowsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListFlowsRequest() {}

  explicit ListFlowsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFlowsRequest() = default;
};
class ListFlowsResponseBodyFlows : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> type{};

  ListFlowsResponseBodyFlows() {}

  explicit ListFlowsResponseBodyFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFlowsResponseBodyFlows() = default;
};
class ListFlowsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowsResponseBodyFlows>> flows{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListFlowsResponseBody() {}

  explicit ListFlowsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flows) {
      vector<boost::any> temp1;
      for(auto item1:*flows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Flows"] = boost::any(temp1);
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
    if (m.find("Flows") != m.end() && !m["Flows"].empty()) {
      if (typeid(vector<boost::any>) == m["Flows"].type()) {
        vector<ListFlowsResponseBodyFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Flows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowsResponseBodyFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flows = make_shared<vector<ListFlowsResponseBodyFlows>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFlowsResponseBody() = default;
};
class ListFlowsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowsResponseBody> body{};

  ListFlowsResponse() {}

  explicit ListFlowsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowsResponse() = default;
};
class ListSchedulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListSchedulesRequest() {}

  explicit ListSchedulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSchedulesRequest() = default;
};
class ListSchedulesResponseBodySchedules : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> cronExpression{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> payload{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> scheduleName{};

  ListSchedulesResponseBodySchedules() {}

  explicit ListSchedulesResponseBodySchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~ListSchedulesResponseBodySchedules() = default;
};
class ListSchedulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSchedulesResponseBodySchedules>> schedules{};

  ListSchedulesResponseBody() {}

  explicit ListSchedulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (schedules) {
      vector<boost::any> temp1;
      for(auto item1:*schedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schedules"] = boost::any(temp1);
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
    if (m.find("Schedules") != m.end() && !m["Schedules"].empty()) {
      if (typeid(vector<boost::any>) == m["Schedules"].type()) {
        vector<ListSchedulesResponseBodySchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSchedulesResponseBodySchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedules = make_shared<vector<ListSchedulesResponseBodySchedules>>(expect1);
      }
    }
  }


  virtual ~ListSchedulesResponseBody() = default;
};
class ListSchedulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSchedulesResponseBody> body{};

  ListSchedulesResponse() {}

  explicit ListSchedulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSchedulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSchedulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSchedulesResponse() = default;
};
class ReportTaskFailedRequest : public Darabonba::Model {
public:
  shared_ptr<string> cause{};
  shared_ptr<string> error{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskToken{};

  ReportTaskFailedRequest() {}

  explicit ReportTaskFailedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cause) {
      res["Cause"] = boost::any(*cause);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskToken) {
      res["TaskToken"] = boost::any(*taskToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cause") != m.end() && !m["Cause"].empty()) {
      cause = make_shared<string>(boost::any_cast<string>(m["Cause"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskToken") != m.end() && !m["TaskToken"].empty()) {
      taskToken = make_shared<string>(boost::any_cast<string>(m["TaskToken"]));
    }
  }


  virtual ~ReportTaskFailedRequest() = default;
};
class ReportTaskFailedResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> eventId{};
  shared_ptr<string> requestId{};

  ReportTaskFailedResponseBody() {}

  explicit ReportTaskFailedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<long>(boost::any_cast<long>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReportTaskFailedResponseBody() = default;
};
class ReportTaskFailedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportTaskFailedResponseBody> body{};

  ReportTaskFailedResponse() {}

  explicit ReportTaskFailedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportTaskFailedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportTaskFailedResponseBody>(model1);
      }
    }
  }


  virtual ~ReportTaskFailedResponse() = default;
};
class ReportTaskSucceededRequest : public Darabonba::Model {
public:
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskToken{};

  ReportTaskSucceededRequest() {}

  explicit ReportTaskSucceededRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskToken) {
      res["TaskToken"] = boost::any(*taskToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskToken") != m.end() && !m["TaskToken"].empty()) {
      taskToken = make_shared<string>(boost::any_cast<string>(m["TaskToken"]));
    }
  }


  virtual ~ReportTaskSucceededRequest() = default;
};
class ReportTaskSucceededResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> eventId{};
  shared_ptr<string> requestId{};

  ReportTaskSucceededResponseBody() {}

  explicit ReportTaskSucceededResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<long>(boost::any_cast<long>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReportTaskSucceededResponseBody() = default;
};
class ReportTaskSucceededResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportTaskSucceededResponseBody> body{};

  ReportTaskSucceededResponse() {}

  explicit ReportTaskSucceededResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportTaskSucceededResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportTaskSucceededResponseBody>(model1);
      }
    }
  }


  virtual ~ReportTaskSucceededResponse() = default;
};
class StartExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackFnFTaskToken{};
  shared_ptr<string> executionName{};
  shared_ptr<string> flowName{};
  shared_ptr<string> input{};
  shared_ptr<string> requestId{};

  StartExecutionRequest() {}

  explicit StartExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackFnFTaskToken) {
      res["CallbackFnFTaskToken"] = boost::any(*callbackFnFTaskToken);
    }
    if (executionName) {
      res["ExecutionName"] = boost::any(*executionName);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackFnFTaskToken") != m.end() && !m["CallbackFnFTaskToken"].empty()) {
      callbackFnFTaskToken = make_shared<string>(boost::any_cast<string>(m["CallbackFnFTaskToken"]));
    }
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      executionName = make_shared<string>(boost::any_cast<string>(m["ExecutionName"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartExecutionRequest() = default;
};
class StartExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowDefinition{};
  shared_ptr<string> flowName{};
  shared_ptr<string> input{};
  shared_ptr<string> name{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> stoppedTime{};

  StartExecutionResponseBody() {}

  explicit StartExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowDefinition) {
      res["FlowDefinition"] = boost::any(*flowDefinition);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startedTime) {
      res["StartedTime"] = boost::any(*startedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stoppedTime) {
      res["StoppedTime"] = boost::any(*stoppedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowDefinition") != m.end() && !m["FlowDefinition"].empty()) {
      flowDefinition = make_shared<string>(boost::any_cast<string>(m["FlowDefinition"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartedTime") != m.end() && !m["StartedTime"].empty()) {
      startedTime = make_shared<string>(boost::any_cast<string>(m["StartedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StoppedTime") != m.end() && !m["StoppedTime"].empty()) {
      stoppedTime = make_shared<string>(boost::any_cast<string>(m["StoppedTime"]));
    }
  }


  virtual ~StartExecutionResponseBody() = default;
};
class StartExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartExecutionResponseBody> body{};

  StartExecutionResponse() {}

  explicit StartExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~StartExecutionResponse() = default;
};
class StartSyncExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionName{};
  shared_ptr<string> flowName{};
  shared_ptr<string> input{};
  shared_ptr<string> requestId{};

  StartSyncExecutionRequest() {}

  explicit StartSyncExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionName) {
      res["ExecutionName"] = boost::any(*executionName);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      executionName = make_shared<string>(boost::any_cast<string>(m["ExecutionName"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartSyncExecutionRequest() = default;
};
class StartSyncExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> flowName{};
  shared_ptr<string> name{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> stoppedTime{};

  StartSyncExecutionResponseBody() {}

  explicit StartSyncExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startedTime) {
      res["StartedTime"] = boost::any(*startedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stoppedTime) {
      res["StoppedTime"] = boost::any(*stoppedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartedTime") != m.end() && !m["StartedTime"].empty()) {
      startedTime = make_shared<string>(boost::any_cast<string>(m["StartedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StoppedTime") != m.end() && !m["StoppedTime"].empty()) {
      stoppedTime = make_shared<string>(boost::any_cast<string>(m["StoppedTime"]));
    }
  }


  virtual ~StartSyncExecutionResponseBody() = default;
};
class StartSyncExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSyncExecutionResponseBody> body{};

  StartSyncExecutionResponse() {}

  explicit StartSyncExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartSyncExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSyncExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~StartSyncExecutionResponse() = default;
};
class StopExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> cause{};
  shared_ptr<string> error{};
  shared_ptr<string> executionName{};
  shared_ptr<string> flowName{};
  shared_ptr<string> requestId{};

  StopExecutionRequest() {}

  explicit StopExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cause) {
      res["Cause"] = boost::any(*cause);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (executionName) {
      res["ExecutionName"] = boost::any(*executionName);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cause") != m.end() && !m["Cause"].empty()) {
      cause = make_shared<string>(boost::any_cast<string>(m["Cause"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      executionName = make_shared<string>(boost::any_cast<string>(m["ExecutionName"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopExecutionRequest() = default;
};
class StopExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowDefinition{};
  shared_ptr<string> flowName{};
  shared_ptr<string> input{};
  shared_ptr<string> name{};
  shared_ptr<string> output{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> stoppedTime{};

  StopExecutionResponseBody() {}

  explicit StopExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowDefinition) {
      res["FlowDefinition"] = boost::any(*flowDefinition);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startedTime) {
      res["StartedTime"] = boost::any(*startedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stoppedTime) {
      res["StoppedTime"] = boost::any(*stoppedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowDefinition") != m.end() && !m["FlowDefinition"].empty()) {
      flowDefinition = make_shared<string>(boost::any_cast<string>(m["FlowDefinition"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartedTime") != m.end() && !m["StartedTime"].empty()) {
      startedTime = make_shared<string>(boost::any_cast<string>(m["StartedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StoppedTime") != m.end() && !m["StoppedTime"].empty()) {
      stoppedTime = make_shared<string>(boost::any_cast<string>(m["StoppedTime"]));
    }
  }


  virtual ~StopExecutionResponseBody() = default;
};
class StopExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopExecutionResponseBody> body{};

  StopExecutionResponse() {}

  explicit StopExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~StopExecutionResponse() = default;
};
class UpdateFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> type{};

  UpdateFlowRequest() {}

  explicit UpdateFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateFlowRequest() = default;
};
class UpdateFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> externalStorageLocation{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> type{};

  UpdateFlowResponseBody() {}

  explicit UpdateFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (externalStorageLocation) {
      res["ExternalStorageLocation"] = boost::any(*externalStorageLocation);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExternalStorageLocation") != m.end() && !m["ExternalStorageLocation"].empty()) {
      externalStorageLocation = make_shared<string>(boost::any_cast<string>(m["ExternalStorageLocation"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateFlowResponseBody() = default;
};
class UpdateFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFlowResponseBody> body{};

  UpdateFlowResponse() {}

  explicit UpdateFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFlowResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFlowResponse() = default;
};
class UpdateScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<string> flowName{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleName{};

  UpdateScheduleRequest() {}

  explicit UpdateScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~UpdateScheduleRequest() = default;
};
class UpdateScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> cronExpression{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> payload{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> scheduleName{};

  UpdateScheduleResponseBody() {}

  explicit UpdateScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (scheduleName) {
      res["ScheduleName"] = boost::any(*scheduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("ScheduleName") != m.end() && !m["ScheduleName"].empty()) {
      scheduleName = make_shared<string>(boost::any_cast<string>(m["ScheduleName"]));
    }
  }


  virtual ~UpdateScheduleResponseBody() = default;
};
class UpdateScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateScheduleResponseBody> body{};

  UpdateScheduleResponse() {}

  explicit UpdateScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateScheduleResponse() = default;
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
  CreateFlowResponse createFlowWithOptions(shared_ptr<CreateFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowResponse createFlow(shared_ptr<CreateFlowRequest> request);
  CreateScheduleResponse createScheduleWithOptions(shared_ptr<CreateScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduleResponse createSchedule(shared_ptr<CreateScheduleRequest> request);
  DeleteFlowResponse deleteFlowWithOptions(shared_ptr<DeleteFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowResponse deleteFlow(shared_ptr<DeleteFlowRequest> request);
  DeleteScheduleResponse deleteScheduleWithOptions(shared_ptr<DeleteScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScheduleResponse deleteSchedule(shared_ptr<DeleteScheduleRequest> request);
  DescribeExecutionResponse describeExecutionWithOptions(shared_ptr<DescribeExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExecutionResponse describeExecution(shared_ptr<DescribeExecutionRequest> request);
  DescribeFlowResponse describeFlowWithOptions(shared_ptr<DescribeFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFlowResponse describeFlow(shared_ptr<DescribeFlowRequest> request);
  DescribeScheduleResponse describeScheduleWithOptions(shared_ptr<DescribeScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduleResponse describeSchedule(shared_ptr<DescribeScheduleRequest> request);
  GetExecutionHistoryResponse getExecutionHistoryWithOptions(shared_ptr<GetExecutionHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExecutionHistoryResponse getExecutionHistory(shared_ptr<GetExecutionHistoryRequest> request);
  ListExecutionsResponse listExecutionsWithOptions(shared_ptr<ListExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExecutionsResponse listExecutions(shared_ptr<ListExecutionsRequest> request);
  ListFlowsResponse listFlowsWithOptions(shared_ptr<ListFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowsResponse listFlows(shared_ptr<ListFlowsRequest> request);
  ListSchedulesResponse listSchedulesWithOptions(shared_ptr<ListSchedulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSchedulesResponse listSchedules(shared_ptr<ListSchedulesRequest> request);
  ReportTaskFailedResponse reportTaskFailedWithOptions(shared_ptr<ReportTaskFailedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportTaskFailedResponse reportTaskFailed(shared_ptr<ReportTaskFailedRequest> request);
  ReportTaskSucceededResponse reportTaskSucceededWithOptions(shared_ptr<ReportTaskSucceededRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportTaskSucceededResponse reportTaskSucceeded(shared_ptr<ReportTaskSucceededRequest> request);
  StartExecutionResponse startExecutionWithOptions(shared_ptr<StartExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartExecutionResponse startExecution(shared_ptr<StartExecutionRequest> request);
  StartSyncExecutionResponse startSyncExecutionWithOptions(shared_ptr<StartSyncExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSyncExecutionResponse startSyncExecution(shared_ptr<StartSyncExecutionRequest> request);
  StopExecutionResponse stopExecutionWithOptions(shared_ptr<StopExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopExecutionResponse stopExecution(shared_ptr<StopExecutionRequest> request);
  UpdateFlowResponse updateFlowWithOptions(shared_ptr<UpdateFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFlowResponse updateFlow(shared_ptr<UpdateFlowRequest> request);
  UpdateScheduleResponse updateScheduleWithOptions(shared_ptr<UpdateScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateScheduleResponse updateSchedule(shared_ptr<UpdateScheduleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Fnf20190315

#endif
