// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PTS20150801_H_
#define ALIBABACLOUD_PTS20150801_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_PTS20150801 {
class CreateTransactionRequest : public Darabonba::Model {
public:
  shared_ptr<long> scriptId{};
  shared_ptr<string> transactionName{};

  CreateTransactionRequest() {}

  explicit CreateTransactionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scriptId) {
      res["ScriptId"] = boost::any(*scriptId);
    }
    if (transactionName) {
      res["TransactionName"] = boost::any(*transactionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScriptId") != m.end() && !m["ScriptId"].empty()) {
      scriptId = make_shared<long>(boost::any_cast<long>(m["ScriptId"]));
    }
    if (m.find("TransactionName") != m.end() && !m["TransactionName"].empty()) {
      transactionName = make_shared<string>(boost::any_cast<string>(m["TransactionName"]));
    }
  }


  virtual ~CreateTransactionRequest() = default;
};
class CreateTransactionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> transactionId{};

  CreateTransactionResponseBody() {}

  explicit CreateTransactionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<long>(boost::any_cast<long>(m["TransactionId"]));
    }
  }


  virtual ~CreateTransactionResponseBody() = default;
};
class CreateTransactionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTransactionResponseBody> body{};

  CreateTransactionResponse() {}

  explicit CreateTransactionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTransactionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransactionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransactionResponse() = default;
};
class GetKeySecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> requestId{};
  shared_ptr<string> secret{};

  GetKeySecretResponseBody() {}

  explicit GetKeySecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
  }


  virtual ~GetKeySecretResponseBody() = default;
};
class GetKeySecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetKeySecretResponseBody> body{};

  GetKeySecretResponse() {}

  explicit GetKeySecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKeySecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKeySecretResponseBody>(model1);
      }
    }
  }


  virtual ~GetKeySecretResponse() = default;
};
class GetScriptRequest : public Darabonba::Model {
public:
  shared_ptr<long> scriptId{};
  shared_ptr<string> tfsname{};

  GetScriptRequest() {}

  explicit GetScriptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scriptId) {
      res["ScriptId"] = boost::any(*scriptId);
    }
    if (tfsname) {
      res["Tfsname"] = boost::any(*tfsname);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScriptId") != m.end() && !m["ScriptId"].empty()) {
      scriptId = make_shared<long>(boost::any_cast<long>(m["ScriptId"]));
    }
    if (m.find("Tfsname") != m.end() && !m["Tfsname"].empty()) {
      tfsname = make_shared<string>(boost::any_cast<string>(m["Tfsname"]));
    }
  }


  virtual ~GetScriptRequest() = default;
};
class GetScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> script{};

  GetScriptResponseBody() {}

  explicit GetScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~GetScriptResponseBody() = default;
};
class GetScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetScriptResponseBody> body{};

  GetScriptResponse() {}

  explicit GetScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetScriptResponseBody>(model1);
      }
    }
  }


  virtual ~GetScriptResponse() = default;
};
class GetTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  GetTasksRequest() {}

  explicit GetTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetTasksRequest() = default;
};
class GetTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tasks{};

  GetTasksResponseBody() {}

  explicit GetTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      res["Tasks"] = boost::any(*tasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      tasks = make_shared<string>(boost::any_cast<string>(m["Tasks"]));
    }
  }


  virtual ~GetTasksResponseBody() = default;
};
class GetTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTasksResponseBody> body{};

  GetTasksResponse() {}

  explicit GetTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTasksResponseBody>(model1);
      }
    }
  }


  virtual ~GetTasksResponse() = default;
};
class ReportLogSampleRequest : public Darabonba::Model {
public:
  shared_ptr<string> logSample{};
  shared_ptr<long> scenarioId{};
  shared_ptr<string> wskey{};

  ReportLogSampleRequest() {}

