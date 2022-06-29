// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FC-OPEN20210406_H_
#define ALIBABACLOUD_FC-OPEN20210406_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_FC-Open20210406 {
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
class AsyncConfigMeta : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> serviceName{};

  AsyncConfigMeta() {}

  explicit AsyncConfigMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~AsyncConfigMeta() = default;
};
class AvailableAZ : public Darabonba::Model {
public:
  shared_ptr<string> availableAZs{};

  AvailableAZ() {}

  explicit AvailableAZ(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAZs) {
      res["availableAZs"] = boost::any(*availableAZs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("availableAZs") != m.end() && !m["availableAZs"].empty()) {
      availableAZs = make_shared<string>(boost::any_cast<string>(m["availableAZs"]));
    }
  }


  virtual ~AvailableAZ() = default;
};
class CDNEventsTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> eventName{};
  shared_ptr<string> eventVersion{};
  shared_ptr<map<string, vector<string>>> filter{};
  shared_ptr<string> notes{};

  CDNEventsTriggerConfig() {}

  explicit CDNEventsTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CDNEventsTriggerConfig() = default;
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
class Code : public Darabonba::Model {
public:
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> zipFile{};

  Code() {}

  explicit Code(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~Code() = default;
};
class CustomContainerConfig : public Darabonba::Model {
public:
  shared_ptr<string> accelerationType{};
  shared_ptr<string> args{};
  shared_ptr<string> command{};
  shared_ptr<string> image{};
  shared_ptr<string> instanceID{};

  CustomContainerConfig() {}

  explicit CustomContainerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerationType) {
      res["accelerationType"] = boost::any(*accelerationType);
    }
    if (args) {
      res["args"] = boost::any(*args);
    }
    if (command) {
      res["command"] = boost::any(*command);
    }
    if (image) {
      res["image"] = boost::any(*image);
    }
    if (instanceID) {
      res["instanceID"] = boost::any(*instanceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accelerationType") != m.end() && !m["accelerationType"].empty()) {
      accelerationType = make_shared<string>(boost::any_cast<string>(m["accelerationType"]));
    }
    if (m.find("args") != m.end() && !m["args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["args"]));
    }
    if (m.find("command") != m.end() && !m["command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["command"]));
    }
    if (m.find("image") != m.end() && !m["image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["image"]));
    }
    if (m.find("instanceID") != m.end() && !m["instanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["instanceID"]));
    }
  }


  virtual ~CustomContainerConfig() = default;
};
class CustomContainerConfigInfo : public Darabonba::Model {
public:
  shared_ptr<AccelerationInfo> accelerationInfo{};
  shared_ptr<string> accelerationType{};
  shared_ptr<string> args{};
  shared_ptr<string> command{};
  shared_ptr<string> image{};
  shared_ptr<string> instanceID{};

  CustomContainerConfigInfo() {}

  explicit CustomContainerConfigInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (args) {
      res["args"] = boost::any(*args);
    }
    if (command) {
      res["command"] = boost::any(*command);
    }
    if (image) {
      res["image"] = boost::any(*image);
    }
    if (instanceID) {
      res["instanceID"] = boost::any(*instanceID);
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
    if (m.find("args") != m.end() && !m["args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["args"]));
    }
    if (m.find("command") != m.end() && !m["command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["command"]));
    }
    if (m.find("image") != m.end() && !m["image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["image"]));
    }
    if (m.find("instanceID") != m.end() && !m["instanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["instanceID"]));
    }
  }


  virtual ~CustomContainerConfigInfo() = default;
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
  }


  virtual ~CustomRuntimeConfig() = default;
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
class Error : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  Error() {}

  explicit Error(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
  }


  virtual ~Error() = default;
};
class ErrorInfo : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> stackTrace{};

  ErrorInfo() {}

  explicit ErrorInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (stackTrace) {
      res["stackTrace"] = boost::any(*stackTrace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("stackTrace") != m.end() && !m["stackTrace"].empty()) {
      stackTrace = make_shared<string>(boost::any_cast<string>(m["stackTrace"]));
    }
  }


  virtual ~ErrorInfo() = default;
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
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceId{};
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
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
  shared_ptr<SourceMNSParameters> sourceMNSParameters{};
  shared_ptr<SourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<SourceRocketMQParameters> sourceRocketMQParameters{};

  EventSourceParameters() {}

  explicit EventSourceParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceMNSParameters) {
      res["sourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("sourceMNSParameters") != m.end() && !m["sourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceMNSParameters"].type()) {
        SourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceMNSParameters"]));
        sourceMNSParameters = make_shared<SourceMNSParameters>(model1);
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
class EventBridgeTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<bool> asyncInvocationType{};
  shared_ptr<string> eventRuleFilterPattern{};
  shared_ptr<EventSourceConfig> eventSourceConfig{};
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
    if (eventSourceConfig) {
      res["eventSourceConfig"] = eventSourceConfig ? boost::any(eventSourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("eventSourceConfig") != m.end() && !m["eventSourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["eventSourceConfig"].type()) {
        EventSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["eventSourceConfig"]));
        eventSourceConfig = make_shared<EventSourceConfig>(model1);
      }
    }
    if (m.find("triggerEnable") != m.end() && !m["triggerEnable"].empty()) {
      triggerEnable = make_shared<bool>(boost::any_cast<bool>(m["triggerEnable"]));
    }
  }


  virtual ~EventBridgeTriggerConfig() = default;
};
class HTTPTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<vector<string>> methods{};

  HTTPTriggerConfig() {}

  explicit HTTPTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
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
  shared_ptr<LifecycleHook> preFreeze{};
  shared_ptr<LifecycleHook> preStop{};

  InstanceLifecycleConfig() {}

  explicit InstanceLifecycleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (preFreeze) {
      res["preFreeze"] = preFreeze ? boost::any(preFreeze->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preStop) {
      res["preStop"] = preStop ? boost::any(preStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("preFreeze") != m.end() && !m["preFreeze"].empty()) {
      if (typeid(map<string, boost::any>) == m["preFreeze"].type()) {
        LifecycleHook model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["preFreeze"]));
        preFreeze = make_shared<LifecycleHook>(model1);
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
class JaegerConfig : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};

  JaegerConfig() {}

  explicit JaegerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
  }


  virtual ~JaegerConfig() = default;
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
class JobLogConfig : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  JobLogConfig() {}

  explicit JobLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~JobLogConfig() = default;
};
class LayerCode : public Darabonba::Model {
public:
  shared_ptr<string> location{};
  shared_ptr<string> repositoryType{};

  LayerCode() {}

  explicit LayerCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LayerCode() = default;
};
class Layer : public Darabonba::Model {
public:
  shared_ptr<long> acl{};
  shared_ptr<string> arn{};
  shared_ptr<LayerCode> code{};
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codeSize{};
  shared_ptr<vector<string>> compatibleRuntime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> layerName{};
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
    if (arn) {
      res["arn"] = boost::any(*arn);
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
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      acl = make_shared<long>(boost::any_cast<long>(m["acl"]));
    }
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      if (typeid(map<string, boost::any>) == m["code"].type()) {
        LayerCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["code"]));
        code = make_shared<LayerCode>(model1);
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
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~Layer() = default;
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
class SourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
  }


  virtual ~SourceConfig() = default;
};
class LogTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<map<string, string>> functionParameter{};
  shared_ptr<JobConfig> jobConfig{};
  shared_ptr<JobLogConfig> logConfig{};
  shared_ptr<SourceConfig> sourceConfig{};

  LogTriggerConfig() {}

  explicit LogTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        JobLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<JobLogConfig>(model1);
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


  virtual ~LogTriggerConfig() = default;
};
class MeteringConfig : public Darabonba::Model {
public:
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<string> payerId{};
  shared_ptr<string> role{};

  MeteringConfig() {}

  explicit MeteringConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payerId) {
      res["payerId"] = boost::any(*payerId);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("payerId") != m.end() && !m["payerId"].empty()) {
      payerId = make_shared<string>(boost::any_cast<string>(m["payerId"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~MeteringConfig() = default;
};
class MnsTopicTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> filterTag{};
  shared_ptr<string> notifyContentFormat{};
  shared_ptr<string> notifyStrategy{};

  MnsTopicTriggerConfig() {}

  explicit MnsTopicTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MnsTopicTriggerConfig() = default;
};
class NASConfigMountPoints : public Darabonba::Model {
public:
  shared_ptr<string> mountDir{};
  shared_ptr<string> serverAddr{};

  NASConfigMountPoints() {}

  explicit NASConfigMountPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountDir) {
      res["mountDir"] = boost::any(*mountDir);
    }
    if (serverAddr) {
      res["serverAddr"] = boost::any(*serverAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mountDir") != m.end() && !m["mountDir"].empty()) {
      mountDir = make_shared<string>(boost::any_cast<string>(m["mountDir"]));
    }
    if (m.find("serverAddr") != m.end() && !m["serverAddr"].empty()) {
      serverAddr = make_shared<string>(boost::any_cast<string>(m["serverAddr"]));
    }
  }


  virtual ~NASConfigMountPoints() = default;
};
class NASConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<NASConfigMountPoints>> mountPoints{};
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
        vector<NASConfigMountPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mountPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NASConfigMountPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountPoints = make_shared<vector<NASConfigMountPoints>>(expect1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~NASConfig() = default;
};
class OSSTriggerKey : public Darabonba::Model {
public:
  shared_ptr<string> prefix{};
  shared_ptr<string> suffix{};

  OSSTriggerKey() {}

  explicit OSSTriggerKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OSSTriggerKey() = default;
};
class OSSTriggerFilter : public Darabonba::Model {
public:
  shared_ptr<OSSTriggerKey> key{};

  OSSTriggerFilter() {}

  explicit OSSTriggerFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OSSTriggerKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["key"]));
        key = make_shared<OSSTriggerKey>(model1);
      }
    }
  }


  virtual ~OSSTriggerFilter() = default;
};
class OSSTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> events{};
  shared_ptr<OSSTriggerFilter> filter{};

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
        OSSTriggerFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filter"]));
        filter = make_shared<OSSTriggerFilter>(model1);
      }
    }
  }


  virtual ~OSSTriggerConfig() = default;
};
class OnDemandConfig : public Darabonba::Model {
public:
  shared_ptr<long> maximumInstanceCount{};
  shared_ptr<string> resource{};

  OnDemandConfig() {}

