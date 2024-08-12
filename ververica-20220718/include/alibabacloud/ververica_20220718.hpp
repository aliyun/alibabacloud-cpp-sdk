// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VERVERICA20220718_H_
#define ALIBABACLOUD_VERVERICA20220718_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ververica20220718 {
class JarArtifact : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalDependencies{};
  shared_ptr<string> entryClass{};
  shared_ptr<string> jarUri{};
  shared_ptr<string> mainArgs{};

  JarArtifact() {}

  explicit JarArtifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalDependencies) {
      res["additionalDependencies"] = boost::any(*additionalDependencies);
    }
    if (entryClass) {
      res["entryClass"] = boost::any(*entryClass);
    }
    if (jarUri) {
      res["jarUri"] = boost::any(*jarUri);
    }
    if (mainArgs) {
      res["mainArgs"] = boost::any(*mainArgs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalDependencies") != m.end() && !m["additionalDependencies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["additionalDependencies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["additionalDependencies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalDependencies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("entryClass") != m.end() && !m["entryClass"].empty()) {
      entryClass = make_shared<string>(boost::any_cast<string>(m["entryClass"]));
    }
    if (m.find("jarUri") != m.end() && !m["jarUri"].empty()) {
      jarUri = make_shared<string>(boost::any_cast<string>(m["jarUri"]));
    }
    if (m.find("mainArgs") != m.end() && !m["mainArgs"].empty()) {
      mainArgs = make_shared<string>(boost::any_cast<string>(m["mainArgs"]));
    }
  }


  virtual ~JarArtifact() = default;
};
class PythonArtifact : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalDependencies{};
  shared_ptr<vector<string>> additionalPythonArchives{};
  shared_ptr<vector<string>> additionalPythonLibraries{};
  shared_ptr<string> entryModule{};
  shared_ptr<string> mainArgs{};
  shared_ptr<string> pythonArtifactUri{};

  PythonArtifact() {}

  explicit PythonArtifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalDependencies) {
      res["additionalDependencies"] = boost::any(*additionalDependencies);
    }
    if (additionalPythonArchives) {
      res["additionalPythonArchives"] = boost::any(*additionalPythonArchives);
    }
    if (additionalPythonLibraries) {
      res["additionalPythonLibraries"] = boost::any(*additionalPythonLibraries);
    }
    if (entryModule) {
      res["entryModule"] = boost::any(*entryModule);
    }
    if (mainArgs) {
      res["mainArgs"] = boost::any(*mainArgs);
    }
    if (pythonArtifactUri) {
      res["pythonArtifactUri"] = boost::any(*pythonArtifactUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalDependencies") != m.end() && !m["additionalDependencies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["additionalDependencies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["additionalDependencies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalDependencies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("additionalPythonArchives") != m.end() && !m["additionalPythonArchives"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["additionalPythonArchives"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["additionalPythonArchives"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalPythonArchives = make_shared<vector<string>>(toVec1);
    }
    if (m.find("additionalPythonLibraries") != m.end() && !m["additionalPythonLibraries"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["additionalPythonLibraries"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["additionalPythonLibraries"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalPythonLibraries = make_shared<vector<string>>(toVec1);
    }
    if (m.find("entryModule") != m.end() && !m["entryModule"].empty()) {
      entryModule = make_shared<string>(boost::any_cast<string>(m["entryModule"]));
    }
    if (m.find("mainArgs") != m.end() && !m["mainArgs"].empty()) {
      mainArgs = make_shared<string>(boost::any_cast<string>(m["mainArgs"]));
    }
    if (m.find("pythonArtifactUri") != m.end() && !m["pythonArtifactUri"].empty()) {
      pythonArtifactUri = make_shared<string>(boost::any_cast<string>(m["pythonArtifactUri"]));
    }
  }


  virtual ~PythonArtifact() = default;
};
class SqlArtifact : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalDependencies{};
  shared_ptr<string> sqlScript{};

  SqlArtifact() {}

  explicit SqlArtifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalDependencies) {
      res["additionalDependencies"] = boost::any(*additionalDependencies);
    }
    if (sqlScript) {
      res["sqlScript"] = boost::any(*sqlScript);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalDependencies") != m.end() && !m["additionalDependencies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["additionalDependencies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["additionalDependencies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalDependencies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sqlScript") != m.end() && !m["sqlScript"].empty()) {
      sqlScript = make_shared<string>(boost::any_cast<string>(m["sqlScript"]));
    }
  }


  virtual ~SqlArtifact() = default;
};
class Artifact : public Darabonba::Model {
public:
  shared_ptr<JarArtifact> jarArtifact{};
  shared_ptr<string> kind{};
  shared_ptr<PythonArtifact> pythonArtifact{};
  shared_ptr<SqlArtifact> sqlArtifact{};

  Artifact() {}

  explicit Artifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jarArtifact) {
      res["jarArtifact"] = jarArtifact ? boost::any(jarArtifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (pythonArtifact) {
      res["pythonArtifact"] = pythonArtifact ? boost::any(pythonArtifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sqlArtifact) {
      res["sqlArtifact"] = sqlArtifact ? boost::any(sqlArtifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jarArtifact") != m.end() && !m["jarArtifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["jarArtifact"].type()) {
        JarArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jarArtifact"]));
        jarArtifact = make_shared<JarArtifact>(model1);
      }
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("pythonArtifact") != m.end() && !m["pythonArtifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["pythonArtifact"].type()) {
        PythonArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pythonArtifact"]));
        pythonArtifact = make_shared<PythonArtifact>(model1);
      }
    }
    if (m.find("sqlArtifact") != m.end() && !m["sqlArtifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["sqlArtifact"].type()) {
        SqlArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sqlArtifact"]));
        sqlArtifact = make_shared<SqlArtifact>(model1);
      }
    }
  }


  virtual ~Artifact() = default;
};
class ValidationErrorDetails : public Darabonba::Model {
public:
  shared_ptr<string> columnNumber{};
  shared_ptr<string> endColumnNumber{};
  shared_ptr<string> endLineNumber{};
  shared_ptr<string> lineNumber{};
  shared_ptr<string> message{};

  ValidationErrorDetails() {}

  explicit ValidationErrorDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnNumber) {
      res["columnNumber"] = boost::any(*columnNumber);
    }
    if (endColumnNumber) {
      res["endColumnNumber"] = boost::any(*endColumnNumber);
    }
    if (endLineNumber) {
      res["endLineNumber"] = boost::any(*endLineNumber);
    }
    if (lineNumber) {
      res["lineNumber"] = boost::any(*lineNumber);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnNumber") != m.end() && !m["columnNumber"].empty()) {
      columnNumber = make_shared<string>(boost::any_cast<string>(m["columnNumber"]));
    }
    if (m.find("endColumnNumber") != m.end() && !m["endColumnNumber"].empty()) {
      endColumnNumber = make_shared<string>(boost::any_cast<string>(m["endColumnNumber"]));
    }
    if (m.find("endLineNumber") != m.end() && !m["endLineNumber"].empty()) {
      endLineNumber = make_shared<string>(boost::any_cast<string>(m["endLineNumber"]));
    }
    if (m.find("lineNumber") != m.end() && !m["lineNumber"].empty()) {
      lineNumber = make_shared<string>(boost::any_cast<string>(m["lineNumber"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~ValidationErrorDetails() = default;
};
class ValidateStatementResult : public Darabonba::Model {
public:
  shared_ptr<ValidationErrorDetails> errorDetails{};
  shared_ptr<string> validationResult{};

  ValidateStatementResult() {}

  explicit ValidateStatementResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorDetails) {
      res["errorDetails"] = errorDetails ? boost::any(errorDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (validationResult) {
      res["validationResult"] = boost::any(*validationResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorDetails") != m.end() && !m["errorDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["errorDetails"].type()) {
        ValidationErrorDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["errorDetails"]));
        errorDetails = make_shared<ValidationErrorDetails>(model1);
      }
    }
    if (m.find("validationResult") != m.end() && !m["validationResult"].empty()) {
      validationResult = make_shared<string>(boost::any_cast<string>(m["validationResult"]));
    }
  }


  virtual ~ValidateStatementResult() = default;
};
class AsyncDraftDeployResult : public Darabonba::Model {
public:
  shared_ptr<ValidateStatementResult> artifactValidationDetail{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> ticketStatus{};

  AsyncDraftDeployResult() {}

  explicit AsyncDraftDeployResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactValidationDetail) {
      res["artifactValidationDetail"] = artifactValidationDetail ? boost::any(artifactValidationDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (ticketStatus) {
      res["ticketStatus"] = boost::any(*ticketStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifactValidationDetail") != m.end() && !m["artifactValidationDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["artifactValidationDetail"].type()) {
        ValidateStatementResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["artifactValidationDetail"]));
        artifactValidationDetail = make_shared<ValidateStatementResult>(model1);
      }
    }
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("ticketStatus") != m.end() && !m["ticketStatus"].empty()) {
      ticketStatus = make_shared<string>(boost::any_cast<string>(m["ticketStatus"]));
    }
  }


  virtual ~AsyncDraftDeployResult() = default;
};
class AsyncResourcePlanOperationResult : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> plan{};
  shared_ptr<string> ticketStatus{};

  AsyncResourcePlanOperationResult() {}

  explicit AsyncResourcePlanOperationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (plan) {
      res["plan"] = boost::any(*plan);
    }
    if (ticketStatus) {
      res["ticketStatus"] = boost::any(*ticketStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("plan") != m.end() && !m["plan"].empty()) {
      plan = make_shared<string>(boost::any_cast<string>(m["plan"]));
    }
    if (m.find("ticketStatus") != m.end() && !m["ticketStatus"].empty()) {
      ticketStatus = make_shared<string>(boost::any_cast<string>(m["ticketStatus"]));
    }
  }


  virtual ~AsyncResourcePlanOperationResult() = default;
};
class BasicResourceSettingSpec : public Darabonba::Model {
public:
  shared_ptr<double> cpu{};
  shared_ptr<string> memory{};

  BasicResourceSettingSpec() {}

  explicit BasicResourceSettingSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("memory") != m.end() && !m["memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["memory"]));
    }
  }


  virtual ~BasicResourceSettingSpec() = default;
};
class BasicResourceSetting : public Darabonba::Model {
public:
  shared_ptr<BasicResourceSettingSpec> jobmanagerResourceSettingSpec{};
  shared_ptr<long> parallelism{};
  shared_ptr<BasicResourceSettingSpec> taskmanagerResourceSettingSpec{};

  BasicResourceSetting() {}

  explicit BasicResourceSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobmanagerResourceSettingSpec) {
      res["jobmanagerResourceSettingSpec"] = jobmanagerResourceSettingSpec ? boost::any(jobmanagerResourceSettingSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parallelism) {
      res["parallelism"] = boost::any(*parallelism);
    }
    if (taskmanagerResourceSettingSpec) {
      res["taskmanagerResourceSettingSpec"] = taskmanagerResourceSettingSpec ? boost::any(taskmanagerResourceSettingSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobmanagerResourceSettingSpec") != m.end() && !m["jobmanagerResourceSettingSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobmanagerResourceSettingSpec"].type()) {
        BasicResourceSettingSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobmanagerResourceSettingSpec"]));
        jobmanagerResourceSettingSpec = make_shared<BasicResourceSettingSpec>(model1);
      }
    }
    if (m.find("parallelism") != m.end() && !m["parallelism"].empty()) {
      parallelism = make_shared<long>(boost::any_cast<long>(m["parallelism"]));
    }
    if (m.find("taskmanagerResourceSettingSpec") != m.end() && !m["taskmanagerResourceSettingSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["taskmanagerResourceSettingSpec"].type()) {
        BasicResourceSettingSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["taskmanagerResourceSettingSpec"]));
        taskmanagerResourceSettingSpec = make_shared<BasicResourceSettingSpec>(model1);
      }
    }
  }


  virtual ~BasicResourceSetting() = default;
};
class BatchResourceSetting : public Darabonba::Model {
public:
  shared_ptr<BasicResourceSetting> basicResourceSetting{};
  shared_ptr<long> maxSlot{};

  BatchResourceSetting() {}

  explicit BatchResourceSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicResourceSetting) {
      res["basicResourceSetting"] = basicResourceSetting ? boost::any(basicResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxSlot) {
      res["maxSlot"] = boost::any(*maxSlot);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("basicResourceSetting") != m.end() && !m["basicResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["basicResourceSetting"].type()) {
        BasicResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["basicResourceSetting"]));
        basicResourceSetting = make_shared<BasicResourceSetting>(model1);
      }
    }
    if (m.find("maxSlot") != m.end() && !m["maxSlot"].empty()) {
      maxSlot = make_shared<long>(boost::any_cast<long>(m["maxSlot"]));
    }
  }


  virtual ~BatchResourceSetting() = default;
};
class BriefDeploymentTarget : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<string> name{};

  BriefDeploymentTarget() {}

  explicit BriefDeploymentTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~BriefDeploymentTarget() = default;
};
class ExpertResourceSetting : public Darabonba::Model {
public:
  shared_ptr<BasicResourceSettingSpec> jobmanagerResourceSettingSpec{};
  shared_ptr<string> resourcePlan{};

  ExpertResourceSetting() {}

  explicit ExpertResourceSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobmanagerResourceSettingSpec) {
      res["jobmanagerResourceSettingSpec"] = jobmanagerResourceSettingSpec ? boost::any(jobmanagerResourceSettingSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourcePlan) {
      res["resourcePlan"] = boost::any(*resourcePlan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobmanagerResourceSettingSpec") != m.end() && !m["jobmanagerResourceSettingSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobmanagerResourceSettingSpec"].type()) {
        BasicResourceSettingSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobmanagerResourceSettingSpec"]));
        jobmanagerResourceSettingSpec = make_shared<BasicResourceSettingSpec>(model1);
      }
    }
    if (m.find("resourcePlan") != m.end() && !m["resourcePlan"].empty()) {
      resourcePlan = make_shared<string>(boost::any_cast<string>(m["resourcePlan"]));
    }
  }


  virtual ~ExpertResourceSetting() = default;
};
class StreamingResourceSetting : public Darabonba::Model {
public:
  shared_ptr<BasicResourceSetting> basicResourceSetting{};
  shared_ptr<ExpertResourceSetting> expertResourceSetting{};
  shared_ptr<string> resourceSettingMode{};

  StreamingResourceSetting() {}

  explicit StreamingResourceSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicResourceSetting) {
      res["basicResourceSetting"] = basicResourceSetting ? boost::any(basicResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expertResourceSetting) {
      res["expertResourceSetting"] = expertResourceSetting ? boost::any(expertResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSettingMode) {
      res["resourceSettingMode"] = boost::any(*resourceSettingMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("basicResourceSetting") != m.end() && !m["basicResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["basicResourceSetting"].type()) {
        BasicResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["basicResourceSetting"]));
        basicResourceSetting = make_shared<BasicResourceSetting>(model1);
      }
    }
    if (m.find("expertResourceSetting") != m.end() && !m["expertResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["expertResourceSetting"].type()) {
        ExpertResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["expertResourceSetting"]));
        expertResourceSetting = make_shared<ExpertResourceSetting>(model1);
      }
    }
    if (m.find("resourceSettingMode") != m.end() && !m["resourceSettingMode"].empty()) {
      resourceSettingMode = make_shared<string>(boost::any_cast<string>(m["resourceSettingMode"]));
    }
  }


  virtual ~StreamingResourceSetting() = default;
};
class BriefResourceSetting : public Darabonba::Model {
public:
  shared_ptr<BatchResourceSetting> batchResourceSetting{};
  shared_ptr<map<string, boost::any>> flinkConf{};
  shared_ptr<StreamingResourceSetting> streamingResourceSetting{};

  BriefResourceSetting() {}

