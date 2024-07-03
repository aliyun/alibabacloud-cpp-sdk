// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FC20230330_H_
#define ALIBABACLOUD_FC20230330_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_FC20230330 {
class AccelerationInfo : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  AccelerationInfo() {}

  explicit AccelerationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~AccelerationInfo() = default;
};
class Alias : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  Alias() {}

  explicit Alias(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalVersionWeight) {
      res["additionalVersionWeight"] = boost::any(*additionalVersionWeight);
    }
    if (aliasName) {
      res["aliasName"] = boost::any(*aliasName);
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalVersionWeight") != m.end() && !m["additionalVersionWeight"].empty()) {
      map<string, double> map1 = boost::any_cast<map<string, double>>(m["additionalVersionWeight"]);
      map<string, double> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      additionalVersionWeight = make_shared<map<string, double>>(toMap1);
    }
    if (m.find("aliasName") != m.end() && !m["aliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["aliasName"]));
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~Alias() = default;
};
class Destination : public Darabonba::Model {
public:
  shared_ptr<string> destination{};

  Destination() {}

  explicit Destination(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destination) {
      res["destination"] = boost::any(*destination);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destination") != m.end() && !m["destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["destination"]));
    }
  }


  virtual ~Destination() = default;
};
class DestinationConfig : public Darabonba::Model {
public:
  shared_ptr<Destination> onFailure{};
  shared_ptr<Destination> onSuccess{};

  DestinationConfig() {}