  explicit OnDemandConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumInstanceCount) {
      res["maximumInstanceCount"] = boost::any(*maximumInstanceCount);
    }
    if (resource) {
      res["resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maximumInstanceCount") != m.end() && !m["maximumInstanceCount"].empty()) {
      maximumInstanceCount = make_shared<long>(boost::any_cast<long>(m["maximumInstanceCount"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["resource"]));
    }
  }


  virtual ~OnDemandConfig() = default;
};
class OpenReservedCapacity : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<long> cu{};
  shared_ptr<string> deadline{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> isRefunded{};
  shared_ptr<string> lastModifiedTime{};

  OpenReservedCapacity() {}

  explicit OpenReservedCapacity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (deadline) {
      res["deadline"] = boost::any(*deadline);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (isRefunded) {
      res["isRefunded"] = boost::any(*isRefunded);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("deadline") != m.end() && !m["deadline"].empty()) {
      deadline = make_shared<string>(boost::any_cast<string>(m["deadline"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("isRefunded") != m.end() && !m["isRefunded"].empty()) {
      isRefunded = make_shared<string>(boost::any_cast<string>(m["isRefunded"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
  }


  virtual ~OpenReservedCapacity() = default;
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
class PathConfig : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<vector<string>> methods{};
  shared_ptr<string> path{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> serviceName{};

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
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
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
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~PathConfig() = default;
};
class PreFreeze : public Darabonba::Model {
public:
  shared_ptr<string> handler{};
  shared_ptr<long> timeout{};

  PreFreeze() {}

  explicit PreFreeze(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PreFreeze() = default;
};
class PreStop : public Darabonba::Model {
public:
  shared_ptr<string> handler{};
  shared_ptr<long> timeout{};

  PreStop() {}

  explicit PreStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PreStop() = default;
};
class RdsTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<long> concurrency{};
  shared_ptr<string> eventFormat{};
  shared_ptr<long> retry{};
  shared_ptr<vector<string>> subscriptionObjects{};

  RdsTriggerConfig() {}

  explicit RdsTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrency) {
      res["concurrency"] = boost::any(*concurrency);
    }
    if (eventFormat) {
      res["eventFormat"] = boost::any(*eventFormat);
    }
    if (retry) {
      res["retry"] = boost::any(*retry);
    }
    if (subscriptionObjects) {
      res["subscriptionObjects"] = boost::any(*subscriptionObjects);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("concurrency") != m.end() && !m["concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["concurrency"]));
    }
    if (m.find("eventFormat") != m.end() && !m["eventFormat"].empty()) {
      eventFormat = make_shared<string>(boost::any_cast<string>(m["eventFormat"]));
    }
    if (m.find("retry") != m.end() && !m["retry"].empty()) {
      retry = make_shared<long>(boost::any_cast<long>(m["retry"]));
    }
    if (m.find("subscriptionObjects") != m.end() && !m["subscriptionObjects"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["subscriptionObjects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["subscriptionObjects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subscriptionObjects = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RdsTriggerConfig() = default;
};
class Resource : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};
  shared_ptr<map<string, string>> tags{};

  Resource() {}

  explicit Resource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Resource() = default;
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
class ScheduledActions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};

  ScheduledActions() {}

  explicit ScheduledActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ScheduledActions() = default;
};
class StatefulAsyncInvocationEvent : public Darabonba::Model {
public:
  shared_ptr<string> eventDetail{};
  shared_ptr<long> eventId{};
  shared_ptr<string> status{};
  shared_ptr<long> timestamp{};

  StatefulAsyncInvocationEvent() {}

  explicit StatefulAsyncInvocationEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StatefulAsyncInvocationEvent() = default;
};
class StatefulAsyncInvocation : public Darabonba::Model {
public:
  shared_ptr<long> alreadyRetriedTimes{};
  shared_ptr<string> destinationStatus{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<StatefulAsyncInvocationEvent>> events{};
  shared_ptr<string> functionName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> invocationErrorMessage{};
  shared_ptr<string> invocationId{};
  shared_ptr<string> invocationPayload{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startedTime{};
  shared_ptr<string> status{};

  StatefulAsyncInvocation() {}

  explicit StatefulAsyncInvocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (invocationErrorMessage) {
      res["invocationErrorMessage"] = boost::any(*invocationErrorMessage);
    }
    if (invocationId) {
      res["invocationId"] = boost::any(*invocationId);
    }
    if (invocationPayload) {
      res["invocationPayload"] = boost::any(*invocationPayload);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (startedTime) {
      res["startedTime"] = boost::any(*startedTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
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
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("events") != m.end() && !m["events"].empty()) {
      if (typeid(vector<boost::any>) == m["events"].type()) {
        vector<StatefulAsyncInvocationEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StatefulAsyncInvocationEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<StatefulAsyncInvocationEvent>>(expect1);
      }
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("invocationErrorMessage") != m.end() && !m["invocationErrorMessage"].empty()) {
      invocationErrorMessage = make_shared<string>(boost::any_cast<string>(m["invocationErrorMessage"]));
    }
    if (m.find("invocationId") != m.end() && !m["invocationId"].empty()) {
      invocationId = make_shared<string>(boost::any_cast<string>(m["invocationId"]));
    }
    if (m.find("invocationPayload") != m.end() && !m["invocationPayload"].empty()) {
      invocationPayload = make_shared<string>(boost::any_cast<string>(m["invocationPayload"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("startedTime") != m.end() && !m["startedTime"].empty()) {
      startedTime = make_shared<long>(boost::any_cast<long>(m["startedTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~StatefulAsyncInvocation() = default;
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
class TargetTrackingPolicies : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxCapacity{};
  shared_ptr<double> metricTarget{};
  shared_ptr<string> metricType{};
  shared_ptr<long> minCapacity{};
  shared_ptr<string> name{};
  shared_ptr<string> startTime{};

  TargetTrackingPolicies() {}

  explicit TargetTrackingPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TargetTrackingPolicies() = default;
};
class TimeTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};
  shared_ptr<bool> enable{};
  shared_ptr<string> payload{};

  TimeTriggerConfig() {}

  explicit TimeTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TimeTriggerConfig() = default;
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
  shared_ptr<string> role{};
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
    if (role) {
      res["role"] = boost::any(*role);
    }
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
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
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
class VendorConfig : public Darabonba::Model {
public:
  shared_ptr<MeteringConfig> meteringConfig{};

  VendorConfig() {}

  explicit VendorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meteringConfig) {
      res["meteringConfig"] = meteringConfig ? boost::any(meteringConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("meteringConfig") != m.end() && !m["meteringConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["meteringConfig"].type()) {
        MeteringConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meteringConfig"]));
        meteringConfig = make_shared<MeteringConfig>(model1);
      }
    }
  }


  virtual ~VendorConfig() = default;
};
class CreateAliasHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  CreateAliasHeaders() {}

  explicit CreateAliasHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~CreateAliasHeaders() = default;
};
class CreateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> description{};
  shared_ptr<string> versionId{};

  CreateAliasRequest() {}

  explicit CreateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAliasRequest() = default;
};
class CreateAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  CreateAliasResponseBody() {}

  explicit CreateAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAliasResponseBody() = default;
};
class CreateAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAliasResponseBody> body{};

  CreateAliasResponse() {}

  explicit CreateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAliasResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAliasResponse() = default;
};
class CreateCustomDomainHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  CreateCustomDomainHeaders() {}

  explicit CreateCustomDomainHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~CreateCustomDomainHeaders() = default;
};
class CreateCustomDomainRequest : public Darabonba::Model {
public:
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> domainName{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};

  CreateCustomDomainRequest() {}

  explicit CreateCustomDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~CreateCustomDomainRequest() = default;
};
class CreateCustomDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> apiVersion{};
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};

  CreateCustomDomainResponseBody() {}

  explicit CreateCustomDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tlsConfig) {
      res["tlsConfig"] = tlsConfig ? boost::any(tlsConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("tlsConfig") != m.end() && !m["tlsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsConfig"].type()) {
        TLSConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsConfig"]));
        tlsConfig = make_shared<TLSConfig>(model1);
      }
    }
  }


  virtual ~CreateCustomDomainResponseBody() = default;
};
class CreateCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCustomDomainResponseBody> body{};

  CreateCustomDomainResponse() {}

  explicit CreateCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomDomainResponse() = default;
};
class CreateFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcCodeChecksum{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  CreateFunctionHeaders() {}

  explicit CreateFunctionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcCodeChecksum) {
      res["X-Fc-Code-Checksum"] = boost::any(*xFcCodeChecksum);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Code-Checksum") != m.end() && !m["X-Fc-Code-Checksum"].empty()) {
      xFcCodeChecksum = make_shared<string>(boost::any_cast<string>(m["X-Fc-Code-Checksum"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~CreateFunctionHeaders() = default;
};
class CreateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<long> caPort{};
  shared_ptr<Code> code{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> functionName{};
  shared_ptr<string> handler{};
  shared_ptr<long> initializationTimeout{};
  shared_ptr<string> initializer{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<string> instanceType{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};

  CreateFunctionRequest() {}

  explicit CreateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caPort) {
      res["caPort"] = boost::any(*caPort);
    }
    if (code) {
      res["code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (initializationTimeout) {
      res["initializationTimeout"] = boost::any(*initializationTimeout);
    }
    if (initializer) {
      res["initializer"] = boost::any(*initializer);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caPort") != m.end() && !m["caPort"].empty()) {
      caPort = make_shared<long>(boost::any_cast<long>(m["caPort"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      if (typeid(map<string, boost::any>) == m["code"].type()) {
        Code model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["code"]));
        code = make_shared<Code>(model1);
      }
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
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("initializationTimeout") != m.end() && !m["initializationTimeout"].empty()) {
      initializationTimeout = make_shared<long>(boost::any_cast<long>(m["initializationTimeout"]));
    }
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      initializer = make_shared<string>(boost::any_cast<string>(m["initializer"]));
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
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
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
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~CreateFunctionRequest() = default;
};
class CreateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> caPort{};
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codeSize{};
  shared_ptr<string> createdTime{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> functionId{};
  shared_ptr<string> functionName{};
  shared_ptr<string> handler{};
  shared_ptr<long> initializationTimeout{};
  shared_ptr<string> initializer{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};

  CreateFunctionResponseBody() {}

  explicit CreateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caPort) {
      res["caPort"] = boost::any(*caPort);
    }
    if (codeChecksum) {
      res["codeChecksum"] = boost::any(*codeChecksum);
    }
    if (codeSize) {
      res["codeSize"] = boost::any(*codeSize);
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
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (functionId) {
      res["functionId"] = boost::any(*functionId);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (initializationTimeout) {
      res["initializationTimeout"] = boost::any(*initializationTimeout);
    }
    if (initializer) {
      res["initializer"] = boost::any(*initializer);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caPort") != m.end() && !m["caPort"].empty()) {
      caPort = make_shared<long>(boost::any_cast<long>(m["caPort"]));
    }
    if (m.find("codeChecksum") != m.end() && !m["codeChecksum"].empty()) {
      codeChecksum = make_shared<string>(boost::any_cast<string>(m["codeChecksum"]));
    }
    if (m.find("codeSize") != m.end() && !m["codeSize"].empty()) {
      codeSize = make_shared<long>(boost::any_cast<long>(m["codeSize"]));
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
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("functionId") != m.end() && !m["functionId"].empty()) {
      functionId = make_shared<string>(boost::any_cast<string>(m["functionId"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("initializationTimeout") != m.end() && !m["initializationTimeout"].empty()) {
      initializationTimeout = make_shared<long>(boost::any_cast<long>(m["initializationTimeout"]));
    }
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      initializer = make_shared<string>(boost::any_cast<string>(m["initializer"]));
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
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
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
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~CreateFunctionResponseBody() = default;
};
class CreateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFunctionResponseBody> body{};

  CreateFunctionResponse() {}

  explicit CreateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFunctionResponse() = default;
};
class CreateLayerVersionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  CreateLayerVersionHeaders() {}

  explicit CreateLayerVersionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~CreateLayerVersionHeaders() = default;
};
class CreateLayerVersionRequest : public Darabonba::Model {
public:
  shared_ptr<Code> code{};
  shared_ptr<vector<string>> compatibleRuntime{};
  shared_ptr<string> description{};

  CreateLayerVersionRequest() {}

  explicit CreateLayerVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (compatibleRuntime) {
      res["compatibleRuntime"] = boost::any(*compatibleRuntime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      if (typeid(map<string, boost::any>) == m["Code"].type()) {
        Code model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Code"]));
        code = make_shared<Code>(model1);
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
  }


  virtual ~CreateLayerVersionRequest() = default;
};
class CreateLayerVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> acl{};
  shared_ptr<string> arn{};
  shared_ptr<OutputCodeLocation> code{};
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codesize{};
  shared_ptr<vector<string>> compatibleRuntime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> layerName{};
  shared_ptr<long> version{};

  CreateLayerVersionResponseBody() {}

  explicit CreateLayerVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["acl"] = boost::any(*acl);
    }
    if (arn) {
      res["arn"] = boost::any(*arn);
    }
    if (code) {
      res["code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (codeChecksum) {
      res["codeChecksum"] = boost::any(*codeChecksum);
    }
    if (codesize) {
      res["codesize"] = boost::any(*codesize);
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
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      acl = make_shared<long>(boost::any_cast<long>(m["acl"]));
    }
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
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
    if (m.find("codesize") != m.end() && !m["codesize"].empty()) {
      codesize = make_shared<long>(boost::any_cast<long>(m["codesize"]));
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
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~CreateLayerVersionResponseBody() = default;
};
class CreateLayerVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLayerVersionResponseBody> body{};

  CreateLayerVersionResponse() {}

  explicit CreateLayerVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLayerVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLayerVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLayerVersionResponse() = default;
};
class CreateServiceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  CreateServiceHeaders() {}

  explicit CreateServiceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~CreateServiceHeaders() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> serviceName{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
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


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
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
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
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


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class CreateTriggerHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  CreateTriggerHeaders() {}

  explicit CreateTriggerHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~CreateTriggerHeaders() = default;
};
class CreateTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceArn{};
  shared_ptr<boost::any> triggerConfig{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerType{};

  CreateTriggerRequest() {}

  explicit CreateTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      triggerConfig = make_shared<boost::any>(boost::any_cast<boost::any>(m["triggerConfig"]));
    }
    if (m.find("triggerName") != m.end() && !m["triggerName"].empty()) {
      triggerName = make_shared<string>(boost::any_cast<string>(m["triggerName"]));
    }
    if (m.find("triggerType") != m.end() && !m["triggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["triggerType"]));
    }
  }


  virtual ~CreateTriggerRequest() = default;
};
class CreateTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceArn{};
  shared_ptr<string> triggerConfig{};
  shared_ptr<string> triggerId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  CreateTriggerResponseBody() {}

  explicit CreateTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
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
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
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
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
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
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~CreateTriggerResponseBody() = default;
};
class CreateTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTriggerResponseBody> body{};

  CreateTriggerResponse() {}

  explicit CreateTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTriggerResponse() = default;
};
class CreateVpcBindingHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  CreateVpcBindingHeaders() {}

  explicit CreateVpcBindingHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~CreateVpcBindingHeaders() = default;
};
class CreateVpcBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  CreateVpcBindingRequest() {}

  explicit CreateVpcBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
class DeleteAliasHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteAliasHeaders() {}

  explicit DeleteAliasHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteAliasHeaders() = default;
};
class DeleteAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteAliasResponse() {}

  explicit DeleteAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
class DeleteCustomDomainHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteCustomDomainHeaders() {}

  explicit DeleteCustomDomainHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteCustomDomainHeaders() = default;
};
class DeleteCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteCustomDomainResponse() {}

  explicit DeleteCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
class DeleteFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteFunctionHeaders() {}

  explicit DeleteFunctionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteFunctionHeaders() = default;
};
class DeleteFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteFunctionResponse() {}

  explicit DeleteFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
class DeleteFunctionAsyncInvokeConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteFunctionAsyncInvokeConfigHeaders() {}

  explicit DeleteFunctionAsyncInvokeConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteFunctionAsyncInvokeConfigHeaders() = default;
};
class DeleteFunctionAsyncInvokeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  DeleteFunctionAsyncInvokeConfigRequest() {}

  explicit DeleteFunctionAsyncInvokeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFunctionAsyncInvokeConfigRequest() = default;
};
class DeleteFunctionAsyncInvokeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteFunctionAsyncInvokeConfigResponse() {}

  explicit DeleteFunctionAsyncInvokeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~DeleteFunctionAsyncInvokeConfigResponse() = default;
};
class DeleteFunctionOnDemandConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteFunctionOnDemandConfigHeaders() {}

  explicit DeleteFunctionOnDemandConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteFunctionOnDemandConfigHeaders() = default;
};
class DeleteFunctionOnDemandConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  DeleteFunctionOnDemandConfigRequest() {}

  explicit DeleteFunctionOnDemandConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFunctionOnDemandConfigRequest() = default;
};
class DeleteFunctionOnDemandConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteFunctionOnDemandConfigResponse() {}

  explicit DeleteFunctionOnDemandConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~DeleteFunctionOnDemandConfigResponse() = default;
};
class DeleteLayerVersionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteLayerVersionHeaders() {}

  explicit DeleteLayerVersionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteLayerVersionHeaders() = default;
};
class DeleteLayerVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteLayerVersionResponse() {}

  explicit DeleteLayerVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
class DeleteServiceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteServiceHeaders() {}

  explicit DeleteServiceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteServiceHeaders() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~DeleteServiceResponse() = default;
};
class DeleteServiceVersionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteServiceVersionHeaders() {}

  explicit DeleteServiceVersionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteServiceVersionHeaders() = default;
};
class DeleteServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteServiceVersionResponse() {}

  explicit DeleteServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~DeleteServiceVersionResponse() = default;
};
class DeleteTriggerHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteTriggerHeaders() {}

  explicit DeleteTriggerHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteTriggerHeaders() = default;
};
class DeleteTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteTriggerResponse() {}

  explicit DeleteTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
class DeleteVpcBindingHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeleteVpcBindingHeaders() {}

  explicit DeleteVpcBindingHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeleteVpcBindingHeaders() = default;
};
class DeleteVpcBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteVpcBindingResponse() {}

  explicit DeleteVpcBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
class DeregisterEventSourceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  DeregisterEventSourceHeaders() {}

  explicit DeregisterEventSourceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~DeregisterEventSourceHeaders() = default;
};
class DeregisterEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  DeregisterEventSourceRequest() {}

  explicit DeregisterEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeregisterEventSourceRequest() = default;
};
class DeregisterEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeregisterEventSourceResponse() {}

  explicit DeregisterEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~DeregisterEventSourceResponse() = default;
};
class GetAccountSettingsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetAccountSettingsHeaders() {}

  explicit GetAccountSettingsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetAccountSettingsHeaders() = default;
};
class GetAccountSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> availableAZs{};
  shared_ptr<string> defaultRole{};

  GetAccountSettingsResponseBody() {}

  explicit GetAccountSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAZs) {
      res["availableAZs"] = boost::any(*availableAZs);
    }
    if (defaultRole) {
      res["defaultRole"] = boost::any(*defaultRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("availableAZs") != m.end() && !m["availableAZs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["availableAZs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["availableAZs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      availableAZs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("defaultRole") != m.end() && !m["defaultRole"].empty()) {
      defaultRole = make_shared<string>(boost::any_cast<string>(m["defaultRole"]));
    }
  }


  virtual ~GetAccountSettingsResponseBody() = default;
};
class GetAccountSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountSettingsResponseBody> body{};

  GetAccountSettingsResponse() {}

  explicit GetAccountSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountSettingsResponse() = default;
};
class GetAliasHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetAliasHeaders() {}

  explicit GetAliasHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetAliasHeaders() = default;
};
class GetAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  GetAliasResponseBody() {}

  explicit GetAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAliasResponseBody() = default;
};
class GetAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAliasResponseBody> body{};

  GetAliasResponse() {}

  explicit GetAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAliasResponseBody>(model1);
      }
    }
  }


  virtual ~GetAliasResponse() = default;
};
class GetCustomDomainHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetCustomDomainHeaders() {}

  explicit GetCustomDomainHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetCustomDomainHeaders() = default;
};
class GetCustomDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> apiVersion{};
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};

  GetCustomDomainResponseBody() {}

  explicit GetCustomDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tlsConfig) {
      res["tlsConfig"] = tlsConfig ? boost::any(tlsConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("tlsConfig") != m.end() && !m["tlsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsConfig"].type()) {
        TLSConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsConfig"]));
        tlsConfig = make_shared<TLSConfig>(model1);
      }
    }
  }


  virtual ~GetCustomDomainResponseBody() = default;
};
class GetCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCustomDomainResponseBody> body{};

  GetCustomDomainResponse() {}

  explicit GetCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomDomainResponse() = default;
};
class GetFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetFunctionHeaders() {}

  explicit GetFunctionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetFunctionHeaders() = default;
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
class GetFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> caPort{};
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codeSize{};
  shared_ptr<string> createdTime{};
  shared_ptr<CustomContainerConfigInfo> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> functionId{};
  shared_ptr<string> functionName{};
  shared_ptr<string> handler{};
  shared_ptr<long> initializationTimeout{};
  shared_ptr<string> initializer{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};

  GetFunctionResponseBody() {}

  explicit GetFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caPort) {
      res["caPort"] = boost::any(*caPort);
    }
    if (codeChecksum) {
      res["codeChecksum"] = boost::any(*codeChecksum);
    }
    if (codeSize) {
      res["codeSize"] = boost::any(*codeSize);
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
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (functionId) {
      res["functionId"] = boost::any(*functionId);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (initializationTimeout) {
      res["initializationTimeout"] = boost::any(*initializationTimeout);
    }
    if (initializer) {
      res["initializer"] = boost::any(*initializer);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caPort") != m.end() && !m["caPort"].empty()) {
      caPort = make_shared<long>(boost::any_cast<long>(m["caPort"]));
    }
    if (m.find("codeChecksum") != m.end() && !m["codeChecksum"].empty()) {
      codeChecksum = make_shared<string>(boost::any_cast<string>(m["codeChecksum"]));
    }
    if (m.find("codeSize") != m.end() && !m["codeSize"].empty()) {
      codeSize = make_shared<long>(boost::any_cast<long>(m["codeSize"]));
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("customContainerConfig") != m.end() && !m["customContainerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customContainerConfig"].type()) {
        CustomContainerConfigInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customContainerConfig"]));
        customContainerConfig = make_shared<CustomContainerConfigInfo>(model1);
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
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("functionId") != m.end() && !m["functionId"].empty()) {
      functionId = make_shared<string>(boost::any_cast<string>(m["functionId"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("initializationTimeout") != m.end() && !m["initializationTimeout"].empty()) {
      initializationTimeout = make_shared<long>(boost::any_cast<long>(m["initializationTimeout"]));
    }
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      initializer = make_shared<string>(boost::any_cast<string>(m["initializer"]));
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
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
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
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~GetFunctionResponseBody() = default;
};
class GetFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionResponseBody> body{};

  GetFunctionResponse() {}

  explicit GetFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionResponse() = default;
};
class GetFunctionAsyncInvokeConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetFunctionAsyncInvokeConfigHeaders() {}

  explicit GetFunctionAsyncInvokeConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetFunctionAsyncInvokeConfigHeaders() = default;
};
class GetFunctionAsyncInvokeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetFunctionAsyncInvokeConfigRequest() {}

  explicit GetFunctionAsyncInvokeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetFunctionAsyncInvokeConfigRequest() = default;
};
class GetFunctionAsyncInvokeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<DestinationConfig> destinationConfig{};
  shared_ptr<string> function{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<long> maxAsyncEventAgeInSeconds{};
  shared_ptr<long> maxAsyncRetryAttempts{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> service{};
  shared_ptr<bool> statefulInvocation{};

  GetFunctionAsyncInvokeConfigResponseBody() {}

  explicit GetFunctionAsyncInvokeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (destinationConfig) {
      res["destinationConfig"] = destinationConfig ? boost::any(destinationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (function) {
      res["function"] = boost::any(*function);
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
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (statefulInvocation) {
      res["statefulInvocation"] = boost::any(*statefulInvocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("function") != m.end() && !m["function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["function"]));
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
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("statefulInvocation") != m.end() && !m["statefulInvocation"].empty()) {
      statefulInvocation = make_shared<bool>(boost::any_cast<bool>(m["statefulInvocation"]));
    }
  }


  virtual ~GetFunctionAsyncInvokeConfigResponseBody() = default;
};
class GetFunctionAsyncInvokeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionAsyncInvokeConfigResponseBody> body{};

  GetFunctionAsyncInvokeConfigResponse() {}

  explicit GetFunctionAsyncInvokeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFunctionAsyncInvokeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionAsyncInvokeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionAsyncInvokeConfigResponse() = default;
};
class GetFunctionCodeHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetFunctionCodeHeaders() {}

  explicit GetFunctionCodeHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetFunctionCodeHeaders() = default;
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
class GetFunctionCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> checksum{};
  shared_ptr<string> url{};

  GetFunctionCodeResponseBody() {}

  explicit GetFunctionCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetFunctionCodeResponseBody() = default;
};
class GetFunctionCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionCodeResponseBody> body{};

  GetFunctionCodeResponse() {}

  explicit GetFunctionCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFunctionCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionCodeResponse() = default;
};
class GetFunctionOnDemandConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetFunctionOnDemandConfigHeaders() {}

  explicit GetFunctionOnDemandConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetFunctionOnDemandConfigHeaders() = default;
};
class GetFunctionOnDemandConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetFunctionOnDemandConfigRequest() {}

  explicit GetFunctionOnDemandConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetFunctionOnDemandConfigRequest() = default;
};
class GetFunctionOnDemandConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maximumInstanceCount{};
  shared_ptr<string> resource{};

  GetFunctionOnDemandConfigResponseBody() {}

  explicit GetFunctionOnDemandConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumInstanceCount) {
      res["maximumInstanceCount"] = boost::any(*maximumInstanceCount);
    }
    if (resource) {
      res["resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maximumInstanceCount") != m.end() && !m["maximumInstanceCount"].empty()) {
      maximumInstanceCount = make_shared<long>(boost::any_cast<long>(m["maximumInstanceCount"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["resource"]));
    }
  }


  virtual ~GetFunctionOnDemandConfigResponseBody() = default;
};
class GetFunctionOnDemandConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionOnDemandConfigResponseBody> body{};

  GetFunctionOnDemandConfigResponse() {}

  explicit GetFunctionOnDemandConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFunctionOnDemandConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionOnDemandConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionOnDemandConfigResponse() = default;
};
class GetLayerVersionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetLayerVersionHeaders() {}

  explicit GetLayerVersionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetLayerVersionHeaders() = default;
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
        Layer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Layer>(model1);
      }
    }
  }


  virtual ~GetLayerVersionResponse() = default;
};
class GetProvisionConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetProvisionConfigHeaders() {}

  explicit GetProvisionConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetProvisionConfigHeaders() = default;
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
class GetProvisionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateCPU{};
  shared_ptr<long> current{};
  shared_ptr<string> currentError{};
  shared_ptr<string> resource{};
  shared_ptr<vector<ScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};
  shared_ptr<vector<TargetTrackingPolicies>> targetTrackingPolicies{};

  GetProvisionConfigResponseBody() {}

  explicit GetProvisionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resource) {
      res["resource"] = boost::any(*resource);
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
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["resource"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<ScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<ScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("targetTrackingPolicies") != m.end() && !m["targetTrackingPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["targetTrackingPolicies"].type()) {
        vector<TargetTrackingPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["targetTrackingPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetTrackingPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetTrackingPolicies = make_shared<vector<TargetTrackingPolicies>>(expect1);
      }
    }
  }


  virtual ~GetProvisionConfigResponseBody() = default;
};
class GetProvisionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProvisionConfigResponseBody> body{};

  GetProvisionConfigResponse() {}

  explicit GetProvisionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProvisionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProvisionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetProvisionConfigResponse() = default;
};
class GetResourceTagsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetResourceTagsHeaders() {}

  explicit GetResourceTagsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetResourceTagsHeaders() = default;
};
class GetResourceTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};

  GetResourceTagsRequest() {}

  explicit GetResourceTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceArn) {
      res["resourceArn"] = boost::any(*resourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceArn") != m.end() && !m["resourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["resourceArn"]));
    }
  }


  virtual ~GetResourceTagsRequest() = default;
};
class GetResourceTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};
  shared_ptr<map<string, string>> tags{};

  GetResourceTagsResponseBody() {}

  explicit GetResourceTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResourceTagsResponseBody() = default;
};
class GetResourceTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceTagsResponseBody> body{};

  GetResourceTagsResponse() {}

  explicit GetResourceTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceTagsResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceTagsResponse() = default;
};
class GetServiceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetServiceHeaders() {}

  explicit GetServiceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetServiceHeaders() = default;
};
class GetServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetServiceRequest() {}

  explicit GetServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceRequest() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
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
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
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


  virtual ~GetServiceResponseBody() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceResponseBody> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
};
class GetStatefulAsyncInvocationHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcCodeChecksum{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcInvocationType{};
  shared_ptr<string> xFcLogType{};
  shared_ptr<string> xFcTraceId{};

  GetStatefulAsyncInvocationHeaders() {}

  explicit GetStatefulAsyncInvocationHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcCodeChecksum) {
      res["X-Fc-Code-Checksum"] = boost::any(*xFcCodeChecksum);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcInvocationType) {
      res["X-Fc-Invocation-Type"] = boost::any(*xFcInvocationType);
    }
    if (xFcLogType) {
      res["X-Fc-Log-Type"] = boost::any(*xFcLogType);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Code-Checksum") != m.end() && !m["X-Fc-Code-Checksum"].empty()) {
      xFcCodeChecksum = make_shared<string>(boost::any_cast<string>(m["X-Fc-Code-Checksum"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Invocation-Type") != m.end() && !m["X-Fc-Invocation-Type"].empty()) {
      xFcInvocationType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Invocation-Type"]));
    }
    if (m.find("X-Fc-Log-Type") != m.end() && !m["X-Fc-Log-Type"].empty()) {
      xFcLogType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Log-Type"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetStatefulAsyncInvocationHeaders() = default;
};
class GetStatefulAsyncInvocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  GetStatefulAsyncInvocationRequest() {}

  explicit GetStatefulAsyncInvocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetStatefulAsyncInvocationRequest() = default;
};
class GetStatefulAsyncInvocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StatefulAsyncInvocation> body{};

  GetStatefulAsyncInvocationResponse() {}

  explicit GetStatefulAsyncInvocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StatefulAsyncInvocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StatefulAsyncInvocation>(model1);
      }
    }
  }


  virtual ~GetStatefulAsyncInvocationResponse() = default;
};
class GetTriggerHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  GetTriggerHeaders() {}

  explicit GetTriggerHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~GetTriggerHeaders() = default;
};
class GetTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceArn{};
  shared_ptr<string> triggerConfig{};
  shared_ptr<string> triggerId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  GetTriggerResponseBody() {}

  explicit GetTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
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
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
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
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
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
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~GetTriggerResponseBody() = default;
};
class GetTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTriggerResponseBody> body{};

  GetTriggerResponse() {}

  explicit GetTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~GetTriggerResponse() = default;
};
class InvokeFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcInvocationType{};
  shared_ptr<string> xFcLogType{};
  shared_ptr<string> xFcStatefulAsyncInvocationId{};
  shared_ptr<string> xFcTraceId{};

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
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcInvocationType) {
      res["X-Fc-Invocation-Type"] = boost::any(*xFcInvocationType);
    }
    if (xFcLogType) {
      res["X-Fc-Log-Type"] = boost::any(*xFcLogType);
    }
    if (xFcStatefulAsyncInvocationId) {
      res["X-Fc-Stateful-Async-Invocation-Id"] = boost::any(*xFcStatefulAsyncInvocationId);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Invocation-Type") != m.end() && !m["X-Fc-Invocation-Type"].empty()) {
      xFcInvocationType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Invocation-Type"]));
    }
    if (m.find("X-Fc-Log-Type") != m.end() && !m["X-Fc-Log-Type"].empty()) {
      xFcLogType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Log-Type"]));
    }
    if (m.find("X-Fc-Stateful-Async-Invocation-Id") != m.end() && !m["X-Fc-Stateful-Async-Invocation-Id"].empty()) {
      xFcStatefulAsyncInvocationId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Stateful-Async-Invocation-Id"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~InvokeFunctionHeaders() = default;
};
class InvokeFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<boost::any> body{};
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
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
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
  shared_ptr<vector<uint8_t>> body{};

  InvokeFunctionResponse() {}

  explicit InvokeFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      body = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["body"]));
    }
  }


  virtual ~InvokeFunctionResponse() = default;
};
class ListAliasesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListAliasesHeaders() {}

  explicit ListAliasesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListAliasesHeaders() = default;
};
class ListAliasesRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> startKey{};

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
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListAliasesRequest() = default;
};
class ListAliasesResponseBodyAliases : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  ListAliasesResponseBodyAliases() {}

  explicit ListAliasesResponseBodyAliases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAliasesResponseBodyAliases() = default;
};
class ListAliasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAliasesResponseBodyAliases>> aliases{};
  shared_ptr<string> nextToken{};

  ListAliasesResponseBody() {}

  explicit ListAliasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListAliasesResponseBodyAliases> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["aliases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAliasesResponseBodyAliases model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliases = make_shared<vector<ListAliasesResponseBodyAliases>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListAliasesResponseBody() = default;
};
class ListAliasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAliasesResponseBody> body{};

  ListAliasesResponse() {}

  explicit ListAliasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAliasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAliasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAliasesResponse() = default;
};
class ListCustomDomainsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListCustomDomainsHeaders() {}

  explicit ListCustomDomainsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListCustomDomainsHeaders() = default;
};
class ListCustomDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> startKey{};

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
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListCustomDomainsRequest() = default;
};
class ListCustomDomainsResponseBodyCustomDomains : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> apiVersion{};
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};

  ListCustomDomainsResponseBodyCustomDomains() {}

  explicit ListCustomDomainsResponseBodyCustomDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tlsConfig) {
      res["tlsConfig"] = tlsConfig ? boost::any(tlsConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("tlsConfig") != m.end() && !m["tlsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsConfig"].type()) {
        TLSConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsConfig"]));
        tlsConfig = make_shared<TLSConfig>(model1);
      }
    }
  }


  virtual ~ListCustomDomainsResponseBodyCustomDomains() = default;
};
class ListCustomDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCustomDomainsResponseBodyCustomDomains>> customDomains{};
  shared_ptr<string> nextToken{};

  ListCustomDomainsResponseBody() {}

  explicit ListCustomDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListCustomDomainsResponseBodyCustomDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCustomDomainsResponseBodyCustomDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customDomains = make_shared<vector<ListCustomDomainsResponseBodyCustomDomains>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListCustomDomainsResponseBody() = default;
};
class ListCustomDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCustomDomainsResponseBody> body{};

  ListCustomDomainsResponse() {}

  explicit ListCustomDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCustomDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCustomDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCustomDomainsResponse() = default;
};
class ListEventSourcesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListEventSourcesHeaders() {}

  explicit ListEventSourcesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListEventSourcesHeaders() = default;
};
class ListEventSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  ListEventSourcesRequest() {}

  explicit ListEventSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListEventSourcesRequest() = default;
};
class ListEventSourcesResponseBodyEventSources : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> sourceArn{};

  ListEventSourcesResponseBodyEventSources() {}

  explicit ListEventSourcesResponseBodyEventSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (sourceArn) {
      res["sourceArn"] = boost::any(*sourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("sourceArn") != m.end() && !m["sourceArn"].empty()) {
      sourceArn = make_shared<string>(boost::any_cast<string>(m["sourceArn"]));
    }
  }


  virtual ~ListEventSourcesResponseBodyEventSources() = default;
};
class ListEventSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEventSourcesResponseBodyEventSources>> eventSources{};

  ListEventSourcesResponseBody() {}

  explicit ListEventSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSources) {
      vector<boost::any> temp1;
      for(auto item1:*eventSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["eventSources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eventSources") != m.end() && !m["eventSources"].empty()) {
      if (typeid(vector<boost::any>) == m["eventSources"].type()) {
        vector<ListEventSourcesResponseBodyEventSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["eventSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventSourcesResponseBodyEventSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventSources = make_shared<vector<ListEventSourcesResponseBodyEventSources>>(expect1);
      }
    }
  }


  virtual ~ListEventSourcesResponseBody() = default;
};
class ListEventSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEventSourcesResponseBody> body{};

  ListEventSourcesResponse() {}

  explicit ListEventSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEventSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEventSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEventSourcesResponse() = default;
};
class ListFunctionAsyncInvokeConfigsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcCodeChecksum{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcInvocationType{};
  shared_ptr<string> xFcLogType{};
  shared_ptr<string> xFcTraceId{};

  ListFunctionAsyncInvokeConfigsHeaders() {}

  explicit ListFunctionAsyncInvokeConfigsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcCodeChecksum) {
      res["X-Fc-Code-Checksum"] = boost::any(*xFcCodeChecksum);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcInvocationType) {
      res["X-Fc-Invocation-Type"] = boost::any(*xFcInvocationType);
    }
    if (xFcLogType) {
      res["X-Fc-Log-Type"] = boost::any(*xFcLogType);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Code-Checksum") != m.end() && !m["X-Fc-Code-Checksum"].empty()) {
      xFcCodeChecksum = make_shared<string>(boost::any_cast<string>(m["X-Fc-Code-Checksum"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Invocation-Type") != m.end() && !m["X-Fc-Invocation-Type"].empty()) {
      xFcInvocationType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Invocation-Type"]));
    }
    if (m.find("X-Fc-Log-Type") != m.end() && !m["X-Fc-Log-Type"].empty()) {
      xFcLogType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Log-Type"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListFunctionAsyncInvokeConfigsHeaders() = default;
};
class ListFunctionAsyncInvokeConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListFunctionAsyncInvokeConfigsRequest() {}

  explicit ListFunctionAsyncInvokeConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListFunctionAsyncInvokeConfigsRequest() = default;
};
class ListFunctionAsyncInvokeConfigsResponseBodyConfigs : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<DestinationConfig> destinationConfig{};
  shared_ptr<string> function{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<long> maxAsyncEventAgeInSeconds{};
  shared_ptr<long> maxAsyncRetryAttempts{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> service{};
  shared_ptr<bool> statefulInvocation{};

  ListFunctionAsyncInvokeConfigsResponseBodyConfigs() {}

  explicit ListFunctionAsyncInvokeConfigsResponseBodyConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (destinationConfig) {
      res["destinationConfig"] = destinationConfig ? boost::any(destinationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (function) {
      res["function"] = boost::any(*function);
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
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (statefulInvocation) {
      res["statefulInvocation"] = boost::any(*statefulInvocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("function") != m.end() && !m["function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["function"]));
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
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("statefulInvocation") != m.end() && !m["statefulInvocation"].empty()) {
      statefulInvocation = make_shared<bool>(boost::any_cast<bool>(m["statefulInvocation"]));
    }
  }


  virtual ~ListFunctionAsyncInvokeConfigsResponseBodyConfigs() = default;
};
class ListFunctionAsyncInvokeConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionAsyncInvokeConfigsResponseBodyConfigs>> configs{};
  shared_ptr<string> nextToken{};

  ListFunctionAsyncInvokeConfigsResponseBody() {}

  explicit ListFunctionAsyncInvokeConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListFunctionAsyncInvokeConfigsResponseBodyConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionAsyncInvokeConfigsResponseBodyConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<ListFunctionAsyncInvokeConfigsResponseBodyConfigs>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListFunctionAsyncInvokeConfigsResponseBody() = default;
};
class ListFunctionAsyncInvokeConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionAsyncInvokeConfigsResponseBody> body{};

  ListFunctionAsyncInvokeConfigsResponse() {}

  explicit ListFunctionAsyncInvokeConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFunctionAsyncInvokeConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionAsyncInvokeConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionAsyncInvokeConfigsResponse() = default;
};
class ListFunctionsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListFunctionsHeaders() {}

  explicit ListFunctionsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListFunctionsHeaders() = default;
};
class ListFunctionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> startKey{};

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
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListFunctionsRequest() = default;
};
class ListFunctionsResponseBodyFunctions : public Darabonba::Model {
public:
  shared_ptr<long> caPort{};
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codeSize{};
  shared_ptr<string> createdTime{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> functionId{};
  shared_ptr<string> functionName{};
  shared_ptr<string> handler{};
  shared_ptr<long> initializationTimeout{};
  shared_ptr<string> initializer{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};

  ListFunctionsResponseBodyFunctions() {}

  explicit ListFunctionsResponseBodyFunctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caPort) {
      res["caPort"] = boost::any(*caPort);
    }
    if (codeChecksum) {
      res["codeChecksum"] = boost::any(*codeChecksum);
    }
    if (codeSize) {
      res["codeSize"] = boost::any(*codeSize);
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (customContainerConfig) {
      res["customContainerConfig"] = customContainerConfig ? boost::any(customContainerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (functionId) {
      res["functionId"] = boost::any(*functionId);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (initializationTimeout) {
      res["initializationTimeout"] = boost::any(*initializationTimeout);
    }
    if (initializer) {
      res["initializer"] = boost::any(*initializer);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caPort") != m.end() && !m["caPort"].empty()) {
      caPort = make_shared<long>(boost::any_cast<long>(m["caPort"]));
    }
    if (m.find("codeChecksum") != m.end() && !m["codeChecksum"].empty()) {
      codeChecksum = make_shared<string>(boost::any_cast<string>(m["codeChecksum"]));
    }
    if (m.find("codeSize") != m.end() && !m["codeSize"].empty()) {
      codeSize = make_shared<long>(boost::any_cast<long>(m["codeSize"]));
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("functionId") != m.end() && !m["functionId"].empty()) {
      functionId = make_shared<string>(boost::any_cast<string>(m["functionId"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("initializationTimeout") != m.end() && !m["initializationTimeout"].empty()) {
      initializationTimeout = make_shared<long>(boost::any_cast<long>(m["initializationTimeout"]));
    }
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      initializer = make_shared<string>(boost::any_cast<string>(m["initializer"]));
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
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
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
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~ListFunctionsResponseBodyFunctions() = default;
};
class ListFunctionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionsResponseBodyFunctions>> functions{};
  shared_ptr<string> nextToken{};

  ListFunctionsResponseBody() {}

  explicit ListFunctionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListFunctionsResponseBodyFunctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionsResponseBodyFunctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functions = make_shared<vector<ListFunctionsResponseBodyFunctions>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListFunctionsResponseBody() = default;
};
class ListFunctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionsResponseBody> body{};

  ListFunctionsResponse() {}

  explicit ListFunctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFunctionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponse() = default;
};
class ListInstancesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListInstancesHeaders() {}

  explicit ListInstancesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListInstancesHeaders() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> limit{};
  shared_ptr<string> qualifier{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["instanceIds"] = boost::any(*instanceIds);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceIds") != m.end() && !m["instanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> versionId{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
      }
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListLayerVersionsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListLayerVersionsHeaders() {}

  explicit ListLayerVersionsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListLayerVersionsHeaders() = default;
};
class ListLayerVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> startVersion{};

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
      startVersion = make_shared<long>(boost::any_cast<long>(m["startVersion"]));
    }
  }


  virtual ~ListLayerVersionsRequest() = default;
};
class ListLayerVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Layer>> layers{};
  shared_ptr<long> nextVersion{};

  ListLayerVersionsResponseBody() {}

  explicit ListLayerVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListLayerVersionsResponseBody() = default;
};
class ListLayerVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLayerVersionsResponseBody> body{};

  ListLayerVersionsResponse() {}

  explicit ListLayerVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLayerVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLayerVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLayerVersionsResponse() = default;
};
class ListLayersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListLayersHeaders() {}

  explicit ListLayersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListLayersHeaders() = default;
};
class ListLayersRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> startKey{};

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
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListLayersRequest() = default;
};
class ListLayersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Layer>> layers{};
  shared_ptr<string> nextToken{};

  ListLayersResponseBody() {}

  explicit ListLayersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListLayersResponseBody() = default;
};
class ListLayersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLayersResponseBody> body{};

  ListLayersResponse() {}

  explicit ListLayersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLayersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLayersResponseBody>(model1);
      }
    }
  }


  virtual ~ListLayersResponse() = default;
};
class ListOnDemandConfigsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListOnDemandConfigsHeaders() {}

  explicit ListOnDemandConfigsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListOnDemandConfigsHeaders() = default;
};
class ListOnDemandConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> startKey{};

  ListOnDemandConfigsRequest() {}

  explicit ListOnDemandConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListOnDemandConfigsRequest() = default;
};
class ListOnDemandConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<OnDemandConfig>> configs{};
  shared_ptr<string> nextToken{};

  ListOnDemandConfigsResponseBody() {}

  explicit ListOnDemandConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<OnDemandConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnDemandConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<OnDemandConfig>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListOnDemandConfigsResponseBody() = default;
};
class ListOnDemandConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOnDemandConfigsResponseBody> body{};

  ListOnDemandConfigsResponse() {}

  explicit ListOnDemandConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOnDemandConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOnDemandConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOnDemandConfigsResponse() = default;
};
class ListProvisionConfigsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListProvisionConfigsHeaders() {}

  explicit ListProvisionConfigsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListProvisionConfigsHeaders() = default;
};
class ListProvisionConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> serviceName{};

  ListProvisionConfigsRequest() {}

  explicit ListProvisionConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
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
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~ListProvisionConfigsRequest() = default;
};
class ListProvisionConfigsResponseBodyProvisionConfigs : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateCPU{};
  shared_ptr<long> current{};
  shared_ptr<string> currentError{};
  shared_ptr<string> resource{};
  shared_ptr<vector<ScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};
  shared_ptr<vector<TargetTrackingPolicies>> targetTrackingPolicies{};

  ListProvisionConfigsResponseBodyProvisionConfigs() {}

  explicit ListProvisionConfigsResponseBodyProvisionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resource) {
      res["resource"] = boost::any(*resource);
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
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["resource"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<ScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<ScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("targetTrackingPolicies") != m.end() && !m["targetTrackingPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["targetTrackingPolicies"].type()) {
        vector<TargetTrackingPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["targetTrackingPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetTrackingPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetTrackingPolicies = make_shared<vector<TargetTrackingPolicies>>(expect1);
      }
    }
  }


  virtual ~ListProvisionConfigsResponseBodyProvisionConfigs() = default;
};
class ListProvisionConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListProvisionConfigsResponseBodyProvisionConfigs>> provisionConfigs{};

  ListProvisionConfigsResponseBody() {}

  explicit ListProvisionConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListProvisionConfigsResponseBodyProvisionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["provisionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProvisionConfigsResponseBodyProvisionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        provisionConfigs = make_shared<vector<ListProvisionConfigsResponseBodyProvisionConfigs>>(expect1);
      }
    }
  }


  virtual ~ListProvisionConfigsResponseBody() = default;
};
class ListProvisionConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProvisionConfigsResponseBody> body{};

  ListProvisionConfigsResponse() {}

  explicit ListProvisionConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProvisionConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProvisionConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProvisionConfigsResponse() = default;
};
class ListReservedCapacitiesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListReservedCapacitiesHeaders() {}

  explicit ListReservedCapacitiesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListReservedCapacitiesHeaders() = default;
};
class ListReservedCapacitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> limit{};
  shared_ptr<string> nextToken{};

  ListReservedCapacitiesRequest() {}

  explicit ListReservedCapacitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<string>(boost::any_cast<string>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListReservedCapacitiesRequest() = default;
};
class ListReservedCapacitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<OpenReservedCapacity>> reservedCapacities{};

  ListReservedCapacitiesResponseBody() {}

  explicit ListReservedCapacitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (reservedCapacities) {
      vector<boost::any> temp1;
      for(auto item1:*reservedCapacities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["reservedCapacities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("reservedCapacities") != m.end() && !m["reservedCapacities"].empty()) {
      if (typeid(vector<boost::any>) == m["reservedCapacities"].type()) {
        vector<OpenReservedCapacity> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["reservedCapacities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OpenReservedCapacity model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reservedCapacities = make_shared<vector<OpenReservedCapacity>>(expect1);
      }
    }
  }


  virtual ~ListReservedCapacitiesResponseBody() = default;
};
class ListReservedCapacitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListReservedCapacitiesResponseBody> body{};

  ListReservedCapacitiesResponse() {}

  explicit ListReservedCapacitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListReservedCapacitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListReservedCapacitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListReservedCapacitiesResponse() = default;
};
class ListServiceVersionsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListServiceVersionsHeaders() {}

  explicit ListServiceVersionsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListServiceVersionsHeaders() = default;
};
class ListServiceVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> startKey{};

  ListServiceVersionsRequest() {}

  explicit ListServiceVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListServiceVersionsRequest() = default;
};
class ListServiceVersionsResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  ListServiceVersionsResponseBodyVersions() {}

  explicit ListServiceVersionsResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceVersionsResponseBodyVersions() = default;
};
class ListServiceVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListServiceVersionsResponseBodyVersions>> versions{};

  ListServiceVersionsResponseBody() {}

  explicit ListServiceVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListServiceVersionsResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceVersionsResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListServiceVersionsResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~ListServiceVersionsResponseBody() = default;
};
class ListServiceVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceVersionsResponseBody> body{};

  ListServiceVersionsResponse() {}

  explicit ListServiceVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceVersionsResponse() = default;
};
class ListServicesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListServicesHeaders() {}

  explicit ListServicesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListServicesHeaders() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> startKey{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  ListServicesResponseBodyServices() {}

  explicit ListServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
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
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
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


  virtual ~ListServicesResponseBodyServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListServicesResponseBodyServices>> services{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["services"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<ListServicesResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListServicesResponseBodyServices>>(expect1);
      }
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class ListStatefulAsyncInvocationFunctionsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListStatefulAsyncInvocationFunctionsHeaders() {}

  explicit ListStatefulAsyncInvocationFunctionsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListStatefulAsyncInvocationFunctionsHeaders() = default;
};
class ListStatefulAsyncInvocationFunctionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListStatefulAsyncInvocationFunctionsRequest() {}

  explicit ListStatefulAsyncInvocationFunctionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListStatefulAsyncInvocationFunctionsRequest() = default;
};
class ListStatefulAsyncInvocationFunctionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AsyncConfigMeta>> data{};
  shared_ptr<string> nextToken{};

  ListStatefulAsyncInvocationFunctionsResponseBody() {}

  explicit ListStatefulAsyncInvocationFunctionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<AsyncConfigMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AsyncConfigMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AsyncConfigMeta>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListStatefulAsyncInvocationFunctionsResponseBody() = default;
};
class ListStatefulAsyncInvocationFunctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStatefulAsyncInvocationFunctionsResponseBody> body{};

  ListStatefulAsyncInvocationFunctionsResponse() {}

  explicit ListStatefulAsyncInvocationFunctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStatefulAsyncInvocationFunctionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStatefulAsyncInvocationFunctionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStatefulAsyncInvocationFunctionsResponse() = default;
};
class ListStatefulAsyncInvocationsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcCodeChecksum{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcInvocationType{};
  shared_ptr<string> xFcLogType{};
  shared_ptr<string> xFcTraceId{};

  ListStatefulAsyncInvocationsHeaders() {}

  explicit ListStatefulAsyncInvocationsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcCodeChecksum) {
      res["X-Fc-Code-Checksum"] = boost::any(*xFcCodeChecksum);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcInvocationType) {
      res["X-Fc-Invocation-Type"] = boost::any(*xFcInvocationType);
    }
    if (xFcLogType) {
      res["X-Fc-Log-Type"] = boost::any(*xFcLogType);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Code-Checksum") != m.end() && !m["X-Fc-Code-Checksum"].empty()) {
      xFcCodeChecksum = make_shared<string>(boost::any_cast<string>(m["X-Fc-Code-Checksum"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Invocation-Type") != m.end() && !m["X-Fc-Invocation-Type"].empty()) {
      xFcInvocationType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Invocation-Type"]));
    }
    if (m.find("X-Fc-Log-Type") != m.end() && !m["X-Fc-Log-Type"].empty()) {
      xFcLogType = make_shared<string>(boost::any_cast<string>(m["X-Fc-Log-Type"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListStatefulAsyncInvocationsHeaders() = default;
};
class ListStatefulAsyncInvocationsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includePayload{};
  shared_ptr<string> invocationIdPrefix{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sortOrderByTime{};
  shared_ptr<long> startedTimeBegin{};
  shared_ptr<long> startedTimeEnd{};
  shared_ptr<string> status{};

  ListStatefulAsyncInvocationsRequest() {}

  explicit ListStatefulAsyncInvocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includePayload) {
      res["includePayload"] = boost::any(*includePayload);
    }
    if (invocationIdPrefix) {
      res["invocationIdPrefix"] = boost::any(*invocationIdPrefix);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
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
    if (m.find("invocationIdPrefix") != m.end() && !m["invocationIdPrefix"].empty()) {
      invocationIdPrefix = make_shared<string>(boost::any_cast<string>(m["invocationIdPrefix"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
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


  virtual ~ListStatefulAsyncInvocationsRequest() = default;
};
class ListStatefulAsyncInvocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<StatefulAsyncInvocation>> invocations{};
  shared_ptr<string> nextToken{};

  ListStatefulAsyncInvocationsResponseBody() {}

  explicit ListStatefulAsyncInvocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocations) {
      vector<boost::any> temp1;
      for(auto item1:*invocations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["invocations"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("invocations") != m.end() && !m["invocations"].empty()) {
      if (typeid(vector<boost::any>) == m["invocations"].type()) {
        vector<StatefulAsyncInvocation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["invocations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StatefulAsyncInvocation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invocations = make_shared<vector<StatefulAsyncInvocation>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListStatefulAsyncInvocationsResponseBody() = default;
};
class ListStatefulAsyncInvocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStatefulAsyncInvocationsResponseBody> body{};

  ListStatefulAsyncInvocationsResponse() {}

  explicit ListStatefulAsyncInvocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStatefulAsyncInvocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStatefulAsyncInvocationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStatefulAsyncInvocationsResponse() = default;
};
class ListTaggedResourcesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListTaggedResourcesHeaders() {}

  explicit ListTaggedResourcesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListTaggedResourcesHeaders() = default;
};
class ListTaggedResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};

  ListTaggedResourcesRequest() {}

  explicit ListTaggedResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListTaggedResourcesRequest() = default;
};
class ListTaggedResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<Resource>> resources{};

  ListTaggedResourcesResponseBody() {}

  explicit ListTaggedResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTaggedResourcesResponseBody() = default;
};
class ListTaggedResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTaggedResourcesResponseBody> body{};

  ListTaggedResourcesResponse() {}

  explicit ListTaggedResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTaggedResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaggedResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaggedResourcesResponse() = default;
};
class ListTriggersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListTriggersHeaders() {}

  explicit ListTriggersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListTriggersHeaders() = default;
};
class ListTriggersRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> startKey{};

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
    if (startKey) {
      res["startKey"] = boost::any(*startKey);
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
    if (m.find("startKey") != m.end() && !m["startKey"].empty()) {
      startKey = make_shared<string>(boost::any_cast<string>(m["startKey"]));
    }
  }


  virtual ~ListTriggersRequest() = default;
};
class ListTriggersResponseBodyTriggers : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceArn{};
  shared_ptr<string> triggerConfig{};
  shared_ptr<string> triggerId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  ListTriggersResponseBodyTriggers() {}

  explicit ListTriggersResponseBodyTriggers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
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
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
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
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
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
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~ListTriggersResponseBodyTriggers() = default;
};
class ListTriggersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListTriggersResponseBodyTriggers>> triggers{};

  ListTriggersResponseBody() {}

  explicit ListTriggersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTriggersResponseBodyTriggers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["triggers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTriggersResponseBodyTriggers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        triggers = make_shared<vector<ListTriggersResponseBodyTriggers>>(expect1);
      }
    }
  }


  virtual ~ListTriggersResponseBody() = default;
};
class ListTriggersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTriggersResponseBody> body{};

  ListTriggersResponse() {}

  explicit ListTriggersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTriggersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTriggersResponseBody>(model1);
      }
    }
  }


  virtual ~ListTriggersResponse() = default;
};
class ListVpcBindingsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  ListVpcBindingsHeaders() {}

  explicit ListVpcBindingsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~ListVpcBindingsHeaders() = default;
};
class ListVpcBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> vpcIds{};

  ListVpcBindingsResponseBody() {}

  explicit ListVpcBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVpcBindingsResponseBody() = default;
};
class ListVpcBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpcBindingsResponseBody> body{};

  ListVpcBindingsResponse() {}

  explicit ListVpcBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVpcBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcBindingsResponse() = default;
};
class PublishServiceVersionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  PublishServiceVersionHeaders() {}

  explicit PublishServiceVersionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~PublishServiceVersionHeaders() = default;
};
class PublishServiceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  PublishServiceVersionRequest() {}

  explicit PublishServiceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishServiceVersionRequest() = default;
};
class PublishServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  PublishServiceVersionResponseBody() {}

  explicit PublishServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishServiceVersionResponseBody() = default;
};
class PublishServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishServiceVersionResponseBody> body{};

  PublishServiceVersionResponse() {}

  explicit PublishServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~PublishServiceVersionResponse() = default;
};
class PutFunctionAsyncInvokeConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  PutFunctionAsyncInvokeConfigHeaders() {}

  explicit PutFunctionAsyncInvokeConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~PutFunctionAsyncInvokeConfigHeaders() = default;
};
class PutFunctionAsyncInvokeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<DestinationConfig> destinationConfig{};
  shared_ptr<long> maxAsyncEventAgeInSeconds{};
  shared_ptr<long> maxAsyncRetryAttempts{};
  shared_ptr<bool> statefulInvocation{};
  shared_ptr<string> qualifier{};

  PutFunctionAsyncInvokeConfigRequest() {}

  explicit PutFunctionAsyncInvokeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationConfig) {
      res["destinationConfig"] = destinationConfig ? boost::any(destinationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxAsyncEventAgeInSeconds) {
      res["maxAsyncEventAgeInSeconds"] = boost::any(*maxAsyncEventAgeInSeconds);
    }
    if (maxAsyncRetryAttempts) {
      res["maxAsyncRetryAttempts"] = boost::any(*maxAsyncRetryAttempts);
    }
    if (statefulInvocation) {
      res["statefulInvocation"] = boost::any(*statefulInvocation);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("statefulInvocation") != m.end() && !m["statefulInvocation"].empty()) {
      statefulInvocation = make_shared<bool>(boost::any_cast<bool>(m["statefulInvocation"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~PutFunctionAsyncInvokeConfigRequest() = default;
};
class PutFunctionAsyncInvokeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<DestinationConfig> destinationConfig{};
  shared_ptr<string> function{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<long> maxAsyncEventAgeInSeconds{};
  shared_ptr<long> maxAsyncRetryAttempts{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> service{};
  shared_ptr<bool> statefulInvocation{};

  PutFunctionAsyncInvokeConfigResponseBody() {}

  explicit PutFunctionAsyncInvokeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (destinationConfig) {
      res["destinationConfig"] = destinationConfig ? boost::any(destinationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (function) {
      res["function"] = boost::any(*function);
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
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (statefulInvocation) {
      res["statefulInvocation"] = boost::any(*statefulInvocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("function") != m.end() && !m["function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["function"]));
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
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("statefulInvocation") != m.end() && !m["statefulInvocation"].empty()) {
      statefulInvocation = make_shared<bool>(boost::any_cast<bool>(m["statefulInvocation"]));
    }
  }


  virtual ~PutFunctionAsyncInvokeConfigResponseBody() = default;
};
class PutFunctionAsyncInvokeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutFunctionAsyncInvokeConfigResponseBody> body{};

  PutFunctionAsyncInvokeConfigResponse() {}

  explicit PutFunctionAsyncInvokeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutFunctionAsyncInvokeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutFunctionAsyncInvokeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~PutFunctionAsyncInvokeConfigResponse() = default;
};
class PutFunctionOnDemandConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  PutFunctionOnDemandConfigHeaders() {}

  explicit PutFunctionOnDemandConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~PutFunctionOnDemandConfigHeaders() = default;
};
class PutFunctionOnDemandConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> maximumInstanceCount{};
  shared_ptr<string> qualifier{};

  PutFunctionOnDemandConfigRequest() {}

  explicit PutFunctionOnDemandConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumInstanceCount) {
      res["maximumInstanceCount"] = boost::any(*maximumInstanceCount);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maximumInstanceCount") != m.end() && !m["maximumInstanceCount"].empty()) {
      maximumInstanceCount = make_shared<long>(boost::any_cast<long>(m["maximumInstanceCount"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~PutFunctionOnDemandConfigRequest() = default;
};
class PutFunctionOnDemandConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maximumInstanceCount{};
  shared_ptr<string> resource{};

  PutFunctionOnDemandConfigResponseBody() {}

  explicit PutFunctionOnDemandConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumInstanceCount) {
      res["maximumInstanceCount"] = boost::any(*maximumInstanceCount);
    }
    if (resource) {
      res["resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maximumInstanceCount") != m.end() && !m["maximumInstanceCount"].empty()) {
      maximumInstanceCount = make_shared<long>(boost::any_cast<long>(m["maximumInstanceCount"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["resource"]));
    }
  }


  virtual ~PutFunctionOnDemandConfigResponseBody() = default;
};
class PutFunctionOnDemandConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutFunctionOnDemandConfigResponseBody> body{};

  PutFunctionOnDemandConfigResponse() {}

  explicit PutFunctionOnDemandConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutFunctionOnDemandConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutFunctionOnDemandConfigResponseBody>(model1);
      }
    }
  }


  virtual ~PutFunctionOnDemandConfigResponse() = default;
};
class PutProvisionConfigHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  PutProvisionConfigHeaders() {}

  explicit PutProvisionConfigHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~PutProvisionConfigHeaders() = default;
};
class PutProvisionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateCPU{};
  shared_ptr<vector<ScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};
  shared_ptr<vector<TargetTrackingPolicies>> targetTrackingPolicies{};
  shared_ptr<string> qualifier{};

  PutProvisionConfigRequest() {}

  explicit PutProvisionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateCPU") != m.end() && !m["alwaysAllocateCPU"].empty()) {
      alwaysAllocateCPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateCPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<ScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<ScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("targetTrackingPolicies") != m.end() && !m["targetTrackingPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["targetTrackingPolicies"].type()) {
        vector<TargetTrackingPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["targetTrackingPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetTrackingPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetTrackingPolicies = make_shared<vector<TargetTrackingPolicies>>(expect1);
      }
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~PutProvisionConfigRequest() = default;
};
class PutProvisionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateCPU{};
  shared_ptr<long> current{};
  shared_ptr<string> resource{};
  shared_ptr<vector<ScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};
  shared_ptr<vector<TargetTrackingPolicies>> targetTrackingPolicies{};

  PutProvisionConfigResponseBody() {}

  explicit PutProvisionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resource) {
      res["resource"] = boost::any(*resource);
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
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["resource"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<ScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<ScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("targetTrackingPolicies") != m.end() && !m["targetTrackingPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["targetTrackingPolicies"].type()) {
        vector<TargetTrackingPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["targetTrackingPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetTrackingPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetTrackingPolicies = make_shared<vector<TargetTrackingPolicies>>(expect1);
      }
    }
  }


  virtual ~PutProvisionConfigResponseBody() = default;
};
class PutProvisionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutProvisionConfigResponseBody> body{};

  PutProvisionConfigResponse() {}

  explicit PutProvisionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutProvisionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutProvisionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~PutProvisionConfigResponse() = default;
};
class RegisterEventSourceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  RegisterEventSourceHeaders() {}

  explicit RegisterEventSourceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~RegisterEventSourceHeaders() = default;
};
class RegisterEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceArn{};
  shared_ptr<string> qualifier{};

  RegisterEventSourceRequest() {}

  explicit RegisterEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceArn) {
      res["sourceArn"] = boost::any(*sourceArn);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sourceArn") != m.end() && !m["sourceArn"].empty()) {
      sourceArn = make_shared<string>(boost::any_cast<string>(m["sourceArn"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~RegisterEventSourceRequest() = default;
};
class RegisterEventSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> sourceArn{};

  RegisterEventSourceResponseBody() {}

  explicit RegisterEventSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (sourceArn) {
      res["sourceArn"] = boost::any(*sourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("sourceArn") != m.end() && !m["sourceArn"].empty()) {
      sourceArn = make_shared<string>(boost::any_cast<string>(m["sourceArn"]));
    }
  }


  virtual ~RegisterEventSourceResponseBody() = default;
};
class RegisterEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterEventSourceResponseBody> body{};

  RegisterEventSourceResponse() {}

  explicit RegisterEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterEventSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterEventSourceResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterEventSourceResponse() = default;
};
class StopStatefulAsyncInvocationHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  StopStatefulAsyncInvocationHeaders() {}

  explicit StopStatefulAsyncInvocationHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~StopStatefulAsyncInvocationHeaders() = default;
};
class StopStatefulAsyncInvocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};

  StopStatefulAsyncInvocationRequest() {}

  explicit StopStatefulAsyncInvocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopStatefulAsyncInvocationRequest() = default;
};
class StopStatefulAsyncInvocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StopStatefulAsyncInvocationResponse() {}

  explicit StopStatefulAsyncInvocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~StopStatefulAsyncInvocationResponse() = default;
};
class TagResourceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  TagResourceHeaders() {}

  explicit TagResourceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~TagResourceHeaders() = default;
};
class TagResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};
  shared_ptr<map<string, string>> tags{};

  TagResourceRequest() {}

  explicit TagResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourceRequest() = default;
};
class TagResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  TagResourceResponse() {}

  explicit TagResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~TagResourceResponse() = default;
};
class UntagResourceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  UntagResourceHeaders() {}

  explicit UntagResourceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~UntagResourceHeaders() = default;
};
class UntagResourceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> resourceArn{};
  shared_ptr<vector<string>> tagKeys{};

  UntagResourceRequest() {}

  explicit UntagResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["all"] = boost::any(*all);
    }
    if (resourceArn) {
      res["resourceArn"] = boost::any(*resourceArn);
    }
    if (tagKeys) {
      res["tagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all") != m.end() && !m["all"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["all"]));
    }
    if (m.find("resourceArn") != m.end() && !m["resourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["resourceArn"]));
    }
    if (m.find("tagKeys") != m.end() && !m["tagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourceRequest() = default;
};
class UntagResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UntagResourceResponse() {}

  explicit UntagResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~UntagResourceResponse() = default;
};
class UpdateAliasHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  UpdateAliasHeaders() {}

  explicit UpdateAliasHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~UpdateAliasHeaders() = default;
};
class UpdateAliasRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> description{};
  shared_ptr<string> versionId{};

  UpdateAliasRequest() {}

  explicit UpdateAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAliasRequest() = default;
};
class UpdateAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, double>> additionalVersionWeight{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> versionId{};

  UpdateAliasResponseBody() {}

  explicit UpdateAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAliasResponseBody() = default;
};
class UpdateAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAliasResponseBody> body{};

  UpdateAliasResponse() {}

  explicit UpdateAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAliasResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAliasResponse() = default;
};
class UpdateCustomDomainHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  UpdateCustomDomainHeaders() {}

  explicit UpdateCustomDomainHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~UpdateCustomDomainHeaders() = default;
};
class UpdateCustomDomainRequest : public Darabonba::Model {
public:
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};

  UpdateCustomDomainRequest() {}

  explicit UpdateCustomDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~UpdateCustomDomainRequest() = default;
};
class UpdateCustomDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> apiVersion{};
  shared_ptr<CertConfig> certConfig{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> protocol{};
  shared_ptr<RouteConfig> routeConfig{};
  shared_ptr<TLSConfig> tlsConfig{};

  UpdateCustomDomainResponseBody() {}

  explicit UpdateCustomDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tlsConfig) {
      res["tlsConfig"] = tlsConfig ? boost::any(tlsConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("tlsConfig") != m.end() && !m["tlsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsConfig"].type()) {
        TLSConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsConfig"]));
        tlsConfig = make_shared<TLSConfig>(model1);
      }
    }
  }


  virtual ~UpdateCustomDomainResponseBody() = default;
};
class UpdateCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCustomDomainResponseBody> body{};

  UpdateCustomDomainResponse() {}

  explicit UpdateCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCustomDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCustomDomainResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCustomDomainResponse() = default;
};
class UpdateFunctionHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcCodeChecksum{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  UpdateFunctionHeaders() {}