  explicit BriefResourceSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchResourceSetting) {
      res["batchResourceSetting"] = batchResourceSetting ? boost::any(batchResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flinkConf) {
      res["flinkConf"] = boost::any(*flinkConf);
    }
    if (streamingResourceSetting) {
      res["streamingResourceSetting"] = streamingResourceSetting ? boost::any(streamingResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("batchResourceSetting") != m.end() && !m["batchResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["batchResourceSetting"].type()) {
        BatchResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["batchResourceSetting"]));
        batchResourceSetting = make_shared<BatchResourceSetting>(model1);
      }
    }
    if (m.find("flinkConf") != m.end() && !m["flinkConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["flinkConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      flinkConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("streamingResourceSetting") != m.end() && !m["streamingResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["streamingResourceSetting"].type()) {
        StreamingResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["streamingResourceSetting"]));
        streamingResourceSetting = make_shared<StreamingResourceSetting>(model1);
      }
    }
  }


  virtual ~BriefResourceSetting() = default;
};
class Catalog : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> properties{};

  Catalog() {}

  explicit Catalog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~Catalog() = default;
};
class Property : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<bool> definesFormat{};
  shared_ptr<string> description{};
  shared_ptr<string> key{};
  shared_ptr<bool> required{};
  shared_ptr<bool> sensitive{};

  Property() {}

  explicit Property(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (definesFormat) {
      res["definesFormat"] = boost::any(*definesFormat);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (sensitive) {
      res["sensitive"] = boost::any(*sensitive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("definesFormat") != m.end() && !m["definesFormat"].empty()) {
      definesFormat = make_shared<bool>(boost::any_cast<bool>(m["definesFormat"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("sensitive") != m.end() && !m["sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["sensitive"]));
    }
  }


  virtual ~Property() = default;
};
class Connector : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<vector<string>> dependencies{};
  shared_ptr<bool> lookup{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> name{};
  shared_ptr<vector<Property>> properties{};
  shared_ptr<bool> sink{};
  shared_ptr<bool> source{};
  shared_ptr<vector<string>> supportedFormats{};
  shared_ptr<string> type{};

  Connector() {}

  explicit Connector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (dependencies) {
      res["dependencies"] = boost::any(*dependencies);
    }
    if (lookup) {
      res["lookup"] = boost::any(*lookup);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (modifierName) {
      res["modifierName"] = boost::any(*modifierName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (properties) {
      vector<boost::any> temp1;
      for(auto item1:*properties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["properties"] = boost::any(temp1);
    }
    if (sink) {
      res["sink"] = boost::any(*sink);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (supportedFormats) {
      res["supportedFormats"] = boost::any(*supportedFormats);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("dependencies") != m.end() && !m["dependencies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dependencies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dependencies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependencies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("lookup") != m.end() && !m["lookup"].empty()) {
      lookup = make_shared<bool>(boost::any_cast<bool>(m["lookup"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("modifierName") != m.end() && !m["modifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["modifierName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<Property> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["properties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Property model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        properties = make_shared<vector<Property>>(expect1);
      }
    }
    if (m.find("sink") != m.end() && !m["sink"].empty()) {
      sink = make_shared<bool>(boost::any_cast<bool>(m["sink"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<bool>(boost::any_cast<bool>(m["source"]));
    }
    if (m.find("supportedFormats") != m.end() && !m["supportedFormats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["supportedFormats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportedFormats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedFormats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~Connector() = default;
};
class UdfClass : public Darabonba::Model {
public:
  shared_ptr<string> className{};
  shared_ptr<string> classType{};
  shared_ptr<vector<string>> functionNames{};
  shared_ptr<string> udfArtifactName{};

  UdfClass() {}

  explicit UdfClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (classType) {
      res["classType"] = boost::any(*classType);
    }
    if (functionNames) {
      res["functionNames"] = boost::any(*functionNames);
    }
    if (udfArtifactName) {
      res["udfArtifactName"] = boost::any(*udfArtifactName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("classType") != m.end() && !m["classType"].empty()) {
      classType = make_shared<string>(boost::any_cast<string>(m["classType"]));
    }
    if (m.find("functionNames") != m.end() && !m["functionNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["functionNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["functionNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      functionNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("udfArtifactName") != m.end() && !m["udfArtifactName"].empty()) {
      udfArtifactName = make_shared<string>(boost::any_cast<string>(m["udfArtifactName"]));
    }
  }


  virtual ~UdfClass() = default;
};
class UdfArtifact : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<long> createdAt{};
  shared_ptr<string> creator{};
  shared_ptr<vector<string>> dependencyJarUris{};
  shared_ptr<string> jarUrl{};
  shared_ptr<long> modifiedAt{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<vector<UdfClass>> udfClasses{};

  UdfArtifact() {}

  explicit UdfArtifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["artifactType"] = boost::any(*artifactType);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (dependencyJarUris) {
      res["dependencyJarUris"] = boost::any(*dependencyJarUris);
    }
    if (jarUrl) {
      res["jarUrl"] = boost::any(*jarUrl);
    }
    if (modifiedAt) {
      res["modifiedAt"] = boost::any(*modifiedAt);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (udfClasses) {
      vector<boost::any> temp1;
      for(auto item1:*udfClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["udfClasses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifactType") != m.end() && !m["artifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["artifactType"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<long>(boost::any_cast<long>(m["createdAt"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("dependencyJarUris") != m.end() && !m["dependencyJarUris"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dependencyJarUris"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dependencyJarUris"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependencyJarUris = make_shared<vector<string>>(toVec1);
    }
    if (m.find("jarUrl") != m.end() && !m["jarUrl"].empty()) {
      jarUrl = make_shared<string>(boost::any_cast<string>(m["jarUrl"]));
    }
    if (m.find("modifiedAt") != m.end() && !m["modifiedAt"].empty()) {
      modifiedAt = make_shared<long>(boost::any_cast<long>(m["modifiedAt"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("udfClasses") != m.end() && !m["udfClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["udfClasses"].type()) {
        vector<UdfClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["udfClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UdfClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        udfClasses = make_shared<vector<UdfClass>>(expect1);
      }
    }
  }


  virtual ~UdfArtifact() = default;
};
class CreateUdfArtifactResult : public Darabonba::Model {
public:
  shared_ptr<vector<UdfClass>> collidingClasses{};
  shared_ptr<bool> createSuccess{};
  shared_ptr<string> message{};
  shared_ptr<UdfArtifact> udfArtifact{};

  CreateUdfArtifactResult() {}

  explicit CreateUdfArtifactResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collidingClasses) {
      vector<boost::any> temp1;
      for(auto item1:*collidingClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["collidingClasses"] = boost::any(temp1);
    }
    if (createSuccess) {
      res["createSuccess"] = boost::any(*createSuccess);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (udfArtifact) {
      res["udfArtifact"] = udfArtifact ? boost::any(udfArtifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("collidingClasses") != m.end() && !m["collidingClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["collidingClasses"].type()) {
        vector<UdfClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["collidingClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UdfClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        collidingClasses = make_shared<vector<UdfClass>>(expect1);
      }
    }
    if (m.find("createSuccess") != m.end() && !m["createSuccess"].empty()) {
      createSuccess = make_shared<bool>(boost::any_cast<bool>(m["createSuccess"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("udfArtifact") != m.end() && !m["udfArtifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["udfArtifact"].type()) {
        UdfArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["udfArtifact"]));
        udfArtifact = make_shared<UdfArtifact>(model1);
      }
    }
  }


  virtual ~CreateUdfArtifactResult() = default;
};
class Database : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> properties{};

  Database() {}

  explicit Database(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~Database() = default;
};
class DeleteUdfArtifactResult : public Darabonba::Model {
public:
  shared_ptr<bool> deleteSuccess{};
  shared_ptr<string> message{};
  shared_ptr<vector<UdfClass>> referencedClasses{};

  DeleteUdfArtifactResult() {}

  explicit DeleteUdfArtifactResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteSuccess) {
      res["deleteSuccess"] = boost::any(*deleteSuccess);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (referencedClasses) {
      vector<boost::any> temp1;
      for(auto item1:*referencedClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["referencedClasses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deleteSuccess") != m.end() && !m["deleteSuccess"].empty()) {
      deleteSuccess = make_shared<bool>(boost::any_cast<bool>(m["deleteSuccess"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("referencedClasses") != m.end() && !m["referencedClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["referencedClasses"].type()) {
        vector<UdfClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["referencedClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UdfClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        referencedClasses = make_shared<vector<UdfClass>>(expect1);
      }
    }
  }


  virtual ~DeleteUdfArtifactResult() = default;
};
class JobSummary : public Darabonba::Model {
public:
  shared_ptr<long> cancelled{};
  shared_ptr<long> cancelling{};
  shared_ptr<long> failed{};
  shared_ptr<long> finished{};
  shared_ptr<long> running{};
  shared_ptr<long> starting{};

  JobSummary() {}

  explicit JobSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancelled) {
      res["cancelled"] = boost::any(*cancelled);
    }
    if (cancelling) {
      res["cancelling"] = boost::any(*cancelling);
    }
    if (failed) {
      res["failed"] = boost::any(*failed);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (running) {
      res["running"] = boost::any(*running);
    }
    if (starting) {
      res["starting"] = boost::any(*starting);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cancelled") != m.end() && !m["cancelled"].empty()) {
      cancelled = make_shared<long>(boost::any_cast<long>(m["cancelled"]));
    }
    if (m.find("cancelling") != m.end() && !m["cancelling"].empty()) {
      cancelling = make_shared<long>(boost::any_cast<long>(m["cancelling"]));
    }
    if (m.find("failed") != m.end() && !m["failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["failed"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<long>(boost::any_cast<long>(m["finished"]));
    }
    if (m.find("running") != m.end() && !m["running"].empty()) {
      running = make_shared<long>(boost::any_cast<long>(m["running"]));
    }
    if (m.find("starting") != m.end() && !m["starting"].empty()) {
      starting = make_shared<long>(boost::any_cast<long>(m["starting"]));
    }
  }


  virtual ~JobSummary() = default;
};
class LocalVariable : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  LocalVariable() {}

  explicit LocalVariable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
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
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~LocalVariable() = default;
};
class Log4jLogger : public Darabonba::Model {
public:
  shared_ptr<string> loggerLevel{};
  shared_ptr<string> loggerName{};

  Log4jLogger() {}

  explicit Log4jLogger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loggerLevel) {
      res["loggerLevel"] = boost::any(*loggerLevel);
    }
    if (loggerName) {
      res["loggerName"] = boost::any(*loggerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("loggerLevel") != m.end() && !m["loggerLevel"].empty()) {
      loggerLevel = make_shared<string>(boost::any_cast<string>(m["loggerLevel"]));
    }
    if (m.find("loggerName") != m.end() && !m["loggerName"].empty()) {
      loggerName = make_shared<string>(boost::any_cast<string>(m["loggerName"]));
    }
  }


  virtual ~Log4jLogger() = default;
};
class LogReservePolicy : public Darabonba::Model {
public:
  shared_ptr<long> expirationDays{};
  shared_ptr<bool> openHistory{};

  LogReservePolicy() {}

  explicit LogReservePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expirationDays) {
      res["expirationDays"] = boost::any(*expirationDays);
    }
    if (openHistory) {
      res["openHistory"] = boost::any(*openHistory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expirationDays") != m.end() && !m["expirationDays"].empty()) {
      expirationDays = make_shared<long>(boost::any_cast<long>(m["expirationDays"]));
    }
    if (m.find("openHistory") != m.end() && !m["openHistory"].empty()) {
      openHistory = make_shared<bool>(boost::any_cast<bool>(m["openHistory"]));
    }
  }


  virtual ~LogReservePolicy() = default;
};
class Logging : public Darabonba::Model {
public:
  shared_ptr<string> log4j2ConfigurationTemplate{};
  shared_ptr<vector<Log4jLogger>> log4jLoggers{};
  shared_ptr<LogReservePolicy> logReservePolicy{};
  shared_ptr<string> loggingProfile{};

  Logging() {}

  explicit Logging(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (log4j2ConfigurationTemplate) {
      res["log4j2ConfigurationTemplate"] = boost::any(*log4j2ConfigurationTemplate);
    }
    if (log4jLoggers) {
      vector<boost::any> temp1;
      for(auto item1:*log4jLoggers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["log4jLoggers"] = boost::any(temp1);
    }
    if (logReservePolicy) {
      res["logReservePolicy"] = logReservePolicy ? boost::any(logReservePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loggingProfile) {
      res["loggingProfile"] = boost::any(*loggingProfile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("log4j2ConfigurationTemplate") != m.end() && !m["log4j2ConfigurationTemplate"].empty()) {
      log4j2ConfigurationTemplate = make_shared<string>(boost::any_cast<string>(m["log4j2ConfigurationTemplate"]));
    }
    if (m.find("log4jLoggers") != m.end() && !m["log4jLoggers"].empty()) {
      if (typeid(vector<boost::any>) == m["log4jLoggers"].type()) {
        vector<Log4jLogger> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["log4jLoggers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Log4jLogger model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        log4jLoggers = make_shared<vector<Log4jLogger>>(expect1);
      }
    }
    if (m.find("logReservePolicy") != m.end() && !m["logReservePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["logReservePolicy"].type()) {
        LogReservePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logReservePolicy"]));
        logReservePolicy = make_shared<LogReservePolicy>(model1);
      }
    }
    if (m.find("loggingProfile") != m.end() && !m["loggingProfile"].empty()) {
      loggingProfile = make_shared<string>(boost::any_cast<string>(m["loggingProfile"]));
    }
  }


  virtual ~Logging() = default;
};
class Deployment : public Darabonba::Model {
public:
  shared_ptr<Artifact> artifact{};
  shared_ptr<BatchResourceSetting> batchResourceSetting{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<bool> deploymentHasChanged{};
  shared_ptr<string> deploymentId{};
  shared_ptr<BriefDeploymentTarget> deploymentTarget{};
  shared_ptr<string> description{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> executionMode{};
  shared_ptr<map<string, boost::any>> flinkConf{};
  shared_ptr<JobSummary> jobSummary{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<vector<LocalVariable>> localVariables{};
  shared_ptr<Logging> logging{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> referencedDeploymentDraftId{};
  shared_ptr<StreamingResourceSetting> streamingResourceSetting{};
  shared_ptr<string> workspace{};

  Deployment() {}

  explicit Deployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifact) {
      res["artifact"] = artifact ? boost::any(artifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (batchResourceSetting) {
      res["batchResourceSetting"] = batchResourceSetting ? boost::any(batchResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (deploymentHasChanged) {
      res["deploymentHasChanged"] = boost::any(*deploymentHasChanged);
    }
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (deploymentTarget) {
      res["deploymentTarget"] = deploymentTarget ? boost::any(deploymentTarget->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (engineVersion) {
      res["engineVersion"] = boost::any(*engineVersion);
    }
    if (executionMode) {
      res["executionMode"] = boost::any(*executionMode);
    }
    if (flinkConf) {
      res["flinkConf"] = boost::any(*flinkConf);
    }
    if (jobSummary) {
      res["jobSummary"] = jobSummary ? boost::any(jobSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (localVariables) {
      vector<boost::any> temp1;
      for(auto item1:*localVariables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["localVariables"] = boost::any(temp1);
    }
    if (logging) {
      res["logging"] = logging ? boost::any(logging->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifiedAt) {
      res["modifiedAt"] = boost::any(*modifiedAt);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (modifierName) {
      res["modifierName"] = boost::any(*modifierName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (referencedDeploymentDraftId) {
      res["referencedDeploymentDraftId"] = boost::any(*referencedDeploymentDraftId);
    }
    if (streamingResourceSetting) {
      res["streamingResourceSetting"] = streamingResourceSetting ? boost::any(streamingResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifact") != m.end() && !m["artifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["artifact"].type()) {
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["artifact"]));
        artifact = make_shared<Artifact>(model1);
      }
    }
    if (m.find("batchResourceSetting") != m.end() && !m["batchResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["batchResourceSetting"].type()) {
        BatchResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["batchResourceSetting"]));
        batchResourceSetting = make_shared<BatchResourceSetting>(model1);
      }
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("deploymentHasChanged") != m.end() && !m["deploymentHasChanged"].empty()) {
      deploymentHasChanged = make_shared<bool>(boost::any_cast<bool>(m["deploymentHasChanged"]));
    }
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("deploymentTarget") != m.end() && !m["deploymentTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["deploymentTarget"].type()) {
        BriefDeploymentTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deploymentTarget"]));
        deploymentTarget = make_shared<BriefDeploymentTarget>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("engineVersion") != m.end() && !m["engineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["engineVersion"]));
    }
    if (m.find("executionMode") != m.end() && !m["executionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["executionMode"]));
    }
    if (m.find("flinkConf") != m.end() && !m["flinkConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["flinkConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      flinkConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("jobSummary") != m.end() && !m["jobSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobSummary"].type()) {
        JobSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobSummary"]));
        jobSummary = make_shared<JobSummary>(model1);
      }
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("localVariables") != m.end() && !m["localVariables"].empty()) {
      if (typeid(vector<boost::any>) == m["localVariables"].type()) {
        vector<LocalVariable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["localVariables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LocalVariable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        localVariables = make_shared<vector<LocalVariable>>(expect1);
      }
    }
    if (m.find("logging") != m.end() && !m["logging"].empty()) {
      if (typeid(map<string, boost::any>) == m["logging"].type()) {
        Logging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logging"]));
        logging = make_shared<Logging>(model1);
      }
    }
    if (m.find("modifiedAt") != m.end() && !m["modifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["modifiedAt"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("modifierName") != m.end() && !m["modifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["modifierName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("referencedDeploymentDraftId") != m.end() && !m["referencedDeploymentDraftId"].empty()) {
      referencedDeploymentDraftId = make_shared<string>(boost::any_cast<string>(m["referencedDeploymentDraftId"]));
    }
    if (m.find("streamingResourceSetting") != m.end() && !m["streamingResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["streamingResourceSetting"].type()) {
        StreamingResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["streamingResourceSetting"]));
        streamingResourceSetting = make_shared<StreamingResourceSetting>(model1);
      }
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~Deployment() = default;
};
class Lock : public Darabonba::Model {
public:
  shared_ptr<string> holderId{};
  shared_ptr<string> holderName{};
  shared_ptr<string> id{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> workspace{};

  Lock() {}

  explicit Lock(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (holderId) {
      res["holderId"] = boost::any(*holderId);
    }
    if (holderName) {
      res["holderName"] = boost::any(*holderName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("holderId") != m.end() && !m["holderId"].empty()) {
      holderId = make_shared<string>(boost::any_cast<string>(m["holderId"]));
    }
    if (m.find("holderName") != m.end() && !m["holderName"].empty()) {
      holderName = make_shared<string>(boost::any_cast<string>(m["holderName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~Lock() = default;
};
class DeploymentDraft : public Darabonba::Model {
public:
  shared_ptr<Artifact> artifact{};
  shared_ptr<long> createdAt{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> deploymentDraftId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> executionMode{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<vector<LocalVariable>> localVariables{};
  shared_ptr<Lock> lock{};
  shared_ptr<long> modifiedAt{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> parentId{};
  shared_ptr<string> referencedDeploymentId{};
  shared_ptr<string> workspace{};

  DeploymentDraft() {}

  explicit DeploymentDraft(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifact) {
      res["artifact"] = artifact ? boost::any(artifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (deploymentDraftId) {
      res["deploymentDraftId"] = boost::any(*deploymentDraftId);
    }
    if (engineVersion) {
      res["engineVersion"] = boost::any(*engineVersion);
    }
    if (executionMode) {
      res["executionMode"] = boost::any(*executionMode);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (localVariables) {
      vector<boost::any> temp1;
      for(auto item1:*localVariables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["localVariables"] = boost::any(temp1);
    }
    if (lock) {
      res["lock"] = lock ? boost::any(lock->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifiedAt) {
      res["modifiedAt"] = boost::any(*modifiedAt);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (modifierName) {
      res["modifierName"] = boost::any(*modifierName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (referencedDeploymentId) {
      res["referencedDeploymentId"] = boost::any(*referencedDeploymentId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifact") != m.end() && !m["artifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["artifact"].type()) {
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["artifact"]));
        artifact = make_shared<Artifact>(model1);
      }
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<long>(boost::any_cast<long>(m["createdAt"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("deploymentDraftId") != m.end() && !m["deploymentDraftId"].empty()) {
      deploymentDraftId = make_shared<string>(boost::any_cast<string>(m["deploymentDraftId"]));
    }
    if (m.find("engineVersion") != m.end() && !m["engineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["engineVersion"]));
    }
    if (m.find("executionMode") != m.end() && !m["executionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["executionMode"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("localVariables") != m.end() && !m["localVariables"].empty()) {
      if (typeid(vector<boost::any>) == m["localVariables"].type()) {
        vector<LocalVariable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["localVariables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LocalVariable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        localVariables = make_shared<vector<LocalVariable>>(expect1);
      }
    }
    if (m.find("lock") != m.end() && !m["lock"].empty()) {
      if (typeid(map<string, boost::any>) == m["lock"].type()) {
        Lock model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["lock"]));
        lock = make_shared<Lock>(model1);
      }
    }
    if (m.find("modifiedAt") != m.end() && !m["modifiedAt"].empty()) {
      modifiedAt = make_shared<long>(boost::any_cast<long>(m["modifiedAt"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("modifierName") != m.end() && !m["modifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["modifierName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("referencedDeploymentId") != m.end() && !m["referencedDeploymentId"].empty()) {
      referencedDeploymentId = make_shared<string>(boost::any_cast<string>(m["referencedDeploymentId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeploymentDraft() = default;
};
class DeploymentRestoreStrategy : public Darabonba::Model {
public:
  shared_ptr<bool> allowNonRestoredState{};
  shared_ptr<long> jobStartTimeInMs{};
  shared_ptr<string> kind{};
  shared_ptr<string> savepointId{};

  DeploymentRestoreStrategy() {}

  explicit DeploymentRestoreStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowNonRestoredState) {
      res["allowNonRestoredState"] = boost::any(*allowNonRestoredState);
    }
    if (jobStartTimeInMs) {
      res["jobStartTimeInMs"] = boost::any(*jobStartTimeInMs);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (savepointId) {
      res["savepointId"] = boost::any(*savepointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowNonRestoredState") != m.end() && !m["allowNonRestoredState"].empty()) {
      allowNonRestoredState = make_shared<bool>(boost::any_cast<bool>(m["allowNonRestoredState"]));
    }
    if (m.find("jobStartTimeInMs") != m.end() && !m["jobStartTimeInMs"].empty()) {
      jobStartTimeInMs = make_shared<long>(boost::any_cast<long>(m["jobStartTimeInMs"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("savepointId") != m.end() && !m["savepointId"].empty()) {
      savepointId = make_shared<string>(boost::any_cast<string>(m["savepointId"]));
    }
  }


  virtual ~DeploymentRestoreStrategy() = default;
};
class DeploymentTarget : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};

  DeploymentTarget() {}

  explicit DeploymentTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
  }


  virtual ~DeploymentTarget() = default;
};
class DraftDeployParams : public Darabonba::Model {
public:
  shared_ptr<string> deploymentDraftId{};
  shared_ptr<BriefDeploymentTarget> deploymentTarget{};
  shared_ptr<bool> skipValidate{};

  DraftDeployParams() {}

  explicit DraftDeployParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentDraftId) {
      res["deploymentDraftId"] = boost::any(*deploymentDraftId);
    }
    if (deploymentTarget) {
      res["deploymentTarget"] = deploymentTarget ? boost::any(deploymentTarget->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (skipValidate) {
      res["skipValidate"] = boost::any(*skipValidate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentDraftId") != m.end() && !m["deploymentDraftId"].empty()) {
      deploymentDraftId = make_shared<string>(boost::any_cast<string>(m["deploymentDraftId"]));
    }
    if (m.find("deploymentTarget") != m.end() && !m["deploymentTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["deploymentTarget"].type()) {
        BriefDeploymentTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deploymentTarget"]));
        deploymentTarget = make_shared<BriefDeploymentTarget>(model1);
      }
    }
    if (m.find("skipValidate") != m.end() && !m["skipValidate"].empty()) {
      skipValidate = make_shared<bool>(boost::any_cast<bool>(m["skipValidate"]));
    }
  }


  virtual ~DraftDeployParams() = default;
};
class DraftDeployResult : public Darabonba::Model {
public:
  shared_ptr<ValidateStatementResult> artifactValidationDetail{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  DraftDeployResult() {}

  explicit DraftDeployResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactValidationDetail) {
      res["artifactValidationDetail"] = artifactValidationDetail ? boost::any(artifactValidationDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifactValidationDetail") != m.end() && !m["artifactValidationDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["artifactValidationDetail"].type()) {
        ValidateStatementResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["artifactValidationDetail"]));
        artifactValidationDetail = make_shared<ValidateStatementResult>(model1);
      }
    }
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DraftDeployResult() = default;
};
class Relation : public Darabonba::Model {
public:
  shared_ptr<string> destination{};
  shared_ptr<string> jobId{};
  shared_ptr<string> source{};

  Relation() {}

  explicit Relation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destination) {
      res["destination"] = boost::any(*destination);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destination") != m.end() && !m["destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["destination"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
  }


  virtual ~Relation() = default;
};
class Edge : public Darabonba::Model {
public:
  shared_ptr<vector<Relation>> columnLineage{};
  shared_ptr<vector<Relation>> tableLineage{};

  Edge() {}

  explicit Edge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnLineage) {
      vector<boost::any> temp1;
      for(auto item1:*columnLineage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columnLineage"] = boost::any(temp1);
    }
    if (tableLineage) {
      vector<boost::any> temp1;
      for(auto item1:*tableLineage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tableLineage"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnLineage") != m.end() && !m["columnLineage"].empty()) {
      if (typeid(vector<boost::any>) == m["columnLineage"].type()) {
        vector<Relation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columnLineage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Relation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columnLineage = make_shared<vector<Relation>>(expect1);
      }
    }
    if (m.find("tableLineage") != m.end() && !m["tableLineage"].empty()) {
      if (typeid(vector<boost::any>) == m["tableLineage"].type()) {
        vector<Relation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tableLineage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Relation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableLineage = make_shared<vector<Relation>>(expect1);
      }
    }
  }


  virtual ~Edge() = default;
};
class EditableNamespace : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> role{};
  shared_ptr<string> workspaceId{};

  EditableNamespace() {}

  explicit EditableNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~EditableNamespace() = default;
};
class EngineVersionSupportedFeatures : public Darabonba::Model {
public:
  shared_ptr<bool> supportNativeSavepoint{};
  shared_ptr<bool> useForSqlDeployments{};

  EngineVersionSupportedFeatures() {}

  explicit EngineVersionSupportedFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportNativeSavepoint) {
      res["supportNativeSavepoint"] = boost::any(*supportNativeSavepoint);
    }
    if (useForSqlDeployments) {
      res["useForSqlDeployments"] = boost::any(*useForSqlDeployments);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("supportNativeSavepoint") != m.end() && !m["supportNativeSavepoint"].empty()) {
      supportNativeSavepoint = make_shared<bool>(boost::any_cast<bool>(m["supportNativeSavepoint"]));
    }
    if (m.find("useForSqlDeployments") != m.end() && !m["useForSqlDeployments"].empty()) {
      useForSqlDeployments = make_shared<bool>(boost::any_cast<bool>(m["useForSqlDeployments"]));
    }
  }


  virtual ~EngineVersionSupportedFeatures() = default;
};
class EngineVersionMetadata : public Darabonba::Model {
public:
  shared_ptr<string> engineVersion{};
  shared_ptr<EngineVersionSupportedFeatures> features{};
  shared_ptr<string> status{};

  EngineVersionMetadata() {}

  explicit EngineVersionMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineVersion) {
      res["engineVersion"] = boost::any(*engineVersion);
    }
    if (features) {
      res["features"] = features ? boost::any(features->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("engineVersion") != m.end() && !m["engineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["engineVersion"]));
    }
    if (m.find("features") != m.end() && !m["features"].empty()) {
      if (typeid(map<string, boost::any>) == m["features"].type()) {
        EngineVersionSupportedFeatures model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["features"]));
        features = make_shared<EngineVersionSupportedFeatures>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~EngineVersionMetadata() = default;
};
class EngineVersionMetadataIndex : public Darabonba::Model {
public:
  shared_ptr<string> defaultEngineVersion{};
  shared_ptr<vector<EngineVersionMetadata>> engineVersionMetadata{};

  EngineVersionMetadataIndex() {}

  explicit EngineVersionMetadataIndex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultEngineVersion) {
      res["defaultEngineVersion"] = boost::any(*defaultEngineVersion);
    }
    if (engineVersionMetadata) {
      vector<boost::any> temp1;
      for(auto item1:*engineVersionMetadata){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["engineVersionMetadata"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultEngineVersion") != m.end() && !m["defaultEngineVersion"].empty()) {
      defaultEngineVersion = make_shared<string>(boost::any_cast<string>(m["defaultEngineVersion"]));
    }
    if (m.find("engineVersionMetadata") != m.end() && !m["engineVersionMetadata"].empty()) {
      if (typeid(vector<boost::any>) == m["engineVersionMetadata"].type()) {
        vector<EngineVersionMetadata> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["engineVersionMetadata"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EngineVersionMetadata model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engineVersionMetadata = make_shared<vector<EngineVersionMetadata>>(expect1);
      }
    }
  }


  virtual ~EngineVersionMetadataIndex() = default;
};
class ErrorDetails : public Darabonba::Model {
public:
  shared_ptr<string> columnNumber{};
  shared_ptr<string> endColumnNumber{};
  shared_ptr<string> endLineNumber{};
  shared_ptr<vector<string>> invalidflinkConf{};
  shared_ptr<string> lineNumber{};
  shared_ptr<string> message{};

  ErrorDetails() {}

  explicit ErrorDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnNumber) {
      res["columnNumber"] = boost::any(*columnNumber);
    }
    if (endColumnNumber) {
      res["endColumnNumber"] = boost::any(*endColumnNumber);
    }
    if (endLineNumber) {
      res["endLineNumber"] = boost::any(*endLineNumber);
    }
    if (invalidflinkConf) {
      res["invalidflinkConf"] = boost::any(*invalidflinkConf);
    }
    if (lineNumber) {
      res["lineNumber"] = boost::any(*lineNumber);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnNumber") != m.end() && !m["columnNumber"].empty()) {
      columnNumber = make_shared<string>(boost::any_cast<string>(m["columnNumber"]));
    }
    if (m.find("endColumnNumber") != m.end() && !m["endColumnNumber"].empty()) {
      endColumnNumber = make_shared<string>(boost::any_cast<string>(m["endColumnNumber"]));
    }
    if (m.find("endLineNumber") != m.end() && !m["endLineNumber"].empty()) {
      endLineNumber = make_shared<string>(boost::any_cast<string>(m["endLineNumber"]));
    }
    if (m.find("invalidflinkConf") != m.end() && !m["invalidflinkConf"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["invalidflinkConf"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["invalidflinkConf"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidflinkConf = make_shared<vector<string>>(toVec1);
    }
    if (m.find("lineNumber") != m.end() && !m["lineNumber"].empty()) {
      lineNumber = make_shared<string>(boost::any_cast<string>(m["lineNumber"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~ErrorDetails() = default;
};
class SubFolder : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};
  shared_ptr<string> parentId{};

  SubFolder() {}

  explicit SubFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
  }


  virtual ~SubFolder() = default;
};
class Folder : public Darabonba::Model {
public:
  shared_ptr<long> createdAt{};
  shared_ptr<string> folderId{};
  shared_ptr<long> modifiedAt{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> parentId{};
  shared_ptr<vector<SubFolder>> subFolder{};
  shared_ptr<string> workspace{};

  Folder() {}

  explicit Folder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (modifiedAt) {
      res["modifiedAt"] = boost::any(*modifiedAt);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (subFolder) {
      vector<boost::any> temp1;
      for(auto item1:*subFolder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subFolder"] = boost::any(temp1);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<long>(boost::any_cast<long>(m["createdAt"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("modifiedAt") != m.end() && !m["modifiedAt"].empty()) {
      modifiedAt = make_shared<long>(boost::any_cast<long>(m["modifiedAt"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("subFolder") != m.end() && !m["subFolder"].empty()) {
      if (typeid(vector<boost::any>) == m["subFolder"].type()) {
        vector<SubFolder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subFolder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubFolder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subFolder = make_shared<vector<SubFolder>>(expect1);
      }
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~Folder() = default;
};
class GetLineageInfoParams : public Darabonba::Model {
public:
  shared_ptr<long> depth{};
  shared_ptr<string> direction{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<bool> isColumnLevel{};
  shared_ptr<bool> isTemporary{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> workspace{};

  GetLineageInfoParams() {}

  explicit GetLineageInfoParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depth) {
      res["depth"] = boost::any(*depth);
    }
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (idType) {
      res["idType"] = boost::any(*idType);
    }
    if (isColumnLevel) {
      res["isColumnLevel"] = boost::any(*isColumnLevel);
    }
    if (isTemporary) {
      res["isTemporary"] = boost::any(*isTemporary);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("depth") != m.end() && !m["depth"].empty()) {
      depth = make_shared<long>(boost::any_cast<long>(m["depth"]));
    }
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("idType") != m.end() && !m["idType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["idType"]));
    }
    if (m.find("isColumnLevel") != m.end() && !m["isColumnLevel"].empty()) {
      isColumnLevel = make_shared<bool>(boost::any_cast<bool>(m["isColumnLevel"]));
    }
    if (m.find("isTemporary") != m.end() && !m["isTemporary"].empty()) {
      isTemporary = make_shared<bool>(boost::any_cast<bool>(m["isTemporary"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetLineageInfoParams() = default;
};
class HotUpdateJobFailureInfo : public Darabonba::Model {
public:
  shared_ptr<string> failureSeverity{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};

  HotUpdateJobFailureInfo() {}

  explicit HotUpdateJobFailureInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failureSeverity) {
      res["failureSeverity"] = boost::any(*failureSeverity);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failureSeverity") != m.end() && !m["failureSeverity"].empty()) {
      failureSeverity = make_shared<string>(boost::any_cast<string>(m["failureSeverity"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["reason"]));
    }
  }


  virtual ~HotUpdateJobFailureInfo() = default;
};
class RescaleJobParam : public Darabonba::Model {
public:
  shared_ptr<long> jobParallelism{};
  shared_ptr<map<string, boost::any>> vertexParallelism{};

  RescaleJobParam() {}

  explicit RescaleJobParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobParallelism) {
      res["jobParallelism"] = boost::any(*jobParallelism);
    }
    if (vertexParallelism) {
      res["vertexParallelism"] = boost::any(*vertexParallelism);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobParallelism") != m.end() && !m["jobParallelism"].empty()) {
      jobParallelism = make_shared<long>(boost::any_cast<long>(m["jobParallelism"]));
    }
    if (m.find("vertexParallelism") != m.end() && !m["vertexParallelism"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["vertexParallelism"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      vertexParallelism = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RescaleJobParam() = default;
};
class UpdateJobConfigParam : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> newFlinkConf{};

  UpdateJobConfigParam() {}

  explicit UpdateJobConfigParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newFlinkConf) {
      res["newFlinkConf"] = boost::any(*newFlinkConf);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("newFlinkConf") != m.end() && !m["newFlinkConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["newFlinkConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      newFlinkConf = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateJobConfigParam() = default;
};
class HotUpdateJobParams : public Darabonba::Model {
public:
  shared_ptr<RescaleJobParam> rescaleJobParam{};
  shared_ptr<UpdateJobConfigParam> updateJobConfigParam{};

  HotUpdateJobParams() {}

  explicit HotUpdateJobParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rescaleJobParam) {
      res["rescaleJobParam"] = rescaleJobParam ? boost::any(rescaleJobParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateJobConfigParam) {
      res["updateJobConfigParam"] = updateJobConfigParam ? boost::any(updateJobConfigParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("rescaleJobParam") != m.end() && !m["rescaleJobParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["rescaleJobParam"].type()) {
        RescaleJobParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rescaleJobParam"]));
        rescaleJobParam = make_shared<RescaleJobParam>(model1);
      }
    }
    if (m.find("updateJobConfigParam") != m.end() && !m["updateJobConfigParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["updateJobConfigParam"].type()) {
        UpdateJobConfigParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["updateJobConfigParam"]));
        updateJobConfigParam = make_shared<UpdateJobConfigParam>(model1);
      }
    }
  }


  virtual ~HotUpdateJobParams() = default;
};
class HotUpdateJobStatus : public Darabonba::Model {
public:
  shared_ptr<HotUpdateJobFailureInfo> failure{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  HotUpdateJobStatus() {}

  explicit HotUpdateJobStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failure) {
      res["failure"] = failure ? boost::any(failure->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failure") != m.end() && !m["failure"].empty()) {
      if (typeid(map<string, boost::any>) == m["failure"].type()) {
        HotUpdateJobFailureInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["failure"]));
        failure = make_shared<HotUpdateJobFailureInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~HotUpdateJobStatus() = default;
};
class HotUpdateJobResult : public Darabonba::Model {
public:
  shared_ptr<HotUpdateJobParams> hotUpdateParams{};
  shared_ptr<string> jobHotUpdateId{};
  shared_ptr<string> jobId{};
  shared_ptr<HotUpdateJobStatus> status{};
  shared_ptr<BriefResourceSetting> targetResourceSetting{};

  HotUpdateJobResult() {}

  explicit HotUpdateJobResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotUpdateParams) {
      res["hotUpdateParams"] = hotUpdateParams ? boost::any(hotUpdateParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobHotUpdateId) {
      res["jobHotUpdateId"] = boost::any(*jobHotUpdateId);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetResourceSetting) {
      res["targetResourceSetting"] = targetResourceSetting ? boost::any(targetResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hotUpdateParams") != m.end() && !m["hotUpdateParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["hotUpdateParams"].type()) {
        HotUpdateJobParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hotUpdateParams"]));
        hotUpdateParams = make_shared<HotUpdateJobParams>(model1);
      }
    }
    if (m.find("jobHotUpdateId") != m.end() && !m["jobHotUpdateId"].empty()) {
      jobHotUpdateId = make_shared<string>(boost::any_cast<string>(m["jobHotUpdateId"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        HotUpdateJobStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<HotUpdateJobStatus>(model1);
      }
    }
    if (m.find("targetResourceSetting") != m.end() && !m["targetResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["targetResourceSetting"].type()) {
        BriefResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["targetResourceSetting"]));
        targetResourceSetting = make_shared<BriefResourceSetting>(model1);
      }
    }
  }


  virtual ~HotUpdateJobResult() = default;
};
class JobMetric : public Darabonba::Model {
public:
  shared_ptr<double> totalCpu{};
  shared_ptr<long> totalMemoryByte{};

  JobMetric() {}

  explicit JobMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCpu) {
      res["totalCpu"] = boost::any(*totalCpu);
    }
    if (totalMemoryByte) {
      res["totalMemoryByte"] = boost::any(*totalMemoryByte);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("totalCpu") != m.end() && !m["totalCpu"].empty()) {
      totalCpu = make_shared<double>(boost::any_cast<double>(m["totalCpu"]));
    }
    if (m.find("totalMemoryByte") != m.end() && !m["totalMemoryByte"].empty()) {
      totalMemoryByte = make_shared<long>(boost::any_cast<long>(m["totalMemoryByte"]));
    }
  }


  virtual ~JobMetric() = default;
};
class JobFailure : public Darabonba::Model {
public:
  shared_ptr<long> failedAt{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};

  JobFailure() {}

  explicit JobFailure(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedAt) {
      res["failedAt"] = boost::any(*failedAt);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failedAt") != m.end() && !m["failedAt"].empty()) {
      failedAt = make_shared<long>(boost::any_cast<long>(m["failedAt"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["reason"]));
    }
  }


  virtual ~JobFailure() = default;
};
class JobStatusRunning : public Darabonba::Model {
public:
  shared_ptr<long> observedFlinkJobRestarts{};
  shared_ptr<string> observedFlinkJobStatus{};

  JobStatusRunning() {}

  explicit JobStatusRunning(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (observedFlinkJobRestarts) {
      res["observedFlinkJobRestarts"] = boost::any(*observedFlinkJobRestarts);
    }
    if (observedFlinkJobStatus) {
      res["observedFlinkJobStatus"] = boost::any(*observedFlinkJobStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("observedFlinkJobRestarts") != m.end() && !m["observedFlinkJobRestarts"].empty()) {
      observedFlinkJobRestarts = make_shared<long>(boost::any_cast<long>(m["observedFlinkJobRestarts"]));
    }
    if (m.find("observedFlinkJobStatus") != m.end() && !m["observedFlinkJobStatus"].empty()) {
      observedFlinkJobStatus = make_shared<string>(boost::any_cast<string>(m["observedFlinkJobStatus"]));
    }
  }


  virtual ~JobStatusRunning() = default;
};
class JobStatus : public Darabonba::Model {
public:
  shared_ptr<string> currentJobStatus{};
  shared_ptr<JobFailure> failure{};
  shared_ptr<JobStatusRunning> running{};

  JobStatus() {}

  explicit JobStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentJobStatus) {
      res["currentJobStatus"] = boost::any(*currentJobStatus);
    }
    if (failure) {
      res["failure"] = failure ? boost::any(failure->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (running) {
      res["running"] = running ? boost::any(running->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentJobStatus") != m.end() && !m["currentJobStatus"].empty()) {
      currentJobStatus = make_shared<string>(boost::any_cast<string>(m["currentJobStatus"]));
    }
    if (m.find("failure") != m.end() && !m["failure"].empty()) {
      if (typeid(map<string, boost::any>) == m["failure"].type()) {
        JobFailure model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["failure"]));
        failure = make_shared<JobFailure>(model1);
      }
    }
    if (m.find("running") != m.end() && !m["running"].empty()) {
      if (typeid(map<string, boost::any>) == m["running"].type()) {
        JobStatusRunning model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["running"]));
        running = make_shared<JobStatusRunning>(model1);
      }
    }
  }


  virtual ~JobStatus() = default;
};
class Job : public Darabonba::Model {
public:
  shared_ptr<Artifact> artifact{};
  shared_ptr<BatchResourceSetting> batchResourceSetting{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> deploymentName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> executionMode{};
  shared_ptr<map<string, boost::any>> flinkConf{};
  shared_ptr<string> jobId{};
  shared_ptr<vector<LocalVariable>> localVariables{};
  shared_ptr<Logging> logging{};
  shared_ptr<JobMetric> metric{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> namespace_{};
  shared_ptr<DeploymentRestoreStrategy> restoreStrategy{};
  shared_ptr<string> sessionClusterName{};
  shared_ptr<long> startTime{};
  shared_ptr<JobStatus> status{};
  shared_ptr<StreamingResourceSetting> streamingResourceSetting{};
  shared_ptr<map<string, boost::any>> userFlinkConf{};
  shared_ptr<string> workspace{};

  Job() {}

  explicit Job(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifact) {
      res["artifact"] = artifact ? boost::any(artifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (batchResourceSetting) {
      res["batchResourceSetting"] = batchResourceSetting ? boost::any(batchResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["creatorName"] = boost::any(*creatorName);
    }
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (deploymentName) {
      res["deploymentName"] = boost::any(*deploymentName);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (engineVersion) {
      res["engineVersion"] = boost::any(*engineVersion);
    }
    if (executionMode) {
      res["executionMode"] = boost::any(*executionMode);
    }
    if (flinkConf) {
      res["flinkConf"] = boost::any(*flinkConf);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (localVariables) {
      vector<boost::any> temp1;
      for(auto item1:*localVariables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["localVariables"] = boost::any(temp1);
    }
    if (logging) {
      res["logging"] = logging ? boost::any(logging->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metric) {
      res["metric"] = metric ? boost::any(metric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifiedAt) {
      res["modifiedAt"] = boost::any(*modifiedAt);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (modifierName) {
      res["modifierName"] = boost::any(*modifierName);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (restoreStrategy) {
      res["restoreStrategy"] = restoreStrategy ? boost::any(restoreStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionClusterName) {
      res["sessionClusterName"] = boost::any(*sessionClusterName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (streamingResourceSetting) {
      res["streamingResourceSetting"] = streamingResourceSetting ? boost::any(streamingResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userFlinkConf) {
      res["userFlinkConf"] = boost::any(*userFlinkConf);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifact") != m.end() && !m["artifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["artifact"].type()) {
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["artifact"]));
        artifact = make_shared<Artifact>(model1);
      }
    }
    if (m.find("batchResourceSetting") != m.end() && !m["batchResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["batchResourceSetting"].type()) {
        BatchResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["batchResourceSetting"]));
        batchResourceSetting = make_shared<BatchResourceSetting>(model1);
      }
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("creatorName") != m.end() && !m["creatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["creatorName"]));
    }
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("deploymentName") != m.end() && !m["deploymentName"].empty()) {
      deploymentName = make_shared<string>(boost::any_cast<string>(m["deploymentName"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("engineVersion") != m.end() && !m["engineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["engineVersion"]));
    }
    if (m.find("executionMode") != m.end() && !m["executionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["executionMode"]));
    }
    if (m.find("flinkConf") != m.end() && !m["flinkConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["flinkConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      flinkConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("localVariables") != m.end() && !m["localVariables"].empty()) {
      if (typeid(vector<boost::any>) == m["localVariables"].type()) {
        vector<LocalVariable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["localVariables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LocalVariable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        localVariables = make_shared<vector<LocalVariable>>(expect1);
      }
    }
    if (m.find("logging") != m.end() && !m["logging"].empty()) {
      if (typeid(map<string, boost::any>) == m["logging"].type()) {
        Logging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logging"]));
        logging = make_shared<Logging>(model1);
      }
    }
    if (m.find("metric") != m.end() && !m["metric"].empty()) {
      if (typeid(map<string, boost::any>) == m["metric"].type()) {
        JobMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metric"]));
        metric = make_shared<JobMetric>(model1);
      }
    }
    if (m.find("modifiedAt") != m.end() && !m["modifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["modifiedAt"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("modifierName") != m.end() && !m["modifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["modifierName"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("restoreStrategy") != m.end() && !m["restoreStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["restoreStrategy"].type()) {
        DeploymentRestoreStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["restoreStrategy"]));
        restoreStrategy = make_shared<DeploymentRestoreStrategy>(model1);
      }
    }
    if (m.find("sessionClusterName") != m.end() && !m["sessionClusterName"].empty()) {
      sessionClusterName = make_shared<string>(boost::any_cast<string>(m["sessionClusterName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        JobStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<JobStatus>(model1);
      }
    }
    if (m.find("streamingResourceSetting") != m.end() && !m["streamingResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["streamingResourceSetting"].type()) {
        StreamingResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["streamingResourceSetting"]));
        streamingResourceSetting = make_shared<StreamingResourceSetting>(model1);
      }
    }
    if (m.find("userFlinkConf") != m.end() && !m["userFlinkConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["userFlinkConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userFlinkConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~Job() = default;
};
class JobInfo : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<map<string, boost::any>> properties{};

  JobInfo() {}

  explicit JobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~JobInfo() = default;
};
class JobStartParameters : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
  shared_ptr<vector<LocalVariable>> localVariables{};
  shared_ptr<string> resourceQueueName{};
  shared_ptr<DeploymentRestoreStrategy> restoreStrategy{};

  JobStartParameters() {}

  explicit JobStartParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (localVariables) {
      vector<boost::any> temp1;
      for(auto item1:*localVariables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["localVariables"] = boost::any(temp1);
    }
    if (resourceQueueName) {
      res["resourceQueueName"] = boost::any(*resourceQueueName);
    }
    if (restoreStrategy) {
      res["restoreStrategy"] = restoreStrategy ? boost::any(restoreStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("localVariables") != m.end() && !m["localVariables"].empty()) {
      if (typeid(vector<boost::any>) == m["localVariables"].type()) {
        vector<LocalVariable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["localVariables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LocalVariable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        localVariables = make_shared<vector<LocalVariable>>(expect1);
      }
    }
    if (m.find("resourceQueueName") != m.end() && !m["resourceQueueName"].empty()) {
      resourceQueueName = make_shared<string>(boost::any_cast<string>(m["resourceQueueName"]));
    }
    if (m.find("restoreStrategy") != m.end() && !m["restoreStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["restoreStrategy"].type()) {
        DeploymentRestoreStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["restoreStrategy"]));
        restoreStrategy = make_shared<DeploymentRestoreStrategy>(model1);
      }
    }
  }


  virtual ~JobStartParameters() = default;
};
class LineageColumn : public Darabonba::Model {
public:
  shared_ptr<string> columnName{};
  shared_ptr<string> columnNativeType{};
  shared_ptr<string> columnType{};
  shared_ptr<long> createdAt{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<long> modifiedAt{};
  shared_ptr<string> modifier{};
  shared_ptr<bool> nullable{};

  LineageColumn() {}

  explicit LineageColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnName) {
      res["columnName"] = boost::any(*columnName);
    }
    if (columnNativeType) {
      res["columnNativeType"] = boost::any(*columnNativeType);
    }
    if (columnType) {
      res["columnType"] = boost::any(*columnType);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifiedAt) {
      res["modifiedAt"] = boost::any(*modifiedAt);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnName") != m.end() && !m["columnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["columnName"]));
    }
    if (m.find("columnNativeType") != m.end() && !m["columnNativeType"].empty()) {
      columnNativeType = make_shared<string>(boost::any_cast<string>(m["columnNativeType"]));
    }
    if (m.find("columnType") != m.end() && !m["columnType"].empty()) {
      columnType = make_shared<string>(boost::any_cast<string>(m["columnType"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<long>(boost::any_cast<long>(m["createdAt"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("modifiedAt") != m.end() && !m["modifiedAt"].empty()) {
      modifiedAt = make_shared<long>(boost::any_cast<long>(m["modifiedAt"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
  }


  virtual ~LineageColumn() = default;
};
class LineageTable : public Darabonba::Model {
public:
  shared_ptr<vector<LineageColumn>> columns{};
  shared_ptr<string> id{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> tableName{};
  shared_ptr<map<string, boost::any>> with{};

  LineageTable() {}

  explicit LineageTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (with) {
      res["with"] = boost::any(*with);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<LineageColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LineageColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<LineageColumn>>(expect1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("with") != m.end() && !m["with"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["with"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      with = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~LineageTable() = default;
};
class Node : public Darabonba::Model {
public:
  shared_ptr<string> catalogName{};
  shared_ptr<string> connector{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> id{};
  shared_ptr<bool> isTemporary{};
  shared_ptr<vector<LineageTable>> tables{};

  Node() {}

  explicit Node(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (catalogName) {
      res["catalogName"] = boost::any(*catalogName);
    }
    if (connector) {
      res["connector"] = boost::any(*connector);
    }
    if (databaseName) {
      res["databaseName"] = boost::any(*databaseName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (isTemporary) {
      res["isTemporary"] = boost::any(*isTemporary);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("catalogName") != m.end() && !m["catalogName"].empty()) {
      catalogName = make_shared<string>(boost::any_cast<string>(m["catalogName"]));
    }
    if (m.find("connector") != m.end() && !m["connector"].empty()) {
      connector = make_shared<string>(boost::any_cast<string>(m["connector"]));
    }
    if (m.find("databaseName") != m.end() && !m["databaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["databaseName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("isTemporary") != m.end() && !m["isTemporary"].empty()) {
      isTemporary = make_shared<bool>(boost::any_cast<bool>(m["isTemporary"]));
    }
    if (m.find("tables") != m.end() && !m["tables"].empty()) {
      if (typeid(vector<boost::any>) == m["tables"].type()) {
        vector<LineageTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LineageTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<LineageTable>>(expect1);
      }
    }
  }


  virtual ~Node() = default;
};
class LineageInfo : public Darabonba::Model {
public:
  shared_ptr<Edge> edges{};
  shared_ptr<vector<JobInfo>> jobInfos{};
  shared_ptr<vector<Node>> nodes{};

  LineageInfo() {}

  explicit LineageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edges) {
      res["edges"] = edges ? boost::any(edges->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobInfos) {
      vector<boost::any> temp1;
      for(auto item1:*jobInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobInfos"] = boost::any(temp1);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("edges") != m.end() && !m["edges"].empty()) {
      if (typeid(map<string, boost::any>) == m["edges"].type()) {
        Edge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["edges"]));
        edges = make_shared<Edge>(model1);
      }
    }
    if (m.find("jobInfos") != m.end() && !m["jobInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["jobInfos"].type()) {
        vector<JobInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            JobInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobInfos = make_shared<vector<JobInfo>>(expect1);
      }
    }
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<Node> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Node model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<Node>>(expect1);
      }
    }
  }


  virtual ~LineageInfo() = default;
};
class Member : public Darabonba::Model {
public:
  shared_ptr<string> member{};
  shared_ptr<string> role{};

  Member() {}

  explicit Member(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (member) {
      res["member"] = boost::any(*member);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("member") != m.end() && !m["member"].empty()) {
      member = make_shared<string>(boost::any_cast<string>(m["member"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~Member() = default;
};
class MetadataInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<bool> virtual_{};

  MetadataInfo() {}

  explicit MetadataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (virtual_) {
      res["virtual"] = boost::any(*virtual_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("virtual") != m.end() && !m["virtual"].empty()) {
      virtual_ = make_shared<bool>(boost::any_cast<bool>(m["virtual"]));
    }
  }


  virtual ~MetadataInfo() = default;
};
class PrimaryKey : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columns{};
  shared_ptr<string> constraintName{};

  PrimaryKey() {}

  explicit PrimaryKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["columns"] = boost::any(*columns);
    }
    if (constraintName) {
      res["constraintName"] = boost::any(*constraintName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["columns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("constraintName") != m.end() && !m["constraintName"].empty()) {
      constraintName = make_shared<string>(boost::any_cast<string>(m["constraintName"]));
    }
  }


  virtual ~PrimaryKey() = default;
};
class SavepointFailure : public Darabonba::Model {
public:
  shared_ptr<long> failedAt{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};

  SavepointFailure() {}

  explicit SavepointFailure(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedAt) {
      res["failedAt"] = boost::any(*failedAt);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failedAt") != m.end() && !m["failedAt"].empty()) {
      failedAt = make_shared<long>(boost::any_cast<long>(m["failedAt"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["reason"]));
    }
  }


  virtual ~SavepointFailure() = default;
};
class SavepointStatus : public Darabonba::Model {
public:
  shared_ptr<SavepointFailure> failure{};
  shared_ptr<string> state{};

  SavepointStatus() {}

  explicit SavepointStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failure) {
      res["failure"] = failure ? boost::any(failure->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failure") != m.end() && !m["failure"].empty()) {
      if (typeid(map<string, boost::any>) == m["failure"].type()) {
        SavepointFailure model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["failure"]));
        failure = make_shared<SavepointFailure>(model1);
      }
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~SavepointStatus() = default;
};
class Savepoint : public Darabonba::Model {
public:
  shared_ptr<long> createdAt{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> description{};
  shared_ptr<string> jobId{};
  shared_ptr<long> modifiedAt{};
  shared_ptr<string> namespace_{};
  shared_ptr<bool> nativeFormat{};
  shared_ptr<string> savepointId{};
  shared_ptr<string> savepointLocation{};
  shared_ptr<string> savepointOrigin{};
  shared_ptr<SavepointStatus> status{};
  shared_ptr<bool> stopWithDrainEnabled{};

  Savepoint() {}

  explicit Savepoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (modifiedAt) {
      res["modifiedAt"] = boost::any(*modifiedAt);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (nativeFormat) {
      res["nativeFormat"] = boost::any(*nativeFormat);
    }
    if (savepointId) {
      res["savepointId"] = boost::any(*savepointId);
    }
    if (savepointLocation) {
      res["savepointLocation"] = boost::any(*savepointLocation);
    }
    if (savepointOrigin) {
      res["savepointOrigin"] = boost::any(*savepointOrigin);
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stopWithDrainEnabled) {
      res["stopWithDrainEnabled"] = boost::any(*stopWithDrainEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<long>(boost::any_cast<long>(m["createdAt"]));
    }
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("modifiedAt") != m.end() && !m["modifiedAt"].empty()) {
      modifiedAt = make_shared<long>(boost::any_cast<long>(m["modifiedAt"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("nativeFormat") != m.end() && !m["nativeFormat"].empty()) {
      nativeFormat = make_shared<bool>(boost::any_cast<bool>(m["nativeFormat"]));
    }
    if (m.find("savepointId") != m.end() && !m["savepointId"].empty()) {
      savepointId = make_shared<string>(boost::any_cast<string>(m["savepointId"]));
    }
    if (m.find("savepointLocation") != m.end() && !m["savepointLocation"].empty()) {
      savepointLocation = make_shared<string>(boost::any_cast<string>(m["savepointLocation"]));
    }
    if (m.find("savepointOrigin") != m.end() && !m["savepointOrigin"].empty()) {
      savepointOrigin = make_shared<string>(boost::any_cast<string>(m["savepointOrigin"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        SavepointStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<SavepointStatus>(model1);
      }
    }
    if (m.find("stopWithDrainEnabled") != m.end() && !m["stopWithDrainEnabled"].empty()) {
      stopWithDrainEnabled = make_shared<bool>(boost::any_cast<bool>(m["stopWithDrainEnabled"]));
    }
  }


  virtual ~Savepoint() = default;
};
class TableColumn : public Darabonba::Model {
public:
  shared_ptr<string> expression{};
  shared_ptr<MetadataInfo> metadataInfo{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> type{};

  TableColumn() {}

  explicit TableColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expression) {
      res["expression"] = boost::any(*expression);
    }
    if (metadataInfo) {
      res["metadataInfo"] = metadataInfo ? boost::any(metadataInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expression") != m.end() && !m["expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["expression"]));
    }
    if (m.find("metadataInfo") != m.end() && !m["metadataInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["metadataInfo"].type()) {
        MetadataInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metadataInfo"]));
        metadataInfo = make_shared<MetadataInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~TableColumn() = default;
};
class WatermarkSpec : public Darabonba::Model {
public:
  shared_ptr<string> column{};
  shared_ptr<string> watermarkExpression{};

  WatermarkSpec() {}

  explicit WatermarkSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["column"] = boost::any(*column);
    }
    if (watermarkExpression) {
      res["watermarkExpression"] = boost::any(*watermarkExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("column") != m.end() && !m["column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["column"]));
    }
    if (m.find("watermarkExpression") != m.end() && !m["watermarkExpression"].empty()) {
      watermarkExpression = make_shared<string>(boost::any_cast<string>(m["watermarkExpression"]));
    }
  }


  virtual ~WatermarkSpec() = default;
};
class Schema : public Darabonba::Model {
public:
  shared_ptr<vector<TableColumn>> columns{};
  shared_ptr<vector<PrimaryKey>> primaryKey{};
  shared_ptr<vector<WatermarkSpec>> watermarkSpecs{};

  Schema() {}

  explicit Schema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (primaryKey) {
      vector<boost::any> temp1;
      for(auto item1:*primaryKey){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["primaryKey"] = boost::any(temp1);
    }
    if (watermarkSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*watermarkSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["watermarkSpecs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<TableColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TableColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<TableColumn>>(expect1);
      }
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      if (typeid(vector<boost::any>) == m["primaryKey"].type()) {
        vector<PrimaryKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["primaryKey"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PrimaryKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        primaryKey = make_shared<vector<PrimaryKey>>(expect1);
      }
    }
    if (m.find("watermarkSpecs") != m.end() && !m["watermarkSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["watermarkSpecs"].type()) {
        vector<WatermarkSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["watermarkSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WatermarkSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarkSpecs = make_shared<vector<WatermarkSpec>>(expect1);
      }
    }
  }


  virtual ~Schema() = default;
};
class SqlStatementExecuteResult : public Darabonba::Model {
public:
  shared_ptr<ErrorDetails> errorDetails{};
  shared_ptr<bool> executeSuccess{};
  shared_ptr<string> statement{};

  SqlStatementExecuteResult() {}

  explicit SqlStatementExecuteResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorDetails) {
      res["errorDetails"] = errorDetails ? boost::any(errorDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (executeSuccess) {
      res["executeSuccess"] = boost::any(*executeSuccess);
    }
    if (statement) {
      res["statement"] = boost::any(*statement);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorDetails") != m.end() && !m["errorDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["errorDetails"].type()) {
        ErrorDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["errorDetails"]));
        errorDetails = make_shared<ErrorDetails>(model1);
      }
    }
    if (m.find("executeSuccess") != m.end() && !m["executeSuccess"].empty()) {
      executeSuccess = make_shared<bool>(boost::any_cast<bool>(m["executeSuccess"]));
    }
    if (m.find("statement") != m.end() && !m["statement"].empty()) {
      statement = make_shared<string>(boost::any_cast<string>(m["statement"]));
    }
  }


  virtual ~SqlStatementExecuteResult() = default;
};
class SqlStatementValidationResult : public Darabonba::Model {
public:
  shared_ptr<ErrorDetails> errorDetails{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> validationResult{};

  SqlStatementValidationResult() {}

  explicit SqlStatementValidationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorDetails) {
      res["errorDetails"] = errorDetails ? boost::any(errorDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (validationResult) {
      res["validationResult"] = boost::any(*validationResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorDetails") != m.end() && !m["errorDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["errorDetails"].type()) {
        ErrorDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["errorDetails"]));
        errorDetails = make_shared<ErrorDetails>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("validationResult") != m.end() && !m["validationResult"].empty()) {
      validationResult = make_shared<string>(boost::any_cast<string>(m["validationResult"]));
    }
  }


  virtual ~SqlStatementValidationResult() = default;
};
class SqlStatementWithContext : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalDependencies{};
  shared_ptr<bool> batchMode{};
  shared_ptr<map<string, boost::any>> flinkConfiguration{};
  shared_ptr<string> statement{};
  shared_ptr<string> versionName{};

  SqlStatementWithContext() {}

  explicit SqlStatementWithContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalDependencies) {
      res["additionalDependencies"] = boost::any(*additionalDependencies);
    }
    if (batchMode) {
      res["batchMode"] = boost::any(*batchMode);
    }
    if (flinkConfiguration) {
      res["flinkConfiguration"] = boost::any(*flinkConfiguration);
    }
    if (statement) {
      res["statement"] = boost::any(*statement);
    }
    if (versionName) {
      res["versionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalDependencies") != m.end() && !m["additionalDependencies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["additionalDependencies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["additionalDependencies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalDependencies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("batchMode") != m.end() && !m["batchMode"].empty()) {
      batchMode = make_shared<bool>(boost::any_cast<bool>(m["batchMode"]));
    }
    if (m.find("flinkConfiguration") != m.end() && !m["flinkConfiguration"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["flinkConfiguration"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      flinkConfiguration = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("statement") != m.end() && !m["statement"].empty()) {
      statement = make_shared<string>(boost::any_cast<string>(m["statement"]));
    }
    if (m.find("versionName") != m.end() && !m["versionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["versionName"]));
    }
  }


  virtual ~SqlStatementWithContext() = default;
};
class StartJobRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
  shared_ptr<BriefResourceSetting> resourceSettingSpec{};
  shared_ptr<DeploymentRestoreStrategy> restoreStrategy{};

  StartJobRequestBody() {}

  explicit StartJobRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (resourceSettingSpec) {
      res["resourceSettingSpec"] = resourceSettingSpec ? boost::any(resourceSettingSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (restoreStrategy) {
      res["restoreStrategy"] = restoreStrategy ? boost::any(restoreStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("resourceSettingSpec") != m.end() && !m["resourceSettingSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["resourceSettingSpec"].type()) {
        BriefResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resourceSettingSpec"]));
        resourceSettingSpec = make_shared<BriefResourceSetting>(model1);
      }
    }
    if (m.find("restoreStrategy") != m.end() && !m["restoreStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["restoreStrategy"].type()) {
        DeploymentRestoreStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["restoreStrategy"]));
        restoreStrategy = make_shared<DeploymentRestoreStrategy>(model1);
      }
    }
  }


  virtual ~StartJobRequestBody() = default;
};
class StopJobRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> stopStrategy{};

  StopJobRequestBody() {}

  explicit StopJobRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stopStrategy) {
      res["stopStrategy"] = boost::any(*stopStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("stopStrategy") != m.end() && !m["stopStrategy"].empty()) {
      stopStrategy = make_shared<string>(boost::any_cast<string>(m["stopStrategy"]));
    }
  }


  virtual ~StopJobRequestBody() = default;
};
class Table : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> partitionKeys{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<Schema> schema{};

  Table() {}

  explicit Table(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["comment"] = boost::any(*comment);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partitionKeys) {
      res["partitionKeys"] = boost::any(*partitionKeys);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (schema) {
      res["schema"] = schema ? boost::any(schema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comment") != m.end() && !m["comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["comment"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partitionKeys") != m.end() && !m["partitionKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["partitionKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["partitionKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      partitionKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      if (typeid(map<string, boost::any>) == m["schema"].type()) {
        Schema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schema"]));
        schema = make_shared<Schema>(model1);
      }
    }
  }


  virtual ~Table() = default;
};
class TableMeta : public Darabonba::Model {
public:
  shared_ptr<string> catalogName{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> tableName{};

  TableMeta() {}

  explicit TableMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (catalogName) {
      res["catalogName"] = boost::any(*catalogName);
    }
    if (databaseName) {
      res["databaseName"] = boost::any(*databaseName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("catalogName") != m.end() && !m["catalogName"].empty()) {
      catalogName = make_shared<string>(boost::any_cast<string>(m["catalogName"]));
    }
    if (m.find("databaseName") != m.end() && !m["databaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["databaseName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~TableMeta() = default;
};
class UdfFunction : public Darabonba::Model {
public:
  shared_ptr<string> className{};
  shared_ptr<string> functionName{};
  shared_ptr<string> udfArtifactName{};

  UdfFunction() {}

  explicit UdfFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (udfArtifactName) {
      res["udfArtifactName"] = boost::any(*udfArtifactName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("udfArtifactName") != m.end() && !m["udfArtifactName"].empty()) {
      udfArtifactName = make_shared<string>(boost::any_cast<string>(m["udfArtifactName"]));
    }
  }


  virtual ~UdfFunction() = default;
};
class UpdateUdfArtifactResult : public Darabonba::Model {
public:
  shared_ptr<vector<UdfClass>> collidingClasses{};
  shared_ptr<string> message{};
  shared_ptr<vector<UdfClass>> missingClasses{};
  shared_ptr<UdfArtifact> udfArtifact{};
  shared_ptr<bool> updateSuccess{};

  UpdateUdfArtifactResult() {}

  explicit UpdateUdfArtifactResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collidingClasses) {
      vector<boost::any> temp1;
      for(auto item1:*collidingClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["collidingClasses"] = boost::any(temp1);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (missingClasses) {
      vector<boost::any> temp1;
      for(auto item1:*missingClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["missingClasses"] = boost::any(temp1);
    }
    if (udfArtifact) {
      res["udfArtifact"] = udfArtifact ? boost::any(udfArtifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateSuccess) {
      res["updateSuccess"] = boost::any(*updateSuccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("collidingClasses") != m.end() && !m["collidingClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["collidingClasses"].type()) {
        vector<UdfClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["collidingClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UdfClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        collidingClasses = make_shared<vector<UdfClass>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("missingClasses") != m.end() && !m["missingClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["missingClasses"].type()) {
        vector<UdfClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["missingClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UdfClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        missingClasses = make_shared<vector<UdfClass>>(expect1);
      }
    }
    if (m.find("udfArtifact") != m.end() && !m["udfArtifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["udfArtifact"].type()) {
        UdfArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["udfArtifact"]));
        udfArtifact = make_shared<UdfArtifact>(model1);
      }
    }
    if (m.find("updateSuccess") != m.end() && !m["updateSuccess"].empty()) {
      updateSuccess = make_shared<bool>(boost::any_cast<bool>(m["updateSuccess"]));
    }
  }


  virtual ~UpdateUdfArtifactResult() = default;
};
class Variable : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  Variable() {}

  explicit Variable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~Variable() = default;
};
class CreateDeploymentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  CreateDeploymentHeaders() {}

  explicit CreateDeploymentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateDeploymentHeaders() = default;
};
class CreateDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<Deployment> body{};

  CreateDeploymentRequest() {}

  explicit CreateDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Deployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Deployment>(model1);
      }
    }
  }


  virtual ~CreateDeploymentRequest() = default;
};
class CreateDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<Deployment> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDeploymentResponseBody() {}

  explicit CreateDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Deployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Deployment>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateDeploymentResponseBody() = default;
};
class CreateDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeploymentResponseBody> body{};

  CreateDeploymentResponse() {}

  explicit CreateDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeploymentResponse() = default;
};
class CreateDeploymentDraftHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  CreateDeploymentDraftHeaders() {}

  explicit CreateDeploymentDraftHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateDeploymentDraftHeaders() = default;
};
class CreateDeploymentDraftRequest : public Darabonba::Model {
public:
  shared_ptr<DeploymentDraft> body{};

  CreateDeploymentDraftRequest() {}

  explicit CreateDeploymentDraftRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeploymentDraft model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeploymentDraft>(model1);
      }
    }
  }


  virtual ~CreateDeploymentDraftRequest() = default;
};
class CreateDeploymentDraftResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeploymentDraft> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDeploymentDraftResponseBody() {}

  explicit CreateDeploymentDraftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeploymentDraft model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeploymentDraft>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateDeploymentDraftResponseBody() = default;
};
class CreateDeploymentDraftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeploymentDraftResponseBody> body{};

  CreateDeploymentDraftResponse() {}

  explicit CreateDeploymentDraftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeploymentDraftResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeploymentDraftResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeploymentDraftResponse() = default;
};
class CreateFolderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  CreateFolderHeaders() {}

  explicit CreateFolderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateFolderHeaders() = default;
};
class CreateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<Folder> body{};

  CreateFolderRequest() {}

  explicit CreateFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Folder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Folder>(model1);
      }
    }
  }


  virtual ~CreateFolderRequest() = default;
};
class CreateFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<Folder> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateFolderResponseBody() {}

  explicit CreateFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Folder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Folder>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateFolderResponseBody() = default;
};
class CreateFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFolderResponseBody> body{};

  CreateFolderResponse() {}

  explicit CreateFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFolderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFolderResponse() = default;
};
class CreateMemberHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  CreateMemberHeaders() {}

  explicit CreateMemberHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateMemberHeaders() = default;
};
class CreateMemberRequest : public Darabonba::Model {
public:
  shared_ptr<Member> body{};

  CreateMemberRequest() {}

  explicit CreateMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Member model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Member>(model1);
      }
    }
  }


  virtual ~CreateMemberRequest() = default;
};
class CreateMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<Member> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateMemberResponseBody() {}

  explicit CreateMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Member model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Member>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateMemberResponseBody() = default;
};
class CreateMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMemberResponseBody> body{};

  CreateMemberResponse() {}

  explicit CreateMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMemberResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMemberResponse() = default;
};
class CreateSavepointHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  CreateSavepointHeaders() {}

  explicit CreateSavepointHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateSavepointHeaders() = default;
};
class CreateSavepointRequest : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
  shared_ptr<string> description{};
  shared_ptr<bool> nativeFormat{};

  CreateSavepointRequest() {}

  explicit CreateSavepointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (nativeFormat) {
      res["nativeFormat"] = boost::any(*nativeFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("nativeFormat") != m.end() && !m["nativeFormat"].empty()) {
      nativeFormat = make_shared<bool>(boost::any_cast<bool>(m["nativeFormat"]));
    }
  }


  virtual ~CreateSavepointRequest() = default;
};
class CreateSavepointResponseBody : public Darabonba::Model {
public:
  shared_ptr<Savepoint> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSavepointResponseBody() {}

  explicit CreateSavepointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Savepoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Savepoint>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateSavepointResponseBody() = default;
};
class CreateSavepointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSavepointResponseBody> body{};

  CreateSavepointResponse() {}

  explicit CreateSavepointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSavepointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSavepointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSavepointResponse() = default;
};
class CreateUdfArtifactHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  CreateUdfArtifactHeaders() {}

  explicit CreateUdfArtifactHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateUdfArtifactHeaders() = default;
};
class CreateUdfArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<UdfArtifact> body{};

  CreateUdfArtifactRequest() {}

  explicit CreateUdfArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UdfArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UdfArtifact>(model1);
      }
    }
  }


  virtual ~CreateUdfArtifactRequest() = default;
};
class CreateUdfArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateUdfArtifactResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateUdfArtifactResponseBody() {}

  explicit CreateUdfArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateUdfArtifactResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateUdfArtifactResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateUdfArtifactResponseBody() = default;
};
class CreateUdfArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUdfArtifactResponseBody> body{};

  CreateUdfArtifactResponse() {}

  explicit CreateUdfArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUdfArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUdfArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUdfArtifactResponse() = default;
};
class CreateVariableHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  CreateVariableHeaders() {}

  explicit CreateVariableHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateVariableHeaders() = default;
};
class CreateVariableRequest : public Darabonba::Model {
public:
  shared_ptr<Variable> body{};

  CreateVariableRequest() {}

  explicit CreateVariableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Variable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Variable>(model1);
      }
    }
  }


  virtual ~CreateVariableRequest() = default;
};
class CreateVariableResponseBody : public Darabonba::Model {
public:
  shared_ptr<Variable> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateVariableResponseBody() {}

  explicit CreateVariableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Variable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Variable>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateVariableResponseBody() = default;
};
class CreateVariableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVariableResponseBody> body{};

  CreateVariableResponse() {}

  explicit CreateVariableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVariableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVariableResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVariableResponse() = default;
};
class DeleteCustomConnectorHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteCustomConnectorHeaders() {}

  explicit DeleteCustomConnectorHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteCustomConnectorHeaders() = default;
};
class DeleteCustomConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<TableMeta>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCustomConnectorResponseBody() {}

  explicit DeleteCustomConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<TableMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TableMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<TableMeta>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteCustomConnectorResponseBody() = default;
};
class DeleteCustomConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCustomConnectorResponseBody> body{};

  DeleteCustomConnectorResponse() {}

  explicit DeleteCustomConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCustomConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCustomConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCustomConnectorResponse() = default;
};
class DeleteDeploymentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteDeploymentHeaders() {}

  explicit DeleteDeploymentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteDeploymentHeaders() = default;
};
class DeleteDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDeploymentResponseBody() {}

  explicit DeleteDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteDeploymentResponseBody() = default;
};
class DeleteDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeploymentResponseBody> body{};

  DeleteDeploymentResponse() {}

  explicit DeleteDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeploymentResponse() = default;
};
class DeleteDeploymentDraftHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteDeploymentDraftHeaders() {}

  explicit DeleteDeploymentDraftHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteDeploymentDraftHeaders() = default;
};
class DeleteDeploymentDraftResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDeploymentDraftResponseBody() {}

  explicit DeleteDeploymentDraftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteDeploymentDraftResponseBody() = default;
};
class DeleteDeploymentDraftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeploymentDraftResponseBody> body{};

  DeleteDeploymentDraftResponse() {}

  explicit DeleteDeploymentDraftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDeploymentDraftResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeploymentDraftResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeploymentDraftResponse() = default;
};
class DeleteFolderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteFolderHeaders() {}

  explicit DeleteFolderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteFolderHeaders() = default;
};
class DeleteFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFolderResponseBody() {}

  explicit DeleteFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteFolderResponseBody() = default;
};
class DeleteFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFolderResponseBody> body{};

  DeleteFolderResponse() {}

  explicit DeleteFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFolderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFolderResponse() = default;
};
class DeleteJobHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteJobHeaders() {}

  explicit DeleteJobHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteJobHeaders() = default;
};
class DeleteJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteJobResponseBody() {}

  explicit DeleteJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteJobResponseBody() = default;
};
class DeleteJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteJobResponseBody> body{};

  DeleteJobResponse() {}

  explicit DeleteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobResponse() = default;
};
class DeleteMemberHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteMemberHeaders() {}

  explicit DeleteMemberHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteMemberHeaders() = default;
};
class DeleteMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteMemberResponseBody() {}

  explicit DeleteMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteMemberResponseBody() = default;
};
class DeleteMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMemberResponseBody> body{};

  DeleteMemberResponse() {}

  explicit DeleteMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMemberResponse() = default;
};
class DeleteSavepointHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteSavepointHeaders() {}

  explicit DeleteSavepointHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteSavepointHeaders() = default;
};
class DeleteSavepointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteSavepointResponseBody() {}

  explicit DeleteSavepointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteSavepointResponseBody() = default;
};
class DeleteSavepointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSavepointResponseBody> body{};

  DeleteSavepointResponse() {}

  explicit DeleteSavepointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSavepointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSavepointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSavepointResponse() = default;
};
class DeleteUdfArtifactHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteUdfArtifactHeaders() {}

  explicit DeleteUdfArtifactHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteUdfArtifactHeaders() = default;
};
class DeleteUdfArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteUdfArtifactResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUdfArtifactResponseBody() {}

  explicit DeleteUdfArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeleteUdfArtifactResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeleteUdfArtifactResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteUdfArtifactResponseBody() = default;
};
class DeleteUdfArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUdfArtifactResponseBody> body{};

  DeleteUdfArtifactResponse() {}

  explicit DeleteUdfArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUdfArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUdfArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUdfArtifactResponse() = default;
};
class DeleteUdfFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteUdfFunctionHeaders() {}

  explicit DeleteUdfFunctionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteUdfFunctionHeaders() = default;
};
class DeleteUdfFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> className{};
  shared_ptr<string> udfArtifactName{};

  DeleteUdfFunctionRequest() {}

  explicit DeleteUdfFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (udfArtifactName) {
      res["udfArtifactName"] = boost::any(*udfArtifactName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("udfArtifactName") != m.end() && !m["udfArtifactName"].empty()) {
      udfArtifactName = make_shared<string>(boost::any_cast<string>(m["udfArtifactName"]));
    }
  }


  virtual ~DeleteUdfFunctionRequest() = default;
};
class DeleteUdfFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUdfFunctionResponseBody() {}

  explicit DeleteUdfFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteUdfFunctionResponseBody() = default;
};
class DeleteUdfFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUdfFunctionResponseBody> body{};

  DeleteUdfFunctionResponse() {}

  explicit DeleteUdfFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUdfFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUdfFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUdfFunctionResponse() = default;
};
class DeleteVariableHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeleteVariableHeaders() {}

  explicit DeleteVariableHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeleteVariableHeaders() = default;
};
class DeleteVariableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteVariableResponseBody() {}

  explicit DeleteVariableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteVariableResponseBody() = default;
};
class DeleteVariableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVariableResponseBody> body{};

  DeleteVariableResponse() {}

  explicit DeleteVariableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVariableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVariableResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVariableResponse() = default;
};
class DeployDeploymentDraftAsyncHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  DeployDeploymentDraftAsyncHeaders() {}

  explicit DeployDeploymentDraftAsyncHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~DeployDeploymentDraftAsyncHeaders() = default;
};
class DeployDeploymentDraftAsyncRequest : public Darabonba::Model {
public:
  shared_ptr<DraftDeployParams> body{};

  DeployDeploymentDraftAsyncRequest() {}

  explicit DeployDeploymentDraftAsyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DraftDeployParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DraftDeployParams>(model1);
      }
    }
  }


  virtual ~DeployDeploymentDraftAsyncRequest() = default;
};
class DeployDeploymentDraftAsyncResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ticketId{};

  DeployDeploymentDraftAsyncResponseBodyData() {}

  explicit DeployDeploymentDraftAsyncResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticketId) {
      res["ticketId"] = boost::any(*ticketId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ticketId") != m.end() && !m["ticketId"].empty()) {
      ticketId = make_shared<string>(boost::any_cast<string>(m["ticketId"]));
    }
  }


  virtual ~DeployDeploymentDraftAsyncResponseBodyData() = default;
};
class DeployDeploymentDraftAsyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeployDeploymentDraftAsyncResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployDeploymentDraftAsyncResponseBody() {}

  explicit DeployDeploymentDraftAsyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeployDeploymentDraftAsyncResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeployDeploymentDraftAsyncResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployDeploymentDraftAsyncResponseBody() = default;
};
class DeployDeploymentDraftAsyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployDeploymentDraftAsyncResponseBody> body{};

  DeployDeploymentDraftAsyncResponse() {}

  explicit DeployDeploymentDraftAsyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployDeploymentDraftAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployDeploymentDraftAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~DeployDeploymentDraftAsyncResponse() = default;
};
class ExecuteSqlStatementHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ExecuteSqlStatementHeaders() {}

  explicit ExecuteSqlStatementHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ExecuteSqlStatementHeaders() = default;
};
class ExecuteSqlStatementRequest : public Darabonba::Model {
public:
  shared_ptr<SqlStatementWithContext> body{};

  ExecuteSqlStatementRequest() {}

  explicit ExecuteSqlStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SqlStatementWithContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SqlStatementWithContext>(model1);
      }
    }
  }


  virtual ~ExecuteSqlStatementRequest() = default;
};
class ExecuteSqlStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<SqlStatementExecuteResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteSqlStatementResponseBody() {}

  explicit ExecuteSqlStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SqlStatementExecuteResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SqlStatementExecuteResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteSqlStatementResponseBody() = default;
};
class ExecuteSqlStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteSqlStatementResponseBody> body{};

  ExecuteSqlStatementResponse() {}

  explicit ExecuteSqlStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteSqlStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteSqlStatementResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteSqlStatementResponse() = default;
};
class FlinkApiProxyHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  FlinkApiProxyHeaders() {}

  explicit FlinkApiProxyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~FlinkApiProxyHeaders() = default;
};
class FlinkApiProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> flinkApiPath{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  FlinkApiProxyRequest() {}

  explicit FlinkApiProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flinkApiPath) {
      res["flinkApiPath"] = boost::any(*flinkApiPath);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
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
    if (m.find("flinkApiPath") != m.end() && !m["flinkApiPath"].empty()) {
      flinkApiPath = make_shared<string>(boost::any_cast<string>(m["flinkApiPath"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~FlinkApiProxyRequest() = default;
};
class FlinkApiProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FlinkApiProxyResponseBody() {}

  explicit FlinkApiProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~FlinkApiProxyResponseBody() = default;
};
class FlinkApiProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlinkApiProxyResponseBody> body{};

  FlinkApiProxyResponse() {}

  explicit FlinkApiProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FlinkApiProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlinkApiProxyResponseBody>(model1);
      }
    }
  }


  virtual ~FlinkApiProxyResponse() = default;
};
class GenerateResourcePlanWithFlinkConfAsyncHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GenerateResourcePlanWithFlinkConfAsyncHeaders() {}

  explicit GenerateResourcePlanWithFlinkConfAsyncHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GenerateResourcePlanWithFlinkConfAsyncHeaders() = default;
};
class GenerateResourcePlanWithFlinkConfAsyncRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  GenerateResourcePlanWithFlinkConfAsyncRequest() {}

  explicit GenerateResourcePlanWithFlinkConfAsyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GenerateResourcePlanWithFlinkConfAsyncRequest() = default;
};
class GenerateResourcePlanWithFlinkConfAsyncResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ticketId{};

  GenerateResourcePlanWithFlinkConfAsyncResponseBodyData() {}

  explicit GenerateResourcePlanWithFlinkConfAsyncResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticketId) {
      res["ticketId"] = boost::any(*ticketId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ticketId") != m.end() && !m["ticketId"].empty()) {
      ticketId = make_shared<string>(boost::any_cast<string>(m["ticketId"]));
    }
  }


  virtual ~GenerateResourcePlanWithFlinkConfAsyncResponseBodyData() = default;
};
class GenerateResourcePlanWithFlinkConfAsyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateResourcePlanWithFlinkConfAsyncResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateResourcePlanWithFlinkConfAsyncResponseBody() {}

  explicit GenerateResourcePlanWithFlinkConfAsyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateResourcePlanWithFlinkConfAsyncResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateResourcePlanWithFlinkConfAsyncResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GenerateResourcePlanWithFlinkConfAsyncResponseBody() = default;
};
class GenerateResourcePlanWithFlinkConfAsyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateResourcePlanWithFlinkConfAsyncResponseBody> body{};

  GenerateResourcePlanWithFlinkConfAsyncResponse() {}

  explicit GenerateResourcePlanWithFlinkConfAsyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateResourcePlanWithFlinkConfAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateResourcePlanWithFlinkConfAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateResourcePlanWithFlinkConfAsyncResponse() = default;
};
class GetCatalogsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetCatalogsHeaders() {}

  explicit GetCatalogsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetCatalogsHeaders() = default;
};
class GetCatalogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> catalogName{};

  GetCatalogsRequest() {}

  explicit GetCatalogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (catalogName) {
      res["catalogName"] = boost::any(*catalogName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("catalogName") != m.end() && !m["catalogName"].empty()) {
      catalogName = make_shared<string>(boost::any_cast<string>(m["catalogName"]));
    }
  }


  virtual ~GetCatalogsRequest() = default;
};
class GetCatalogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Catalog>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCatalogsResponseBody() {}

  explicit GetCatalogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Catalog> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Catalog model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Catalog>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetCatalogsResponseBody() = default;
};
class GetCatalogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCatalogsResponseBody> body{};

  GetCatalogsResponse() {}

  explicit GetCatalogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCatalogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCatalogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetCatalogsResponse() = default;
};
class GetDatabasesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetDatabasesHeaders() {}

  explicit GetDatabasesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetDatabasesHeaders() = default;
};
class GetDatabasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};

  GetDatabasesRequest() {}

  explicit GetDatabasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["databaseName"] = boost::any(*databaseName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("databaseName") != m.end() && !m["databaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["databaseName"]));
    }
  }


  virtual ~GetDatabasesRequest() = default;
};
class GetDatabasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Database>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDatabasesResponseBody() {}

  explicit GetDatabasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Database> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Database model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Database>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDatabasesResponseBody() = default;
};
class GetDatabasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatabasesResponseBody> body{};

  GetDatabasesResponse() {}

  explicit GetDatabasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDatabasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatabasesResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatabasesResponse() = default;
};
class GetDeployDeploymentDraftResultHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetDeployDeploymentDraftResultHeaders() {}

  explicit GetDeployDeploymentDraftResultHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetDeployDeploymentDraftResultHeaders() = default;
};
class GetDeployDeploymentDraftResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<AsyncDraftDeployResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeployDeploymentDraftResultResponseBody() {}

  explicit GetDeployDeploymentDraftResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AsyncDraftDeployResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AsyncDraftDeployResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeployDeploymentDraftResultResponseBody() = default;
};
class GetDeployDeploymentDraftResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeployDeploymentDraftResultResponseBody> body{};

  GetDeployDeploymentDraftResultResponse() {}

  explicit GetDeployDeploymentDraftResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeployDeploymentDraftResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeployDeploymentDraftResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeployDeploymentDraftResultResponse() = default;
};
class GetDeploymentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetDeploymentHeaders() {}

  explicit GetDeploymentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetDeploymentHeaders() = default;
};
class GetDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<Deployment> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeploymentResponseBody() {}

  explicit GetDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Deployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Deployment>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeploymentResponseBody() = default;
};
class GetDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeploymentResponseBody> body{};

  GetDeploymentResponse() {}

  explicit GetDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeploymentResponse() = default;
};
class GetDeploymentDraftHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetDeploymentDraftHeaders() {}

  explicit GetDeploymentDraftHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetDeploymentDraftHeaders() = default;
};
class GetDeploymentDraftResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeploymentDraft> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeploymentDraftResponseBody() {}

  explicit GetDeploymentDraftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeploymentDraft model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeploymentDraft>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeploymentDraftResponseBody() = default;
};
class GetDeploymentDraftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeploymentDraftResponseBody> body{};

  GetDeploymentDraftResponse() {}

  explicit GetDeploymentDraftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeploymentDraftResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeploymentDraftResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeploymentDraftResponse() = default;
};
class GetDeploymentDraftLockHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetDeploymentDraftLockHeaders() {}

  explicit GetDeploymentDraftLockHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetDeploymentDraftLockHeaders() = default;
};
class GetDeploymentDraftLockRequest : public Darabonba::Model {
public:
  shared_ptr<string> deploymentDraftId{};

  GetDeploymentDraftLockRequest() {}

  explicit GetDeploymentDraftLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentDraftId) {
      res["deploymentDraftId"] = boost::any(*deploymentDraftId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentDraftId") != m.end() && !m["deploymentDraftId"].empty()) {
      deploymentDraftId = make_shared<string>(boost::any_cast<string>(m["deploymentDraftId"]));
    }
  }


  virtual ~GetDeploymentDraftLockRequest() = default;
};
class GetDeploymentDraftLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<Lock> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeploymentDraftLockResponseBody() {}

  explicit GetDeploymentDraftLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Lock model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Lock>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeploymentDraftLockResponseBody() = default;
};
class GetDeploymentDraftLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeploymentDraftLockResponseBody> body{};

  GetDeploymentDraftLockResponse() {}

  explicit GetDeploymentDraftLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeploymentDraftLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeploymentDraftLockResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeploymentDraftLockResponse() = default;
};
class GetFolderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetFolderHeaders() {}

  explicit GetFolderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetFolderHeaders() = default;
};
class GetFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};

  GetFolderRequest() {}

  explicit GetFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
  }


  virtual ~GetFolderRequest() = default;
};
class GetFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<Folder> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetFolderResponseBody() {}

  explicit GetFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Folder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Folder>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetFolderResponseBody() = default;
};
class GetFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFolderResponseBody> body{};

  GetFolderResponse() {}

  explicit GetFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFolderResponseBody>(model1);
      }
    }
  }


  virtual ~GetFolderResponse() = default;
};
class GetGenerateResourcePlanResultHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetGenerateResourcePlanResultHeaders() {}

  explicit GetGenerateResourcePlanResultHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetGenerateResourcePlanResultHeaders() = default;
};
class GetGenerateResourcePlanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<AsyncResourcePlanOperationResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGenerateResourcePlanResultResponseBody() {}

  explicit GetGenerateResourcePlanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AsyncResourcePlanOperationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AsyncResourcePlanOperationResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetGenerateResourcePlanResultResponseBody() = default;
};
class GetGenerateResourcePlanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGenerateResourcePlanResultResponseBody> body{};

  GetGenerateResourcePlanResultResponse() {}

  explicit GetGenerateResourcePlanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGenerateResourcePlanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGenerateResourcePlanResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetGenerateResourcePlanResultResponse() = default;
};
class GetHotUpdateJobResultHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetHotUpdateJobResultHeaders() {}

  explicit GetHotUpdateJobResultHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetHotUpdateJobResultHeaders() = default;
};
class GetHotUpdateJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<HotUpdateJobResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHotUpdateJobResultResponseBody() {}

  explicit GetHotUpdateJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HotUpdateJobResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HotUpdateJobResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetHotUpdateJobResultResponseBody() = default;
};
class GetHotUpdateJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotUpdateJobResultResponseBody> body{};

  GetHotUpdateJobResultResponse() {}

  explicit GetHotUpdateJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotUpdateJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotUpdateJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotUpdateJobResultResponse() = default;
};
class GetJobHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetJobHeaders() {}

  explicit GetJobHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetJobHeaders() = default;
};
class GetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<Job> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetJobResponseBody() {}

  explicit GetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Job model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Job>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
class GetLatestJobStartLogHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetLatestJobStartLogHeaders() {}

  explicit GetLatestJobStartLogHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetLatestJobStartLogHeaders() = default;
};
class GetLatestJobStartLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetLatestJobStartLogResponseBody() {}

  explicit GetLatestJobStartLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetLatestJobStartLogResponseBody() = default;
};
class GetLatestJobStartLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLatestJobStartLogResponseBody> body{};

  GetLatestJobStartLogResponse() {}

  explicit GetLatestJobStartLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLatestJobStartLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLatestJobStartLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetLatestJobStartLogResponse() = default;
};
class GetLineageInfoHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetLineageInfoHeaders() {}

  explicit GetLineageInfoHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetLineageInfoHeaders() = default;
};
class GetLineageInfoRequest : public Darabonba::Model {
public:
  shared_ptr<GetLineageInfoParams> body{};