  explicit DestinationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onFailure) {
      res["onFailure"] = onFailure ? boost::any(onFailure->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (onSuccess) {
      res["onSuccess"] = onSuccess ? boost::any(onSuccess->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("onFailure") != m.end() && !m["onFailure"].empty()) {
      if (typeid(map<string, boost::any>) == m["onFailure"].type()) {
        Destination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["onFailure"]));
        onFailure = make_shared<Destination>(model1);
      }
    }
    if (m.find("onSuccess") != m.end() && !m["onSuccess"].empty()) {
      if (typeid(map<string, boost::any>) == m["onSuccess"].type()) {
        Destination model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["onSuccess"]));
        onSuccess = make_shared<Destination>(model1);
      }
    }
  }


  virtual ~DestinationConfig() = default;
};
class AsyncConfig : public Darabonba::Model {
public:
  shared_ptr<bool> asyncTask{};
  shared_ptr<string> createdTime{};
  shared_ptr<DestinationConfig> destinationConfig{};
  shared_ptr<string> functionArn{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<long> maxAsyncEventAgeInSeconds{};
  shared_ptr<long> maxAsyncRetryAttempts{};

  AsyncConfig() {}

  explicit AsyncConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncTask) {
      res["asyncTask"] = boost::any(*asyncTask);
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (destinationConfig) {
      res["destinationConfig"] = destinationConfig ? boost::any(destinationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionArn) {
      res["functionArn"] = boost::any(*functionArn);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (maxAsyncEventAgeInSeconds) {
      res["maxAsyncEventAgeInSeconds"] = boost::any(*maxAsyncEventAgeInSeconds);
    }
    if (maxAsyncRetryAttempts) {
      res["maxAsyncRetryAttempts"] = boost::any(*maxAsyncRetryAttempts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asyncTask") != m.end() && !m["asyncTask"].empty()) {
      asyncTask = make_shared<bool>(boost::any_cast<bool>(m["asyncTask"]));
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("destinationConfig") != m.end() && !m["destinationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["destinationConfig"].type()) {
        DestinationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["destinationConfig"]));
        destinationConfig = make_shared<DestinationConfig>(model1);
      }
    }
    if (m.find("functionArn") != m.end() && !m["functionArn"].empty()) {
      functionArn = make_shared<string>(boost::any_cast<string>(m["functionArn"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("maxAsyncEventAgeInSeconds") != m.end() && !m["maxAsyncEventAgeInSeconds"].empty()) {
      maxAsyncEventAgeInSeconds = make_shared<long>(boost::any_cast<long>(m["maxAsyncEventAgeInSeconds"]));
    }
    if (m.find("maxAsyncRetryAttempts") != m.end() && !m["maxAsyncRetryAttempts"].empty()) {
      maxAsyncRetryAttempts = make_shared<long>(boost::any_cast<long>(m["maxAsyncRetryAttempts"]));
    }
  }


  virtual ~AsyncConfig() = default;
};
class AsyncTaskEvent : public Darabonba::Model {
public:
  shared_ptr<string> eventDetail{};
  shared_ptr<long> eventId{};
  shared_ptr<string> status{};
  shared_ptr<long> timestamp{};

  AsyncTaskEvent() {}

  explicit AsyncTaskEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDetail) {
      res["eventDetail"] = boost::any(*eventDetail);
    }
    if (eventId) {
      res["eventId"] = boost::any(*eventId);
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
    if (m.find("eventDetail") != m.end() && !m["eventDetail"].empty()) {
      eventDetail = make_shared<string>(boost::any_cast<string>(m["eventDetail"]));
    }
    if (m.find("eventId") != m.end() && !m["eventId"].empty()) {
      eventId = make_shared<long>(boost::any_cast<long>(m["eventId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["timestamp"]));
    }
  }


  virtual ~AsyncTaskEvent() = default;
};
class AsyncTask : public Darabonba::Model {
public:
  shared_ptr<long> alreadyRetriedTimes{};
  shared_ptr<string> destinationStatus{};
  shared_ptr<long> durationMs{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<AsyncTaskEvent>> events{};
  shared_ptr<string> functionArn{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> returnPayload{};
  shared_ptr<long> startedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskErrorMessage{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskPayload{};

  AsyncTask() {}

  explicit AsyncTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alreadyRetriedTimes) {
      res["alreadyRetriedTimes"] = boost::any(*alreadyRetriedTimes);
    }
    if (destinationStatus) {
      res["destinationStatus"] = boost::any(*destinationStatus);
    }
    if (durationMs) {
      res["durationMs"] = boost::any(*durationMs);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["events"] = boost::any(temp1);
    }
    if (functionArn) {
      res["functionArn"] = boost::any(*functionArn);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (returnPayload) {
      res["returnPayload"] = boost::any(*returnPayload);
    }
    if (startedTime) {
      res["startedTime"] = boost::any(*startedTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskErrorMessage) {
      res["taskErrorMessage"] = boost::any(*taskErrorMessage);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskPayload) {
      res["taskPayload"] = boost::any(*taskPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alreadyRetriedTimes") != m.end() && !m["alreadyRetriedTimes"].empty()) {
      alreadyRetriedTimes = make_shared<long>(boost::any_cast<long>(m["alreadyRetriedTimes"]));
    }
    if (m.find("destinationStatus") != m.end() && !m["destinationStatus"].empty()) {
      destinationStatus = make_shared<string>(boost::any_cast<string>(m["destinationStatus"]));
    }
    if (m.find("durationMs") != m.end() && !m["durationMs"].empty()) {
      durationMs = make_shared<long>(boost::any_cast<long>(m["durationMs"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("events") != m.end() && !m["events"].empty()) {
      if (typeid(vector<boost::any>) == m["events"].type()) {
        vector<AsyncTaskEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AsyncTaskEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<AsyncTaskEvent>>(expect1);
      }
    }
    if (m.find("functionArn") != m.end() && !m["functionArn"].empty()) {
      functionArn = make_shared<string>(boost::any_cast<string>(m["functionArn"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("returnPayload") != m.end() && !m["returnPayload"].empty()) {
      returnPayload = make_shared<string>(boost::any_cast<string>(m["returnPayload"]));
    }
    if (m.find("startedTime") != m.end() && !m["startedTime"].empty()) {
      startedTime = make_shared<long>(boost::any_cast<long>(m["startedTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskErrorMessage") != m.end() && !m["taskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["taskErrorMessage"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskPayload") != m.end() && !m["taskPayload"].empty()) {
      taskPayload = make_shared<string>(boost::any_cast<string>(m["taskPayload"]));
    }
  }


  virtual ~AsyncTask() = default;
};
class AuthConfig : public Darabonba::Model {
public:
  shared_ptr<string> authInfo{};
  shared_ptr<string> authType{};

  AuthConfig() {}

  explicit AuthConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authInfo) {
      res["authInfo"] = boost::any(*authInfo);
    }
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authInfo") != m.end() && !m["authInfo"].empty()) {
      authInfo = make_shared<string>(boost::any_cast<string>(m["authInfo"]));
    }
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
  }


  virtual ~AuthConfig() = default;
};
class BatchWindow : public Darabonba::Model {
public:
  shared_ptr<long> countBasedWindow{};
  shared_ptr<long> timeBasedWindow{};

  BatchWindow() {}

  explicit BatchWindow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countBasedWindow) {
      res["CountBasedWindow"] = boost::any(*countBasedWindow);
    }
    if (timeBasedWindow) {
      res["TimeBasedWindow"] = boost::any(*timeBasedWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountBasedWindow") != m.end() && !m["CountBasedWindow"].empty()) {
      countBasedWindow = make_shared<long>(boost::any_cast<long>(m["CountBasedWindow"]));
    }
    if (m.find("TimeBasedWindow") != m.end() && !m["TimeBasedWindow"].empty()) {
      timeBasedWindow = make_shared<long>(boost::any_cast<long>(m["TimeBasedWindow"]));
    }
  }


  virtual ~BatchWindow() = default;
};
class CDNTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> eventName{};
  shared_ptr<string> eventVersion{};
  shared_ptr<map<string, vector<string>>> filter{};
  shared_ptr<string> notes{};

  CDNTriggerConfig() {}

  explicit CDNTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventName) {
      res["eventName"] = boost::any(*eventName);
    }
    if (eventVersion) {
      res["eventVersion"] = boost::any(*eventVersion);
    }
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (notes) {
      res["notes"] = boost::any(*notes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eventName") != m.end() && !m["eventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["eventName"]));
    }
    if (m.find("eventVersion") != m.end() && !m["eventVersion"].empty()) {
      eventVersion = make_shared<string>(boost::any_cast<string>(m["eventVersion"]));
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["filter"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      filter = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("notes") != m.end() && !m["notes"].empty()) {
      notes = make_shared<string>(boost::any_cast<string>(m["notes"]));
    }
  }


  virtual ~CDNTriggerConfig() = default;
};
class CertConfig : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certificate{};
  shared_ptr<string> privateKey{};

  CertConfig() {}

  explicit CertConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["certName"] = boost::any(*certName);
    }
    if (certificate) {
      res["certificate"] = boost::any(*certificate);
    }
    if (privateKey) {
      res["privateKey"] = boost::any(*privateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("certName") != m.end() && !m["certName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["certName"]));
    }
    if (m.find("certificate") != m.end() && !m["certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["certificate"]));
    }
    if (m.find("privateKey") != m.end() && !m["privateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["privateKey"]));
    }
  }


  virtual ~CertConfig() = default;
};
class ConcurrencyConfig : public Darabonba::Model {
public:
  shared_ptr<string> functionArn{};
  shared_ptr<long> reservedConcurrency{};

  ConcurrencyConfig() {}

  explicit ConcurrencyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionArn) {
      res["functionArn"] = boost::any(*functionArn);
    }
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionArn") != m.end() && !m["functionArn"].empty()) {
      functionArn = make_shared<string>(boost::any_cast<string>(m["functionArn"]));
    }
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~ConcurrencyConfig() = default;
};
class CreateAliasInput : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> description{};
  shared_ptr<string> versionId{};

  CreateAliasInput() {}

  explicit CreateAliasInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalVersionWeight) {
      res["additionalVersionWeight"] = boost::any(*additionalVersionWeight);
    }
    if (aliasName) {
      res["aliasName"] = boost::any(*aliasName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalVersionWeight") != m.end() && !m["additionalVersionWeight"].empty()) {
      map<string, double> map1 = boost::any_cast<map<string, double>>(m["additionalVersionWeight"]);
      map<string, double> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      additionalVersionWeight = make_shared<map<string, double>>(toMap1);
    }
    if (m.find("aliasName") != m.end() && !m["aliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["aliasName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~CreateAliasInput() = default;
};
class EqualRule : public Darabonba::Model {
public:
  shared_ptr<string> match{};
  shared_ptr<string> replacement{};

  EqualRule() {}

  explicit EqualRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = boost::any(*match);
    }
    if (replacement) {
      res["replacement"] = boost::any(*replacement);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      match = make_shared<string>(boost::any_cast<string>(m["match"]));
    }
    if (m.find("replacement") != m.end() && !m["replacement"].empty()) {
      replacement = make_shared<string>(boost::any_cast<string>(m["replacement"]));
    }
  }


  virtual ~EqualRule() = default;
};
class RegexRule : public Darabonba::Model {
public:
  shared_ptr<string> match{};
  shared_ptr<string> replacement{};

  RegexRule() {}

  explicit RegexRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = boost::any(*match);
    }
    if (replacement) {
      res["replacement"] = boost::any(*replacement);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      match = make_shared<string>(boost::any_cast<string>(m["match"]));
    }
    if (m.find("replacement") != m.end() && !m["replacement"].empty()) {
      replacement = make_shared<string>(boost::any_cast<string>(m["replacement"]));
    }
  }


  virtual ~RegexRule() = default;
};
class WildcardRule : public Darabonba::Model {
public:
  shared_ptr<string> match{};
  shared_ptr<string> replacement{};

  WildcardRule() {}

  explicit WildcardRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = boost::any(*match);
    }
    if (replacement) {
      res["replacement"] = boost::any(*replacement);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      match = make_shared<string>(boost::any_cast<string>(m["match"]));
    }
    if (m.find("replacement") != m.end() && !m["replacement"].empty()) {
      replacement = make_shared<string>(boost::any_cast<string>(m["replacement"]));
    }
  }


  virtual ~WildcardRule() = default;
};
class RewriteConfig : public Darabonba::Model {
public:
  shared_ptr<vector<EqualRule>> equalRules{};
  shared_ptr<vector<RegexRule>> regexRules{};
  shared_ptr<vector<WildcardRule>> wildcardRules{};

  RewriteConfig() {}

  explicit RewriteConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (equalRules) {
      vector<boost::any> temp1;
      for(auto item1:*equalRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["equalRules"] = boost::any(temp1);
    }
    if (regexRules) {
      vector<boost::any> temp1;
      for(auto item1:*regexRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["regexRules"] = boost::any(temp1);
    }
    if (wildcardRules) {
      vector<boost::any> temp1;
      for(auto item1:*wildcardRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wildcardRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("equalRules") != m.end() && !m["equalRules"].empty()) {
      if (typeid(vector<boost::any>) == m["equalRules"].type()) {
        vector<EqualRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["equalRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EqualRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        equalRules = make_shared<vector<EqualRule>>(expect1);
      }
    }
    if (m.find("regexRules") != m.end() && !m["regexRules"].empty()) {
      if (typeid(vector<boost::any>) == m["regexRules"].type()) {
        vector<RegexRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["regexRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RegexRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regexRules = make_shared<vector<RegexRule>>(expect1);
      }
    }
    if (m.find("wildcardRules") != m.end() && !m["wildcardRules"].empty()) {
      if (typeid(vector<boost::any>) == m["wildcardRules"].type()) {
        vector<WildcardRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wildcardRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WildcardRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wildcardRules = make_shared<vector<WildcardRule>>(expect1);
      }
    }
  }


  virtual ~RewriteConfig() = default;
};
class PathConfig : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<vector<string>> methods{};
  shared_ptr<string> path{};
  shared_ptr<string> qualifier{};
  shared_ptr<RewriteConfig> rewriteConfig{};

  PathConfig() {}

  explicit PathConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (rewriteConfig) {
      res["rewriteConfig"] = rewriteConfig ? boost::any(rewriteConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("rewriteConfig") != m.end() && !m["rewriteConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["rewriteConfig"].type()) {
        RewriteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rewriteConfig"]));
        rewriteConfig = make_shared<RewriteConfig>(model1);
      }
    }
  }


  virtual ~PathConfig() = default;
};
class RouteConfig : public Darabonba::Model {
public:
  shared_ptr<vector<PathConfig>> routes{};

  RouteConfig() {}

  explicit RouteConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routes) {
      vector<boost::any> temp1;
      for(auto item1:*routes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["routes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routes") != m.end() && !m["routes"].empty()) {
      if (typeid(vector<boost::any>) == m["routes"].type()) {
        vector<PathConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["routes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PathConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routes = make_shared<vector<PathConfig>>(expect1);
      }
    }
  }


  virtual ~RouteConfig() = default;
};
class TLSConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cipherSuites{};
  shared_ptr<string> maxVersion{};
  shared_ptr<string> minVersion{};

  TLSConfig() {}

  explicit TLSConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cipherSuites) {
      res["cipherSuites"] = boost::any(*cipherSuites);
    }
    if (maxVersion) {
      res["maxVersion"] = boost::any(*maxVersion);
    }
    if (minVersion) {
      res["minVersion"] = boost::any(*minVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cipherSuites") != m.end() && !m["cipherSuites"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["cipherSuites"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["cipherSuites"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cipherSuites = make_shared<vector<string>>(toVec1);
    }
    if (m.find("maxVersion") != m.end() && !m["maxVersion"].empty()) {
      maxVersion = make_shared<string>(boost::any_cast<string>(m["maxVersion"]));
    }
    if (m.find("minVersion") != m.end() && !m["minVersion"].empty()) {
      minVersion = make_shared<string>(boost::any_cast<string>(m["minVersion"]));
    }
  }


  virtual ~TLSConfig() = default;
};
class WAFConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableWAF{};

  WAFConfig() {}

  explicit WAFConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableWAF) {
      res["enableWAF"] = boost::any(*enableWAF);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableWAF") != m.end() && !m["enableWAF"].empty()) {
      enableWAF = make_shared<bool>(boost::any_cast<bool>(m["enableWAF"]));
    }
  }


  virtual ~WAFConfig() = default;
};
class CreateCustomDomainInput : public Darabonba::Model {
public:
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> domainName{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};
  shared_ptr<WAFConfig> wafConfig{};

  CreateCustomDomainInput() {}

  explicit CreateCustomDomainInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (certConfig) {
      res["certConfig"] = certConfig ? boost::any(certConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (routeConfig) {
      res["routeConfig"] = routeConfig ? boost::any(routeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tlsConfig) {
      res["tlsConfig"] = tlsConfig ? boost::any(tlsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wafConfig) {
      res["wafConfig"] = wafConfig ? boost::any(wafConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("certConfig") != m.end() && !m["certConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["certConfig"].type()) {
        CertConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["certConfig"]));
        certConfig = make_shared<CertConfig>(model1);
      }
    }
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("routeConfig") != m.end() && !m["routeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["routeConfig"].type()) {
        RouteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["routeConfig"]));
        routeConfig = make_shared<RouteConfig>(model1);
      }
    }
    if (m.find("tlsConfig") != m.end() && !m["tlsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsConfig"].type()) {
        TLSConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsConfig"]));
        tlsConfig = make_shared<TLSConfig>(model1);
      }
    }
    if (m.find("wafConfig") != m.end() && !m["wafConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["wafConfig"].type()) {
        WAFConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["wafConfig"]));
        wafConfig = make_shared<WAFConfig>(model1);
      }
    }
  }


  virtual ~CreateCustomDomainInput() = default;
};
class InputCodeLocation : public Darabonba::Model {
public:
  shared_ptr<string> checksum{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> zipFile{};

  InputCodeLocation() {}

  explicit InputCodeLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checksum) {
      res["checksum"] = boost::any(*checksum);
    }
    if (ossBucketName) {
      res["ossBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["ossObjectName"] = boost::any(*ossObjectName);
    }
    if (zipFile) {
      res["zipFile"] = boost::any(*zipFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checksum") != m.end() && !m["checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["checksum"]));
    }
    if (m.find("ossBucketName") != m.end() && !m["ossBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["ossBucketName"]));
    }
    if (m.find("ossObjectName") != m.end() && !m["ossObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["ossObjectName"]));
    }
    if (m.find("zipFile") != m.end() && !m["zipFile"].empty()) {
      zipFile = make_shared<string>(boost::any_cast<string>(m["zipFile"]));
    }
  }


  virtual ~InputCodeLocation() = default;
};
class CustomHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<long> failureThreshold{};
  shared_ptr<string> httpGetUrl{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<long> timeoutSeconds{};

  CustomHealthCheckConfig() {}

  explicit CustomHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failureThreshold) {
      res["failureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGetUrl) {
      res["httpGetUrl"] = boost::any(*httpGetUrl);
    }
    if (initialDelaySeconds) {
      res["initialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["periodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["successThreshold"] = boost::any(*successThreshold);
    }
    if (timeoutSeconds) {
      res["timeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failureThreshold") != m.end() && !m["failureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["failureThreshold"]));
    }
    if (m.find("httpGetUrl") != m.end() && !m["httpGetUrl"].empty()) {
      httpGetUrl = make_shared<string>(boost::any_cast<string>(m["httpGetUrl"]));
    }
    if (m.find("initialDelaySeconds") != m.end() && !m["initialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["initialDelaySeconds"]));
    }
    if (m.find("periodSeconds") != m.end() && !m["periodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["periodSeconds"]));
    }
    if (m.find("successThreshold") != m.end() && !m["successThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["successThreshold"]));
    }
    if (m.find("timeoutSeconds") != m.end() && !m["timeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["timeoutSeconds"]));
    }
  }


  virtual ~CustomHealthCheckConfig() = default;
};
class CustomContainerConfig : public Darabonba::Model {
public:
  shared_ptr<AccelerationInfo> accelerationInfo{};
  shared_ptr<string> accelerationType{};
  shared_ptr<string> acrInstanceId{};
  shared_ptr<vector<string>> command{};
  shared_ptr<vector<string>> entrypoint{};
  shared_ptr<CustomHealthCheckConfig> healthCheckConfig{};
  shared_ptr<string> image{};
  shared_ptr<long> port{};
  shared_ptr<string> resolvedImageUri{};

  CustomContainerConfig() {}

  explicit CustomContainerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerationInfo) {
      res["accelerationInfo"] = accelerationInfo ? boost::any(accelerationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (accelerationType) {
      res["accelerationType"] = boost::any(*accelerationType);
    }
    if (acrInstanceId) {
      res["acrInstanceId"] = boost::any(*acrInstanceId);
    }
    if (command) {
      res["command"] = boost::any(*command);
    }
    if (entrypoint) {
      res["entrypoint"] = boost::any(*entrypoint);
    }
    if (healthCheckConfig) {
      res["healthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (image) {
      res["image"] = boost::any(*image);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (resolvedImageUri) {
      res["resolvedImageUri"] = boost::any(*resolvedImageUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accelerationInfo") != m.end() && !m["accelerationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["accelerationInfo"].type()) {
        AccelerationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["accelerationInfo"]));
        accelerationInfo = make_shared<AccelerationInfo>(model1);
      }
    }
    if (m.find("accelerationType") != m.end() && !m["accelerationType"].empty()) {
      accelerationType = make_shared<string>(boost::any_cast<string>(m["accelerationType"]));
    }
    if (m.find("acrInstanceId") != m.end() && !m["acrInstanceId"].empty()) {
      acrInstanceId = make_shared<string>(boost::any_cast<string>(m["acrInstanceId"]));
    }
    if (m.find("command") != m.end() && !m["command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("entrypoint") != m.end() && !m["entrypoint"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["entrypoint"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["entrypoint"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entrypoint = make_shared<vector<string>>(toVec1);
    }
    if (m.find("healthCheckConfig") != m.end() && !m["healthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["healthCheckConfig"].type()) {
        CustomHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["healthCheckConfig"]));
        healthCheckConfig = make_shared<CustomHealthCheckConfig>(model1);
      }
    }
    if (m.find("image") != m.end() && !m["image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["image"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("resolvedImageUri") != m.end() && !m["resolvedImageUri"].empty()) {
      resolvedImageUri = make_shared<string>(boost::any_cast<string>(m["resolvedImageUri"]));
    }
  }


  virtual ~CustomContainerConfig() = default;
};
class DNSOption : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DNSOption() {}

  explicit DNSOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DNSOption() = default;
};
class CustomDNS : public Darabonba::Model {
public:
  shared_ptr<vector<DNSOption>> dnsOptions{};
  shared_ptr<vector<string>> nameServers{};
  shared_ptr<vector<string>> searches{};

  CustomDNS() {}

  explicit CustomDNS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsOptions) {
      vector<boost::any> temp1;
      for(auto item1:*dnsOptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dnsOptions"] = boost::any(temp1);
    }
    if (nameServers) {
      res["nameServers"] = boost::any(*nameServers);
    }
    if (searches) {
      res["searches"] = boost::any(*searches);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dnsOptions") != m.end() && !m["dnsOptions"].empty()) {
      if (typeid(vector<boost::any>) == m["dnsOptions"].type()) {
        vector<DNSOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dnsOptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DNSOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dnsOptions = make_shared<vector<DNSOption>>(expect1);
      }
    }
    if (m.find("nameServers") != m.end() && !m["nameServers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["nameServers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["nameServers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nameServers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("searches") != m.end() && !m["searches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["searches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["searches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      searches = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CustomDNS() = default;
};
class CustomRuntimeConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> args{};
  shared_ptr<vector<string>> command{};
  shared_ptr<CustomHealthCheckConfig> healthCheckConfig{};
  shared_ptr<long> port{};

  CustomRuntimeConfig() {}

  explicit CustomRuntimeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["args"] = boost::any(*args);
    }
    if (command) {
      res["command"] = boost::any(*command);
    }
    if (healthCheckConfig) {
      res["healthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("args") != m.end() && !m["args"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["args"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["args"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      args = make_shared<vector<string>>(toVec1);
    }
    if (m.find("command") != m.end() && !m["command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("healthCheckConfig") != m.end() && !m["healthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["healthCheckConfig"].type()) {
        CustomHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["healthCheckConfig"]));
        healthCheckConfig = make_shared<CustomHealthCheckConfig>(model1);
      }
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
  }


  virtual ~CustomRuntimeConfig() = default;
};
class GPUConfig : public Darabonba::Model {
public:
  shared_ptr<long> gpuMemorySize{};
  shared_ptr<string> gpuType{};

  GPUConfig() {}

  explicit GPUConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuMemorySize) {
      res["gpuMemorySize"] = boost::any(*gpuMemorySize);
    }
    if (gpuType) {
      res["gpuType"] = boost::any(*gpuType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gpuMemorySize") != m.end() && !m["gpuMemorySize"].empty()) {
      gpuMemorySize = make_shared<long>(boost::any_cast<long>(m["gpuMemorySize"]));
    }
    if (m.find("gpuType") != m.end() && !m["gpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["gpuType"]));
    }
  }


  virtual ~GPUConfig() = default;
};
class LifecycleHook : public Darabonba::Model {
public:
  shared_ptr<string> handler{};
  shared_ptr<long> timeout{};

  LifecycleHook() {}

  explicit LifecycleHook(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~LifecycleHook() = default;
};
class InstanceLifecycleConfig : public Darabonba::Model {
public:
  shared_ptr<LifecycleHook> initializer{};
  shared_ptr<LifecycleHook> preStop{};

  InstanceLifecycleConfig() {}

  explicit InstanceLifecycleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initializer) {
      res["initializer"] = initializer ? boost::any(initializer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preStop) {
      res["preStop"] = preStop ? boost::any(preStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      if (typeid(map<string, boost::any>) == m["initializer"].type()) {
        LifecycleHook model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["initializer"]));
        initializer = make_shared<LifecycleHook>(model1);
      }
    }
    if (m.find("preStop") != m.end() && !m["preStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["preStop"].type()) {
        LifecycleHook model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["preStop"]));
        preStop = make_shared<LifecycleHook>(model1);
      }
    }
  }


  virtual ~InstanceLifecycleConfig() = default;
};
class LogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableInstanceMetrics{};
  shared_ptr<bool> enableRequestMetrics{};
  shared_ptr<string> logBeginRule{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  LogConfig() {}

  explicit LogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInstanceMetrics) {
      res["enableInstanceMetrics"] = boost::any(*enableInstanceMetrics);
    }
    if (enableRequestMetrics) {
      res["enableRequestMetrics"] = boost::any(*enableRequestMetrics);
    }
    if (logBeginRule) {
      res["logBeginRule"] = boost::any(*logBeginRule);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableInstanceMetrics") != m.end() && !m["enableInstanceMetrics"].empty()) {
      enableInstanceMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableInstanceMetrics"]));
    }
    if (m.find("enableRequestMetrics") != m.end() && !m["enableRequestMetrics"].empty()) {
      enableRequestMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableRequestMetrics"]));
    }
    if (m.find("logBeginRule") != m.end() && !m["logBeginRule"].empty()) {
      logBeginRule = make_shared<string>(boost::any_cast<string>(m["logBeginRule"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~LogConfig() = default;
};
class NASMountConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableTLS{};
  shared_ptr<string> mountDir{};
  shared_ptr<string> serverAddr{};

  NASMountConfig() {}

  explicit NASMountConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableTLS) {
      res["enableTLS"] = boost::any(*enableTLS);
    }
    if (mountDir) {
      res["mountDir"] = boost::any(*mountDir);
    }
    if (serverAddr) {
      res["serverAddr"] = boost::any(*serverAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableTLS") != m.end() && !m["enableTLS"].empty()) {
      enableTLS = make_shared<bool>(boost::any_cast<bool>(m["enableTLS"]));
    }
    if (m.find("mountDir") != m.end() && !m["mountDir"].empty()) {
      mountDir = make_shared<string>(boost::any_cast<string>(m["mountDir"]));
    }
    if (m.find("serverAddr") != m.end() && !m["serverAddr"].empty()) {
      serverAddr = make_shared<string>(boost::any_cast<string>(m["serverAddr"]));
    }
  }


  virtual ~NASMountConfig() = default;
};
class NASConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<NASMountConfig>> mountPoints{};
  shared_ptr<long> userId{};

  NASConfig() {}

  explicit NASConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (mountPoints) {
      vector<boost::any> temp1;
      for(auto item1:*mountPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mountPoints"] = boost::any(temp1);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<NASMountConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mountPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NASMountConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountPoints = make_shared<vector<NASMountConfig>>(expect1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~NASConfig() = default;
};
class OSSMountPoint : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPath{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> mountDir{};
  shared_ptr<bool> readOnly{};

  OSSMountPoint() {}

  explicit OSSMountPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (bucketPath) {
      res["bucketPath"] = boost::any(*bucketPath);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (mountDir) {
      res["mountDir"] = boost::any(*mountDir);
    }
    if (readOnly) {
      res["readOnly"] = boost::any(*readOnly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("bucketPath") != m.end() && !m["bucketPath"].empty()) {
      bucketPath = make_shared<string>(boost::any_cast<string>(m["bucketPath"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("mountDir") != m.end() && !m["mountDir"].empty()) {
      mountDir = make_shared<string>(boost::any_cast<string>(m["mountDir"]));
    }
    if (m.find("readOnly") != m.end() && !m["readOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["readOnly"]));
    }
  }


  virtual ~OSSMountPoint() = default;
};
class OSSMountConfig : public Darabonba::Model {
public:
  shared_ptr<vector<OSSMountPoint>> mountPoints{};

  OSSMountConfig() {}

  explicit OSSMountConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPoints) {
      vector<boost::any> temp1;
      for(auto item1:*mountPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mountPoints"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<OSSMountPoint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mountPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OSSMountPoint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountPoints = make_shared<vector<OSSMountPoint>>(expect1);
      }
    }
  }


  virtual ~OSSMountConfig() = default;
};
class TracingConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> params{};
  shared_ptr<string> type{};

  TracingConfig() {}

  explicit TracingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["params"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~TracingConfig() = default;
};
class VPCConfig : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  VPCConfig() {}

  explicit VPCConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchIds) {
      res["vSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("vSwitchIds") != m.end() && !m["vSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~VPCConfig() = default;
};
class CreateFunctionInput : public Darabonba::Model {
public:
  shared_ptr<InputCodeLocation> code{};
  shared_ptr<double> cpu{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> functionName{};
  shared_ptr<GPUConfig> gpuConfig{};
  shared_ptr<string> handler{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<OSSMountConfig> ossMountConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  CreateFunctionInput() {}

  explicit CreateFunctionInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (customContainerConfig) {
      res["customContainerConfig"] = customContainerConfig ? boost::any(customContainerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customDNS) {
      res["customDNS"] = customDNS ? boost::any(customDNS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customRuntimeConfig) {
      res["customRuntimeConfig"] = customRuntimeConfig ? boost::any(customRuntimeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossMountConfig) {
      res["ossMountConfig"] = ossMountConfig ? boost::any(ossMountConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (tracingConfig) {
      res["tracingConfig"] = tracingConfig ? boost::any(tracingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      if (typeid(map<string, boost::any>) == m["code"].type()) {
        InputCodeLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["code"]));
        code = make_shared<InputCodeLocation>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("customContainerConfig") != m.end() && !m["customContainerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customContainerConfig"].type()) {
        CustomContainerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customContainerConfig"]));
        customContainerConfig = make_shared<CustomContainerConfig>(model1);
      }
    }
    if (m.find("customDNS") != m.end() && !m["customDNS"].empty()) {
      if (typeid(map<string, boost::any>) == m["customDNS"].type()) {
        CustomDNS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customDNS"]));
        customDNS = make_shared<CustomDNS>(model1);
      }
    }
    if (m.find("customRuntimeConfig") != m.end() && !m["customRuntimeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customRuntimeConfig"].type()) {
        CustomRuntimeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customRuntimeConfig"]));
        customRuntimeConfig = make_shared<CustomRuntimeConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        GPUConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<GPUConfig>(model1);
      }
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("instanceLifecycleConfig") != m.end() && !m["instanceLifecycleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["instanceLifecycleConfig"].type()) {
        InstanceLifecycleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["instanceLifecycleConfig"]));
        instanceLifecycleConfig = make_shared<InstanceLifecycleConfig>(model1);
      }
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["layers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      layers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("ossMountConfig") != m.end() && !m["ossMountConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ossMountConfig"].type()) {
        OSSMountConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ossMountConfig"]));
        ossMountConfig = make_shared<OSSMountConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("tracingConfig") != m.end() && !m["tracingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tracingConfig"].type()) {
        TracingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tracingConfig"]));
        tracingConfig = make_shared<TracingConfig>(model1);
      }
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        VPCConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<VPCConfig>(model1);
      }
    }
  }


  virtual ~CreateFunctionInput() = default;
};
class CreateLayerVersionInput : public Darabonba::Model {
public:
  shared_ptr<InputCodeLocation> code{};
  shared_ptr<vector<string>> compatibleRuntime{};
  shared_ptr<string> description{};
  shared_ptr<string> license{};

  CreateLayerVersionInput() {}

  explicit CreateLayerVersionInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (compatibleRuntime) {
      res["compatibleRuntime"] = boost::any(*compatibleRuntime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (license) {
      res["license"] = boost::any(*license);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      if (typeid(map<string, boost::any>) == m["code"].type()) {
        InputCodeLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["code"]));
        code = make_shared<InputCodeLocation>(model1);
      }
    }
    if (m.find("compatibleRuntime") != m.end() && !m["compatibleRuntime"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["compatibleRuntime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["compatibleRuntime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      compatibleRuntime = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("license") != m.end() && !m["license"].empty()) {
      license = make_shared<string>(boost::any_cast<string>(m["license"]));
    }
  }


  virtual ~CreateLayerVersionInput() = default;
};
class CreateTriggerInput : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceArn{};
  shared_ptr<string> triggerConfig{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerType{};

  CreateTriggerInput() {}

  explicit CreateTriggerInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (invocationRole) {
      res["invocationRole"] = boost::any(*invocationRole);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (sourceArn) {
      res["sourceArn"] = boost::any(*sourceArn);
    }
    if (triggerConfig) {
      res["triggerConfig"] = boost::any(*triggerConfig);
    }
    if (triggerName) {
      res["triggerName"] = boost::any(*triggerName);
    }
    if (triggerType) {
      res["triggerType"] = boost::any(*triggerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("invocationRole") != m.end() && !m["invocationRole"].empty()) {
      invocationRole = make_shared<string>(boost::any_cast<string>(m["invocationRole"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("sourceArn") != m.end() && !m["sourceArn"].empty()) {
      sourceArn = make_shared<string>(boost::any_cast<string>(m["sourceArn"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      triggerConfig = make_shared<string>(boost::any_cast<string>(m["triggerConfig"]));
    }
    if (m.find("triggerName") != m.end() && !m["triggerName"].empty()) {
      triggerName = make_shared<string>(boost::any_cast<string>(m["triggerName"]));
    }
    if (m.find("triggerType") != m.end() && !m["triggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["triggerType"]));
    }
  }


  virtual ~CreateTriggerInput() = default;
};
class CreateVpcBindingInput : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  CreateVpcBindingInput() {}

  explicit CreateVpcBindingInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~CreateVpcBindingInput() = default;
};
class CustomDomain : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> apiVersion{};
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<string> subdomainCount{};
  shared_ptr<TLSConfig> tlsConfig{};
  shared_ptr<WAFConfig> wafConfig{};

  CustomDomain() {}

  explicit CustomDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (apiVersion) {
      res["apiVersion"] = boost::any(*apiVersion);
    }
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (certConfig) {
      res["certConfig"] = certConfig ? boost::any(certConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (routeConfig) {
      res["routeConfig"] = routeConfig ? boost::any(routeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subdomainCount) {
      res["subdomainCount"] = boost::any(*subdomainCount);
    }
    if (tlsConfig) {
      res["tlsConfig"] = tlsConfig ? boost::any(tlsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wafConfig) {
      res["wafConfig"] = wafConfig ? boost::any(wafConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("apiVersion") != m.end() && !m["apiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["apiVersion"]));
    }
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("certConfig") != m.end() && !m["certConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["certConfig"].type()) {
        CertConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["certConfig"]));
        certConfig = make_shared<CertConfig>(model1);
      }
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("routeConfig") != m.end() && !m["routeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["routeConfig"].type()) {
        RouteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["routeConfig"]));
        routeConfig = make_shared<RouteConfig>(model1);
      }
    }
    if (m.find("subdomainCount") != m.end() && !m["subdomainCount"].empty()) {
      subdomainCount = make_shared<string>(boost::any_cast<string>(m["subdomainCount"]));
    }
    if (m.find("tlsConfig") != m.end() && !m["tlsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsConfig"].type()) {
        TLSConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsConfig"]));
        tlsConfig = make_shared<TLSConfig>(model1);
      }
    }
    if (m.find("wafConfig") != m.end() && !m["wafConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["wafConfig"].type()) {
        WAFConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["wafConfig"]));
        wafConfig = make_shared<WAFConfig>(model1);
      }
    }
  }


  virtual ~CustomDomain() = default;
};
class DeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  DeadLetterQueue() {}

  explicit DeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~DeadLetterQueue() = default;
};
class DeliveryOption : public Darabonba::Model {
public:
  shared_ptr<long> concurrency{};
  shared_ptr<string> eventSchema{};

  DeliveryOption() {}

  explicit DeliveryOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrency) {
      res["concurrency"] = boost::any(*concurrency);
    }
    if (eventSchema) {
      res["eventSchema"] = boost::any(*eventSchema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("concurrency") != m.end() && !m["concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["concurrency"]));
    }
    if (m.find("eventSchema") != m.end() && !m["eventSchema"].empty()) {
      eventSchema = make_shared<string>(boost::any_cast<string>(m["eventSchema"]));
    }
  }


  virtual ~DeliveryOption() = default;
};
class Error : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  Error() {}

  explicit Error(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~Error() = default;
};
class EventSinkConfig : public Darabonba::Model {
public:
  shared_ptr<DeliveryOption> deliveryOption{};

  EventSinkConfig() {}

  explicit EventSinkConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryOption) {
      res["deliveryOption"] = deliveryOption ? boost::any(deliveryOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliveryOption") != m.end() && !m["deliveryOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["deliveryOption"].type()) {
        DeliveryOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deliveryOption"]));
        deliveryOption = make_shared<DeliveryOption>(model1);
      }
    }
  }


  virtual ~EventSinkConfig() = default;
};
class SourceDTSParameters : public Darabonba::Model {
public:
  shared_ptr<string> brokerUrl{};
  shared_ptr<long> initCheckPoint{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sid{};
  shared_ptr<string> taskId{};
  shared_ptr<string> topic{};
  shared_ptr<string> username{};

  SourceDTSParameters() {}

  explicit SourceDTSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerUrl) {
      res["BrokerUrl"] = boost::any(*brokerUrl);
    }
    if (initCheckPoint) {
      res["InitCheckPoint"] = boost::any(*initCheckPoint);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerUrl") != m.end() && !m["BrokerUrl"].empty()) {
      brokerUrl = make_shared<string>(boost::any_cast<string>(m["BrokerUrl"]));
    }
    if (m.find("InitCheckPoint") != m.end() && !m["InitCheckPoint"].empty()) {
      initCheckPoint = make_shared<long>(boost::any_cast<long>(m["InitCheckPoint"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~SourceDTSParameters() = default;
};
class SourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  SourceKafkaParameters() {}

  explicit SourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~SourceKafkaParameters() = default;
};
class SourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  SourceMNSParameters() {}

  explicit SourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SourceMNSParameters() = default;
};
class SourceMQTTParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  SourceMQTTParameters() {}

  explicit SourceMQTTParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (topic) {
      res["Topic"] = boost::any(*topic);
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
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~SourceMQTTParameters() = default;
};
class SourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  SourceRabbitMQParameters() {}

  explicit SourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~SourceRabbitMQParameters() = default;
};
class SourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> filterType{};
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceEndpoint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceNetwork{};
  shared_ptr<string> instancePassword{};
  shared_ptr<string> instanceSecurityGroupId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceUsername{};
  shared_ptr<string> instanceVSwitchIds{};
  shared_ptr<string> instanceVpcId{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tag{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> topic{};

  SourceRocketMQParameters() {}

  explicit SourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (filterType) {
      res["FilterType"] = boost::any(*filterType);
    }
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceEndpoint) {
      res["InstanceEndpoint"] = boost::any(*instanceEndpoint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNetwork) {
      res["InstanceNetwork"] = boost::any(*instanceNetwork);
    }
    if (instancePassword) {
      res["InstancePassword"] = boost::any(*instancePassword);
    }
    if (instanceSecurityGroupId) {
      res["InstanceSecurityGroupId"] = boost::any(*instanceSecurityGroupId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceUsername) {
      res["InstanceUsername"] = boost::any(*instanceUsername);
    }
    if (instanceVSwitchIds) {
      res["InstanceVSwitchIds"] = boost::any(*instanceVSwitchIds);
    }
    if (instanceVpcId) {
      res["InstanceVpcId"] = boost::any(*instanceVpcId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("FilterType") != m.end() && !m["FilterType"].empty()) {
      filterType = make_shared<string>(boost::any_cast<string>(m["FilterType"]));
    }
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceEndpoint") != m.end() && !m["InstanceEndpoint"].empty()) {
      instanceEndpoint = make_shared<string>(boost::any_cast<string>(m["InstanceEndpoint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNetwork") != m.end() && !m["InstanceNetwork"].empty()) {
      instanceNetwork = make_shared<string>(boost::any_cast<string>(m["InstanceNetwork"]));
    }
    if (m.find("InstancePassword") != m.end() && !m["InstancePassword"].empty()) {
      instancePassword = make_shared<string>(boost::any_cast<string>(m["InstancePassword"]));
    }
    if (m.find("InstanceSecurityGroupId") != m.end() && !m["InstanceSecurityGroupId"].empty()) {
      instanceSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceSecurityGroupId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceUsername") != m.end() && !m["InstanceUsername"].empty()) {
      instanceUsername = make_shared<string>(boost::any_cast<string>(m["InstanceUsername"]));
    }
    if (m.find("InstanceVSwitchIds") != m.end() && !m["InstanceVSwitchIds"].empty()) {
      instanceVSwitchIds = make_shared<string>(boost::any_cast<string>(m["InstanceVSwitchIds"]));
    }
    if (m.find("InstanceVpcId") != m.end() && !m["InstanceVpcId"].empty()) {
      instanceVpcId = make_shared<string>(boost::any_cast<string>(m["InstanceVpcId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~SourceRocketMQParameters() = default;
};
class EventSourceParameters : public Darabonba::Model {
public:
  shared_ptr<SourceDTSParameters> sourceDTSParameters{};
  shared_ptr<SourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<SourceMNSParameters> sourceMNSParameters{};
  shared_ptr<SourceMQTTParameters> sourceMQTTParameters{};
  shared_ptr<SourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<SourceRocketMQParameters> sourceRocketMQParameters{};

  EventSourceParameters() {}

  explicit EventSourceParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDTSParameters) {
      res["sourceDTSParameters"] = sourceDTSParameters ? boost::any(sourceDTSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["sourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["sourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMQTTParameters) {
      res["sourceMQTTParameters"] = sourceMQTTParameters ? boost::any(sourceMQTTParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["sourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["sourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sourceDTSParameters") != m.end() && !m["sourceDTSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceDTSParameters"].type()) {
        SourceDTSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceDTSParameters"]));
        sourceDTSParameters = make_shared<SourceDTSParameters>(model1);
      }
    }
    if (m.find("sourceKafkaParameters") != m.end() && !m["sourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceKafkaParameters"].type()) {
        SourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<SourceKafkaParameters>(model1);
      }
    }
    if (m.find("sourceMNSParameters") != m.end() && !m["sourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceMNSParameters"].type()) {
        SourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceMNSParameters"]));
        sourceMNSParameters = make_shared<SourceMNSParameters>(model1);
      }
    }
    if (m.find("sourceMQTTParameters") != m.end() && !m["sourceMQTTParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceMQTTParameters"].type()) {
        SourceMQTTParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceMQTTParameters"]));
        sourceMQTTParameters = make_shared<SourceMQTTParameters>(model1);
      }
    }
    if (m.find("sourceRabbitMQParameters") != m.end() && !m["sourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceRabbitMQParameters"].type()) {
        SourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<SourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("sourceRocketMQParameters") != m.end() && !m["sourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceRocketMQParameters"].type()) {
        SourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<SourceRocketMQParameters>(model1);
      }
    }
  }


  virtual ~EventSourceParameters() = default;
};
class EventSourceConfig : public Darabonba::Model {
public:
  shared_ptr<EventSourceParameters> eventSourceParameters{};
  shared_ptr<string> eventSourceType{};

  EventSourceConfig() {}

  explicit EventSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceParameters) {
      res["eventSourceParameters"] = eventSourceParameters ? boost::any(eventSourceParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eventSourceType) {
      res["eventSourceType"] = boost::any(*eventSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eventSourceParameters") != m.end() && !m["eventSourceParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["eventSourceParameters"].type()) {
        EventSourceParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["eventSourceParameters"]));
        eventSourceParameters = make_shared<EventSourceParameters>(model1);
      }
    }
    if (m.find("eventSourceType") != m.end() && !m["eventSourceType"].empty()) {
      eventSourceType = make_shared<string>(boost::any_cast<string>(m["eventSourceType"]));
    }
  }


  virtual ~EventSourceConfig() = default;
};
class RetryStrategy : public Darabonba::Model {
public:
  shared_ptr<string> pushRetryStrategy{};

  RetryStrategy() {}

  explicit RetryStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
  }


  virtual ~RetryStrategy() = default;
};
class RunOptions : public Darabonba::Model {
public:
  shared_ptr<BatchWindow> batchWindow{};
  shared_ptr<DeadLetterQueue> deadLetterQueue{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<string> mode{};
  shared_ptr<RetryStrategy> retryStrategy{};

  RunOptions() {}

  explicit RunOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchWindow) {
      res["batchWindow"] = batchWindow ? boost::any(batchWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deadLetterQueue) {
      res["deadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorsTolerance) {
      res["errorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (retryStrategy) {
      res["retryStrategy"] = retryStrategy ? boost::any(retryStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("batchWindow") != m.end() && !m["batchWindow"].empty()) {
      if (typeid(map<string, boost::any>) == m["batchWindow"].type()) {
        BatchWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["batchWindow"]));
        batchWindow = make_shared<BatchWindow>(model1);
      }
    }
    if (m.find("deadLetterQueue") != m.end() && !m["deadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["deadLetterQueue"].type()) {
        DeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deadLetterQueue"]));
        deadLetterQueue = make_shared<DeadLetterQueue>(model1);
      }
    }
    if (m.find("errorsTolerance") != m.end() && !m["errorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["errorsTolerance"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("retryStrategy") != m.end() && !m["retryStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["retryStrategy"].type()) {
        RetryStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["retryStrategy"]));
        retryStrategy = make_shared<RetryStrategy>(model1);
      }
    }
  }


  virtual ~RunOptions() = default;
};
class EventBridgeTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<bool> asyncInvocationType{};
  shared_ptr<string> eventRuleFilterPattern{};
  shared_ptr<EventSinkConfig> eventSinkConfig{};
  shared_ptr<EventSourceConfig> eventSourceConfig{};
  shared_ptr<RunOptions> runOptions{};
  shared_ptr<bool> triggerEnable{};

  EventBridgeTriggerConfig() {}

  explicit EventBridgeTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncInvocationType) {
      res["asyncInvocationType"] = boost::any(*asyncInvocationType);
    }
    if (eventRuleFilterPattern) {
      res["eventRuleFilterPattern"] = boost::any(*eventRuleFilterPattern);
    }
    if (eventSinkConfig) {
      res["eventSinkConfig"] = eventSinkConfig ? boost::any(eventSinkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eventSourceConfig) {
      res["eventSourceConfig"] = eventSourceConfig ? boost::any(eventSourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runOptions) {
      res["runOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (triggerEnable) {
      res["triggerEnable"] = boost::any(*triggerEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asyncInvocationType") != m.end() && !m["asyncInvocationType"].empty()) {
      asyncInvocationType = make_shared<bool>(boost::any_cast<bool>(m["asyncInvocationType"]));
    }
    if (m.find("eventRuleFilterPattern") != m.end() && !m["eventRuleFilterPattern"].empty()) {
      eventRuleFilterPattern = make_shared<string>(boost::any_cast<string>(m["eventRuleFilterPattern"]));
    }
    if (m.find("eventSinkConfig") != m.end() && !m["eventSinkConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["eventSinkConfig"].type()) {
        EventSinkConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["eventSinkConfig"]));
        eventSinkConfig = make_shared<EventSinkConfig>(model1);
      }
    }
    if (m.find("eventSourceConfig") != m.end() && !m["eventSourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["eventSourceConfig"].type()) {
        EventSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["eventSourceConfig"]));
        eventSourceConfig = make_shared<EventSourceConfig>(model1);
      }
    }
    if (m.find("runOptions") != m.end() && !m["runOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["runOptions"].type()) {
        RunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["runOptions"]));
        runOptions = make_shared<RunOptions>(model1);
      }
    }
    if (m.find("triggerEnable") != m.end() && !m["triggerEnable"].empty()) {
      triggerEnable = make_shared<bool>(boost::any_cast<bool>(m["triggerEnable"]));
    }
  }


  virtual ~EventBridgeTriggerConfig() = default;
};
class Key : public Darabonba::Model {
public:
  shared_ptr<string> prefix{};
  shared_ptr<string> suffix{};

  Key() {}

  explicit Key(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (suffix) {
      res["suffix"] = boost::any(*suffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("suffix") != m.end() && !m["suffix"].empty()) {
      suffix = make_shared<string>(boost::any_cast<string>(m["suffix"]));
    }
  }


  virtual ~Key() = default;
};
class Filter : public Darabonba::Model {
public:
  shared_ptr<Key> key{};

  Filter() {}

  explicit Filter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = key ? boost::any(key->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      if (typeid(map<string, boost::any>) == m["key"].type()) {
        Key model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["key"]));
        key = make_shared<Key>(model1);
      }
    }
  }


  virtual ~Filter() = default;
};
class FunctionLayer : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<long> size{};

  FunctionLayer() {}

  explicit FunctionLayer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["arn"] = boost::any(*arn);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~FunctionLayer() = default;
};
class Function : public Darabonba::Model {
public:
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codeSize{};
  shared_ptr<double> cpu{};
  shared_ptr<string> createdTime{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> functionArn{};
  shared_ptr<string> functionId{};
  shared_ptr<string> functionName{};
  shared_ptr<GPUConfig> gpuConfig{};
  shared_ptr<string> handler{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> lastUpdateStatus{};
  shared_ptr<string> lastUpdateStatusReason{};
  shared_ptr<string> lastUpdateStatusReasonCode{};
  shared_ptr<vector<FunctionLayer>> layers{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<OSSMountConfig> ossMountConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> runtime{};
  shared_ptr<string> state{};
  shared_ptr<string> stateReason{};
  shared_ptr<string> stateReasonCode{};
  shared_ptr<long> timeout{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  Function() {}

  explicit Function(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeChecksum) {
      res["codeChecksum"] = boost::any(*codeChecksum);
    }
    if (codeSize) {
      res["codeSize"] = boost::any(*codeSize);
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (customContainerConfig) {
      res["customContainerConfig"] = customContainerConfig ? boost::any(customContainerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customDNS) {
      res["customDNS"] = customDNS ? boost::any(customDNS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customRuntimeConfig) {
      res["customRuntimeConfig"] = customRuntimeConfig ? boost::any(customRuntimeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (functionArn) {
      res["functionArn"] = boost::any(*functionArn);
    }
    if (functionId) {
      res["functionId"] = boost::any(*functionId);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (lastUpdateStatus) {
      res["lastUpdateStatus"] = boost::any(*lastUpdateStatus);
    }
    if (lastUpdateStatusReason) {
      res["lastUpdateStatusReason"] = boost::any(*lastUpdateStatusReason);
    }
    if (lastUpdateStatusReasonCode) {
      res["lastUpdateStatusReasonCode"] = boost::any(*lastUpdateStatusReasonCode);
    }
    if (layers) {
      vector<boost::any> temp1;
      for(auto item1:*layers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["layers"] = boost::any(temp1);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossMountConfig) {
      res["ossMountConfig"] = ossMountConfig ? boost::any(ossMountConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (stateReason) {
      res["stateReason"] = boost::any(*stateReason);
    }
    if (stateReasonCode) {
      res["stateReasonCode"] = boost::any(*stateReasonCode);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (tracingConfig) {
      res["tracingConfig"] = tracingConfig ? boost::any(tracingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeChecksum") != m.end() && !m["codeChecksum"].empty()) {
      codeChecksum = make_shared<string>(boost::any_cast<string>(m["codeChecksum"]));
    }
    if (m.find("codeSize") != m.end() && !m["codeSize"].empty()) {
      codeSize = make_shared<long>(boost::any_cast<long>(m["codeSize"]));
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("customContainerConfig") != m.end() && !m["customContainerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customContainerConfig"].type()) {
        CustomContainerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customContainerConfig"]));
        customContainerConfig = make_shared<CustomContainerConfig>(model1);
      }
    }
    if (m.find("customDNS") != m.end() && !m["customDNS"].empty()) {
      if (typeid(map<string, boost::any>) == m["customDNS"].type()) {
        CustomDNS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customDNS"]));
        customDNS = make_shared<CustomDNS>(model1);
      }
    }
    if (m.find("customRuntimeConfig") != m.end() && !m["customRuntimeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customRuntimeConfig"].type()) {
        CustomRuntimeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customRuntimeConfig"]));
        customRuntimeConfig = make_shared<CustomRuntimeConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("functionArn") != m.end() && !m["functionArn"].empty()) {
      functionArn = make_shared<string>(boost::any_cast<string>(m["functionArn"]));
    }
    if (m.find("functionId") != m.end() && !m["functionId"].empty()) {
      functionId = make_shared<string>(boost::any_cast<string>(m["functionId"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        GPUConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<GPUConfig>(model1);
      }
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("instanceLifecycleConfig") != m.end() && !m["instanceLifecycleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["instanceLifecycleConfig"].type()) {
        InstanceLifecycleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["instanceLifecycleConfig"]));
        instanceLifecycleConfig = make_shared<InstanceLifecycleConfig>(model1);
      }
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("lastUpdateStatus") != m.end() && !m["lastUpdateStatus"].empty()) {
      lastUpdateStatus = make_shared<string>(boost::any_cast<string>(m["lastUpdateStatus"]));
    }
    if (m.find("lastUpdateStatusReason") != m.end() && !m["lastUpdateStatusReason"].empty()) {
      lastUpdateStatusReason = make_shared<string>(boost::any_cast<string>(m["lastUpdateStatusReason"]));
    }
    if (m.find("lastUpdateStatusReasonCode") != m.end() && !m["lastUpdateStatusReasonCode"].empty()) {
      lastUpdateStatusReasonCode = make_shared<string>(boost::any_cast<string>(m["lastUpdateStatusReasonCode"]));
    }
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<FunctionLayer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["layers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FunctionLayer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layers = make_shared<vector<FunctionLayer>>(expect1);
      }
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("ossMountConfig") != m.end() && !m["ossMountConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ossMountConfig"].type()) {
        OSSMountConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ossMountConfig"]));
        ossMountConfig = make_shared<OSSMountConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("stateReason") != m.end() && !m["stateReason"].empty()) {
      stateReason = make_shared<string>(boost::any_cast<string>(m["stateReason"]));
    }
    if (m.find("stateReasonCode") != m.end() && !m["stateReasonCode"].empty()) {
      stateReasonCode = make_shared<string>(boost::any_cast<string>(m["stateReasonCode"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("tracingConfig") != m.end() && !m["tracingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tracingConfig"].type()) {
        TracingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tracingConfig"]));
        tracingConfig = make_shared<TracingConfig>(model1);
      }
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        VPCConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<VPCConfig>(model1);
      }
    }
  }


  virtual ~Function() = default;
};
class GetResourceTagsOutput : public Darabonba::Model {
public:
  shared_ptr<string> resouceType{};
  shared_ptr<string> resourceArn{};
  shared_ptr<map<string, string>> tags{};

  GetResourceTagsOutput() {}

  explicit GetResourceTagsOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resouceType) {
      res["resouceType"] = boost::any(*resouceType);
    }
    if (resourceArn) {
      res["resourceArn"] = boost::any(*resourceArn);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resouceType") != m.end() && !m["resouceType"].empty()) {
      resouceType = make_shared<string>(boost::any_cast<string>(m["resouceType"]));
    }
    if (m.find("resourceArn") != m.end() && !m["resourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["resourceArn"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["tags"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetResourceTagsOutput() = default;
};
class HTTPTrigger : public Darabonba::Model {
public:
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  HTTPTrigger() {}

  explicit HTTPTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~HTTPTrigger() = default;
};
class HTTPTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authConfig{};
  shared_ptr<string> authType{};
  shared_ptr<bool> disableURLInternet{};
  shared_ptr<vector<string>> methods{};

  HTTPTriggerConfig() {}

  explicit HTTPTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["authConfig"] = boost::any(*authConfig);
    }
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (disableURLInternet) {
      res["disableURLInternet"] = boost::any(*disableURLInternet);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      authConfig = make_shared<string>(boost::any_cast<string>(m["authConfig"]));
    }
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("disableURLInternet") != m.end() && !m["disableURLInternet"].empty()) {
      disableURLInternet = make_shared<bool>(boost::any_cast<bool>(m["disableURLInternet"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~HTTPTriggerConfig() = default;
};
class InstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> versionId{};

  InstanceInfo() {}

  explicit InstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~InstanceInfo() = default;
};
class JobConfig : public Darabonba::Model {
public:
  shared_ptr<long> maxRetryTime{};
  shared_ptr<long> triggerInterval{};

  JobConfig() {}

  explicit JobConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRetryTime) {
      res["maxRetryTime"] = boost::any(*maxRetryTime);
    }
    if (triggerInterval) {
      res["triggerInterval"] = boost::any(*triggerInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxRetryTime") != m.end() && !m["maxRetryTime"].empty()) {
      maxRetryTime = make_shared<long>(boost::any_cast<long>(m["maxRetryTime"]));
    }
    if (m.find("triggerInterval") != m.end() && !m["triggerInterval"].empty()) {
      triggerInterval = make_shared<long>(boost::any_cast<long>(m["triggerInterval"]));
    }
  }


  virtual ~JobConfig() = default;
};
class OutputCodeLocation : public Darabonba::Model {
public:
  shared_ptr<string> location{};
  shared_ptr<string> repositoryType{};

  OutputCodeLocation() {}

  explicit OutputCodeLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (repositoryType) {
      res["repositoryType"] = boost::any(*repositoryType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("repositoryType") != m.end() && !m["repositoryType"].empty()) {
      repositoryType = make_shared<string>(boost::any_cast<string>(m["repositoryType"]));
    }
  }


  virtual ~OutputCodeLocation() = default;
};
class Layer : public Darabonba::Model {
public:
  shared_ptr<string> acl{};
  shared_ptr<OutputCodeLocation> code{};
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codeSize{};
  shared_ptr<vector<string>> compatibleRuntime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> layerName{};
  shared_ptr<string> layerVersionArn{};
  shared_ptr<string> license{};
  shared_ptr<long> version{};

  Layer() {}

  explicit Layer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["acl"] = boost::any(*acl);
    }
    if (code) {
      res["code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (codeChecksum) {
      res["codeChecksum"] = boost::any(*codeChecksum);
    }
    if (codeSize) {
      res["codeSize"] = boost::any(*codeSize);
    }
    if (compatibleRuntime) {
      res["compatibleRuntime"] = boost::any(*compatibleRuntime);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (layerName) {
      res["layerName"] = boost::any(*layerName);
    }
    if (layerVersionArn) {
      res["layerVersionArn"] = boost::any(*layerVersionArn);
    }
    if (license) {
      res["license"] = boost::any(*license);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      acl = make_shared<string>(boost::any_cast<string>(m["acl"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      if (typeid(map<string, boost::any>) == m["code"].type()) {
        OutputCodeLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["code"]));
        code = make_shared<OutputCodeLocation>(model1);
      }
    }
    if (m.find("codeChecksum") != m.end() && !m["codeChecksum"].empty()) {
      codeChecksum = make_shared<string>(boost::any_cast<string>(m["codeChecksum"]));
    }
    if (m.find("codeSize") != m.end() && !m["codeSize"].empty()) {
      codeSize = make_shared<long>(boost::any_cast<long>(m["codeSize"]));
    }
    if (m.find("compatibleRuntime") != m.end() && !m["compatibleRuntime"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["compatibleRuntime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["compatibleRuntime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      compatibleRuntime = make_shared<vector<string>>(toVec1);
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("layerName") != m.end() && !m["layerName"].empty()) {
      layerName = make_shared<string>(boost::any_cast<string>(m["layerName"]));
    }
    if (m.find("layerVersionArn") != m.end() && !m["layerVersionArn"].empty()) {
      layerVersionArn = make_shared<string>(boost::any_cast<string>(m["layerVersionArn"]));
    }
    if (m.find("license") != m.end() && !m["license"].empty()) {
      license = make_shared<string>(boost::any_cast<string>(m["license"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~Layer() = default;
};
class ListAliasesOutput : public Darabonba::Model {
public:
  shared_ptr<vector<Alias>> aliases{};
  shared_ptr<string> nextToken{};

  ListAliasesOutput() {}

  explicit ListAliasesOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliases) {
      vector<boost::any> temp1;
      for(auto item1:*aliases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["aliases"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliases") != m.end() && !m["aliases"].empty()) {
      if (typeid(vector<boost::any>) == m["aliases"].type()) {
        vector<Alias> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["aliases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Alias model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliases = make_shared<vector<Alias>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListAliasesOutput() = default;
};
class ListAsyncInvokeConfigOutput : public Darabonba::Model {
public:
  shared_ptr<vector<AsyncConfig>> configs{};
  shared_ptr<string> nextToken{};

  ListAsyncInvokeConfigOutput() {}

  explicit ListAsyncInvokeConfigOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configs"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<AsyncConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AsyncConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<AsyncConfig>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListAsyncInvokeConfigOutput() = default;
};
class ListAsyncTaskOutput : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<AsyncTask>> tasks{};

  ListAsyncTaskOutput() {}

  explicit ListAsyncTaskOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("tasks") != m.end() && !m["tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["tasks"].type()) {
        vector<AsyncTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AsyncTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<AsyncTask>>(expect1);
      }
    }
  }


  virtual ~ListAsyncTaskOutput() = default;
};
class ListConcurrencyConfigsOutput : public Darabonba::Model {
public:
  shared_ptr<vector<ConcurrencyConfig>> configs{};
  shared_ptr<string> nextToken{};

  ListConcurrencyConfigsOutput() {}

  explicit ListConcurrencyConfigsOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configs"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<ConcurrencyConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConcurrencyConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<ConcurrencyConfig>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListConcurrencyConfigsOutput() = default;
};
class ListCustomDomainOutput : public Darabonba::Model {
public:
  shared_ptr<vector<CustomDomain>> customDomains{};
  shared_ptr<string> nextToken{};

  ListCustomDomainOutput() {}

  explicit ListCustomDomainOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomains) {
      vector<boost::any> temp1;
      for(auto item1:*customDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customDomains"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customDomains") != m.end() && !m["customDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["customDomains"].type()) {
        vector<CustomDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CustomDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customDomains = make_shared<vector<CustomDomain>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListCustomDomainOutput() = default;
};
class ListFunctionsOutput : public Darabonba::Model {
public:
  shared_ptr<vector<Function>> functions{};
  shared_ptr<string> nextToken{};

  ListFunctionsOutput() {}

  explicit ListFunctionsOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functions) {
      vector<boost::any> temp1;
      for(auto item1:*functions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functions"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functions") != m.end() && !m["functions"].empty()) {
      if (typeid(vector<boost::any>) == m["functions"].type()) {
        vector<Function> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Function model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functions = make_shared<vector<Function>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListFunctionsOutput() = default;
};
class ListInstancesOutput : public Darabonba::Model {
public:
  shared_ptr<vector<InstanceInfo>> instances{};

  ListInstancesOutput() {}

  explicit ListInstancesOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<InstanceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<InstanceInfo>>(expect1);
      }
    }
  }


  virtual ~ListInstancesOutput() = default;
};
class ListLayerVersionOutput : public Darabonba::Model {
public:
  shared_ptr<vector<Layer>> layers{};
  shared_ptr<long> nextVersion{};

  ListLayerVersionOutput() {}

  explicit ListLayerVersionOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layers) {
      vector<boost::any> temp1;
      for(auto item1:*layers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["layers"] = boost::any(temp1);
    }
    if (nextVersion) {
      res["nextVersion"] = boost::any(*nextVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<Layer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["layers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Layer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layers = make_shared<vector<Layer>>(expect1);
      }
    }
    if (m.find("nextVersion") != m.end() && !m["nextVersion"].empty()) {
      nextVersion = make_shared<long>(boost::any_cast<long>(m["nextVersion"]));
    }
  }


  virtual ~ListLayerVersionOutput() = default;
};
class ListLayersOutput : public Darabonba::Model {
public:
  shared_ptr<vector<Layer>> layers{};
  shared_ptr<string> nextToken{};

  ListLayersOutput() {}

  explicit ListLayersOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layers) {
      vector<boost::any> temp1;
      for(auto item1:*layers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["layers"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<Layer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["layers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Layer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layers = make_shared<vector<Layer>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListLayersOutput() = default;
};
class ScheduledAction : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};

  ScheduledAction() {}

  explicit ScheduledAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleExpression) {
      res["scheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleExpression") != m.end() && !m["scheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["scheduleExpression"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
  }


  virtual ~ScheduledAction() = default;
};
class TargetTrackingPolicy : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxCapacity{};
  shared_ptr<double> metricTarget{};
  shared_ptr<string> metricType{};
  shared_ptr<long> minCapacity{};
  shared_ptr<string> name{};
  shared_ptr<string> startTime{};

  TargetTrackingPolicy() {}

  explicit TargetTrackingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (maxCapacity) {
      res["maxCapacity"] = boost::any(*maxCapacity);
    }
    if (metricTarget) {
      res["metricTarget"] = boost::any(*metricTarget);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    if (minCapacity) {
      res["minCapacity"] = boost::any(*minCapacity);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("maxCapacity") != m.end() && !m["maxCapacity"].empty()) {
      maxCapacity = make_shared<long>(boost::any_cast<long>(m["maxCapacity"]));
    }
    if (m.find("metricTarget") != m.end() && !m["metricTarget"].empty()) {
      metricTarget = make_shared<double>(boost::any_cast<double>(m["metricTarget"]));
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
    if (m.find("minCapacity") != m.end() && !m["minCapacity"].empty()) {
      minCapacity = make_shared<long>(boost::any_cast<long>(m["minCapacity"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~TargetTrackingPolicy() = default;
};
class ProvisionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateCPU{};
  shared_ptr<long> current{};
  shared_ptr<string> currentError{};
  shared_ptr<string> functionArn{};
  shared_ptr<vector<ScheduledAction>> scheduledActions{};
  shared_ptr<long> target{};
  shared_ptr<vector<TargetTrackingPolicy>> targetTrackingPolicies{};

  ProvisionConfig() {}

  explicit ProvisionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateCPU) {
      res["alwaysAllocateCPU"] = boost::any(*alwaysAllocateCPU);
    }
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (currentError) {
      res["currentError"] = boost::any(*currentError);
    }
    if (functionArn) {
      res["functionArn"] = boost::any(*functionArn);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (targetTrackingPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*targetTrackingPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["targetTrackingPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateCPU") != m.end() && !m["alwaysAllocateCPU"].empty()) {
      alwaysAllocateCPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateCPU"]));
    }
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("currentError") != m.end() && !m["currentError"].empty()) {
      currentError = make_shared<string>(boost::any_cast<string>(m["currentError"]));
    }
    if (m.find("functionArn") != m.end() && !m["functionArn"].empty()) {
      functionArn = make_shared<string>(boost::any_cast<string>(m["functionArn"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<ScheduledAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScheduledAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<ScheduledAction>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("targetTrackingPolicies") != m.end() && !m["targetTrackingPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["targetTrackingPolicies"].type()) {
        vector<TargetTrackingPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["targetTrackingPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetTrackingPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetTrackingPolicies = make_shared<vector<TargetTrackingPolicy>>(expect1);
      }
    }
  }


  virtual ~ProvisionConfig() = default;
};
class ListProvisionConfigsOutput : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ProvisionConfig>> provisionConfigs{};

  ListProvisionConfigsOutput() {}

  explicit ListProvisionConfigsOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (provisionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*provisionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["provisionConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("provisionConfigs") != m.end() && !m["provisionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["provisionConfigs"].type()) {
        vector<ProvisionConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["provisionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProvisionConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        provisionConfigs = make_shared<vector<ProvisionConfig>>(expect1);
      }
    }
  }


  virtual ~ListProvisionConfigsOutput() = default;
};
class TagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  TagResource() {}

  explicit TagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResource() = default;
};
class ListTagResourcesOutput : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<TagResource>> tagResources{};

  ListTagResourcesOutput() {}

  explicit ListTagResourcesOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<TagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<TagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesOutput() = default;
};
class Resource : public Darabonba::Model {
public:
  shared_ptr<string> resouceType{};
  shared_ptr<string> resourceArn{};
  shared_ptr<map<string, string>> tags{};

  Resource() {}

  explicit Resource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resouceType) {
      res["resouceType"] = boost::any(*resouceType);
    }
    if (resourceArn) {
      res["resourceArn"] = boost::any(*resourceArn);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resouceType") != m.end() && !m["resouceType"].empty()) {
      resouceType = make_shared<string>(boost::any_cast<string>(m["resouceType"]));
    }
    if (m.find("resourceArn") != m.end() && !m["resourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["resourceArn"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["tags"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~Resource() = default;
};
class ListTaggedResourcesOutput : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<Resource>> resources{};

  ListTaggedResourcesOutput() {}

  explicit ListTaggedResourcesOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
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
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      if (typeid(vector<boost::any>) == m["resources"].type()) {
        vector<Resource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Resource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<Resource>>(expect1);
      }
    }
  }


  virtual ~ListTaggedResourcesOutput() = default;
};
class Trigger : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<HTTPTrigger> httpTrigger{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceArn{};
  shared_ptr<string> status{};
  shared_ptr<string> targetArn{};
  shared_ptr<string> triggerConfig{};
  shared_ptr<string> triggerId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerType{};

  Trigger() {}

  explicit Trigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (httpTrigger) {
      res["httpTrigger"] = httpTrigger ? boost::any(httpTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invocationRole) {
      res["invocationRole"] = boost::any(*invocationRole);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (sourceArn) {
      res["sourceArn"] = boost::any(*sourceArn);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (targetArn) {
      res["targetArn"] = boost::any(*targetArn);
    }
    if (triggerConfig) {
      res["triggerConfig"] = boost::any(*triggerConfig);
    }
    if (triggerId) {
      res["triggerId"] = boost::any(*triggerId);
    }
    if (triggerName) {
      res["triggerName"] = boost::any(*triggerName);
    }
    if (triggerType) {
      res["triggerType"] = boost::any(*triggerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("httpTrigger") != m.end() && !m["httpTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["httpTrigger"].type()) {
        HTTPTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["httpTrigger"]));
        httpTrigger = make_shared<HTTPTrigger>(model1);
      }
    }
    if (m.find("invocationRole") != m.end() && !m["invocationRole"].empty()) {
      invocationRole = make_shared<string>(boost::any_cast<string>(m["invocationRole"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("sourceArn") != m.end() && !m["sourceArn"].empty()) {
      sourceArn = make_shared<string>(boost::any_cast<string>(m["sourceArn"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("targetArn") != m.end() && !m["targetArn"].empty()) {
      targetArn = make_shared<string>(boost::any_cast<string>(m["targetArn"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      triggerConfig = make_shared<string>(boost::any_cast<string>(m["triggerConfig"]));
    }
    if (m.find("triggerId") != m.end() && !m["triggerId"].empty()) {
      triggerId = make_shared<string>(boost::any_cast<string>(m["triggerId"]));
    }
    if (m.find("triggerName") != m.end() && !m["triggerName"].empty()) {
      triggerName = make_shared<string>(boost::any_cast<string>(m["triggerName"]));
    }
    if (m.find("triggerType") != m.end() && !m["triggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["triggerType"]));
    }
  }


  virtual ~Trigger() = default;
};
class ListTriggersOutput : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<Trigger>> triggers{};

  ListTriggersOutput() {}

  explicit ListTriggersOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (triggers) {
      vector<boost::any> temp1;
      for(auto item1:*triggers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["triggers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("triggers") != m.end() && !m["triggers"].empty()) {
      if (typeid(vector<boost::any>) == m["triggers"].type()) {
        vector<Trigger> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["triggers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Trigger model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        triggers = make_shared<vector<Trigger>>(expect1);
      }
    }
  }


  virtual ~ListTriggersOutput() = default;
};
class Version : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  Version() {}

  explicit Version(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~Version() = default;
};
class ListVersionsOutput : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<Version>> versions{};

  ListVersionsOutput() {}

  explicit ListVersionsOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
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
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<Version> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Version model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<Version>>(expect1);
      }
    }
  }


  virtual ~ListVersionsOutput() = default;
};
class ListVpcBindingsOutput : public Darabonba::Model {
public:
  shared_ptr<vector<string>> vpcIds{};

  ListVpcBindingsOutput() {}

  explicit ListVpcBindingsOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcIds) {
      res["vpcIds"] = boost::any(*vpcIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vpcIds") != m.end() && !m["vpcIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vpcIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vpcIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListVpcBindingsOutput() = default;
};
class MNSTopicTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> filterTag{};
  shared_ptr<string> notifyContentFormat{};
  shared_ptr<string> notifyStrategy{};

  MNSTopicTriggerConfig() {}

  explicit MNSTopicTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterTag) {
      res["filterTag"] = boost::any(*filterTag);
    }
    if (notifyContentFormat) {
      res["notifyContentFormat"] = boost::any(*notifyContentFormat);
    }
    if (notifyStrategy) {
      res["notifyStrategy"] = boost::any(*notifyStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterTag") != m.end() && !m["filterTag"].empty()) {
      filterTag = make_shared<string>(boost::any_cast<string>(m["filterTag"]));
    }
    if (m.find("notifyContentFormat") != m.end() && !m["notifyContentFormat"].empty()) {
      notifyContentFormat = make_shared<string>(boost::any_cast<string>(m["notifyContentFormat"]));
    }
    if (m.find("notifyStrategy") != m.end() && !m["notifyStrategy"].empty()) {
      notifyStrategy = make_shared<string>(boost::any_cast<string>(m["notifyStrategy"]));
    }
  }


  virtual ~MNSTopicTriggerConfig() = default;
};
class OSSTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> events{};
  shared_ptr<Filter> filter{};

  OSSTriggerConfig() {}

  explicit OSSTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      res["events"] = boost::any(*events);
    }
    if (filter) {
      res["filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("events") != m.end() && !m["events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["filter"].type()) {
        Filter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filter"]));
        filter = make_shared<Filter>(model1);
      }
    }
  }


  virtual ~OSSTriggerConfig() = default;
};
class OutputFuncCode : public Darabonba::Model {
public:
  shared_ptr<string> checksum{};
  shared_ptr<string> url{};

  OutputFuncCode() {}

  explicit OutputFuncCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checksum) {
      res["checksum"] = boost::any(*checksum);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checksum") != m.end() && !m["checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["checksum"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~OutputFuncCode() = default;
};
class PublishVersionInput : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  PublishVersionInput() {}

  explicit PublishVersionInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~PublishVersionInput() = default;
};
class PutAsyncInvokeConfigInput : public Darabonba::Model {
public:
  shared_ptr<bool> asyncTask{};
  shared_ptr<DestinationConfig> destinationConfig{};
  shared_ptr<long> maxAsyncEventAgeInSeconds{};
  shared_ptr<long> maxAsyncRetryAttempts{};

  PutAsyncInvokeConfigInput() {}

  explicit PutAsyncInvokeConfigInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncTask) {
      res["asyncTask"] = boost::any(*asyncTask);
    }
    if (destinationConfig) {
      res["destinationConfig"] = destinationConfig ? boost::any(destinationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxAsyncEventAgeInSeconds) {
      res["maxAsyncEventAgeInSeconds"] = boost::any(*maxAsyncEventAgeInSeconds);
    }
    if (maxAsyncRetryAttempts) {
      res["maxAsyncRetryAttempts"] = boost::any(*maxAsyncRetryAttempts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asyncTask") != m.end() && !m["asyncTask"].empty()) {
      asyncTask = make_shared<bool>(boost::any_cast<bool>(m["asyncTask"]));
    }
    if (m.find("destinationConfig") != m.end() && !m["destinationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["destinationConfig"].type()) {
        DestinationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["destinationConfig"]));
        destinationConfig = make_shared<DestinationConfig>(model1);
      }
    }
    if (m.find("maxAsyncEventAgeInSeconds") != m.end() && !m["maxAsyncEventAgeInSeconds"].empty()) {
      maxAsyncEventAgeInSeconds = make_shared<long>(boost::any_cast<long>(m["maxAsyncEventAgeInSeconds"]));
    }
    if (m.find("maxAsyncRetryAttempts") != m.end() && !m["maxAsyncRetryAttempts"].empty()) {
      maxAsyncRetryAttempts = make_shared<long>(boost::any_cast<long>(m["maxAsyncRetryAttempts"]));
    }
  }


  virtual ~PutAsyncInvokeConfigInput() = default;
};
class PutConcurrencyInput : public Darabonba::Model {
public:
  shared_ptr<long> reservedConcurrency{};

  PutConcurrencyInput() {}

  explicit PutConcurrencyInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~PutConcurrencyInput() = default;
};
class PutProvisionConfigInput : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateCPU{};
  shared_ptr<vector<ScheduledAction>> scheduledActions{};
  shared_ptr<long> target{};
  shared_ptr<vector<TargetTrackingPolicy>> targetTrackingPolicies{};

  PutProvisionConfigInput() {}

  explicit PutProvisionConfigInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateCPU) {
      res["alwaysAllocateCPU"] = boost::any(*alwaysAllocateCPU);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (targetTrackingPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*targetTrackingPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["targetTrackingPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateCPU") != m.end() && !m["alwaysAllocateCPU"].empty()) {
      alwaysAllocateCPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateCPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<ScheduledAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScheduledAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<ScheduledAction>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("targetTrackingPolicies") != m.end() && !m["targetTrackingPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["targetTrackingPolicies"].type()) {
        vector<TargetTrackingPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["targetTrackingPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetTrackingPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetTrackingPolicies = make_shared<vector<TargetTrackingPolicy>>(expect1);
      }
    }
  }


  virtual ~PutProvisionConfigInput() = default;
};
class SLSTriggerLogConfig : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  SLSTriggerLogConfig() {}

  explicit SLSTriggerLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~SLSTriggerLogConfig() = default;
};
class SourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<long> startTime{};

  SourceConfig() {}

  explicit SourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~SourceConfig() = default;
};
class SLSTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<map<string, string>> functionParameter{};
  shared_ptr<JobConfig> jobConfig{};
  shared_ptr<SLSTriggerLogConfig> logConfig{};
  shared_ptr<SourceConfig> sourceConfig{};

  SLSTriggerConfig() {}

  explicit SLSTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (functionParameter) {
      res["functionParameter"] = boost::any(*functionParameter);
    }
    if (jobConfig) {
      res["jobConfig"] = jobConfig ? boost::any(jobConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceConfig) {
      res["sourceConfig"] = sourceConfig ? boost::any(sourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("functionParameter") != m.end() && !m["functionParameter"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["functionParameter"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      functionParameter = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("jobConfig") != m.end() && !m["jobConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobConfig"].type()) {
        JobConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobConfig"]));
        jobConfig = make_shared<JobConfig>(model1);
      }
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        SLSTriggerLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<SLSTriggerLogConfig>(model1);
      }
    }
    if (m.find("sourceConfig") != m.end() && !m["sourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceConfig"].type()) {
        SourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceConfig"]));
        sourceConfig = make_shared<SourceConfig>(model1);
      }
    }
  }


  virtual ~SLSTriggerConfig() = default;
};
class Tag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Tag() {}

  explicit Tag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Tag() = default;
};
class TagResourceInput : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};
  shared_ptr<map<string, string>> tags{};

  TagResourceInput() {}

  explicit TagResourceInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceArn) {
      res["resourceArn"] = boost::any(*resourceArn);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceArn") != m.end() && !m["resourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["resourceArn"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["tags"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~TagResourceInput() = default;
};
class TagResourcesInput : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<Tag>> tag{};

  TagResourcesInput() {}

  explicit TagResourcesInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesInput() = default;
};
class TimerTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};
  shared_ptr<bool> enable{};
  shared_ptr<string> payload{};

  TimerTriggerConfig() {}

  explicit TimerTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["cronExpression"] = boost::any(*cronExpression);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (payload) {
      res["payload"] = boost::any(*payload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cronExpression") != m.end() && !m["cronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["cronExpression"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["payload"]));
    }
  }


  virtual ~TimerTriggerConfig() = default;
};
class UpdateAliasInput : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> description{};
  shared_ptr<string> versionId{};

  UpdateAliasInput() {}

  explicit UpdateAliasInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalVersionWeight) {
      res["additionalVersionWeight"] = boost::any(*additionalVersionWeight);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalVersionWeight") != m.end() && !m["additionalVersionWeight"].empty()) {
      map<string, double> map1 = boost::any_cast<map<string, double>>(m["additionalVersionWeight"]);
      map<string, double> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      additionalVersionWeight = make_shared<map<string, double>>(toMap1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~UpdateAliasInput() = default;
};
class UpdateCustomDomainInput : public Darabonba::Model {
public:
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};
  shared_ptr<WAFConfig> wafConfig{};

  UpdateCustomDomainInput() {}

  explicit UpdateCustomDomainInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (certConfig) {
      res["certConfig"] = certConfig ? boost::any(certConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (routeConfig) {
      res["routeConfig"] = routeConfig ? boost::any(routeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tlsConfig) {
      res["tlsConfig"] = tlsConfig ? boost::any(tlsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wafConfig) {
      res["wafConfig"] = wafConfig ? boost::any(wafConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("certConfig") != m.end() && !m["certConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["certConfig"].type()) {
        CertConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["certConfig"]));
        certConfig = make_shared<CertConfig>(model1);
      }
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("routeConfig") != m.end() && !m["routeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["routeConfig"].type()) {
        RouteConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["routeConfig"]));
        routeConfig = make_shared<RouteConfig>(model1);
      }
    }
    if (m.find("tlsConfig") != m.end() && !m["tlsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsConfig"].type()) {
        TLSConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsConfig"]));
        tlsConfig = make_shared<TLSConfig>(model1);
      }
    }
    if (m.find("wafConfig") != m.end() && !m["wafConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["wafConfig"].type()) {
        WAFConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["wafConfig"]));
        wafConfig = make_shared<WAFConfig>(model1);
      }
    }
  }


  virtual ~UpdateCustomDomainInput() = default;
};
class UpdateFunctionInput : public Darabonba::Model {
public:
  shared_ptr<InputCodeLocation> code{};
  shared_ptr<double> cpu{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<GPUConfig> gpuConfig{};
  shared_ptr<string> handler{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<OSSMountConfig> ossMountConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  UpdateFunctionInput() {}

  explicit UpdateFunctionInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (customContainerConfig) {
      res["customContainerConfig"] = customContainerConfig ? boost::any(customContainerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customDNS) {
      res["customDNS"] = customDNS ? boost::any(customDNS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customRuntimeConfig) {
      res["customRuntimeConfig"] = customRuntimeConfig ? boost::any(customRuntimeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossMountConfig) {
      res["ossMountConfig"] = ossMountConfig ? boost::any(ossMountConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (tracingConfig) {
      res["tracingConfig"] = tracingConfig ? boost::any(tracingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      if (typeid(map<string, boost::any>) == m["code"].type()) {
        InputCodeLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["code"]));
        code = make_shared<InputCodeLocation>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("customContainerConfig") != m.end() && !m["customContainerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customContainerConfig"].type()) {
        CustomContainerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customContainerConfig"]));
        customContainerConfig = make_shared<CustomContainerConfig>(model1);
      }
    }
    if (m.find("customDNS") != m.end() && !m["customDNS"].empty()) {
      if (typeid(map<string, boost::any>) == m["customDNS"].type()) {
        CustomDNS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customDNS"]));
        customDNS = make_shared<CustomDNS>(model1);
      }
    }
    if (m.find("customRuntimeConfig") != m.end() && !m["customRuntimeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customRuntimeConfig"].type()) {
        CustomRuntimeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customRuntimeConfig"]));
        customRuntimeConfig = make_shared<CustomRuntimeConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        GPUConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<GPUConfig>(model1);
      }
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("instanceLifecycleConfig") != m.end() && !m["instanceLifecycleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["instanceLifecycleConfig"].type()) {
        InstanceLifecycleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["instanceLifecycleConfig"]));
        instanceLifecycleConfig = make_shared<InstanceLifecycleConfig>(model1);
      }
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("layers") != m.end() && !m["layers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["layers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["layers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      layers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("ossMountConfig") != m.end() && !m["ossMountConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ossMountConfig"].type()) {
        OSSMountConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ossMountConfig"]));
        ossMountConfig = make_shared<OSSMountConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("tracingConfig") != m.end() && !m["tracingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tracingConfig"].type()) {
        TracingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tracingConfig"]));
        tracingConfig = make_shared<TracingConfig>(model1);
      }
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        VPCConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<VPCConfig>(model1);
      }
    }
  }


  virtual ~UpdateFunctionInput() = default;
};
class UpdateTriggerInput : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> triggerConfig{};

  UpdateTriggerInput() {}

  explicit UpdateTriggerInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (invocationRole) {
      res["invocationRole"] = boost::any(*invocationRole);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (triggerConfig) {
      res["triggerConfig"] = boost::any(*triggerConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("invocationRole") != m.end() && !m["invocationRole"].empty()) {
      invocationRole = make_shared<string>(boost::any_cast<string>(m["invocationRole"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      triggerConfig = make_shared<string>(boost::any_cast<string>(m["triggerConfig"]));
    }
  }


  virtual ~UpdateTriggerInput() = default;
};
class CreateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<CreateAliasInput> body{};

  CreateAliasRequest() {}

  explicit CreateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAliasInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAliasInput>(model1);
      }
    }
  }


  virtual ~CreateAliasRequest() = default;
};
class CreateAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Alias> body{};

  CreateAliasResponse() {}

  explicit CreateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Alias model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Alias>(model1);
      }
    }
  }


  virtual ~CreateAliasResponse() = default;
};
class CreateCustomDomainRequest : public Darabonba::Model {
public:
  shared_ptr<CreateCustomDomainInput> body{};

  CreateCustomDomainRequest() {}

  explicit CreateCustomDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomDomainInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomDomainInput>(model1);
      }
    }
  }


  virtual ~CreateCustomDomainRequest() = default;
};
class CreateCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CustomDomain> body{};

  CreateCustomDomainResponse() {}

  explicit CreateCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CustomDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CustomDomain>(model1);
      }
    }
  }


  virtual ~CreateCustomDomainResponse() = default;
};
class CreateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<CreateFunctionInput> body{};

  CreateFunctionRequest() {}

  explicit CreateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFunctionInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionInput>(model1);
      }
    }
  }


  virtual ~CreateFunctionRequest() = default;
};
class CreateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Function> body{};