  explicit ReportLogSampleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logSample) {
      res["LogSample"] = boost::any(*logSample);
    }
    if (scenarioId) {
      res["ScenarioId"] = boost::any(*scenarioId);
    }
    if (wskey) {
      res["Wskey"] = boost::any(*wskey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogSample") != m.end() && !m["LogSample"].empty()) {
      logSample = make_shared<string>(boost::any_cast<string>(m["LogSample"]));
    }
    if (m.find("ScenarioId") != m.end() && !m["ScenarioId"].empty()) {
      scenarioId = make_shared<long>(boost::any_cast<long>(m["ScenarioId"]));
    }
    if (m.find("Wskey") != m.end() && !m["Wskey"].empty()) {
      wskey = make_shared<string>(boost::any_cast<string>(m["Wskey"]));
    }
  }


  virtual ~ReportLogSampleRequest() = default;
};
class ReportLogSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReportLogSampleResponseBody() {}

  explicit ReportLogSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReportLogSampleResponseBody() = default;
};
class ReportLogSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportLogSampleResponseBody> body{};

  ReportLogSampleResponse() {}

  explicit ReportLogSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportLogSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportLogSampleResponseBody>(model1);
      }
    }
  }


  virtual ~ReportLogSampleResponse() = default;
};
class ReportTestSampleRequest : public Darabonba::Model {
public:
  shared_ptr<string> testSample{};

  ReportTestSampleRequest() {}