  GetLineageInfoRequest() {}

  explicit GetLineageInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLineageInfoParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLineageInfoParams>(model1);
      }
    }
  }


  virtual ~GetLineageInfoRequest() = default;
};
class GetLineageInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<LineageInfo> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetLineageInfoResponseBody() {}

  explicit GetLineageInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        LineageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<LineageInfo>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetLineageInfoResponseBody() = default;
};
class GetLineageInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLineageInfoResponseBody> body{};

  GetLineageInfoResponse() {}

  explicit GetLineageInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLineageInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLineageInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetLineageInfoResponse() = default;
};
class GetMemberHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetMemberHeaders() {}

  explicit GetMemberHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetMemberHeaders() = default;
};
class GetMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<Member> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMemberResponseBody() {}

  explicit GetMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Member model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Member>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetMemberResponseBody() = default;
};
class GetMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMemberResponseBody> body{};

  GetMemberResponse() {}

  explicit GetMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetMemberResponse() = default;
};
class GetSavepointHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetSavepointHeaders() {}

  explicit GetSavepointHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetSavepointHeaders() = default;
};
class GetSavepointResponseBody : public Darabonba::Model {
public:
  shared_ptr<Savepoint> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSavepointResponseBody() {}

  explicit GetSavepointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Savepoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Savepoint>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetSavepointResponseBody() = default;
};
class GetSavepointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSavepointResponseBody> body{};

  GetSavepointResponse() {}

  explicit GetSavepointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSavepointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSavepointResponseBody>(model1);
      }
    }
  }


  virtual ~GetSavepointResponse() = default;
};
class GetTablesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetTablesHeaders() {}

  explicit GetTablesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetTablesHeaders() = default;
};
class GetTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};

  GetTablesRequest() {}

  explicit GetTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~GetTablesRequest() = default;
};
class GetTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Table>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTablesResponseBody() {}

  explicit GetTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Table> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Table model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Table>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetTablesResponseBody() = default;
};
class GetTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTablesResponseBody> body{};

  GetTablesResponse() {}

  explicit GetTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTablesResponseBody>(model1);
      }
    }
  }


  virtual ~GetTablesResponse() = default;
};
class GetUdfArtifactsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  GetUdfArtifactsHeaders() {}

  explicit GetUdfArtifactsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetUdfArtifactsHeaders() = default;
};
class GetUdfArtifactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> udfArtifactName{};

  GetUdfArtifactsRequest() {}

  explicit GetUdfArtifactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (udfArtifactName) {
      res["udfArtifactName"] = boost::any(*udfArtifactName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("udfArtifactName") != m.end() && !m["udfArtifactName"].empty()) {
      udfArtifactName = make_shared<string>(boost::any_cast<string>(m["udfArtifactName"]));
    }
  }


  virtual ~GetUdfArtifactsRequest() = default;
};
class GetUdfArtifactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<UdfArtifact>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUdfArtifactsResponseBody() {}

  explicit GetUdfArtifactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<UdfArtifact> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UdfArtifact model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<UdfArtifact>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetUdfArtifactsResponseBody() = default;
};
class GetUdfArtifactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUdfArtifactsResponseBody> body{};

  GetUdfArtifactsResponse() {}

  explicit GetUdfArtifactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUdfArtifactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUdfArtifactsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUdfArtifactsResponse() = default;
};
class HotUpdateJobHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  HotUpdateJobHeaders() {}

  explicit HotUpdateJobHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~HotUpdateJobHeaders() = default;
};
class HotUpdateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<HotUpdateJobResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  HotUpdateJobResponseBody() {}

  explicit HotUpdateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HotUpdateJobResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HotUpdateJobResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~HotUpdateJobResponseBody() = default;
};
class HotUpdateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HotUpdateJobResponseBody> body{};

  HotUpdateJobResponse() {}

  explicit HotUpdateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HotUpdateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HotUpdateJobResponseBody>(model1);
      }
    }
  }


  virtual ~HotUpdateJobResponse() = default;
};
class ListCustomConnectorsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListCustomConnectorsHeaders() {}

  explicit ListCustomConnectorsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListCustomConnectorsHeaders() = default;
};
class ListCustomConnectorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Connector>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCustomConnectorsResponseBody() {}

  explicit ListCustomConnectorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Connector> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Connector model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Connector>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListCustomConnectorsResponseBody() = default;
};
class ListCustomConnectorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCustomConnectorsResponseBody> body{};

  ListCustomConnectorsResponse() {}

  explicit ListCustomConnectorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCustomConnectorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCustomConnectorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCustomConnectorsResponse() = default;
};
class ListDeploymentDraftsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListDeploymentDraftsHeaders() {}

  explicit ListDeploymentDraftsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListDeploymentDraftsHeaders() = default;
};
class ListDeploymentDraftsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListDeploymentDraftsRequest() {}

  explicit ListDeploymentDraftsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListDeploymentDraftsRequest() = default;
};
class ListDeploymentDraftsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DeploymentDraft>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListDeploymentDraftsResponseBody() {}

  explicit ListDeploymentDraftsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<DeploymentDraft> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeploymentDraft model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DeploymentDraft>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListDeploymentDraftsResponseBody() = default;
};
class ListDeploymentDraftsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentDraftsResponseBody> body{};

  ListDeploymentDraftsResponse() {}

  explicit ListDeploymentDraftsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeploymentDraftsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentDraftsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentDraftsResponse() = default;
};
class ListDeploymentTargetsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListDeploymentTargetsHeaders() {}

  explicit ListDeploymentTargetsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListDeploymentTargetsHeaders() = default;
};
class ListDeploymentTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListDeploymentTargetsRequest() {}

  explicit ListDeploymentTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListDeploymentTargetsRequest() = default;
};
class ListDeploymentTargetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DeploymentTarget>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListDeploymentTargetsResponseBody() {}

  explicit ListDeploymentTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<DeploymentTarget> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeploymentTarget model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DeploymentTarget>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListDeploymentTargetsResponseBody() = default;
};
class ListDeploymentTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentTargetsResponseBody> body{};

  ListDeploymentTargetsResponse() {}

  explicit ListDeploymentTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeploymentTargetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentTargetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentTargetsResponse() = default;
};
class ListDeploymentsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListDeploymentsHeaders() {}

  explicit ListDeploymentsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListDeploymentsHeaders() = default;
};
class ListDeploymentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> labelKey{};
  shared_ptr<string> labelValueArray{};
  shared_ptr<string> modifier{};
  shared_ptr<string> name{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListDeploymentsRequest() {}

  explicit ListDeploymentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (executionMode) {
      res["executionMode"] = boost::any(*executionMode);
    }
    if (labelKey) {
      res["labelKey"] = boost::any(*labelKey);
    }
    if (labelValueArray) {
      res["labelValueArray"] = boost::any(*labelValueArray);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
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
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("executionMode") != m.end() && !m["executionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["executionMode"]));
    }
    if (m.find("labelKey") != m.end() && !m["labelKey"].empty()) {
      labelKey = make_shared<string>(boost::any_cast<string>(m["labelKey"]));
    }
    if (m.find("labelValueArray") != m.end() && !m["labelValueArray"].empty()) {
      labelValueArray = make_shared<string>(boost::any_cast<string>(m["labelValueArray"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<string>(boost::any_cast<string>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListDeploymentsRequest() = default;
};
class ListDeploymentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Deployment>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListDeploymentsResponseBody() {}

  explicit ListDeploymentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Deployment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Deployment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Deployment>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListDeploymentsResponseBody() = default;
};
class ListDeploymentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentsResponseBody> body{};

  ListDeploymentsResponse() {}

  explicit ListDeploymentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeploymentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentsResponse() = default;
};
class ListEditableNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> pageIndex{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> workspaceId{};

  ListEditableNamespaceRequest() {}

  explicit ListEditableNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<string>(boost::any_cast<string>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListEditableNamespaceRequest() = default;
};
class ListEditableNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<EditableNamespace>> editableNamespaces{};
  shared_ptr<string> pageIndex{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> total{};

  ListEditableNamespaceResponseBodyData() {}

  explicit ListEditableNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (editableNamespaces) {
      vector<boost::any> temp1;
      for(auto item1:*editableNamespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["editableNamespaces"] = boost::any(temp1);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("editableNamespaces") != m.end() && !m["editableNamespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["editableNamespaces"].type()) {
        vector<EditableNamespace> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["editableNamespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EditableNamespace model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        editableNamespaces = make_shared<vector<EditableNamespace>>(expect1);
      }
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<string>(boost::any_cast<string>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["total"]));
    }
  }


  virtual ~ListEditableNamespaceResponseBodyData() = default;
};
class ListEditableNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListEditableNamespaceResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEditableNamespaceResponseBody() {}

  explicit ListEditableNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListEditableNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListEditableNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["reason"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListEditableNamespaceResponseBody() = default;
};
class ListEditableNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEditableNamespaceResponseBody> body{};

  ListEditableNamespaceResponse() {}

  explicit ListEditableNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEditableNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEditableNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~ListEditableNamespaceResponse() = default;
};
class ListEngineVersionMetadataHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListEngineVersionMetadataHeaders() {}

  explicit ListEngineVersionMetadataHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListEngineVersionMetadataHeaders() = default;
};
class ListEngineVersionMetadataResponseBody : public Darabonba::Model {
public:
  shared_ptr<EngineVersionMetadataIndex> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEngineVersionMetadataResponseBody() {}

  explicit ListEngineVersionMetadataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        EngineVersionMetadataIndex model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<EngineVersionMetadataIndex>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListEngineVersionMetadataResponseBody() = default;
};
class ListEngineVersionMetadataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEngineVersionMetadataResponseBody> body{};

  ListEngineVersionMetadataResponse() {}

  explicit ListEngineVersionMetadataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEngineVersionMetadataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEngineVersionMetadataResponseBody>(model1);
      }
    }
  }


  virtual ~ListEngineVersionMetadataResponse() = default;
};
class ListJobsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListJobsHeaders() {}

  explicit ListJobsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListJobsHeaders() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortName{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sortName) {
      res["sortName"] = boost::any(*sortName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sortName") != m.end() && !m["sortName"].empty()) {
      sortName = make_shared<string>(boost::any_cast<string>(m["sortName"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Job>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Job> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Job model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Job>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
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
class ListMembersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListMembersHeaders() {}

  explicit ListMembersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListMembersHeaders() = default;
};
class ListMembersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListMembersRequest() {}

  explicit ListMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListMembersRequest() = default;
};
class ListMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Member>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListMembersResponseBody() {}

  explicit ListMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Member> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Member model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Member>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListMembersResponseBody() = default;
};
class ListMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMembersResponseBody> body{};

  ListMembersResponse() {}

  explicit ListMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListMembersResponse() = default;
};
class ListSavepointsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListSavepointsHeaders() {}

  explicit ListSavepointsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListSavepointsHeaders() = default;
};
class ListSavepointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
  shared_ptr<string> jobId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListSavepointsRequest() {}

  explicit ListSavepointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListSavepointsRequest() = default;
};
class ListSavepointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Savepoint>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListSavepointsResponseBody() {}

  explicit ListSavepointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Savepoint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Savepoint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Savepoint>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListSavepointsResponseBody() = default;
};
class ListSavepointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSavepointsResponseBody> body{};

  ListSavepointsResponse() {}

  explicit ListSavepointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSavepointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSavepointsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSavepointsResponse() = default;
};
class ListVariablesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ListVariablesHeaders() {}

  explicit ListVariablesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListVariablesHeaders() = default;
};
class ListVariablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListVariablesRequest() {}

  explicit ListVariablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListVariablesRequest() = default;
};
class ListVariablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Variable>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalSize{};

  ListVariablesResponseBody() {}

  explicit ListVariablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (pageIndex) {
      res["pageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Variable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Variable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Variable>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("pageIndex") != m.end() && !m["pageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["pageIndex"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListVariablesResponseBody() = default;
};
class ListVariablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVariablesResponseBody> body{};

  ListVariablesResponse() {}

  explicit ListVariablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVariablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVariablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVariablesResponse() = default;
};
class RegisterCustomConnectorHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  RegisterCustomConnectorHeaders() {}

  explicit RegisterCustomConnectorHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~RegisterCustomConnectorHeaders() = default;
};
class RegisterCustomConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> jarUrl{};

  RegisterCustomConnectorRequest() {}

  explicit RegisterCustomConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jarUrl) {
      res["jarUrl"] = boost::any(*jarUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jarUrl") != m.end() && !m["jarUrl"].empty()) {
      jarUrl = make_shared<string>(boost::any_cast<string>(m["jarUrl"]));
    }
  }


  virtual ~RegisterCustomConnectorRequest() = default;
};
class RegisterCustomConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Connector>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RegisterCustomConnectorResponseBody() {}

  explicit RegisterCustomConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Connector> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Connector model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Connector>>(expect1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RegisterCustomConnectorResponseBody() = default;
};
class RegisterCustomConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterCustomConnectorResponseBody> body{};

  RegisterCustomConnectorResponse() {}

  explicit RegisterCustomConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterCustomConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterCustomConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterCustomConnectorResponse() = default;
};
class RegisterUdfFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  RegisterUdfFunctionHeaders() {}

  explicit RegisterUdfFunctionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~RegisterUdfFunctionHeaders() = default;
};
class RegisterUdfFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> className{};
  shared_ptr<string> functionName{};
  shared_ptr<string> udfArtifactName{};

  RegisterUdfFunctionRequest() {}

  explicit RegisterUdfFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (udfArtifactName) {
      res["udfArtifactName"] = boost::any(*udfArtifactName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("udfArtifactName") != m.end() && !m["udfArtifactName"].empty()) {
      udfArtifactName = make_shared<string>(boost::any_cast<string>(m["udfArtifactName"]));
    }
  }


  virtual ~RegisterUdfFunctionRequest() = default;
};
class RegisterUdfFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<UdfFunction> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RegisterUdfFunctionResponseBody() {}

  explicit RegisterUdfFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UdfFunction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UdfFunction>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RegisterUdfFunctionResponseBody() = default;
};
class RegisterUdfFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterUdfFunctionResponseBody> body{};

  RegisterUdfFunctionResponse() {}

  explicit RegisterUdfFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterUdfFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterUdfFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterUdfFunctionResponse() = default;
};
class StartJobHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  StartJobHeaders() {}

  explicit StartJobHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~StartJobHeaders() = default;
};
class StartJobRequest : public Darabonba::Model {
public:
  shared_ptr<StartJobRequestBody> body{};