  CreateFunctionResponse() {}

  explicit CreateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Function model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Function>(model1);
      }
    }
  }


  virtual ~CreateFunctionResponse() = default;
};
class CreateLayerVersionRequest : public Darabonba::Model {
public:
  shared_ptr<CreateLayerVersionInput> body{};

  CreateLayerVersionRequest() {}

  explicit CreateLayerVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLayerVersionInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLayerVersionInput>(model1);
      }
    }
  }


  virtual ~CreateLayerVersionRequest() = default;
};
class CreateLayerVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Layer> body{};

  CreateLayerVersionResponse() {}

  explicit CreateLayerVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Layer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Layer>(model1);
      }
    }
  }


  virtual ~CreateLayerVersionResponse() = default;
};
class CreateTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<CreateTriggerInput> body{};

  CreateTriggerRequest() {}

  explicit CreateTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTriggerInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTriggerInput>(model1);
      }
    }
  }


  virtual ~CreateTriggerRequest() = default;
};
class CreateTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Trigger> body{};

  CreateTriggerResponse() {}

  explicit CreateTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Trigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Trigger>(model1);
      }
    }
  }


  virtual ~CreateTriggerResponse() = default;
};
class CreateVpcBindingRequest : public Darabonba::Model {
public:
  shared_ptr<CreateVpcBindingInput> body{};