  explicit UpdateFunctionHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcCodeChecksum) {
      res["X-Fc-Code-Checksum"] = boost::any(*xFcCodeChecksum);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Code-Checksum") != m.end() && !m["X-Fc-Code-Checksum"].empty()) {
      xFcCodeChecksum = make_shared<string>(boost::any_cast<string>(m["X-Fc-Code-Checksum"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~UpdateFunctionHeaders() = default;
};
class UpdateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<long> caPort{};
  shared_ptr<Code> code{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> handler{};
  shared_ptr<long> initializationTimeout{};
  shared_ptr<string> initializer{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<string> instanceType{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};

  UpdateFunctionRequest() {}

  explicit UpdateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceConcurrency) {
      res["InstanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (caPort) {
      res["caPort"] = boost::any(*caPort);
    }
    if (code) {
      res["code"] = code ? boost::any(code->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (initializationTimeout) {
      res["initializationTimeout"] = boost::any(*initializationTimeout);
    }
    if (initializer) {
      res["initializer"] = boost::any(*initializer);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceConcurrency") != m.end() && !m["InstanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["InstanceConcurrency"]));
    }
    if (m.find("caPort") != m.end() && !m["caPort"].empty()) {
      caPort = make_shared<long>(boost::any_cast<long>(m["caPort"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      if (typeid(map<string, boost::any>) == m["code"].type()) {
        Code model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["code"]));
        code = make_shared<Code>(model1);
      }
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
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("initializationTimeout") != m.end() && !m["initializationTimeout"].empty()) {
      initializationTimeout = make_shared<long>(boost::any_cast<long>(m["initializationTimeout"]));
    }
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      initializer = make_shared<string>(boost::any_cast<string>(m["initializer"]));
    }
    if (m.find("instanceLifecycleConfig") != m.end() && !m["instanceLifecycleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["instanceLifecycleConfig"].type()) {
        InstanceLifecycleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["instanceLifecycleConfig"]));
        instanceLifecycleConfig = make_shared<InstanceLifecycleConfig>(model1);
      }
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
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
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~UpdateFunctionRequest() = default;
};
class UpdateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> caPort{};
  shared_ptr<string> codeChecksum{};
  shared_ptr<long> codeSize{};
  shared_ptr<string> createdTime{};
  shared_ptr<CustomContainerConfig> customContainerConfig{};
  shared_ptr<CustomDNS> customDNS{};
  shared_ptr<CustomRuntimeConfig> customRuntimeConfig{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> functionId{};
  shared_ptr<string> functionName{};
  shared_ptr<string> handler{};
  shared_ptr<long> initializationTimeout{};
  shared_ptr<string> initializer{};
  shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<vector<string>> layers{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> runtime{};
  shared_ptr<long> timeout{};

  UpdateFunctionResponseBody() {}

  explicit UpdateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caPort) {
      res["caPort"] = boost::any(*caPort);
    }
    if (codeChecksum) {
      res["codeChecksum"] = boost::any(*codeChecksum);
    }
    if (codeSize) {
      res["codeSize"] = boost::any(*codeSize);
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
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (functionId) {
      res["functionId"] = boost::any(*functionId);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (initializationTimeout) {
      res["initializationTimeout"] = boost::any(*initializationTimeout);
    }
    if (initializer) {
      res["initializer"] = boost::any(*initializer);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (layers) {
      res["layers"] = boost::any(*layers);
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caPort") != m.end() && !m["caPort"].empty()) {
      caPort = make_shared<long>(boost::any_cast<long>(m["caPort"]));
    }
    if (m.find("codeChecksum") != m.end() && !m["codeChecksum"].empty()) {
      codeChecksum = make_shared<string>(boost::any_cast<string>(m["codeChecksum"]));
    }
    if (m.find("codeSize") != m.end() && !m["codeSize"].empty()) {
      codeSize = make_shared<long>(boost::any_cast<long>(m["codeSize"]));
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
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["environmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("functionId") != m.end() && !m["functionId"].empty()) {
      functionId = make_shared<string>(boost::any_cast<string>(m["functionId"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("initializationTimeout") != m.end() && !m["initializationTimeout"].empty()) {
      initializationTimeout = make_shared<long>(boost::any_cast<long>(m["initializationTimeout"]));
    }
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      initializer = make_shared<string>(boost::any_cast<string>(m["initializer"]));
    }
    if (m.find("instanceLifecycleConfig") != m.end() && !m["instanceLifecycleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["instanceLifecycleConfig"].type()) {
        InstanceLifecycleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["instanceLifecycleConfig"]));
        instanceLifecycleConfig = make_shared<InstanceLifecycleConfig>(model1);
      }
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
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
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~UpdateFunctionResponseBody() = default;
};
class UpdateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFunctionResponseBody> body{};

  UpdateFunctionResponse() {}

  explicit UpdateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFunctionResponse() = default;
};
class UpdateServiceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  UpdateServiceHeaders() {}

  explicit UpdateServiceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~UpdateServiceHeaders() = default;
};
class UpdateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<string> role{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  UpdateServiceRequest() {}

  explicit UpdateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
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


  virtual ~UpdateServiceRequest() = default;
};
class UpdateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> internetAccess{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<LogConfig> logConfig{};
  shared_ptr<NASConfig> nasConfig{};
  shared_ptr<string> role{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<TracingConfig> tracingConfig{};
  shared_ptr<VPCConfig> vpcConfig{};

  UpdateServiceResponseBody() {}

  explicit UpdateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (internetAccess) {
      res["internetAccess"] = boost::any(*internetAccess);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
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
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("internetAccess") != m.end() && !m["internetAccess"].empty()) {
      internetAccess = make_shared<bool>(boost::any_cast<bool>(m["internetAccess"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["lastModifiedTime"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        LogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<LogConfig>(model1);
      }
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        NASConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<NASConfig>(model1);
      }
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
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


  virtual ~UpdateServiceResponseBody() = default;
};
class UpdateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceResponseBody> body{};

  UpdateServiceResponse() {}

  explicit UpdateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponse() = default;
};
class UpdateTriggerHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> ifMatch{};
  shared_ptr<string> xFcAccountId{};
  shared_ptr<string> xFcDate{};
  shared_ptr<string> xFcTraceId{};

  UpdateTriggerHeaders() {}

  explicit UpdateTriggerHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (ifMatch) {
      res["If-Match"] = boost::any(*ifMatch);
    }
    if (xFcAccountId) {
      res["X-Fc-Account-Id"] = boost::any(*xFcAccountId);
    }
    if (xFcDate) {
      res["X-Fc-Date"] = boost::any(*xFcDate);
    }
    if (xFcTraceId) {
      res["X-Fc-Trace-Id"] = boost::any(*xFcTraceId);
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
    if (m.find("If-Match") != m.end() && !m["If-Match"].empty()) {
      ifMatch = make_shared<string>(boost::any_cast<string>(m["If-Match"]));
    }
    if (m.find("X-Fc-Account-Id") != m.end() && !m["X-Fc-Account-Id"].empty()) {
      xFcAccountId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Account-Id"]));
    }
    if (m.find("X-Fc-Date") != m.end() && !m["X-Fc-Date"].empty()) {
      xFcDate = make_shared<string>(boost::any_cast<string>(m["X-Fc-Date"]));
    }
    if (m.find("X-Fc-Trace-Id") != m.end() && !m["X-Fc-Trace-Id"].empty()) {
      xFcTraceId = make_shared<string>(boost::any_cast<string>(m["X-Fc-Trace-Id"]));
    }
  }


  virtual ~UpdateTriggerHeaders() = default;
};
class UpdateTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> triggerConfig{};

  UpdateTriggerRequest() {}

  explicit UpdateTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTriggerRequest() = default;
};
class UpdateTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> invocationRole{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceArn{};
  shared_ptr<string> triggerConfig{};
  shared_ptr<string> triggerId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  UpdateTriggerResponseBody() {}

  explicit UpdateTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
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
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
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
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
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
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~UpdateTriggerResponseBody() = default;
};
class UpdateTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTriggerResponseBody> body{};

  UpdateTriggerResponse() {}

  explicit UpdateTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTriggerResponseBody>(model1);
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
  CreateAliasResponse createAlias(shared_ptr<string> serviceName, shared_ptr<CreateAliasRequest> request);
  CreateAliasResponse createAliasWithOptions(shared_ptr<string> serviceName,
                                             shared_ptr<CreateAliasRequest> request,
                                             shared_ptr<CreateAliasHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomDomainResponse createCustomDomain(shared_ptr<CreateCustomDomainRequest> request);
  CreateCustomDomainResponse createCustomDomainWithOptions(shared_ptr<CreateCustomDomainRequest> request, shared_ptr<CreateCustomDomainHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionResponse createFunction(shared_ptr<string> serviceName, shared_ptr<CreateFunctionRequest> request);
  CreateFunctionResponse createFunctionWithOptions(shared_ptr<string> serviceName,
                                                   shared_ptr<CreateFunctionRequest> request,
                                                   shared_ptr<CreateFunctionHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLayerVersionResponse createLayerVersion(shared_ptr<string> layerName, shared_ptr<CreateLayerVersionRequest> request);
  CreateLayerVersionResponse createLayerVersionWithOptions(shared_ptr<string> layerName,
                                                           shared_ptr<CreateLayerVersionRequest> request,
                                                           shared_ptr<CreateLayerVersionHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<CreateServiceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTriggerResponse createTrigger(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<CreateTriggerRequest> request);
  CreateTriggerResponse createTriggerWithOptions(shared_ptr<string> serviceName,
                                                 shared_ptr<string> functionName,
                                                 shared_ptr<CreateTriggerRequest> request,
                                                 shared_ptr<CreateTriggerHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpcBindingResponse createVpcBinding(shared_ptr<string> serviceName, shared_ptr<CreateVpcBindingRequest> request);
  CreateVpcBindingResponse createVpcBindingWithOptions(shared_ptr<string> serviceName,
                                                       shared_ptr<CreateVpcBindingRequest> request,
                                                       shared_ptr<CreateVpcBindingHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAliasResponse deleteAlias(shared_ptr<string> serviceName, shared_ptr<string> aliasName);
  DeleteAliasResponse deleteAliasWithOptions(shared_ptr<string> serviceName,
                                             shared_ptr<string> aliasName,
                                             shared_ptr<DeleteAliasHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomDomainResponse deleteCustomDomain(shared_ptr<string> domainName);
  DeleteCustomDomainResponse deleteCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<DeleteCustomDomainHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionResponse deleteFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName);
  DeleteFunctionResponse deleteFunctionWithOptions(shared_ptr<string> serviceName,
                                                   shared_ptr<string> functionName,
                                                   shared_ptr<DeleteFunctionHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionAsyncInvokeConfigResponse deleteFunctionAsyncInvokeConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<DeleteFunctionAsyncInvokeConfigRequest> request);
  DeleteFunctionAsyncInvokeConfigResponse deleteFunctionAsyncInvokeConfigWithOptions(shared_ptr<string> serviceName,
                                                                                     shared_ptr<string> functionName,
                                                                                     shared_ptr<DeleteFunctionAsyncInvokeConfigRequest> request,
                                                                                     shared_ptr<DeleteFunctionAsyncInvokeConfigHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionOnDemandConfigResponse deleteFunctionOnDemandConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<DeleteFunctionOnDemandConfigRequest> request);
  DeleteFunctionOnDemandConfigResponse deleteFunctionOnDemandConfigWithOptions(shared_ptr<string> serviceName,
                                                                               shared_ptr<string> functionName,
                                                                               shared_ptr<DeleteFunctionOnDemandConfigRequest> request,
                                                                               shared_ptr<DeleteFunctionOnDemandConfigHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLayerVersionResponse deleteLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version);
  DeleteLayerVersionResponse deleteLayerVersionWithOptions(shared_ptr<string> layerName,
                                                           shared_ptr<string> version,
                                                           shared_ptr<DeleteLayerVersionHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<string> serviceName);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<string> serviceName, shared_ptr<DeleteServiceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceVersionResponse deleteServiceVersion(shared_ptr<string> serviceName, shared_ptr<string> versionId);
  DeleteServiceVersionResponse deleteServiceVersionWithOptions(shared_ptr<string> serviceName,
                                                               shared_ptr<string> versionId,
                                                               shared_ptr<DeleteServiceVersionHeaders> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTriggerResponse deleteTrigger(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<string> triggerName);
  DeleteTriggerResponse deleteTriggerWithOptions(shared_ptr<string> serviceName,
                                                 shared_ptr<string> functionName,
                                                 shared_ptr<string> triggerName,
                                                 shared_ptr<DeleteTriggerHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpcBindingResponse deleteVpcBinding(shared_ptr<string> serviceName, shared_ptr<string> vpcId);
  DeleteVpcBindingResponse deleteVpcBindingWithOptions(shared_ptr<string> serviceName,
                                                       shared_ptr<string> vpcId,
                                                       shared_ptr<DeleteVpcBindingHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeregisterEventSourceResponse deregisterEventSource(shared_ptr<string> serviceName,
                                                      shared_ptr<string> functionName,
                                                      shared_ptr<string> sourceArn,
                                                      shared_ptr<DeregisterEventSourceRequest> request);
  DeregisterEventSourceResponse deregisterEventSourceWithOptions(shared_ptr<string> serviceName,
                                                                 shared_ptr<string> functionName,
                                                                 shared_ptr<string> sourceArn,
                                                                 shared_ptr<DeregisterEventSourceRequest> request,
                                                                 shared_ptr<DeregisterEventSourceHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountSettingsResponse getAccountSettings();
  GetAccountSettingsResponse getAccountSettingsWithOptions(shared_ptr<GetAccountSettingsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAliasResponse getAlias(shared_ptr<string> serviceName, shared_ptr<string> aliasName);
  GetAliasResponse getAliasWithOptions(shared_ptr<string> serviceName,
                                       shared_ptr<string> aliasName,
                                       shared_ptr<GetAliasHeaders> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomDomainResponse getCustomDomain(shared_ptr<string> domainName);
  GetCustomDomainResponse getCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<GetCustomDomainHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionResponse getFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionRequest> request);
  GetFunctionResponse getFunctionWithOptions(shared_ptr<string> serviceName,
                                             shared_ptr<string> functionName,
                                             shared_ptr<GetFunctionRequest> request,
                                             shared_ptr<GetFunctionHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionAsyncInvokeConfigResponse getFunctionAsyncInvokeConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionAsyncInvokeConfigRequest> request);
  GetFunctionAsyncInvokeConfigResponse getFunctionAsyncInvokeConfigWithOptions(shared_ptr<string> serviceName,
                                                                               shared_ptr<string> functionName,
                                                                               shared_ptr<GetFunctionAsyncInvokeConfigRequest> request,
                                                                               shared_ptr<GetFunctionAsyncInvokeConfigHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionCodeResponse getFunctionCode(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionCodeRequest> request);
  GetFunctionCodeResponse getFunctionCodeWithOptions(shared_ptr<string> serviceName,
                                                     shared_ptr<string> functionName,
                                                     shared_ptr<GetFunctionCodeRequest> request,
                                                     shared_ptr<GetFunctionCodeHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionOnDemandConfigResponse getFunctionOnDemandConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionOnDemandConfigRequest> request);
  GetFunctionOnDemandConfigResponse getFunctionOnDemandConfigWithOptions(shared_ptr<string> serviceName,
                                                                         shared_ptr<string> functionName,
                                                                         shared_ptr<GetFunctionOnDemandConfigRequest> request,
                                                                         shared_ptr<GetFunctionOnDemandConfigHeaders> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLayerVersionResponse getLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version);
  GetLayerVersionResponse getLayerVersionWithOptions(shared_ptr<string> layerName,
                                                     shared_ptr<string> version,
                                                     shared_ptr<GetLayerVersionHeaders> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProvisionConfigResponse getProvisionConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetProvisionConfigRequest> request);
  GetProvisionConfigResponse getProvisionConfigWithOptions(shared_ptr<string> serviceName,
                                                           shared_ptr<string> functionName,
                                                           shared_ptr<GetProvisionConfigRequest> request,
                                                           shared_ptr<GetProvisionConfigHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceTagsResponse getResourceTags(shared_ptr<GetResourceTagsRequest> request);
  GetResourceTagsResponse getResourceTagsWithOptions(shared_ptr<GetResourceTagsRequest> request, shared_ptr<GetResourceTagsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<string> serviceName, shared_ptr<GetServiceRequest> request);
  GetServiceResponse getServiceWithOptions(shared_ptr<string> serviceName,
                                           shared_ptr<GetServiceRequest> request,
                                           shared_ptr<GetServiceHeaders> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStatefulAsyncInvocationResponse getStatefulAsyncInvocation(shared_ptr<string> serviceName,
                                                                shared_ptr<string> functionName,
                                                                shared_ptr<string> invocationId,
                                                                shared_ptr<GetStatefulAsyncInvocationRequest> request);
  GetStatefulAsyncInvocationResponse getStatefulAsyncInvocationWithOptions(shared_ptr<string> serviceName,
                                                                           shared_ptr<string> functionName,
                                                                           shared_ptr<string> invocationId,
                                                                           shared_ptr<GetStatefulAsyncInvocationRequest> request,
                                                                           shared_ptr<GetStatefulAsyncInvocationHeaders> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTriggerResponse getTrigger(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<string> triggerName);
  GetTriggerResponse getTriggerWithOptions(shared_ptr<string> serviceName,
                                           shared_ptr<string> functionName,
                                           shared_ptr<string> triggerName,
                                           shared_ptr<GetTriggerHeaders> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeFunctionResponse invokeFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<InvokeFunctionRequest> request);
  InvokeFunctionResponse invokeFunctionWithOptions(shared_ptr<string> serviceName,
                                                   shared_ptr<string> functionName,
                                                   shared_ptr<InvokeFunctionRequest> request,
                                                   shared_ptr<InvokeFunctionHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliasesResponse listAliases(shared_ptr<string> serviceName, shared_ptr<ListAliasesRequest> request);
  ListAliasesResponse listAliasesWithOptions(shared_ptr<string> serviceName,
                                             shared_ptr<ListAliasesRequest> request,
                                             shared_ptr<ListAliasesHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCustomDomainsResponse listCustomDomains(shared_ptr<ListCustomDomainsRequest> request);
  ListCustomDomainsResponse listCustomDomainsWithOptions(shared_ptr<ListCustomDomainsRequest> request, shared_ptr<ListCustomDomainsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventSourcesResponse listEventSources(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListEventSourcesRequest> request);
  ListEventSourcesResponse listEventSourcesWithOptions(shared_ptr<string> serviceName,
                                                       shared_ptr<string> functionName,
                                                       shared_ptr<ListEventSourcesRequest> request,
                                                       shared_ptr<ListEventSourcesHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionAsyncInvokeConfigsResponse listFunctionAsyncInvokeConfigs(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListFunctionAsyncInvokeConfigsRequest> request);
  ListFunctionAsyncInvokeConfigsResponse listFunctionAsyncInvokeConfigsWithOptions(shared_ptr<string> serviceName,
                                                                                   shared_ptr<string> functionName,
                                                                                   shared_ptr<ListFunctionAsyncInvokeConfigsRequest> request,
                                                                                   shared_ptr<ListFunctionAsyncInvokeConfigsHeaders> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionsResponse listFunctions(shared_ptr<string> serviceName, shared_ptr<ListFunctionsRequest> request);
  ListFunctionsResponse listFunctionsWithOptions(shared_ptr<string> serviceName,
                                                 shared_ptr<ListFunctionsRequest> request,
                                                 shared_ptr<ListFunctionsHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListInstancesRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<string> serviceName,
                                                 shared_ptr<string> functionName,
                                                 shared_ptr<ListInstancesRequest> request,
                                                 shared_ptr<ListInstancesHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLayerVersionsResponse listLayerVersions(shared_ptr<string> layerName, shared_ptr<ListLayerVersionsRequest> request);
  ListLayerVersionsResponse listLayerVersionsWithOptions(shared_ptr<string> layerName,
                                                         shared_ptr<ListLayerVersionsRequest> request,
                                                         shared_ptr<ListLayerVersionsHeaders> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLayersResponse listLayers(shared_ptr<ListLayersRequest> request);
  ListLayersResponse listLayersWithOptions(shared_ptr<ListLayersRequest> request, shared_ptr<ListLayersHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOnDemandConfigsResponse listOnDemandConfigs(shared_ptr<ListOnDemandConfigsRequest> request);
  ListOnDemandConfigsResponse listOnDemandConfigsWithOptions(shared_ptr<ListOnDemandConfigsRequest> request, shared_ptr<ListOnDemandConfigsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProvisionConfigsResponse listProvisionConfigs(shared_ptr<ListProvisionConfigsRequest> request);
  ListProvisionConfigsResponse listProvisionConfigsWithOptions(shared_ptr<ListProvisionConfigsRequest> request, shared_ptr<ListProvisionConfigsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListReservedCapacitiesResponse listReservedCapacities(shared_ptr<ListReservedCapacitiesRequest> request);
  ListReservedCapacitiesResponse listReservedCapacitiesWithOptions(shared_ptr<ListReservedCapacitiesRequest> request, shared_ptr<ListReservedCapacitiesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceVersionsResponse listServiceVersions(shared_ptr<string> serviceName, shared_ptr<ListServiceVersionsRequest> request);
  ListServiceVersionsResponse listServiceVersionsWithOptions(shared_ptr<string> serviceName,
                                                             shared_ptr<ListServiceVersionsRequest> request,
                                                             shared_ptr<ListServiceVersionsHeaders> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<ListServicesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStatefulAsyncInvocationFunctionsResponse listStatefulAsyncInvocationFunctions(shared_ptr<ListStatefulAsyncInvocationFunctionsRequest> request);
  ListStatefulAsyncInvocationFunctionsResponse listStatefulAsyncInvocationFunctionsWithOptions(shared_ptr<ListStatefulAsyncInvocationFunctionsRequest> request, shared_ptr<ListStatefulAsyncInvocationFunctionsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStatefulAsyncInvocationsResponse listStatefulAsyncInvocations(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListStatefulAsyncInvocationsRequest> request);
  ListStatefulAsyncInvocationsResponse listStatefulAsyncInvocationsWithOptions(shared_ptr<string> serviceName,
                                                                               shared_ptr<string> functionName,
                                                                               shared_ptr<ListStatefulAsyncInvocationsRequest> request,
                                                                               shared_ptr<ListStatefulAsyncInvocationsHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaggedResourcesResponse listTaggedResources(shared_ptr<ListTaggedResourcesRequest> request);
  ListTaggedResourcesResponse listTaggedResourcesWithOptions(shared_ptr<ListTaggedResourcesRequest> request, shared_ptr<ListTaggedResourcesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTriggersResponse listTriggers(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListTriggersRequest> request);
  ListTriggersResponse listTriggersWithOptions(shared_ptr<string> serviceName,
                                               shared_ptr<string> functionName,
                                               shared_ptr<ListTriggersRequest> request,
                                               shared_ptr<ListTriggersHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcBindingsResponse listVpcBindings(shared_ptr<string> serviceName);
  ListVpcBindingsResponse listVpcBindingsWithOptions(shared_ptr<string> serviceName, shared_ptr<ListVpcBindingsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishServiceVersionResponse publishServiceVersion(shared_ptr<string> serviceName, shared_ptr<PublishServiceVersionRequest> request);
  PublishServiceVersionResponse publishServiceVersionWithOptions(shared_ptr<string> serviceName,
                                                                 shared_ptr<PublishServiceVersionRequest> request,
                                                                 shared_ptr<PublishServiceVersionHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutFunctionAsyncInvokeConfigResponse putFunctionAsyncInvokeConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<PutFunctionAsyncInvokeConfigRequest> request);
  PutFunctionAsyncInvokeConfigResponse putFunctionAsyncInvokeConfigWithOptions(shared_ptr<string> serviceName,
                                                                               shared_ptr<string> functionName,
                                                                               shared_ptr<PutFunctionAsyncInvokeConfigRequest> request,
                                                                               shared_ptr<PutFunctionAsyncInvokeConfigHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutFunctionOnDemandConfigResponse putFunctionOnDemandConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<PutFunctionOnDemandConfigRequest> request);
  PutFunctionOnDemandConfigResponse putFunctionOnDemandConfigWithOptions(shared_ptr<string> serviceName,
                                                                         shared_ptr<string> functionName,
                                                                         shared_ptr<PutFunctionOnDemandConfigRequest> request,
                                                                         shared_ptr<PutFunctionOnDemandConfigHeaders> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProvisionConfigResponse putProvisionConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<PutProvisionConfigRequest> request);
  PutProvisionConfigResponse putProvisionConfigWithOptions(shared_ptr<string> serviceName,
                                                           shared_ptr<string> functionName,
                                                           shared_ptr<PutProvisionConfigRequest> request,
                                                           shared_ptr<PutProvisionConfigHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterEventSourceResponse registerEventSource(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<RegisterEventSourceRequest> request);
  RegisterEventSourceResponse registerEventSourceWithOptions(shared_ptr<string> serviceName,
                                                             shared_ptr<string> functionName,
                                                             shared_ptr<RegisterEventSourceRequest> request,
                                                             shared_ptr<RegisterEventSourceHeaders> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopStatefulAsyncInvocationResponse stopStatefulAsyncInvocation(shared_ptr<string> serviceName,
                                                                  shared_ptr<string> functionName,
                                                                  shared_ptr<string> invocationId,
                                                                  shared_ptr<StopStatefulAsyncInvocationRequest> request);
  StopStatefulAsyncInvocationResponse stopStatefulAsyncInvocationWithOptions(shared_ptr<string> serviceName,
                                                                             shared_ptr<string> functionName,
                                                                             shared_ptr<string> invocationId,
                                                                             shared_ptr<StopStatefulAsyncInvocationRequest> request,
                                                                             shared_ptr<StopStatefulAsyncInvocationHeaders> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourceResponse tagResource(shared_ptr<TagResourceRequest> request);
  TagResourceResponse tagResourceWithOptions(shared_ptr<TagResourceRequest> request, shared_ptr<TagResourceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourceResponse untagResource(shared_ptr<UntagResourceRequest> request);
  UntagResourceResponse untagResourceWithOptions(shared_ptr<UntagResourceRequest> request, shared_ptr<UntagResourceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAliasResponse updateAlias(shared_ptr<string> serviceName, shared_ptr<string> aliasName, shared_ptr<UpdateAliasRequest> request);
  UpdateAliasResponse updateAliasWithOptions(shared_ptr<string> serviceName,
                                             shared_ptr<string> aliasName,
                                             shared_ptr<UpdateAliasRequest> request,
                                             shared_ptr<UpdateAliasHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCustomDomainResponse updateCustomDomain(shared_ptr<string> domainName, shared_ptr<UpdateCustomDomainRequest> request);
  UpdateCustomDomainResponse updateCustomDomainWithOptions(shared_ptr<string> domainName,
                                                           shared_ptr<UpdateCustomDomainRequest> request,
                                                           shared_ptr<UpdateCustomDomainHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFunctionResponse updateFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<UpdateFunctionRequest> request);
  UpdateFunctionResponse updateFunctionWithOptions(shared_ptr<string> serviceName,
                                                   shared_ptr<string> functionName,
                                                   shared_ptr<UpdateFunctionRequest> request,
                                                   shared_ptr<UpdateFunctionHeaders> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceResponse updateService(shared_ptr<string> serviceName, shared_ptr<UpdateServiceRequest> request);
  UpdateServiceResponse updateServiceWithOptions(shared_ptr<string> serviceName,
                                                 shared_ptr<UpdateServiceRequest> request,
                                                 shared_ptr<UpdateServiceHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTriggerResponse updateTrigger(shared_ptr<string> serviceName,
                                      shared_ptr<string> functionName,
                                      shared_ptr<string> triggerName,
                                      shared_ptr<UpdateTriggerRequest> request);
  UpdateTriggerResponse updateTriggerWithOptions(shared_ptr<string> serviceName,
                                                 shared_ptr<string> functionName,
                                                 shared_ptr<string> triggerName,
                                                 shared_ptr<UpdateTriggerRequest> request,
                                                 shared_ptr<UpdateTriggerHeaders> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_FC-Open20210406

#endif