  StartJobRequest() {}

  explicit StartJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartJobRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartJobRequestBody>(model1);
      }
    }
  }


  virtual ~StartJobRequest() = default;
};
class StartJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<Job> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartJobResponseBody() {}

  explicit StartJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Job model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Job>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StartJobResponseBody() = default;
};
class StartJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartJobResponseBody> body{};

  StartJobResponse() {}

  explicit StartJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartJobResponseBody>(model1);
      }
    }
  }


  virtual ~StartJobResponse() = default;
};
class StartJobWithParamsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  StartJobWithParamsHeaders() {}

  explicit StartJobWithParamsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~StartJobWithParamsHeaders() = default;
};
class StartJobWithParamsRequest : public Darabonba::Model {
public:
  shared_ptr<JobStartParameters> body{};

  StartJobWithParamsRequest() {}

  explicit StartJobWithParamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        JobStartParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JobStartParameters>(model1);
      }
    }
  }


  virtual ~StartJobWithParamsRequest() = default;
};
class StartJobWithParamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<Job> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartJobWithParamsResponseBody() {}

  explicit StartJobWithParamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Job model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Job>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StartJobWithParamsResponseBody() = default;
};
class StartJobWithParamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartJobWithParamsResponseBody> body{};

  StartJobWithParamsResponse() {}

  explicit StartJobWithParamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartJobWithParamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartJobWithParamsResponseBody>(model1);
      }
    }
  }


  virtual ~StartJobWithParamsResponse() = default;
};
class StopJobHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  StopJobHeaders() {}

  explicit StopJobHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~StopJobHeaders() = default;
};
class StopJobRequest : public Darabonba::Model {
public:
  shared_ptr<StopJobRequestBody> body{};