  CreateVpcBindingRequest() {}

  explicit CreateVpcBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVpcBindingInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpcBindingInput>(model1);
      }
    }
  }


  virtual ~CreateVpcBindingRequest() = default;
};
class CreateVpcBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateVpcBindingResponse() {}

  explicit CreateVpcBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateVpcBindingResponse() = default;
};
class DeleteAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteAliasResponse() {}

  explicit DeleteAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteAliasResponse() = default;
};
class DeleteAsyncInvokeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  DeleteAsyncInvokeConfigRequest() {}

  explicit DeleteAsyncInvokeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~DeleteAsyncInvokeConfigRequest() = default;
};
class DeleteAsyncInvokeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteAsyncInvokeConfigResponse() {}

  explicit DeleteAsyncInvokeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteAsyncInvokeConfigResponse() = default;
};
class DeleteConcurrencyConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteConcurrencyConfigResponse() {}

  explicit DeleteConcurrencyConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteConcurrencyConfigResponse() = default;
};
class DeleteCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteCustomDomainResponse() {}

  explicit DeleteCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteCustomDomainResponse() = default;
};
class DeleteFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteFunctionResponse() {}

  explicit DeleteFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteFunctionResponse() = default;
};
class DeleteFunctionVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteFunctionVersionResponse() {}

  explicit DeleteFunctionVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteFunctionVersionResponse() = default;
};
class DeleteLayerVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteLayerVersionResponse() {}

  explicit DeleteLayerVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteLayerVersionResponse() = default;
};
class DeleteProvisionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  DeleteProvisionConfigRequest() {}

  explicit DeleteProvisionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~DeleteProvisionConfigRequest() = default;
};
class DeleteProvisionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteProvisionConfigResponse() {}

  explicit DeleteProvisionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteProvisionConfigResponse() = default;
};
class DeleteTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteTriggerResponse() {}

  explicit DeleteTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteTriggerResponse() = default;
};
class DeleteVpcBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteVpcBindingResponse() {}

  explicit DeleteVpcBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteVpcBindingResponse() = default;
};
class GetAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Alias> body{};

  GetAliasResponse() {}

  explicit GetAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Alias model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Alias>(model1);
      }
    }
  }


  virtual ~GetAliasResponse() = default;
};
class GetAsyncInvokeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetAsyncInvokeConfigRequest() {}

  explicit GetAsyncInvokeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~GetAsyncInvokeConfigRequest() = default;
};
class GetAsyncInvokeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsyncConfig> body{};

  GetAsyncInvokeConfigResponse() {}

  explicit GetAsyncInvokeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AsyncConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsyncConfig>(model1);
      }
    }
  }


  virtual ~GetAsyncInvokeConfigResponse() = default;
};
class GetAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetAsyncTaskRequest() {}

  explicit GetAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~GetAsyncTaskRequest() = default;
};
class GetAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsyncTask> body{};

  GetAsyncTaskResponse() {}

  explicit GetAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AsyncTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsyncTask>(model1);
      }
    }
  }


  virtual ~GetAsyncTaskResponse() = default;
};
class GetConcurrencyConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConcurrencyConfig> body{};

  GetConcurrencyConfigResponse() {}

  explicit GetConcurrencyConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConcurrencyConfig>(model1);
      }
    }
  }


  virtual ~GetConcurrencyConfigResponse() = default;
};
class GetCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CustomDomain> body{};

  GetCustomDomainResponse() {}

  explicit GetCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CustomDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CustomDomain>(model1);
      }
    }
  }


  virtual ~GetCustomDomainResponse() = default;
};
class GetFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetFunctionRequest() {}

  explicit GetFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~GetFunctionRequest() = default;
};
class GetFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Function> body{};

  GetFunctionResponse() {}

  explicit GetFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Function model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Function>(model1);
      }
    }
  }


  virtual ~GetFunctionResponse() = default;
};
class GetFunctionCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetFunctionCodeRequest() {}

  explicit GetFunctionCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~GetFunctionCodeRequest() = default;
};
class GetFunctionCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OutputFuncCode> body{};

  GetFunctionCodeResponse() {}

  explicit GetFunctionCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OutputFuncCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OutputFuncCode>(model1);
      }
    }
  }


  virtual ~GetFunctionCodeResponse() = default;
};
class GetLayerVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Layer> body{};

  GetLayerVersionResponse() {}

  explicit GetLayerVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Layer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Layer>(model1);
      }
    }
  }


  virtual ~GetLayerVersionResponse() = default;
};
class GetLayerVersionByArnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Layer> body{};

  GetLayerVersionByArnResponse() {}

  explicit GetLayerVersionByArnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Layer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Layer>(model1);
      }
    }
  }


  virtual ~GetLayerVersionByArnResponse() = default;
};
class GetProvisionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetProvisionConfigRequest() {}

  explicit GetProvisionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~GetProvisionConfigRequest() = default;
};
class GetProvisionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProvisionConfig> body{};

  GetProvisionConfigResponse() {}

  explicit GetProvisionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProvisionConfig>(model1);
      }
    }
  }


  virtual ~GetProvisionConfigResponse() = default;
};
class GetTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Trigger> body{};

  GetTriggerResponse() {}

  explicit GetTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Trigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Trigger>(model1);
      }
    }
  }


  virtual ~GetTriggerResponse() = default;
};
class InvokeFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAsyncTaskId{};
  shared_ptr<string> xFcInvocationType{};
  shared_ptr<string> xFcLogType{};

  InvokeFunctionHeaders() {}

  explicit InvokeFunctionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAsyncTaskId) {
      res["x-fc-async-task-id"] = boost::any(*xFcAsyncTaskId);
    }
    if (xFcInvocationType) {
      res["x-fc-invocation-type"] = boost::any(*xFcInvocationType);
    }
    if (xFcLogType) {
      res["x-fc-log-type"] = boost::any(*xFcLogType);
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
    if (m.find("x-fc-async-task-id") != m.end() && !m["x-fc-async-task-id"].empty()) {
      xFcAsyncTaskId = make_shared<string>(boost::any_cast<string>(m["x-fc-async-task-id"]));
    }
    if (m.find("x-fc-invocation-type") != m.end() && !m["x-fc-invocation-type"].empty()) {
      xFcInvocationType = make_shared<string>(boost::any_cast<string>(m["x-fc-invocation-type"]));
    }
    if (m.find("x-fc-log-type") != m.end() && !m["x-fc-log-type"].empty()) {
      xFcLogType = make_shared<string>(boost::any_cast<string>(m["x-fc-log-type"]));
    }
  }


  virtual ~InvokeFunctionHeaders() = default;
};
class InvokeFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> body{};
  shared_ptr<string> qualifier{};

  InvokeFunctionRequest() {}

  explicit InvokeFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~InvokeFunctionRequest() = default;
};
class InvokeFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Darabonba::Stream> body{};

  InvokeFunctionResponse() {}

  explicit InvokeFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~InvokeFunctionResponse() = default;
};
class ListAliasesRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};

  ListAliasesRequest() {}

  explicit ListAliasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
  }


  virtual ~ListAliasesRequest() = default;
};
class ListAliasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAliasesOutput> body{};

  ListAliasesResponse() {}

  explicit ListAliasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAliasesOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAliasesOutput>(model1);
      }
    }
  }


  virtual ~ListAliasesResponse() = default;
};
class ListAsyncInvokeConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListAsyncInvokeConfigsRequest() {}

  explicit ListAsyncInvokeConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListAsyncInvokeConfigsRequest() = default;
};
class ListAsyncInvokeConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAsyncInvokeConfigOutput> body{};

  ListAsyncInvokeConfigsResponse() {}

  explicit ListAsyncInvokeConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAsyncInvokeConfigOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAsyncInvokeConfigOutput>(model1);
      }
    }
  }


  virtual ~ListAsyncInvokeConfigsResponse() = default;
};
class ListAsyncTasksRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includePayload{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sortOrderByTime{};
  shared_ptr<long> startedTimeBegin{};
  shared_ptr<long> startedTimeEnd{};
  shared_ptr<string> status{};