  explicit ReportTestSampleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (testSample) {
      res["TestSample"] = boost::any(*testSample);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TestSample") != m.end() && !m["TestSample"].empty()) {
      testSample = make_shared<string>(boost::any_cast<string>(m["TestSample"]));
    }
  }


  virtual ~ReportTestSampleRequest() = default;
};
class ReportTestSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReportTestSampleResponseBody() {}

  explicit ReportTestSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReportTestSampleResponseBody() = default;
};
class ReportTestSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportTestSampleResponseBody> body{};

  ReportTestSampleResponse() {}

  explicit ReportTestSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportTestSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportTestSampleResponseBody>(model1);
      }
    }
  }


  virtual ~ReportTestSampleResponse() = default;
};
class ReportVuserRequest : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreated{};
  shared_ptr<long> scenarioId{};
  shared_ptr<long> vuser{};
  shared_ptr<string> wskey{};

  ReportVuserRequest() {}

  explicit ReportVuserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (scenarioId) {
      res["ScenarioId"] = boost::any(*scenarioId);
    }
    if (vuser) {
      res["Vuser"] = boost::any(*vuser);
    }
    if (wskey) {
      res["Wskey"] = boost::any(*wskey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<long>(boost::any_cast<long>(m["GmtCreated"]));
    }
    if (m.find("ScenarioId") != m.end() && !m["ScenarioId"].empty()) {
      scenarioId = make_shared<long>(boost::any_cast<long>(m["ScenarioId"]));
    }
    if (m.find("Vuser") != m.end() && !m["Vuser"].empty()) {
      vuser = make_shared<long>(boost::any_cast<long>(m["Vuser"]));
    }
    if (m.find("Wskey") != m.end() && !m["Wskey"].empty()) {
      wskey = make_shared<string>(boost::any_cast<string>(m["Wskey"]));
    }
  }


  virtual ~ReportVuserRequest() = default;
};
class ReportVuserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReportVuserResponseBody() {}

  explicit ReportVuserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReportVuserResponseBody() = default;
};
class ReportVuserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportVuserResponseBody> body{};

  ReportVuserResponse() {}

  explicit ReportVuserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportVuserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportVuserResponseBody>(model1);
      }
    }
  }


  virtual ~ReportVuserResponse() = default;
};
class SendWangWangRequest : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> title{};
  shared_ptr<map<string, boost::any>> to{};

  SendWangWangRequest() {}

  explicit SendWangWangRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["To"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      to = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~SendWangWangRequest() = default;
};
class SendWangWangShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> title{};
  shared_ptr<string> toShrink{};

  SendWangWangShrinkRequest() {}

  explicit SendWangWangShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (toShrink) {
      res["To"] = boost::any(*toShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      toShrink = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~SendWangWangShrinkRequest() = default;
};
class SendWangWangResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendWangWangResponseBody() {}

  explicit SendWangWangResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendWangWangResponseBody() = default;
};
class SendWangWangResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendWangWangResponseBody> body{};

  SendWangWangResponse() {}

  explicit SendWangWangResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendWangWangResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendWangWangResponseBody>(model1);
      }
    }
  }


  virtual ~SendWangWangResponse() = default;
};
class SetScenarioStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeIp{};
  shared_ptr<long> scenarioId{};
  shared_ptr<long> status{};
  shared_ptr<string> wskey{};

  SetScenarioStatusRequest() {}

  explicit SetScenarioStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeIp) {
      res["NodeIp"] = boost::any(*nodeIp);
    }
    if (scenarioId) {
      res["ScenarioId"] = boost::any(*scenarioId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wskey) {
      res["Wskey"] = boost::any(*wskey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeIp") != m.end() && !m["NodeIp"].empty()) {
      nodeIp = make_shared<string>(boost::any_cast<string>(m["NodeIp"]));
    }
    if (m.find("ScenarioId") != m.end() && !m["ScenarioId"].empty()) {
      scenarioId = make_shared<long>(boost::any_cast<long>(m["ScenarioId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Wskey") != m.end() && !m["Wskey"].empty()) {
      wskey = make_shared<string>(boost::any_cast<string>(m["Wskey"]));
    }
  }


  virtual ~SetScenarioStatusRequest() = default;
};
class SetScenarioStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetScenarioStatusResponseBody() {}

  explicit SetScenarioStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetScenarioStatusResponseBody() = default;
};
class SetScenarioStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetScenarioStatusResponseBody> body{};

  SetScenarioStatusResponse() {}

  explicit SetScenarioStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetScenarioStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetScenarioStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetScenarioStatusResponse() = default;
};
class SetTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> wskey{};

  SetTaskStatusRequest() {}

  explicit SetTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wskey) {
      res["Wskey"] = boost::any(*wskey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Wskey") != m.end() && !m["Wskey"].empty()) {
      wskey = make_shared<string>(boost::any_cast<string>(m["Wskey"]));
    }
  }


  virtual ~SetTaskStatusRequest() = default;
};
class SetTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetTaskStatusResponseBody() {}

  explicit SetTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetTaskStatusResponseBody() = default;
};
class SetTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetTaskStatusResponseBody> body{};

  SetTaskStatusResponse() {}

  explicit SetTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetTaskStatusResponse() = default;
};
class StopTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<long> taskId{};
  shared_ptr<string> type{};

  StopTaskRequest() {}

  explicit StopTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~StopTaskRequest() = default;
};
class StopTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopTaskResponseBody() {}

  explicit StopTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopTaskResponseBody() = default;
};
class StopTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopTaskResponseBody> body{};

  StopTaskResponse() {}

  explicit StopTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopTaskResponse() = default;
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
  CreateTransactionResponse createTransactionWithOptions(shared_ptr<CreateTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransactionResponse createTransaction(shared_ptr<CreateTransactionRequest> request);
  GetKeySecretResponse getKeySecretWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKeySecretResponse getKeySecret();
  GetScriptResponse getScriptWithOptions(shared_ptr<GetScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScriptResponse getScript(shared_ptr<GetScriptRequest> request);
  GetTasksResponse getTasksWithOptions(shared_ptr<GetTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTasksResponse getTasks(shared_ptr<GetTasksRequest> request);
  ReportLogSampleResponse reportLogSampleWithOptions(shared_ptr<ReportLogSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportLogSampleResponse reportLogSample(shared_ptr<ReportLogSampleRequest> request);
  ReportTestSampleResponse reportTestSampleWithOptions(shared_ptr<ReportTestSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportTestSampleResponse reportTestSample(shared_ptr<ReportTestSampleRequest> request);
  ReportVuserResponse reportVuserWithOptions(shared_ptr<ReportVuserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportVuserResponse reportVuser(shared_ptr<ReportVuserRequest> request);
  SendWangWangResponse sendWangWangWithOptions(shared_ptr<SendWangWangRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendWangWangResponse sendWangWang(shared_ptr<SendWangWangRequest> request);
  SetScenarioStatusResponse setScenarioStatusWithOptions(shared_ptr<SetScenarioStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetScenarioStatusResponse setScenarioStatus(shared_ptr<SetScenarioStatusRequest> request);
  SetTaskStatusResponse setTaskStatusWithOptions(shared_ptr<SetTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetTaskStatusResponse setTaskStatus(shared_ptr<SetTaskStatusRequest> request);
  StopTaskResponse stopTaskWithOptions(shared_ptr<StopTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTaskResponse stopTask(shared_ptr<StopTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PTS20150801

#endif