  StopJobRequest() {}

  explicit StopJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopJobRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopJobRequestBody>(model1);
      }
    }
  }


  virtual ~StopJobRequest() = default;
};
class StopJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<Job> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopJobResponseBody() {}

  explicit StopJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Job model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Job>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopJobResponseBody() = default;
};
class StopJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopJobResponseBody> body{};

  StopJobResponse() {}

  explicit StopJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopJobResponseBody>(model1);
      }
    }
  }


  virtual ~StopJobResponse() = default;
};
class UpdateDeploymentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  UpdateDeploymentHeaders() {}

  explicit UpdateDeploymentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~UpdateDeploymentHeaders() = default;
};
class UpdateDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<Deployment> body{};

  UpdateDeploymentRequest() {}

  explicit UpdateDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Deployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Deployment>(model1);
      }
    }
  }


  virtual ~UpdateDeploymentRequest() = default;
};
class UpdateDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<Deployment> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDeploymentResponseBody() {}

  explicit UpdateDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Deployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Deployment>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateDeploymentResponseBody() = default;
};
class UpdateDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeploymentResponseBody> body{};

  UpdateDeploymentResponse() {}

  explicit UpdateDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeploymentResponse() = default;
};
class UpdateDeploymentDraftHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  UpdateDeploymentDraftHeaders() {}

  explicit UpdateDeploymentDraftHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~UpdateDeploymentDraftHeaders() = default;
};
class UpdateDeploymentDraftRequest : public Darabonba::Model {
public:
  shared_ptr<DeploymentDraft> body{};

