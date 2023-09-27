// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VERVERICA20220718_H_
#define ALIBABACLOUD_VERVERICA20220718_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
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
  shared_ptr<Logging> logging{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<StreamingResourceSetting> streamingResourceSetting{};

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
    if (logging) {
      res["logging"] = logging ? boost::any(logging->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (streamingResourceSetting) {
      res["streamingResourceSetting"] = streamingResourceSetting ? boost::any(streamingResourceSetting->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("logging") != m.end() && !m["logging"].empty()) {
      if (typeid(map<string, boost::any>) == m["logging"].type()) {
        Logging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logging"]));
        logging = make_shared<Logging>(model1);
      }
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
    if (m.find("streamingResourceSetting") != m.end() && !m["streamingResourceSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["streamingResourceSetting"].type()) {
        StreamingResourceSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["streamingResourceSetting"]));
        streamingResourceSetting = make_shared<StreamingResourceSetting>(model1);
      }
    }
  }


  virtual ~Deployment() = default;
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
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> deploymentName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> executionMode{};
  shared_ptr<map<string, boost::any>> flinkConf{};
  shared_ptr<string> jobId{};
  shared_ptr<Logging> logging{};
  shared_ptr<JobMetric> metric{};
  shared_ptr<string> modifier{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> namespace_{};
  shared_ptr<DeploymentRestoreStrategy> restoreStrategy{};
  shared_ptr<string> sessionClusterName{};
  shared_ptr<long> startTime{};
  shared_ptr<JobStatus> status{};
  shared_ptr<StreamingResourceSetting> streamingResourceSetting{};
  shared_ptr<map<string, boost::any>> userFlinkConf{};

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
    if (logging) {
      res["logging"] = logging ? boost::any(logging->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metric) {
      res["metric"] = metric ? boost::any(metric->toMap()) : boost::any(map<string,boost::any>({}));
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
  }


  virtual ~Job() = default;
};
class JobStartParameters : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
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
    if (restoreStrategy) {
      res["restoreStrategy"] = restoreStrategy ? boost::any(restoreStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
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
        CreateDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeploymentResponse() = default;
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
        CreateSavepointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSavepointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSavepointResponse() = default;
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
        CreateVariableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVariableResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVariableResponse() = default;
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
        DeleteDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeploymentResponse() = default;
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
        DeleteJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobResponse() = default;
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
        DeleteSavepointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSavepointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSavepointResponse() = default;
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
        DeleteVariableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVariableResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVariableResponse() = default;
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
        GenerateResourcePlanWithFlinkConfAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateResourcePlanWithFlinkConfAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateResourcePlanWithFlinkConfAsyncResponse() = default;
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
        GetDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeploymentResponse() = default;
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
        GetGenerateResourcePlanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGenerateResourcePlanResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetGenerateResourcePlanResultResponse() = default;
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
        GetSavepointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSavepointResponseBody>(model1);
      }
    }
  }


  virtual ~GetSavepointResponse() = default;
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
  shared_ptr<string> executionMode{};
  shared_ptr<string> name{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListDeploymentsRequest() {}

  explicit ListDeploymentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionMode) {
      res["executionMode"] = boost::any(*executionMode);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("executionMode") != m.end() && !m["executionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["executionMode"]));
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
        ListDeploymentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentsResponse() = default;
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
        ListVariablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVariablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVariablesResponse() = default;
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
        UpdateDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeploymentResponse() = default;
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
  CreateSavepointResponse createSavepointWithOptions(shared_ptr<string> namespace_,
                                                     shared_ptr<CreateSavepointRequest> request,
                                                     shared_ptr<CreateSavepointHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSavepointResponse createSavepoint(shared_ptr<string> namespace_, shared_ptr<CreateSavepointRequest> request);
  CreateVariableResponse createVariableWithOptions(shared_ptr<string> namespace_,
                                                   shared_ptr<CreateVariableRequest> request,
                                                   shared_ptr<CreateVariableHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVariableResponse createVariable(shared_ptr<string> namespace_, shared_ptr<CreateVariableRequest> request);
  DeleteDeploymentResponse deleteDeploymentWithOptions(shared_ptr<string> namespace_,
                                                       shared_ptr<string> deploymentId,
                                                       shared_ptr<DeleteDeploymentHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeploymentResponse deleteDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId);
  DeleteJobResponse deleteJobWithOptions(shared_ptr<string> namespace_,
                                         shared_ptr<string> jobId,
                                         shared_ptr<DeleteJobHeaders> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobResponse deleteJob(shared_ptr<string> namespace_, shared_ptr<string> jobId);
  DeleteSavepointResponse deleteSavepointWithOptions(shared_ptr<string> namespace_,
                                                     shared_ptr<string> savepointId,
                                                     shared_ptr<DeleteSavepointHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSavepointResponse deleteSavepoint(shared_ptr<string> namespace_, shared_ptr<string> savepointId);
  DeleteVariableResponse deleteVariableWithOptions(shared_ptr<string> namespace_,
                                                   shared_ptr<string> name,
                                                   shared_ptr<DeleteVariableHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVariableResponse deleteVariable(shared_ptr<string> namespace_, shared_ptr<string> name);
  FlinkApiProxyResponse flinkApiProxyWithOptions(shared_ptr<FlinkApiProxyRequest> request, shared_ptr<FlinkApiProxyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlinkApiProxyResponse flinkApiProxy(shared_ptr<FlinkApiProxyRequest> request);
  GenerateResourcePlanWithFlinkConfAsyncResponse generateResourcePlanWithFlinkConfAsyncWithOptions(shared_ptr<string> namespace_,
                                                                                                   shared_ptr<string> deploymentId,
                                                                                                   shared_ptr<GenerateResourcePlanWithFlinkConfAsyncRequest> request,
                                                                                                   shared_ptr<GenerateResourcePlanWithFlinkConfAsyncHeaders> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateResourcePlanWithFlinkConfAsyncResponse generateResourcePlanWithFlinkConfAsync(shared_ptr<string> namespace_, shared_ptr<string> deploymentId, shared_ptr<GenerateResourcePlanWithFlinkConfAsyncRequest> request);
  GetDeploymentResponse getDeploymentWithOptions(shared_ptr<string> namespace_,
                                                 shared_ptr<string> deploymentId,
                                                 shared_ptr<GetDeploymentHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeploymentResponse getDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId);
  GetGenerateResourcePlanResultResponse getGenerateResourcePlanResultWithOptions(shared_ptr<string> namespace_,
                                                                                 shared_ptr<string> ticketId,
                                                                                 shared_ptr<GetGenerateResourcePlanResultHeaders> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGenerateResourcePlanResultResponse getGenerateResourcePlanResult(shared_ptr<string> namespace_, shared_ptr<string> ticketId);
  GetJobResponse getJobWithOptions(shared_ptr<string> namespace_,
                                   shared_ptr<string> jobId,
                                   shared_ptr<GetJobHeaders> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<string> namespace_, shared_ptr<string> jobId);
  GetSavepointResponse getSavepointWithOptions(shared_ptr<string> namespace_,
                                               shared_ptr<string> savepointId,
                                               shared_ptr<GetSavepointHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavepointResponse getSavepoint(shared_ptr<string> namespace_, shared_ptr<string> savepointId);
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
  ListEngineVersionMetadataResponse listEngineVersionMetadataWithOptions(shared_ptr<ListEngineVersionMetadataHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEngineVersionMetadataResponse listEngineVersionMetadata();
  ListJobsResponse listJobsWithOptions(shared_ptr<string> namespace_,
                                       shared_ptr<ListJobsRequest> request,
                                       shared_ptr<ListJobsHeaders> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<string> namespace_, shared_ptr<ListJobsRequest> request);
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

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ververica20220718

#endif