  ListAsyncTasksRequest() {}

  explicit ListAsyncTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includePayload) {
      res["includePayload"] = boost::any(*includePayload);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (sortOrderByTime) {
      res["sortOrderByTime"] = boost::any(*sortOrderByTime);
    }
    if (startedTimeBegin) {
      res["startedTimeBegin"] = boost::any(*startedTimeBegin);
    }
    if (startedTimeEnd) {
      res["startedTimeEnd"] = boost::any(*startedTimeEnd);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("includePayload") != m.end() && !m["includePayload"].empty()) {
      includePayload = make_shared<bool>(boost::any_cast<bool>(m["includePayload"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("sortOrderByTime") != m.end() && !m["sortOrderByTime"].empty()) {
      sortOrderByTime = make_shared<string>(boost::any_cast<string>(m["sortOrderByTime"]));
    }
    if (m.find("startedTimeBegin") != m.end() && !m["startedTimeBegin"].empty()) {
      startedTimeBegin = make_shared<long>(boost::any_cast<long>(m["startedTimeBegin"]));
    }
    if (m.find("startedTimeEnd") != m.end() && !m["startedTimeEnd"].empty()) {
      startedTimeEnd = make_shared<long>(boost::any_cast<long>(m["startedTimeEnd"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListAsyncTasksRequest() = default;
};
class ListAsyncTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAsyncTaskOutput> body{};

  ListAsyncTasksResponse() {}

  explicit ListAsyncTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAsyncTaskOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAsyncTaskOutput>(model1);
      }
    }
  }


  virtual ~ListAsyncTasksResponse() = default;
};
class ListConcurrencyConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListConcurrencyConfigsRequest() {}

  explicit ListConcurrencyConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListConcurrencyConfigsRequest() = default;
};
class ListConcurrencyConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConcurrencyConfigsOutput> body{};

  ListConcurrencyConfigsResponse() {}

  explicit ListConcurrencyConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConcurrencyConfigsOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConcurrencyConfigsOutput>(model1);
      }
    }
  }


  virtual ~ListConcurrencyConfigsResponse() = default;
};
class ListCustomDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};

  ListCustomDomainsRequest() {}

  explicit ListCustomDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
  }


  virtual ~ListCustomDomainsRequest() = default;
};
class ListCustomDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCustomDomainOutput> body{};

  ListCustomDomainsResponse() {}

  explicit ListCustomDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCustomDomainOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCustomDomainOutput>(model1);
      }
    }
  }


  virtual ~ListCustomDomainsResponse() = default;
};
class ListFunctionVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListFunctionVersionsRequest() {}

  explicit ListFunctionVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListFunctionVersionsRequest() = default;
};
class ListFunctionVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVersionsOutput> body{};

  ListFunctionVersionsResponse() {}

  explicit ListFunctionVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVersionsOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVersionsOutput>(model1);
      }
    }
  }


  virtual ~ListFunctionVersionsResponse() = default;
};
class ListFunctionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};

  ListFunctionsRequest() {}

  explicit ListFunctionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
  }


  virtual ~ListFunctionsRequest() = default;
};
class ListFunctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionsOutput> body{};

  ListFunctionsResponse() {}

  explicit ListFunctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFunctionsOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionsOutput>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};
  shared_ptr<bool> withAllActive{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (withAllActive) {
      res["withAllActive"] = boost::any(*withAllActive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("withAllActive") != m.end() && !m["withAllActive"].empty()) {
      withAllActive = make_shared<bool>(boost::any_cast<bool>(m["withAllActive"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesOutput> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInstancesOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesOutput>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListLayerVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> startVersion{};

  ListLayerVersionsRequest() {}

  explicit ListLayerVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (startVersion) {
      res["startVersion"] = boost::any(*startVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("startVersion") != m.end() && !m["startVersion"].empty()) {
      startVersion = make_shared<string>(boost::any_cast<string>(m["startVersion"]));
    }
  }


  virtual ~ListLayerVersionsRequest() = default;
};
class ListLayerVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLayerVersionOutput> body{};

  ListLayerVersionsResponse() {}

  explicit ListLayerVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListLayerVersionOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLayerVersionOutput>(model1);
      }
    }
  }


  virtual ~ListLayerVersionsResponse() = default;
};
class ListLayersRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> official{};
  shared_ptr<string> prefix{};
  shared_ptr<string> public_{};

  ListLayersRequest() {}

  explicit ListLayersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (official) {
      res["official"] = boost::any(*official);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("official") != m.end() && !m["official"].empty()) {
      official = make_shared<string>(boost::any_cast<string>(m["official"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<string>(boost::any_cast<string>(m["public"]));
    }
  }


  virtual ~ListLayersRequest() = default;
};
class ListLayersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLayersOutput> body{};

  ListLayersResponse() {}

  explicit ListLayersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListLayersOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLayersOutput>(model1);
      }
    }
  }


  virtual ~ListLayersResponse() = default;
};
class ListProvisionConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListProvisionConfigsRequest() {}

  explicit ListProvisionConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListProvisionConfigsRequest() = default;
};
class ListProvisionConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProvisionConfigsOutput> body{};

  ListProvisionConfigsResponse() {}

  explicit ListProvisionConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProvisionConfigsOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProvisionConfigsOutput>(model1);
      }
    }
  }


  virtual ~ListProvisionConfigsResponse() = default;
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
  shared_ptr<long> limit{};
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
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
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
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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
class ListTagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceIdShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagShrink{};

  ListTagResourcesShrinkRequest() {}

  explicit ListTagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceIdShrink) {
      res["ResourceId"] = boost::any(*resourceIdShrink);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceIdShrink = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListTagResourcesShrinkRequest() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesOutput> body{};

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
        ListTagResourcesOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesOutput>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTriggersRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};

  ListTriggersRequest() {}

  explicit ListTriggersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
  }


  virtual ~ListTriggersRequest() = default;
};
class ListTriggersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTriggersOutput> body{};

  ListTriggersResponse() {}

  explicit ListTriggersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTriggersOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTriggersOutput>(model1);
      }
    }
  }


  virtual ~ListTriggersResponse() = default;
};
class ListVpcBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpcBindingsOutput> body{};

  ListVpcBindingsResponse() {}

  explicit ListVpcBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcBindingsOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcBindingsOutput>(model1);
      }
    }
  }


  virtual ~ListVpcBindingsResponse() = default;
};
class PublishFunctionVersionRequest : public Darabonba::Model {
public:
  shared_ptr<PublishVersionInput> body{};