  UpdateDeploymentDraftRequest() {}

  explicit UpdateDeploymentDraftRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeploymentDraft model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeploymentDraft>(model1);
      }
    }
  }


  virtual ~UpdateDeploymentDraftRequest() = default;
};
class UpdateDeploymentDraftResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeploymentDraft> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDeploymentDraftResponseBody() {}

  explicit UpdateDeploymentDraftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeploymentDraft model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeploymentDraft>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateDeploymentDraftResponseBody() = default;
};
class UpdateDeploymentDraftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeploymentDraftResponseBody> body{};

  UpdateDeploymentDraftResponse() {}

  explicit UpdateDeploymentDraftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeploymentDraftResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeploymentDraftResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeploymentDraftResponse() = default;
};
class UpdateFolderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  UpdateFolderHeaders() {}

  explicit UpdateFolderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~UpdateFolderHeaders() = default;
};
class UpdateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<Folder> body{};

  UpdateFolderRequest() {}

  explicit UpdateFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Folder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Folder>(model1);
      }
    }
  }


  virtual ~UpdateFolderRequest() = default;
};
class UpdateFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<Folder> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFolderResponseBody() {}

  explicit UpdateFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Folder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Folder>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateFolderResponseBody() = default;
};
class UpdateFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFolderResponseBody> body{};

  UpdateFolderResponse() {}

  explicit UpdateFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFolderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFolderResponse() = default;
};
class UpdateMemberHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  UpdateMemberHeaders() {}

  explicit UpdateMemberHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~UpdateMemberHeaders() = default;
};
class UpdateMemberRequest : public Darabonba::Model {
public:
  shared_ptr<Member> body{};

