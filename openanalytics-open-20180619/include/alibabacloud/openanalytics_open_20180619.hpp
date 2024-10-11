// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OPENANALYTICS-OPEN20180619_H_
#define ALIBABACLOUD_OPENANALYTICS-OPEN20180619_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Openanalytics-open20180619 {
class CancelSparkStatementRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> statementId{};

  CancelSparkStatementRequest() {}

  explicit CancelSparkStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (statementId) {
      res["StatementId"] = boost::any(*statementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("StatementId") != m.end() && !m["StatementId"].empty()) {
      statementId = make_shared<string>(boost::any_cast<string>(m["StatementId"]));
    }
  }


  virtual ~CancelSparkStatementRequest() = default;
};
class CancelSparkStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CancelSparkStatementResponseBody() {}

  explicit CancelSparkStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelSparkStatementResponseBody() = default;
};
class CancelSparkStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelSparkStatementResponseBody> body{};

  CancelSparkStatementResponse() {}

  explicit CancelSparkStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelSparkStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelSparkStatementResponseBody>(model1);
      }
    }
  }


  virtual ~CancelSparkStatementResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> component{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (component) {
      res["Component"] = boost::any(*component);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Component") != m.end() && !m["Component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["Component"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorInfo) {
      res["ErrorInfo"] = boost::any(*errorInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["ErrorInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class ExecuteSparkStatementRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> jobId{};
  shared_ptr<string> kind{};

  ExecuteSparkStatementRequest() {}

  explicit ExecuteSparkStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
  }


  virtual ~ExecuteSparkStatementRequest() = default;
};
class ExecuteSparkStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExecuteSparkStatementResponseBody() {}

  explicit ExecuteSparkStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecuteSparkStatementResponseBody() = default;
};
class ExecuteSparkStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteSparkStatementResponseBody> body{};

  ExecuteSparkStatementResponse() {}

  explicit ExecuteSparkStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteSparkStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteSparkStatementResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteSparkStatementResponse() = default;
};
class GetJobAttemptLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobAttemptId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> vcName{};

  GetJobAttemptLogRequest() {}

  explicit GetJobAttemptLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobAttemptId) {
      res["JobAttemptId"] = boost::any(*jobAttemptId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobAttemptId") != m.end() && !m["JobAttemptId"].empty()) {
      jobAttemptId = make_shared<string>(boost::any_cast<string>(m["JobAttemptId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~GetJobAttemptLogRequest() = default;
};
class GetJobAttemptLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetJobAttemptLogResponseBody() {}

  explicit GetJobAttemptLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobAttemptLogResponseBody() = default;
};
class GetJobAttemptLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobAttemptLogResponseBody> body{};

  GetJobAttemptLogResponse() {}

  explicit GetJobAttemptLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobAttemptLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobAttemptLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobAttemptLogResponse() = default;
};
class GetJobDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> vcName{};

  GetJobDetailRequest() {}

  explicit GetJobDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~GetJobDetailRequest() = default;
};
class GetJobDetailResponseBodyJobDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createTimeValue{};
  shared_ptr<string> detail{};
  shared_ptr<string> driverResourceSpec{};
  shared_ptr<string> executorInstances{};
  shared_ptr<string> executorResourceSpec{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> lastJobAttemptId{};
  shared_ptr<string> sparkUI{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> submitTimeValue{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateTimeValue{};
  shared_ptr<string> vcName{};

  GetJobDetailResponseBodyJobDetail() {}

  explicit GetJobDetailResponseBodyJobDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeValue) {
      res["CreateTimeValue"] = boost::any(*createTimeValue);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (driverResourceSpec) {
      res["DriverResourceSpec"] = boost::any(*driverResourceSpec);
    }
    if (executorInstances) {
      res["ExecutorInstances"] = boost::any(*executorInstances);
    }
    if (executorResourceSpec) {
      res["ExecutorResourceSpec"] = boost::any(*executorResourceSpec);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (lastJobAttemptId) {
      res["LastJobAttemptId"] = boost::any(*lastJobAttemptId);
    }
    if (sparkUI) {
      res["SparkUI"] = boost::any(*sparkUI);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    if (submitTimeValue) {
      res["SubmitTimeValue"] = boost::any(*submitTimeValue);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimeValue) {
      res["UpdateTimeValue"] = boost::any(*updateTimeValue);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeValue") != m.end() && !m["CreateTimeValue"].empty()) {
      createTimeValue = make_shared<string>(boost::any_cast<string>(m["CreateTimeValue"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("DriverResourceSpec") != m.end() && !m["DriverResourceSpec"].empty()) {
      driverResourceSpec = make_shared<string>(boost::any_cast<string>(m["DriverResourceSpec"]));
    }
    if (m.find("ExecutorInstances") != m.end() && !m["ExecutorInstances"].empty()) {
      executorInstances = make_shared<string>(boost::any_cast<string>(m["ExecutorInstances"]));
    }
    if (m.find("ExecutorResourceSpec") != m.end() && !m["ExecutorResourceSpec"].empty()) {
      executorResourceSpec = make_shared<string>(boost::any_cast<string>(m["ExecutorResourceSpec"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("LastJobAttemptId") != m.end() && !m["LastJobAttemptId"].empty()) {
      lastJobAttemptId = make_shared<string>(boost::any_cast<string>(m["LastJobAttemptId"]));
    }
    if (m.find("SparkUI") != m.end() && !m["SparkUI"].empty()) {
      sparkUI = make_shared<string>(boost::any_cast<string>(m["SparkUI"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
    if (m.find("SubmitTimeValue") != m.end() && !m["SubmitTimeValue"].empty()) {
      submitTimeValue = make_shared<string>(boost::any_cast<string>(m["SubmitTimeValue"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimeValue") != m.end() && !m["UpdateTimeValue"].empty()) {
      updateTimeValue = make_shared<string>(boost::any_cast<string>(m["UpdateTimeValue"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~GetJobDetailResponseBodyJobDetail() = default;
};
class GetJobDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetJobDetailResponseBodyJobDetail> jobDetail{};
  shared_ptr<string> requestId{};

  GetJobDetailResponseBody() {}

  explicit GetJobDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobDetail) {
      res["JobDetail"] = jobDetail ? boost::any(jobDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobDetail") != m.end() && !m["JobDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobDetail"].type()) {
        GetJobDetailResponseBodyJobDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobDetail"]));
        jobDetail = make_shared<GetJobDetailResponseBodyJobDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobDetailResponseBody() = default;
};
class GetJobDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobDetailResponseBody> body{};

  GetJobDetailResponse() {}

  explicit GetJobDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobDetailResponse() = default;
};
class GetJobLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> vcName{};

  GetJobLogRequest() {}

  explicit GetJobLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~GetJobLogRequest() = default;
};
class GetJobLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetJobLogResponseBody() {}

  explicit GetJobLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobLogResponseBody() = default;
};
class GetJobLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobLogResponseBody> body{};

  GetJobLogResponse() {}

  explicit GetJobLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobLogResponse() = default;
};
class GetJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> vcName{};

  GetJobStatusRequest() {}

  explicit GetJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~GetJobStatusRequest() = default;
};
class GetJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetJobStatusResponseBody() {}

  explicit GetJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetJobStatusResponseBody() = default;
};
class GetJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobStatusResponseBody> body{};

  GetJobStatusResponse() {}

  explicit GetJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobStatusResponse() = default;
};
class GetSparkSessionStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetSparkSessionStateRequest() {}

  explicit GetSparkSessionStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSparkSessionStateRequest() = default;
};
class GetSparkSessionStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  GetSparkSessionStateResponseBody() {}

  explicit GetSparkSessionStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSparkSessionStateResponseBody() = default;
};
class GetSparkSessionStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkSessionStateResponseBody> body{};

  GetSparkSessionStateResponse() {}

  explicit GetSparkSessionStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSparkSessionStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkSessionStateResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkSessionStateResponse() = default;
};
class GetSparkStatementRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<long> statementId{};

  GetSparkStatementRequest() {}

  explicit GetSparkStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (statementId) {
      res["StatementId"] = boost::any(*statementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("StatementId") != m.end() && !m["StatementId"].empty()) {
      statementId = make_shared<long>(boost::any_cast<long>(m["StatementId"]));
    }
  }


  virtual ~GetSparkStatementRequest() = default;
};
class GetSparkStatementResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> completedTime{};
  shared_ptr<long> id{};
  shared_ptr<string> output{};
  shared_ptr<double> process{};
  shared_ptr<long> startedTime{};
  shared_ptr<string> state{};

  GetSparkStatementResponseBodyData() {}

  explicit GetSparkStatementResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (startedTime) {
      res["StartedTime"] = boost::any(*startedTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<long>(boost::any_cast<long>(m["CompletedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<double>(boost::any_cast<double>(m["Process"]));
    }
    if (m.find("StartedTime") != m.end() && !m["StartedTime"].empty()) {
      startedTime = make_shared<long>(boost::any_cast<long>(m["StartedTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~GetSparkStatementResponseBodyData() = default;
};
class GetSparkStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSparkStatementResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSparkStatementResponseBody() {}

  explicit GetSparkStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSparkStatementResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSparkStatementResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSparkStatementResponseBody() = default;
};
class GetSparkStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSparkStatementResponseBody> body{};

  GetSparkStatementResponse() {}

  explicit GetSparkStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSparkStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSparkStatementResponseBody>(model1);
      }
    }
  }


  virtual ~GetSparkStatementResponse() = default;
};
class KillSparkJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> vcName{};

  KillSparkJobRequest() {}

  explicit KillSparkJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~KillSparkJobRequest() = default;
};
class KillSparkJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  KillSparkJobResponseBody() {}

  explicit KillSparkJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~KillSparkJobResponseBody() = default;
};
class KillSparkJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KillSparkJobResponseBody> body{};

  KillSparkJobResponse() {}

  explicit KillSparkJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KillSparkJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillSparkJobResponseBody>(model1);
      }
    }
  }


  virtual ~KillSparkJobResponse() = default;
};
class ListSparkJobRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> condition{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> vcName{};

  ListSparkJobRequest() {}

  explicit ListSparkJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Condition"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      condition = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~ListSparkJobRequest() = default;
};
class ListSparkJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> conditionShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> vcName{};

  ListSparkJobShrinkRequest() {}

  explicit ListSparkJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionShrink) {
      res["Condition"] = boost::any(*conditionShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      conditionShrink = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~ListSparkJobShrinkRequest() = default;
};
class ListSparkJobResponseBodyDataResultJobList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createTimeValue{};
  shared_ptr<string> detail{};
  shared_ptr<string> driverResourceSpec{};
  shared_ptr<string> executorInstances{};
  shared_ptr<string> executorResourceSpec{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> sparkUI{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> submitTimeValue{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateTimeValue{};
  shared_ptr<string> vcName{};

  ListSparkJobResponseBodyDataResultJobList() {}

  explicit ListSparkJobResponseBodyDataResultJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeValue) {
      res["CreateTimeValue"] = boost::any(*createTimeValue);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (driverResourceSpec) {
      res["DriverResourceSpec"] = boost::any(*driverResourceSpec);
    }
    if (executorInstances) {
      res["ExecutorInstances"] = boost::any(*executorInstances);
    }
    if (executorResourceSpec) {
      res["ExecutorResourceSpec"] = boost::any(*executorResourceSpec);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (sparkUI) {
      res["SparkUI"] = boost::any(*sparkUI);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    if (submitTimeValue) {
      res["SubmitTimeValue"] = boost::any(*submitTimeValue);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimeValue) {
      res["UpdateTimeValue"] = boost::any(*updateTimeValue);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeValue") != m.end() && !m["CreateTimeValue"].empty()) {
      createTimeValue = make_shared<string>(boost::any_cast<string>(m["CreateTimeValue"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("DriverResourceSpec") != m.end() && !m["DriverResourceSpec"].empty()) {
      driverResourceSpec = make_shared<string>(boost::any_cast<string>(m["DriverResourceSpec"]));
    }
    if (m.find("ExecutorInstances") != m.end() && !m["ExecutorInstances"].empty()) {
      executorInstances = make_shared<string>(boost::any_cast<string>(m["ExecutorInstances"]));
    }
    if (m.find("ExecutorResourceSpec") != m.end() && !m["ExecutorResourceSpec"].empty()) {
      executorResourceSpec = make_shared<string>(boost::any_cast<string>(m["ExecutorResourceSpec"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("SparkUI") != m.end() && !m["SparkUI"].empty()) {
      sparkUI = make_shared<string>(boost::any_cast<string>(m["SparkUI"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
    if (m.find("SubmitTimeValue") != m.end() && !m["SubmitTimeValue"].empty()) {
      submitTimeValue = make_shared<string>(boost::any_cast<string>(m["SubmitTimeValue"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimeValue") != m.end() && !m["UpdateTimeValue"].empty()) {
      updateTimeValue = make_shared<string>(boost::any_cast<string>(m["UpdateTimeValue"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~ListSparkJobResponseBodyDataResultJobList() = default;
};
class ListSparkJobResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListSparkJobResponseBodyDataResultJobList>> jobList{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListSparkJobResponseBodyDataResult() {}

  explicit ListSparkJobResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobList) {
      vector<boost::any> temp1;
      for(auto item1:*jobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobList") != m.end() && !m["JobList"].empty()) {
      if (typeid(vector<boost::any>) == m["JobList"].type()) {
        vector<ListSparkJobResponseBodyDataResultJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSparkJobResponseBodyDataResultJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobList = make_shared<vector<ListSparkJobResponseBodyDataResultJobList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListSparkJobResponseBodyDataResult() = default;
};
class ListSparkJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSparkJobResponseBodyDataResult> dataResult{};
  shared_ptr<string> requestId{};

  ListSparkJobResponseBody() {}

  explicit ListSparkJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataResult) {
      res["DataResult"] = dataResult ? boost::any(dataResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataResult") != m.end() && !m["DataResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataResult"].type()) {
        ListSparkJobResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataResult"]));
        dataResult = make_shared<ListSparkJobResponseBodyDataResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSparkJobResponseBody() = default;
};
class ListSparkJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSparkJobResponseBody> body{};

  ListSparkJobResponse() {}

  explicit ListSparkJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSparkJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSparkJobResponseBody>(model1);
      }
    }
  }


  virtual ~ListSparkJobResponse() = default;
};
class ListSparkJobAttemptRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> condition{};
  shared_ptr<string> jobId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> vcName{};

  ListSparkJobAttemptRequest() {}

  explicit ListSparkJobAttemptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["Condition"] = boost::any(*condition);
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
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Condition"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      condition = make_shared<map<string, boost::any>>(toMap1);
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
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~ListSparkJobAttemptRequest() = default;
};
class ListSparkJobAttemptShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> conditionShrink{};
  shared_ptr<string> jobId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> vcName{};

  ListSparkJobAttemptShrinkRequest() {}

  explicit ListSparkJobAttemptShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionShrink) {
      res["Condition"] = boost::any(*conditionShrink);
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
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      conditionShrink = make_shared<string>(boost::any_cast<string>(m["Condition"]));
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
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~ListSparkJobAttemptShrinkRequest() = default;
};
class ListSparkJobAttemptResponseBodyDataResultJobAttemptList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createTimeValue{};
  shared_ptr<string> detail{};
  shared_ptr<string> durationTime{};
  shared_ptr<string> durationTimeValue{};
  shared_ptr<string> jobAttemptId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> sparkUI{};
  shared_ptr<string> status{};
  shared_ptr<string> terminatedTime{};
  shared_ptr<string> terminatedTimeValue{};
  shared_ptr<string> vcName{};

  ListSparkJobAttemptResponseBodyDataResultJobAttemptList() {}

  explicit ListSparkJobAttemptResponseBodyDataResultJobAttemptList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeValue) {
      res["CreateTimeValue"] = boost::any(*createTimeValue);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (durationTime) {
      res["DurationTime"] = boost::any(*durationTime);
    }
    if (durationTimeValue) {
      res["DurationTimeValue"] = boost::any(*durationTimeValue);
    }
    if (jobAttemptId) {
      res["JobAttemptId"] = boost::any(*jobAttemptId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (sparkUI) {
      res["SparkUI"] = boost::any(*sparkUI);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (terminatedTime) {
      res["TerminatedTime"] = boost::any(*terminatedTime);
    }
    if (terminatedTimeValue) {
      res["TerminatedTimeValue"] = boost::any(*terminatedTimeValue);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeValue") != m.end() && !m["CreateTimeValue"].empty()) {
      createTimeValue = make_shared<string>(boost::any_cast<string>(m["CreateTimeValue"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("DurationTime") != m.end() && !m["DurationTime"].empty()) {
      durationTime = make_shared<string>(boost::any_cast<string>(m["DurationTime"]));
    }
    if (m.find("DurationTimeValue") != m.end() && !m["DurationTimeValue"].empty()) {
      durationTimeValue = make_shared<string>(boost::any_cast<string>(m["DurationTimeValue"]));
    }
    if (m.find("JobAttemptId") != m.end() && !m["JobAttemptId"].empty()) {
      jobAttemptId = make_shared<string>(boost::any_cast<string>(m["JobAttemptId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("SparkUI") != m.end() && !m["SparkUI"].empty()) {
      sparkUI = make_shared<string>(boost::any_cast<string>(m["SparkUI"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TerminatedTime") != m.end() && !m["TerminatedTime"].empty()) {
      terminatedTime = make_shared<string>(boost::any_cast<string>(m["TerminatedTime"]));
    }
    if (m.find("TerminatedTimeValue") != m.end() && !m["TerminatedTimeValue"].empty()) {
      terminatedTimeValue = make_shared<string>(boost::any_cast<string>(m["TerminatedTimeValue"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~ListSparkJobAttemptResponseBodyDataResultJobAttemptList() = default;
};
class ListSparkJobAttemptResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListSparkJobAttemptResponseBodyDataResultJobAttemptList>> jobAttemptList{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListSparkJobAttemptResponseBodyDataResult() {}

  explicit ListSparkJobAttemptResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobAttemptList) {
      vector<boost::any> temp1;
      for(auto item1:*jobAttemptList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobAttemptList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobAttemptList") != m.end() && !m["JobAttemptList"].empty()) {
      if (typeid(vector<boost::any>) == m["JobAttemptList"].type()) {
        vector<ListSparkJobAttemptResponseBodyDataResultJobAttemptList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobAttemptList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSparkJobAttemptResponseBodyDataResultJobAttemptList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobAttemptList = make_shared<vector<ListSparkJobAttemptResponseBodyDataResultJobAttemptList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListSparkJobAttemptResponseBodyDataResult() = default;
};
class ListSparkJobAttemptResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSparkJobAttemptResponseBodyDataResult> dataResult{};
  shared_ptr<string> requestId{};

  ListSparkJobAttemptResponseBody() {}

  explicit ListSparkJobAttemptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataResult) {
      res["DataResult"] = dataResult ? boost::any(dataResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataResult") != m.end() && !m["DataResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataResult"].type()) {
        ListSparkJobAttemptResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataResult"]));
        dataResult = make_shared<ListSparkJobAttemptResponseBodyDataResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSparkJobAttemptResponseBody() = default;
};
class ListSparkJobAttemptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSparkJobAttemptResponseBody> body{};

  ListSparkJobAttemptResponse() {}

  explicit ListSparkJobAttemptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSparkJobAttemptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSparkJobAttemptResponseBody>(model1);
      }
    }
  }


  virtual ~ListSparkJobAttemptResponse() = default;
};
class ListSparkStatementsRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  ListSparkStatementsRequest() {}

  explicit ListSparkStatementsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSparkStatementsRequest() = default;
};
class ListSparkStatementsResponseBodyStatements : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> completedTime{};
  shared_ptr<long> id{};
  shared_ptr<string> output{};
  shared_ptr<double> progress{};
  shared_ptr<long> startedTime{};
  shared_ptr<string> state{};

  ListSparkStatementsResponseBodyStatements() {}

  explicit ListSparkStatementsResponseBodyStatements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (startedTime) {
      res["StartedTime"] = boost::any(*startedTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<long>(boost::any_cast<long>(m["CompletedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("StartedTime") != m.end() && !m["StartedTime"].empty()) {
      startedTime = make_shared<long>(boost::any_cast<long>(m["StartedTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListSparkStatementsResponseBodyStatements() = default;
};
class ListSparkStatementsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSparkStatementsResponseBodyStatements>> statements{};

  ListSparkStatementsResponseBody() {}

  explicit ListSparkStatementsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statements) {
      vector<boost::any> temp1;
      for(auto item1:*statements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Statements"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statements") != m.end() && !m["Statements"].empty()) {
      if (typeid(vector<boost::any>) == m["Statements"].type()) {
        vector<ListSparkStatementsResponseBodyStatements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Statements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSparkStatementsResponseBodyStatements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statements = make_shared<vector<ListSparkStatementsResponseBodyStatements>>(expect1);
      }
    }
  }


  virtual ~ListSparkStatementsResponseBody() = default;
};
class ListSparkStatementsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSparkStatementsResponseBody> body{};

  ListSparkStatementsResponse() {}

  explicit ListSparkStatementsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSparkStatementsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSparkStatementsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSparkStatementsResponse() = default;
};
class ReleaseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  ReleaseInstanceRequest() {}

  explicit ReleaseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ReleaseInstanceRequest() = default;
};
class ReleaseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  ReleaseInstanceResponseBody() {}

  explicit ReleaseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorInfo) {
      res["ErrorInfo"] = boost::any(*errorInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["ErrorInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReleaseInstanceResponseBody() = default;
};
class ReleaseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstanceResponseBody> body{};

  ReleaseInstanceResponse() {}

  explicit ReleaseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstanceResponse() = default;
};
class SubmitSparkJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> configJson{};
  shared_ptr<string> vcName{};

  SubmitSparkJobRequest() {}

  explicit SubmitSparkJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configJson) {
      res["ConfigJson"] = boost::any(*configJson);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigJson") != m.end() && !m["ConfigJson"].empty()) {
      configJson = make_shared<string>(boost::any_cast<string>(m["ConfigJson"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~SubmitSparkJobRequest() = default;
};
class SubmitSparkJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  SubmitSparkJobResponseBody() {}

  explicit SubmitSparkJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitSparkJobResponseBody() = default;
};
class SubmitSparkJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitSparkJobResponseBody> body{};

  SubmitSparkJobResponse() {}

  explicit SubmitSparkJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSparkJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSparkJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSparkJobResponse() = default;
};
class SubmitSparkSQLRequest : public Darabonba::Model {
public:
  shared_ptr<string> sql{};
  shared_ptr<string> vcName{};

  SubmitSparkSQLRequest() {}

  explicit SubmitSparkSQLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~SubmitSparkSQLRequest() = default;
};
class SubmitSparkSQLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  SubmitSparkSQLResponseBody() {}

  explicit SubmitSparkSQLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitSparkSQLResponseBody() = default;
};
class SubmitSparkSQLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitSparkSQLResponseBody> body{};

  SubmitSparkSQLResponse() {}

  explicit SubmitSparkSQLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSparkSQLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSparkSQLResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSparkSQLResponse() = default;
};
class ValidateVirtualClusterNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> vcName{};

  ValidateVirtualClusterNameRequest() {}

  explicit ValidateVirtualClusterNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vcName) {
      res["VcName"] = boost::any(*vcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VcName") != m.end() && !m["VcName"].empty()) {
      vcName = make_shared<string>(boost::any_cast<string>(m["VcName"]));
    }
  }


  virtual ~ValidateVirtualClusterNameRequest() = default;
};
class ValidateVirtualClusterNameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> legal{};
  shared_ptr<string> message{};

  ValidateVirtualClusterNameResponseBodyData() {}

  explicit ValidateVirtualClusterNameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (legal) {
      res["Legal"] = boost::any(*legal);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Legal") != m.end() && !m["Legal"].empty()) {
      legal = make_shared<string>(boost::any_cast<string>(m["Legal"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ValidateVirtualClusterNameResponseBodyData() = default;
};
class ValidateVirtualClusterNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<ValidateVirtualClusterNameResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ValidateVirtualClusterNameResponseBody() {}

  explicit ValidateVirtualClusterNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateVirtualClusterNameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ValidateVirtualClusterNameResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ValidateVirtualClusterNameResponseBody() = default;
};
class ValidateVirtualClusterNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateVirtualClusterNameResponseBody> body{};

  ValidateVirtualClusterNameResponse() {}

  explicit ValidateVirtualClusterNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateVirtualClusterNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateVirtualClusterNameResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateVirtualClusterNameResponse() = default;
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
  CancelSparkStatementResponse cancelSparkStatementWithOptions(shared_ptr<CancelSparkStatementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelSparkStatementResponse cancelSparkStatement(shared_ptr<CancelSparkStatementRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  ExecuteSparkStatementResponse executeSparkStatementWithOptions(shared_ptr<ExecuteSparkStatementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteSparkStatementResponse executeSparkStatement(shared_ptr<ExecuteSparkStatementRequest> request);
  GetJobAttemptLogResponse getJobAttemptLogWithOptions(shared_ptr<GetJobAttemptLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobAttemptLogResponse getJobAttemptLog(shared_ptr<GetJobAttemptLogRequest> request);
  GetJobDetailResponse getJobDetailWithOptions(shared_ptr<GetJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobDetailResponse getJobDetail(shared_ptr<GetJobDetailRequest> request);
  GetJobLogResponse getJobLogWithOptions(shared_ptr<GetJobLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobLogResponse getJobLog(shared_ptr<GetJobLogRequest> request);
  GetJobStatusResponse getJobStatusWithOptions(shared_ptr<GetJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobStatusResponse getJobStatus(shared_ptr<GetJobStatusRequest> request);
  GetSparkSessionStateResponse getSparkSessionStateWithOptions(shared_ptr<GetSparkSessionStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkSessionStateResponse getSparkSessionState(shared_ptr<GetSparkSessionStateRequest> request);
  GetSparkStatementResponse getSparkStatementWithOptions(shared_ptr<GetSparkStatementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSparkStatementResponse getSparkStatement(shared_ptr<GetSparkStatementRequest> request);
  KillSparkJobResponse killSparkJobWithOptions(shared_ptr<KillSparkJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillSparkJobResponse killSparkJob(shared_ptr<KillSparkJobRequest> request);
  ListSparkJobResponse listSparkJobWithOptions(shared_ptr<ListSparkJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSparkJobResponse listSparkJob(shared_ptr<ListSparkJobRequest> request);
  ListSparkJobAttemptResponse listSparkJobAttemptWithOptions(shared_ptr<ListSparkJobAttemptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSparkJobAttemptResponse listSparkJobAttempt(shared_ptr<ListSparkJobAttemptRequest> request);
  ListSparkStatementsResponse listSparkStatementsWithOptions(shared_ptr<ListSparkStatementsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSparkStatementsResponse listSparkStatements(shared_ptr<ListSparkStatementsRequest> request);
  ReleaseInstanceResponse releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstanceResponse releaseInstance(shared_ptr<ReleaseInstanceRequest> request);
  SubmitSparkJobResponse submitSparkJobWithOptions(shared_ptr<SubmitSparkJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSparkJobResponse submitSparkJob(shared_ptr<SubmitSparkJobRequest> request);
  SubmitSparkSQLResponse submitSparkSQLWithOptions(shared_ptr<SubmitSparkSQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSparkSQLResponse submitSparkSQL(shared_ptr<SubmitSparkSQLRequest> request);
  ValidateVirtualClusterNameResponse validateVirtualClusterNameWithOptions(shared_ptr<ValidateVirtualClusterNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateVirtualClusterNameResponse validateVirtualClusterName(shared_ptr<ValidateVirtualClusterNameRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Openanalytics-open20180619

#endif