  PublishFunctionVersionRequest() {}

  explicit PublishFunctionVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishVersionInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishVersionInput>(model1);
      }
    }
  }


  virtual ~PublishFunctionVersionRequest() = default;
};
class PublishFunctionVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Version> body{};

  PublishFunctionVersionResponse() {}

  explicit PublishFunctionVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Version model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Version>(model1);
      }
    }
  }


  virtual ~PublishFunctionVersionResponse() = default;
};
class PutAsyncInvokeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<PutAsyncInvokeConfigInput> body{};
  shared_ptr<string> qualifier{};

  PutAsyncInvokeConfigRequest() {}

  explicit PutAsyncInvokeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PutAsyncInvokeConfigInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutAsyncInvokeConfigInput>(model1);
      }
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~PutAsyncInvokeConfigRequest() = default;
};
class PutAsyncInvokeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsyncConfig> body{};

  PutAsyncInvokeConfigResponse() {}

  explicit PutAsyncInvokeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AsyncConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsyncConfig>(model1);
      }
    }
  }


  virtual ~PutAsyncInvokeConfigResponse() = default;
};
class PutConcurrencyConfigRequest : public Darabonba::Model {
public:
  shared_ptr<PutConcurrencyInput> body{};

  PutConcurrencyConfigRequest() {}