  UpdateMemberRequest() {}

  explicit UpdateMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Member model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Member>(model1);
      }
    }
  }


  virtual ~UpdateMemberRequest() = default;
};
class UpdateMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<Member> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateMemberResponseBody() {}

  explicit UpdateMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Member model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Member>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateMemberResponseBody() = default;
};
class UpdateMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMemberResponseBody> body{};

  UpdateMemberResponse() {}

  explicit UpdateMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMemberResponse() = default;
};
class UpdateUdfArtifactHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  UpdateUdfArtifactHeaders() {}

  explicit UpdateUdfArtifactHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~UpdateUdfArtifactHeaders() = default;
};
class UpdateUdfArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<UdfArtifact> body{};

  UpdateUdfArtifactRequest() {}

  explicit UpdateUdfArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UdfArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UdfArtifact>(model1);
      }
    }
  }


  virtual ~UpdateUdfArtifactRequest() = default;
};
class UpdateUdfArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateUdfArtifactResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateUdfArtifactResponseBody() {}

  explicit UpdateUdfArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateUdfArtifactResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateUdfArtifactResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateUdfArtifactResponseBody() = default;
};
class UpdateUdfArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUdfArtifactResponseBody> body{};

  UpdateUdfArtifactResponse() {}

  explicit UpdateUdfArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUdfArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUdfArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUdfArtifactResponse() = default;
};
class ValidateSqlStatementHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> workspace{};

  ValidateSqlStatementHeaders() {}

  explicit ValidateSqlStatementHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ValidateSqlStatementHeaders() = default;
};
class ValidateSqlStatementRequest : public Darabonba::Model {
public:
  shared_ptr<SqlStatementWithContext> body{};

  ValidateSqlStatementRequest() {}