  explicit PutConcurrencyConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutConcurrencyInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutConcurrencyInput>(model1);
      }
    }
  }


  virtual ~PutConcurrencyConfigRequest() = default;
};
class PutConcurrencyConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConcurrencyConfig> body{};

  PutConcurrencyConfigResponse() {}

  explicit PutConcurrencyConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConcurrencyConfig>(model1);
      }
    }
  }


  virtual ~PutConcurrencyConfigResponse() = default;
};
class PutLayerACLRequest : public Darabonba::Model {
public:
  shared_ptr<string> acl{};
  shared_ptr<string> public_{};

  PutLayerACLRequest() {}

  explicit PutLayerACLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["acl"] = boost::any(*acl);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      acl = make_shared<string>(boost::any_cast<string>(m["acl"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<string>(boost::any_cast<string>(m["public"]));
    }
  }


  virtual ~PutLayerACLRequest() = default;
};
class PutLayerACLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PutLayerACLResponse() {}

  explicit PutLayerACLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~PutLayerACLResponse() = default;
};
class PutProvisionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<PutProvisionConfigInput> body{};
  shared_ptr<string> qualifier{};

  PutProvisionConfigRequest() {}

  explicit PutProvisionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PutProvisionConfigInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutProvisionConfigInput>(model1);
      }
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~PutProvisionConfigRequest() = default;
};
class PutProvisionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProvisionConfig> body{};

  PutProvisionConfigResponse() {}

  explicit PutProvisionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProvisionConfig>(model1);
      }
    }
  }


  virtual ~PutProvisionConfigResponse() = default;
};
class StopAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  StopAsyncTaskRequest() {}

  explicit StopAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~StopAsyncTaskRequest() = default;
};
class StopAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StopAsyncTaskResponse() {}

  explicit StopAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StopAsyncTaskResponse() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<TagResourcesInput> body{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesInput>(model1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
class UntagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> resourceIdShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKeyShrink{};

  UntagResourcesShrinkRequest() {}

  explicit UntagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceIdShrink) {
      res["ResourceId"] = boost::any(*resourceIdShrink);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKeyShrink) {
      res["TagKey"] = boost::any(*tagKeyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceIdShrink = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKeyShrink = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~UntagResourcesShrinkRequest() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateAliasInput> body{};

  UpdateAliasRequest() {}

  explicit UpdateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAliasInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAliasInput>(model1);
      }
    }
  }


  virtual ~UpdateAliasRequest() = default;
};
class UpdateAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Alias> body{};

  UpdateAliasResponse() {}

  explicit UpdateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Alias model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Alias>(model1);
      }
    }
  }


  virtual ~UpdateAliasResponse() = default;
};
class UpdateCustomDomainRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateCustomDomainInput> body{};

  UpdateCustomDomainRequest() {}

  explicit UpdateCustomDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCustomDomainInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCustomDomainInput>(model1);
      }
    }
  }


  virtual ~UpdateCustomDomainRequest() = default;
};
class UpdateCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CustomDomain> body{};

  UpdateCustomDomainResponse() {}

  explicit UpdateCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CustomDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CustomDomain>(model1);
      }
    }
  }


  virtual ~UpdateCustomDomainResponse() = default;
};
class UpdateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateFunctionInput> body{};

  UpdateFunctionRequest() {}

  explicit UpdateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFunctionInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFunctionInput>(model1);
      }
    }
  }


  virtual ~UpdateFunctionRequest() = default;
};
class UpdateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Function> body{};

  UpdateFunctionResponse() {}

  explicit UpdateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Function model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Function>(model1);
      }
    }
  }


  virtual ~UpdateFunctionResponse() = default;
};
class UpdateTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateTriggerInput> body{};

  UpdateTriggerRequest() {}

  explicit UpdateTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTriggerInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTriggerInput>(model1);
      }
    }
  }


  virtual ~UpdateTriggerRequest() = default;
};
class UpdateTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Trigger> body{};

  UpdateTriggerResponse() {}

  explicit UpdateTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Trigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Trigger>(model1);
      }
    }
  }


  virtual ~UpdateTriggerResponse() = default;
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
  CreateAliasResponse createAliasWithOptions(shared_ptr<string> functionName,
                                             shared_ptr<CreateAliasRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAliasResponse createAlias(shared_ptr<string> functionName, shared_ptr<CreateAliasRequest> request);
  CreateCustomDomainResponse createCustomDomainWithOptions(shared_ptr<CreateCustomDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomDomainResponse createCustomDomain(shared_ptr<CreateCustomDomainRequest> request);
  CreateFunctionResponse createFunctionWithOptions(shared_ptr<CreateFunctionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionResponse createFunction(shared_ptr<CreateFunctionRequest> request);
  CreateLayerVersionResponse createLayerVersionWithOptions(shared_ptr<string> layerName,
                                                           shared_ptr<CreateLayerVersionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLayerVersionResponse createLayerVersion(shared_ptr<string> layerName, shared_ptr<CreateLayerVersionRequest> request);
  CreateTriggerResponse createTriggerWithOptions(shared_ptr<string> functionName,
                                                 shared_ptr<CreateTriggerRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTriggerResponse createTrigger(shared_ptr<string> functionName, shared_ptr<CreateTriggerRequest> request);
  CreateVpcBindingResponse createVpcBindingWithOptions(shared_ptr<string> functionName,
                                                       shared_ptr<CreateVpcBindingRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpcBindingResponse createVpcBinding(shared_ptr<string> functionName, shared_ptr<CreateVpcBindingRequest> request);
  DeleteAliasResponse deleteAliasWithOptions(shared_ptr<string> functionName,
                                             shared_ptr<string> aliasName,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAliasResponse deleteAlias(shared_ptr<string> functionName, shared_ptr<string> aliasName);
  DeleteAsyncInvokeConfigResponse deleteAsyncInvokeConfigWithOptions(shared_ptr<string> functionName,
                                                                     shared_ptr<DeleteAsyncInvokeConfigRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAsyncInvokeConfigResponse deleteAsyncInvokeConfig(shared_ptr<string> functionName, shared_ptr<DeleteAsyncInvokeConfigRequest> request);
  DeleteConcurrencyConfigResponse deleteConcurrencyConfigWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConcurrencyConfigResponse deleteConcurrencyConfig(shared_ptr<string> functionName);
  DeleteCustomDomainResponse deleteCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomDomainResponse deleteCustomDomain(shared_ptr<string> domainName);
  DeleteFunctionResponse deleteFunctionWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionResponse deleteFunction(shared_ptr<string> functionName);
  DeleteFunctionVersionResponse deleteFunctionVersionWithOptions(shared_ptr<string> functionName,
                                                                 shared_ptr<string> versionId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionVersionResponse deleteFunctionVersion(shared_ptr<string> functionName, shared_ptr<string> versionId);
  DeleteLayerVersionResponse deleteLayerVersionWithOptions(shared_ptr<string> layerName,
                                                           shared_ptr<string> version,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLayerVersionResponse deleteLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version);
  DeleteProvisionConfigResponse deleteProvisionConfigWithOptions(shared_ptr<string> functionName,
                                                                 shared_ptr<DeleteProvisionConfigRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProvisionConfigResponse deleteProvisionConfig(shared_ptr<string> functionName, shared_ptr<DeleteProvisionConfigRequest> request);
  DeleteTriggerResponse deleteTriggerWithOptions(shared_ptr<string> functionName,
                                                 shared_ptr<string> triggerName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTriggerResponse deleteTrigger(shared_ptr<string> functionName, shared_ptr<string> triggerName);
  DeleteVpcBindingResponse deleteVpcBindingWithOptions(shared_ptr<string> functionName,
                                                       shared_ptr<string> vpcId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpcBindingResponse deleteVpcBinding(shared_ptr<string> functionName, shared_ptr<string> vpcId);
  GetAliasResponse getAliasWithOptions(shared_ptr<string> functionName,
                                       shared_ptr<string> aliasName,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAliasResponse getAlias(shared_ptr<string> functionName, shared_ptr<string> aliasName);
  GetAsyncInvokeConfigResponse getAsyncInvokeConfigWithOptions(shared_ptr<string> functionName,
                                                               shared_ptr<GetAsyncInvokeConfigRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncInvokeConfigResponse getAsyncInvokeConfig(shared_ptr<string> functionName, shared_ptr<GetAsyncInvokeConfigRequest> request);
  GetAsyncTaskResponse getAsyncTaskWithOptions(shared_ptr<string> functionName,
                                               shared_ptr<string> taskId,
                                               shared_ptr<GetAsyncTaskRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncTaskResponse getAsyncTask(shared_ptr<string> functionName, shared_ptr<string> taskId, shared_ptr<GetAsyncTaskRequest> request);
  GetConcurrencyConfigResponse getConcurrencyConfigWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConcurrencyConfigResponse getConcurrencyConfig(shared_ptr<string> functionName);
  GetCustomDomainResponse getCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomDomainResponse getCustomDomain(shared_ptr<string> domainName);
  GetFunctionResponse getFunctionWithOptions(shared_ptr<string> functionName,
                                             shared_ptr<GetFunctionRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionResponse getFunction(shared_ptr<string> functionName, shared_ptr<GetFunctionRequest> request);
  GetFunctionCodeResponse getFunctionCodeWithOptions(shared_ptr<string> functionName,
                                                     shared_ptr<GetFunctionCodeRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionCodeResponse getFunctionCode(shared_ptr<string> functionName, shared_ptr<GetFunctionCodeRequest> request);
  GetLayerVersionResponse getLayerVersionWithOptions(shared_ptr<string> layerName,
                                                     shared_ptr<string> version,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLayerVersionResponse getLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version);
  GetLayerVersionByArnResponse getLayerVersionByArnWithOptions(shared_ptr<string> arn, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLayerVersionByArnResponse getLayerVersionByArn(shared_ptr<string> arn);
  GetProvisionConfigResponse getProvisionConfigWithOptions(shared_ptr<string> functionName,
                                                           shared_ptr<GetProvisionConfigRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProvisionConfigResponse getProvisionConfig(shared_ptr<string> functionName, shared_ptr<GetProvisionConfigRequest> request);
  GetTriggerResponse getTriggerWithOptions(shared_ptr<string> functionName,
                                           shared_ptr<string> triggerName,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTriggerResponse getTrigger(shared_ptr<string> functionName, shared_ptr<string> triggerName);
  InvokeFunctionResponse invokeFunctionWithOptions(shared_ptr<string> functionName,
                                                   shared_ptr<InvokeFunctionRequest> request,
                                                   shared_ptr<InvokeFunctionHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeFunctionResponse invokeFunction(shared_ptr<string> functionName, shared_ptr<InvokeFunctionRequest> request);
  ListAliasesResponse listAliasesWithOptions(shared_ptr<string> functionName,
                                             shared_ptr<ListAliasesRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliasesResponse listAliases(shared_ptr<string> functionName, shared_ptr<ListAliasesRequest> request);
  ListAsyncInvokeConfigsResponse listAsyncInvokeConfigsWithOptions(shared_ptr<ListAsyncInvokeConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAsyncInvokeConfigsResponse listAsyncInvokeConfigs(shared_ptr<ListAsyncInvokeConfigsRequest> request);
  ListAsyncTasksResponse listAsyncTasksWithOptions(shared_ptr<string> functionName,
                                                   shared_ptr<ListAsyncTasksRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAsyncTasksResponse listAsyncTasks(shared_ptr<string> functionName, shared_ptr<ListAsyncTasksRequest> request);
  ListConcurrencyConfigsResponse listConcurrencyConfigsWithOptions(shared_ptr<ListConcurrencyConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConcurrencyConfigsResponse listConcurrencyConfigs(shared_ptr<ListConcurrencyConfigsRequest> request);
  ListCustomDomainsResponse listCustomDomainsWithOptions(shared_ptr<ListCustomDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCustomDomainsResponse listCustomDomains(shared_ptr<ListCustomDomainsRequest> request);
  ListFunctionVersionsResponse listFunctionVersionsWithOptions(shared_ptr<string> functionName,
                                                               shared_ptr<ListFunctionVersionsRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionVersionsResponse listFunctionVersions(shared_ptr<string> functionName, shared_ptr<ListFunctionVersionsRequest> request);
  ListFunctionsResponse listFunctionsWithOptions(shared_ptr<ListFunctionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionsResponse listFunctions(shared_ptr<ListFunctionsRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<string> functionName,
                                                 shared_ptr<ListInstancesRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<string> functionName, shared_ptr<ListInstancesRequest> request);
  ListLayerVersionsResponse listLayerVersionsWithOptions(shared_ptr<string> layerName,
                                                         shared_ptr<ListLayerVersionsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLayerVersionsResponse listLayerVersions(shared_ptr<string> layerName, shared_ptr<ListLayerVersionsRequest> request);
  ListLayersResponse listLayersWithOptions(shared_ptr<ListLayersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLayersResponse listLayers(shared_ptr<ListLayersRequest> request);
  ListProvisionConfigsResponse listProvisionConfigsWithOptions(shared_ptr<ListProvisionConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProvisionConfigsResponse listProvisionConfigs(shared_ptr<ListProvisionConfigsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTriggersResponse listTriggersWithOptions(shared_ptr<string> functionName,
                                               shared_ptr<ListTriggersRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTriggersResponse listTriggers(shared_ptr<string> functionName, shared_ptr<ListTriggersRequest> request);
  ListVpcBindingsResponse listVpcBindingsWithOptions(shared_ptr<string> functionName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcBindingsResponse listVpcBindings(shared_ptr<string> functionName);
  PublishFunctionVersionResponse publishFunctionVersionWithOptions(shared_ptr<string> functionName,
                                                                   shared_ptr<PublishFunctionVersionRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishFunctionVersionResponse publishFunctionVersion(shared_ptr<string> functionName, shared_ptr<PublishFunctionVersionRequest> request);
  PutAsyncInvokeConfigResponse putAsyncInvokeConfigWithOptions(shared_ptr<string> functionName,
                                                               shared_ptr<PutAsyncInvokeConfigRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutAsyncInvokeConfigResponse putAsyncInvokeConfig(shared_ptr<string> functionName, shared_ptr<PutAsyncInvokeConfigRequest> request);
  PutConcurrencyConfigResponse putConcurrencyConfigWithOptions(shared_ptr<string> functionName,
                                                               shared_ptr<PutConcurrencyConfigRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutConcurrencyConfigResponse putConcurrencyConfig(shared_ptr<string> functionName, shared_ptr<PutConcurrencyConfigRequest> request);
  PutLayerACLResponse putLayerACLWithOptions(shared_ptr<string> layerName,
                                             shared_ptr<PutLayerACLRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutLayerACLResponse putLayerACL(shared_ptr<string> layerName, shared_ptr<PutLayerACLRequest> request);
  PutProvisionConfigResponse putProvisionConfigWithOptions(shared_ptr<string> functionName,
                                                           shared_ptr<PutProvisionConfigRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProvisionConfigResponse putProvisionConfig(shared_ptr<string> functionName, shared_ptr<PutProvisionConfigRequest> request);
  StopAsyncTaskResponse stopAsyncTaskWithOptions(shared_ptr<string> functionName,
                                                 shared_ptr<string> taskId,
                                                 shared_ptr<StopAsyncTaskRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAsyncTaskResponse stopAsyncTask(shared_ptr<string> functionName, shared_ptr<string> taskId, shared_ptr<StopAsyncTaskRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAliasResponse updateAliasWithOptions(shared_ptr<string> functionName,
                                             shared_ptr<string> aliasName,
                                             shared_ptr<UpdateAliasRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAliasResponse updateAlias(shared_ptr<string> functionName, shared_ptr<string> aliasName, shared_ptr<UpdateAliasRequest> request);
  UpdateCustomDomainResponse updateCustomDomainWithOptions(shared_ptr<string> domainName,
                                                           shared_ptr<UpdateCustomDomainRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCustomDomainResponse updateCustomDomain(shared_ptr<string> domainName, shared_ptr<UpdateCustomDomainRequest> request);
  UpdateFunctionResponse updateFunctionWithOptions(shared_ptr<string> functionName,
                                                   shared_ptr<UpdateFunctionRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFunctionResponse updateFunction(shared_ptr<string> functionName, shared_ptr<UpdateFunctionRequest> request);
  UpdateTriggerResponse updateTriggerWithOptions(shared_ptr<string> functionName,
                                                 shared_ptr<string> triggerName,
                                                 shared_ptr<UpdateTriggerRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTriggerResponse updateTrigger(shared_ptr<string> functionName, shared_ptr<string> triggerName, shared_ptr<UpdateTriggerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_FC20230330

#endif