  explicit ValidateSqlStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SqlStatementWithContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SqlStatementWithContext>(model1);
      }
    }
  }


  virtual ~ValidateSqlStatementRequest() = default;
};
class ValidateSqlStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<SqlStatementValidationResult> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ValidateSqlStatementResponseBody() {}

  explicit ValidateSqlStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SqlStatementValidationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SqlStatementValidationResult>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ValidateSqlStatementResponseBody() = default;
};
class ValidateSqlStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateSqlStatementResponseBody> body{};

  ValidateSqlStatementResponse() {}

  explicit ValidateSqlStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateSqlStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateSqlStatementResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateSqlStatementResponse() = default;
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
  CreateDeploymentResponse createDeploymentWithOptions(shared_ptr<string> namespace_,
                                                       shared_ptr<CreateDeploymentRequest> request,
                                                       shared_ptr<CreateDeploymentHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeploymentResponse createDeployment(shared_ptr<string> namespace_, shared_ptr<CreateDeploymentRequest> request);
  CreateDeploymentDraftResponse createDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                                 shared_ptr<CreateDeploymentDraftRequest> request,
                                                                 shared_ptr<CreateDeploymentDraftHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeploymentDraftResponse createDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<CreateDeploymentDraftRequest> request);
  CreateFolderResponse createFolderWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<CreateFolderRequest> request,
                                               shared_ptr<CreateFolderHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFolderResponse createFolder(shared_ptr<string> namespace_, shared_ptr<CreateFolderRequest> request);
  CreateMemberResponse createMemberWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<CreateMemberRequest> request,
                                               shared_ptr<CreateMemberHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMemberResponse createMember(shared_ptr<string> namespace_, shared_ptr<CreateMemberRequest> request);
  CreateSavepointResponse createSavepointWithOptions(shared_ptr<string> namespace_,
                                                     shared_ptr<CreateSavepointRequest> request,
                                                     shared_ptr<CreateSavepointHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSavepointResponse createSavepoint(shared_ptr<string> namespace_, shared_ptr<CreateSavepointRequest> request);
  CreateUdfArtifactResponse createUdfArtifactWithOptions(shared_ptr<string> namespace_,
                                                         shared_ptr<CreateUdfArtifactRequest> request,
                                                         shared_ptr<CreateUdfArtifactHeaders> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUdfArtifactResponse createUdfArtifact(shared_ptr<string> namespace_, shared_ptr<CreateUdfArtifactRequest> request);
  CreateVariableResponse createVariableWithOptions(shared_ptr<string> namespace_,
                                                   shared_ptr<CreateVariableRequest> request,
                                                   shared_ptr<CreateVariableHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVariableResponse createVariable(shared_ptr<string> namespace_, shared_ptr<CreateVariableRequest> request);
  DeleteCustomConnectorResponse deleteCustomConnectorWithOptions(shared_ptr<string> namespace_,
                                                                 shared_ptr<string> connectorName,
                                                                 shared_ptr<DeleteCustomConnectorHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomConnectorResponse deleteCustomConnector(shared_ptr<string> namespace_, shared_ptr<string> connectorName);
  DeleteDeploymentResponse deleteDeploymentWithOptions(shared_ptr<string> namespace_,
                                                       shared_ptr<string> deploymentId,
                                                       shared_ptr<DeleteDeploymentHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeploymentResponse deleteDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId);
  DeleteDeploymentDraftResponse deleteDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                                 shared_ptr<string> deploymentDraftId,
                                                                 shared_ptr<DeleteDeploymentDraftHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeploymentDraftResponse deleteDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<string> deploymentDraftId);
  DeleteFolderResponse deleteFolderWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<string> folderId,
                                               shared_ptr<DeleteFolderHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFolderResponse deleteFolder(shared_ptr<string> namespace_, shared_ptr<string> folderId);
  DeleteJobResponse deleteJobWithOptions(shared_ptr<string> namespace_,
                                         shared_ptr<string> jobId,
                                         shared_ptr<DeleteJobHeaders> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobResponse deleteJob(shared_ptr<string> namespace_, shared_ptr<string> jobId);
  DeleteMemberResponse deleteMemberWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<string> member,
                                               shared_ptr<DeleteMemberHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMemberResponse deleteMember(shared_ptr<string> namespace_, shared_ptr<string> member);
  DeleteSavepointResponse deleteSavepointWithOptions(shared_ptr<string> namespace_,
                                                     shared_ptr<string> savepointId,
                                                     shared_ptr<DeleteSavepointHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSavepointResponse deleteSavepoint(shared_ptr<string> namespace_, shared_ptr<string> savepointId);
  DeleteUdfArtifactResponse deleteUdfArtifactWithOptions(shared_ptr<string> namespace_,
                                                         shared_ptr<string> udfArtifactName,
                                                         shared_ptr<DeleteUdfArtifactHeaders> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUdfArtifactResponse deleteUdfArtifact(shared_ptr<string> namespace_, shared_ptr<string> udfArtifactName);
  DeleteUdfFunctionResponse deleteUdfFunctionWithOptions(shared_ptr<string> namespace_,
                                                         shared_ptr<string> functionName,
                                                         shared_ptr<DeleteUdfFunctionRequest> request,
                                                         shared_ptr<DeleteUdfFunctionHeaders> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUdfFunctionResponse deleteUdfFunction(shared_ptr<string> namespace_, shared_ptr<string> functionName, shared_ptr<DeleteUdfFunctionRequest> request);
  DeleteVariableResponse deleteVariableWithOptions(shared_ptr<string> namespace_,
                                                   shared_ptr<string> name,
                                                   shared_ptr<DeleteVariableHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVariableResponse deleteVariable(shared_ptr<string> namespace_, shared_ptr<string> name);
  DeployDeploymentDraftAsyncResponse deployDeploymentDraftAsyncWithOptions(shared_ptr<string> namespace_,
                                                                           shared_ptr<DeployDeploymentDraftAsyncRequest> request,
                                                                           shared_ptr<DeployDeploymentDraftAsyncHeaders> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployDeploymentDraftAsyncResponse deployDeploymentDraftAsync(shared_ptr<string> namespace_, shared_ptr<DeployDeploymentDraftAsyncRequest> request);
  ExecuteSqlStatementResponse executeSqlStatementWithOptions(shared_ptr<string> namespace_,
                                                             shared_ptr<ExecuteSqlStatementRequest> request,
                                                             shared_ptr<ExecuteSqlStatementHeaders> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteSqlStatementResponse executeSqlStatement(shared_ptr<string> namespace_, shared_ptr<ExecuteSqlStatementRequest> request);
  FlinkApiProxyResponse flinkApiProxyWithOptions(shared_ptr<FlinkApiProxyRequest> request, shared_ptr<FlinkApiProxyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlinkApiProxyResponse flinkApiProxy(shared_ptr<FlinkApiProxyRequest> request);
  GenerateResourcePlanWithFlinkConfAsyncResponse generateResourcePlanWithFlinkConfAsyncWithOptions(shared_ptr<string> namespace_,
                                                                                                   shared_ptr<string> deploymentId,
                                                                                                   shared_ptr<GenerateResourcePlanWithFlinkConfAsyncRequest> request,
                                                                                                   shared_ptr<GenerateResourcePlanWithFlinkConfAsyncHeaders> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateResourcePlanWithFlinkConfAsyncResponse generateResourcePlanWithFlinkConfAsync(shared_ptr<string> namespace_, shared_ptr<string> deploymentId, shared_ptr<GenerateResourcePlanWithFlinkConfAsyncRequest> request);
  GetCatalogsResponse getCatalogsWithOptions(shared_ptr<string> namespace_,
                                             shared_ptr<GetCatalogsRequest> request,
                                             shared_ptr<GetCatalogsHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCatalogsResponse getCatalogs(shared_ptr<string> namespace_, shared_ptr<GetCatalogsRequest> request);
  GetDatabasesResponse getDatabasesWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<string> catalogName,
                                               shared_ptr<GetDatabasesRequest> request,
                                               shared_ptr<GetDatabasesHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatabasesResponse getDatabases(shared_ptr<string> namespace_, shared_ptr<string> catalogName, shared_ptr<GetDatabasesRequest> request);
  GetDeployDeploymentDraftResultResponse getDeployDeploymentDraftResultWithOptions(shared_ptr<string> namespace_,
                                                                                   shared_ptr<string> ticketId,
                                                                                   shared_ptr<GetDeployDeploymentDraftResultHeaders> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeployDeploymentDraftResultResponse getDeployDeploymentDraftResult(shared_ptr<string> namespace_, shared_ptr<string> ticketId);
  GetDeploymentResponse getDeploymentWithOptions(shared_ptr<string> namespace_,
                                                 shared_ptr<string> deploymentId,
                                                 shared_ptr<GetDeploymentHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeploymentResponse getDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId);
  GetDeploymentDraftResponse getDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                           shared_ptr<string> deploymentDraftId,
                                                           shared_ptr<GetDeploymentDraftHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeploymentDraftResponse getDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<string> deploymentDraftId);
  GetDeploymentDraftLockResponse getDeploymentDraftLockWithOptions(shared_ptr<string> namespace_,
                                                                   shared_ptr<GetDeploymentDraftLockRequest> request,
                                                                   shared_ptr<GetDeploymentDraftLockHeaders> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeploymentDraftLockResponse getDeploymentDraftLock(shared_ptr<string> namespace_, shared_ptr<GetDeploymentDraftLockRequest> request);
  GetFolderResponse getFolderWithOptions(shared_ptr<string> namespace_,
                                         shared_ptr<GetFolderRequest> request,
                                         shared_ptr<GetFolderHeaders> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFolderResponse getFolder(shared_ptr<string> namespace_, shared_ptr<GetFolderRequest> request);
  GetGenerateResourcePlanResultResponse getGenerateResourcePlanResultWithOptions(shared_ptr<string> namespace_,
                                                                                 shared_ptr<string> ticketId,
                                                                                 shared_ptr<GetGenerateResourcePlanResultHeaders> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGenerateResourcePlanResultResponse getGenerateResourcePlanResult(shared_ptr<string> namespace_, shared_ptr<string> ticketId);
  GetHotUpdateJobResultResponse getHotUpdateJobResultWithOptions(shared_ptr<string> namespace_,
                                                                 shared_ptr<string> jobHotUpdateId,
                                                                 shared_ptr<GetHotUpdateJobResultHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotUpdateJobResultResponse getHotUpdateJobResult(shared_ptr<string> namespace_, shared_ptr<string> jobHotUpdateId);
  GetJobResponse getJobWithOptions(shared_ptr<string> namespace_,
                                   shared_ptr<string> jobId,
                                   shared_ptr<GetJobHeaders> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<string> namespace_, shared_ptr<string> jobId);
  GetLatestJobStartLogResponse getLatestJobStartLogWithOptions(shared_ptr<string> namespace_,
                                                               shared_ptr<string> deploymentId,
                                                               shared_ptr<GetLatestJobStartLogHeaders> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLatestJobStartLogResponse getLatestJobStartLog(shared_ptr<string> namespace_, shared_ptr<string> deploymentId);
  GetLineageInfoResponse getLineageInfoWithOptions(shared_ptr<GetLineageInfoRequest> request, shared_ptr<GetLineageInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLineageInfoResponse getLineageInfo(shared_ptr<GetLineageInfoRequest> request);
  GetMemberResponse getMemberWithOptions(shared_ptr<string> namespace_,
                                         shared_ptr<string> member,
                                         shared_ptr<GetMemberHeaders> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMemberResponse getMember(shared_ptr<string> namespace_, shared_ptr<string> member);
  GetSavepointResponse getSavepointWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<string> savepointId,
                                               shared_ptr<GetSavepointHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavepointResponse getSavepoint(shared_ptr<string> namespace_, shared_ptr<string> savepointId);
  GetTablesResponse getTablesWithOptions(shared_ptr<string> namespace_,
                                         shared_ptr<string> catalogName,
                                         shared_ptr<string> databaseName,
                                         shared_ptr<GetTablesRequest> request,
                                         shared_ptr<GetTablesHeaders> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTablesResponse getTables(shared_ptr<string> namespace_,
                              shared_ptr<string> catalogName,
                              shared_ptr<string> databaseName,
                              shared_ptr<GetTablesRequest> request);
  GetUdfArtifactsResponse getUdfArtifactsWithOptions(shared_ptr<string> namespace_,
                                                     shared_ptr<GetUdfArtifactsRequest> request,
                                                     shared_ptr<GetUdfArtifactsHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUdfArtifactsResponse getUdfArtifacts(shared_ptr<string> namespace_, shared_ptr<GetUdfArtifactsRequest> request);
  HotUpdateJobResponse hotUpdateJobWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<string> jobId,
                                               shared_ptr<HotUpdateJobHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HotUpdateJobResponse hotUpdateJob(shared_ptr<string> namespace_, shared_ptr<string> jobId);
  ListCustomConnectorsResponse listCustomConnectorsWithOptions(shared_ptr<string> namespace_, shared_ptr<ListCustomConnectorsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCustomConnectorsResponse listCustomConnectors(shared_ptr<string> namespace_);
  ListDeploymentDraftsResponse listDeploymentDraftsWithOptions(shared_ptr<string> namespace_,
                                                               shared_ptr<ListDeploymentDraftsRequest> request,
                                                               shared_ptr<ListDeploymentDraftsHeaders> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentDraftsResponse listDeploymentDrafts(shared_ptr<string> namespace_, shared_ptr<ListDeploymentDraftsRequest> request);
  ListDeploymentTargetsResponse listDeploymentTargetsWithOptions(shared_ptr<string> namespace_,
                                                                 shared_ptr<ListDeploymentTargetsRequest> request,
                                                                 shared_ptr<ListDeploymentTargetsHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentTargetsResponse listDeploymentTargets(shared_ptr<string> namespace_, shared_ptr<ListDeploymentTargetsRequest> request);
  ListDeploymentsResponse listDeploymentsWithOptions(shared_ptr<string> namespace_,
                                                     shared_ptr<ListDeploymentsRequest> request,
                                                     shared_ptr<ListDeploymentsHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentsResponse listDeployments(shared_ptr<string> namespace_, shared_ptr<ListDeploymentsRequest> request);
  ListEditableNamespaceResponse listEditableNamespaceWithOptions(shared_ptr<ListEditableNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEditableNamespaceResponse listEditableNamespace(shared_ptr<ListEditableNamespaceRequest> request);
  ListEngineVersionMetadataResponse listEngineVersionMetadataWithOptions(shared_ptr<ListEngineVersionMetadataHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEngineVersionMetadataResponse listEngineVersionMetadata();
  ListJobsResponse listJobsWithOptions(shared_ptr<string> namespace_,
                                       shared_ptr<ListJobsRequest> request,
                                       shared_ptr<ListJobsHeaders> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<string> namespace_, shared_ptr<ListJobsRequest> request);
  ListMembersResponse listMembersWithOptions(shared_ptr<string> namespace_,
                                             shared_ptr<ListMembersRequest> request,
                                             shared_ptr<ListMembersHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMembersResponse listMembers(shared_ptr<string> namespace_, shared_ptr<ListMembersRequest> request);
  ListSavepointsResponse listSavepointsWithOptions(shared_ptr<string> namespace_,
                                                   shared_ptr<ListSavepointsRequest> request,
                                                   shared_ptr<ListSavepointsHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSavepointsResponse listSavepoints(shared_ptr<string> namespace_, shared_ptr<ListSavepointsRequest> request);
  ListVariablesResponse listVariablesWithOptions(shared_ptr<string> namespace_,
                                                 shared_ptr<ListVariablesRequest> request,
                                                 shared_ptr<ListVariablesHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVariablesResponse listVariables(shared_ptr<string> namespace_, shared_ptr<ListVariablesRequest> request);
  RegisterCustomConnectorResponse registerCustomConnectorWithOptions(shared_ptr<string> namespace_,
                                                                     shared_ptr<RegisterCustomConnectorRequest> request,
                                                                     shared_ptr<RegisterCustomConnectorHeaders> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterCustomConnectorResponse registerCustomConnector(shared_ptr<string> namespace_, shared_ptr<RegisterCustomConnectorRequest> request);
  RegisterUdfFunctionResponse registerUdfFunctionWithOptions(shared_ptr<string> namespace_,
                                                             shared_ptr<RegisterUdfFunctionRequest> request,
                                                             shared_ptr<RegisterUdfFunctionHeaders> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterUdfFunctionResponse registerUdfFunction(shared_ptr<string> namespace_, shared_ptr<RegisterUdfFunctionRequest> request);
  StartJobResponse startJobWithOptions(shared_ptr<string> namespace_,
                                       shared_ptr<StartJobRequest> request,
                                       shared_ptr<StartJobHeaders> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartJobResponse startJob(shared_ptr<string> namespace_, shared_ptr<StartJobRequest> request);
  StartJobWithParamsResponse startJobWithParamsWithOptions(shared_ptr<string> namespace_,
                                                           shared_ptr<StartJobWithParamsRequest> request,
                                                           shared_ptr<StartJobWithParamsHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartJobWithParamsResponse startJobWithParams(shared_ptr<string> namespace_, shared_ptr<StartJobWithParamsRequest> request);
  StopJobResponse stopJobWithOptions(shared_ptr<string> namespace_,
                                     shared_ptr<string> jobId,
                                     shared_ptr<StopJobRequest> request,
                                     shared_ptr<StopJobHeaders> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopJobResponse stopJob(shared_ptr<string> namespace_, shared_ptr<string> jobId, shared_ptr<StopJobRequest> request);
  UpdateDeploymentResponse updateDeploymentWithOptions(shared_ptr<string> namespace_,
                                                       shared_ptr<string> deploymentId,
                                                       shared_ptr<UpdateDeploymentRequest> request,
                                                       shared_ptr<UpdateDeploymentHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeploymentResponse updateDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId, shared_ptr<UpdateDeploymentRequest> request);
  UpdateDeploymentDraftResponse updateDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                                 shared_ptr<string> deploymentDraftId,
                                                                 shared_ptr<UpdateDeploymentDraftRequest> request,
                                                                 shared_ptr<UpdateDeploymentDraftHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeploymentDraftResponse updateDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<string> deploymentDraftId, shared_ptr<UpdateDeploymentDraftRequest> request);
  UpdateFolderResponse updateFolderWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<string> folderId,
                                               shared_ptr<UpdateFolderRequest> request,
                                               shared_ptr<UpdateFolderHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFolderResponse updateFolder(shared_ptr<string> namespace_, shared_ptr<string> folderId, shared_ptr<UpdateFolderRequest> request);
  UpdateMemberResponse updateMemberWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<UpdateMemberRequest> request,
                                               shared_ptr<UpdateMemberHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMemberResponse updateMember(shared_ptr<string> namespace_, shared_ptr<UpdateMemberRequest> request);
  UpdateUdfArtifactResponse updateUdfArtifactWithOptions(shared_ptr<string> namespace_,
                                                         shared_ptr<string> udfArtifactName,
                                                         shared_ptr<UpdateUdfArtifactRequest> request,
                                                         shared_ptr<UpdateUdfArtifactHeaders> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUdfArtifactResponse updateUdfArtifact(shared_ptr<string> namespace_, shared_ptr<string> udfArtifactName, shared_ptr<UpdateUdfArtifactRequest> request);
  ValidateSqlStatementResponse validateSqlStatementWithOptions(shared_ptr<string> namespace_,
                                                               shared_ptr<ValidateSqlStatementRequest> request,
                                                               shared_ptr<ValidateSqlStatementHeaders> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateSqlStatementResponse validateSqlStatement(shared_ptr<string> namespace_, shared_ptr<ValidateSqlStatementRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ververica20220718

#endif
