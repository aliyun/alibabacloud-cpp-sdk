// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAISTUDIO20220112_H_
#define ALIBABACLOUD_PAISTUDIO20220112_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PaiStudio20220112 {
class ACS : public Darabonba::Model {
public:
  shared_ptr<string> ACSQuotaId{};
  shared_ptr<vector<string>> associatedProducts{};

  ACS() {}

  explicit ACS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ACSQuotaId) {
      res["ACSQuotaId"] = boost::any(*ACSQuotaId);
    }
    if (associatedProducts) {
      res["AssociatedProducts"] = boost::any(*associatedProducts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ACSQuotaId") != m.end() && !m["ACSQuotaId"].empty()) {
      ACSQuotaId = make_shared<string>(boost::any_cast<string>(m["ACSQuotaId"]));
    }
    if (m.find("AssociatedProducts") != m.end() && !m["AssociatedProducts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AssociatedProducts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AssociatedProducts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      associatedProducts = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ACS() = default;
};
class AlgorithmSpecComputeResourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> version{};

  AlgorithmSpecComputeResourcePolicy() {}

  explicit AlgorithmSpecComputeResourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~AlgorithmSpecComputeResourcePolicy() = default;
};
class AlgorithmSpecComputeResource : public Darabonba::Model {
public:
  shared_ptr<AlgorithmSpecComputeResourcePolicy> policy{};

  AlgorithmSpecComputeResource() {}

  explicit AlgorithmSpecComputeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        AlgorithmSpecComputeResourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<AlgorithmSpecComputeResourcePolicy>(model1);
      }
    }
  }


  virtual ~AlgorithmSpecComputeResource() = default;
};
class AlgorithmSpecCustomization : public Darabonba::Model {
public:
  shared_ptr<bool> codeDir{};

  AlgorithmSpecCustomization() {}

  explicit AlgorithmSpecCustomization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeDir) {
      res["CodeDir"] = boost::any(*codeDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeDir") != m.end() && !m["CodeDir"].empty()) {
      codeDir = make_shared<bool>(boost::any_cast<bool>(m["CodeDir"]));
    }
  }


  virtual ~AlgorithmSpecCustomization() = default;
};
class AlgorithmSpecProgressDefinitionsOverallProgress : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> regex{};

  AlgorithmSpecProgressDefinitionsOverallProgress() {}

  explicit AlgorithmSpecProgressDefinitionsOverallProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~AlgorithmSpecProgressDefinitionsOverallProgress() = default;
};
class AlgorithmSpecProgressDefinitionsRemainingTime : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> regex{};

  AlgorithmSpecProgressDefinitionsRemainingTime() {}

  explicit AlgorithmSpecProgressDefinitionsRemainingTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~AlgorithmSpecProgressDefinitionsRemainingTime() = default;
};
class AlgorithmSpecProgressDefinitions : public Darabonba::Model {
public:
  shared_ptr<AlgorithmSpecProgressDefinitionsOverallProgress> overallProgress{};
  shared_ptr<AlgorithmSpecProgressDefinitionsRemainingTime> remainingTime{};

  AlgorithmSpecProgressDefinitions() {}

  explicit AlgorithmSpecProgressDefinitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (overallProgress) {
      res["OverallProgress"] = overallProgress ? boost::any(overallProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remainingTime) {
      res["RemainingTime"] = remainingTime ? boost::any(remainingTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OverallProgress") != m.end() && !m["OverallProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallProgress"].type()) {
        AlgorithmSpecProgressDefinitionsOverallProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallProgress"]));
        overallProgress = make_shared<AlgorithmSpecProgressDefinitionsOverallProgress>(model1);
      }
    }
    if (m.find("RemainingTime") != m.end() && !m["RemainingTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemainingTime"].type()) {
        AlgorithmSpecProgressDefinitionsRemainingTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemainingTime"]));
        remainingTime = make_shared<AlgorithmSpecProgressDefinitionsRemainingTime>(model1);
      }
    }
  }


  virtual ~AlgorithmSpecProgressDefinitions() = default;
};
class Location : public Darabonba::Model {
public:
  shared_ptr<string> locationType{};
  shared_ptr<map<string, boost::any>> locationValue{};

  Location() {}

  explicit Location(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locationType) {
      res["LocationType"] = boost::any(*locationType);
    }
    if (locationValue) {
      res["LocationValue"] = boost::any(*locationValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocationType") != m.end() && !m["LocationType"].empty()) {
      locationType = make_shared<string>(boost::any_cast<string>(m["LocationType"]));
    }
    if (m.find("LocationValue") != m.end() && !m["LocationValue"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["LocationValue"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      locationValue = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~Location() = default;
};
class HyperParameterRange : public Darabonba::Model {
public:
  shared_ptr<vector<string>> enum_{};
  shared_ptr<bool> exclusiveMaximum{};
  shared_ptr<bool> exclusiveMinimum{};
  shared_ptr<long> maxLength{};
  shared_ptr<string> maximum{};
  shared_ptr<long> minLength{};
  shared_ptr<string> minimum{};
  shared_ptr<string> pattern{};

  HyperParameterRange() {}

  explicit HyperParameterRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enum_) {
      res["Enum"] = boost::any(*enum_);
    }
    if (exclusiveMaximum) {
      res["ExclusiveMaximum"] = boost::any(*exclusiveMaximum);
    }
    if (exclusiveMinimum) {
      res["ExclusiveMinimum"] = boost::any(*exclusiveMinimum);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maximum) {
      res["Maximum"] = boost::any(*maximum);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minimum) {
      res["Minimum"] = boost::any(*minimum);
    }
    if (pattern) {
      res["Pattern"] = boost::any(*pattern);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enum") != m.end() && !m["Enum"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Enum"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Enum"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      enum_ = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExclusiveMaximum") != m.end() && !m["ExclusiveMaximum"].empty()) {
      exclusiveMaximum = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveMaximum"]));
    }
    if (m.find("ExclusiveMinimum") != m.end() && !m["ExclusiveMinimum"].empty()) {
      exclusiveMinimum = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveMinimum"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("Maximum") != m.end() && !m["Maximum"].empty()) {
      maximum = make_shared<string>(boost::any_cast<string>(m["Maximum"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("Minimum") != m.end() && !m["Minimum"].empty()) {
      minimum = make_shared<string>(boost::any_cast<string>(m["Minimum"]));
    }
    if (m.find("Pattern") != m.end() && !m["Pattern"].empty()) {
      pattern = make_shared<string>(boost::any_cast<string>(m["Pattern"]));
    }
  }


  virtual ~HyperParameterRange() = default;
};
class HyperParameterDefinition : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<HyperParameterRange> range{};
  shared_ptr<bool> required{};
  shared_ptr<string> type{};

  HyperParameterDefinition() {}

  explicit HyperParameterDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (range) {
      res["Range"] = range ? boost::any(range->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      if (typeid(map<string, boost::any>) == m["Range"].type()) {
        HyperParameterRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Range"]));
        range = make_shared<HyperParameterRange>(model1);
      }
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~HyperParameterDefinition() = default;
};
class Channel : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<bool> required{};
  shared_ptr<vector<string>> supportedChannelTypes{};

  Channel() {}

  explicit Channel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (supportedChannelTypes) {
      res["SupportedChannelTypes"] = boost::any(*supportedChannelTypes);
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
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("SupportedChannelTypes") != m.end() && !m["SupportedChannelTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedChannelTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedChannelTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedChannelTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~Channel() = default;
};
class MetricDefinition : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regex{};

  MetricDefinition() {}

  explicit MetricDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regex) {
      res["Regex"] = boost::any(*regex);
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
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
  }


  virtual ~MetricDefinition() = default;
};
class ConditionExpression : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> values{};

  ConditionExpression() {}

  explicit ConditionExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConditionExpression() = default;
};
class AlgorithmSpec : public Darabonba::Model {
public:
  shared_ptr<Location> codeDir{};
  shared_ptr<vector<string>> command{};
  shared_ptr<AlgorithmSpecComputeResource> computeResource{};
  shared_ptr<AlgorithmSpecCustomization> customization{};
  shared_ptr<vector<HyperParameterDefinition>> hyperParameters{};
  shared_ptr<string> image{};
  shared_ptr<vector<Channel>> inputChannels{};
  shared_ptr<string> jobType{};
  shared_ptr<vector<MetricDefinition>> metricDefinitions{};
  shared_ptr<vector<Channel>> outputChannels{};
  shared_ptr<AlgorithmSpecProgressDefinitions> progressDefinitions{};
  shared_ptr<vector<ConditionExpression>> resourceRequirements{};
  shared_ptr<vector<string>> supportedInstanceTypes{};
  shared_ptr<bool> supportsDistributedTraining{};

  AlgorithmSpec() {}

  explicit AlgorithmSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeDir) {
      res["CodeDir"] = codeDir ? boost::any(codeDir->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (computeResource) {
      res["ComputeResource"] = computeResource ? boost::any(computeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customization) {
      res["Customization"] = customization ? boost::any(customization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hyperParameters) {
      vector<boost::any> temp1;
      for(auto item1:*hyperParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HyperParameters"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (inputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*inputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputChannels"] = boost::any(temp1);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (metricDefinitions) {
      vector<boost::any> temp1;
      for(auto item1:*metricDefinitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricDefinitions"] = boost::any(temp1);
    }
    if (outputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*outputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputChannels"] = boost::any(temp1);
    }
    if (progressDefinitions) {
      res["ProgressDefinitions"] = progressDefinitions ? boost::any(progressDefinitions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceRequirements) {
      vector<boost::any> temp1;
      for(auto item1:*resourceRequirements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceRequirements"] = boost::any(temp1);
    }
    if (supportedInstanceTypes) {
      res["SupportedInstanceTypes"] = boost::any(*supportedInstanceTypes);
    }
    if (supportsDistributedTraining) {
      res["SupportsDistributedTraining"] = boost::any(*supportsDistributedTraining);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeDir") != m.end() && !m["CodeDir"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeDir"].type()) {
        Location model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeDir"]));
        codeDir = make_shared<Location>(model1);
      }
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComputeResource"].type()) {
        AlgorithmSpecComputeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComputeResource"]));
        computeResource = make_shared<AlgorithmSpecComputeResource>(model1);
      }
    }
    if (m.find("Customization") != m.end() && !m["Customization"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customization"].type()) {
        AlgorithmSpecCustomization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customization"]));
        customization = make_shared<AlgorithmSpecCustomization>(model1);
      }
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HyperParameters"].type()) {
        vector<HyperParameterDefinition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HyperParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HyperParameterDefinition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hyperParameters = make_shared<vector<HyperParameterDefinition>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("InputChannels") != m.end() && !m["InputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["InputChannels"].type()) {
        vector<Channel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Channel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputChannels = make_shared<vector<Channel>>(expect1);
      }
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MetricDefinitions") != m.end() && !m["MetricDefinitions"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricDefinitions"].type()) {
        vector<MetricDefinition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricDefinitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MetricDefinition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricDefinitions = make_shared<vector<MetricDefinition>>(expect1);
      }
    }
    if (m.find("OutputChannels") != m.end() && !m["OutputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputChannels"].type()) {
        vector<Channel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Channel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputChannels = make_shared<vector<Channel>>(expect1);
      }
    }
    if (m.find("ProgressDefinitions") != m.end() && !m["ProgressDefinitions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProgressDefinitions"].type()) {
        AlgorithmSpecProgressDefinitions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProgressDefinitions"]));
        progressDefinitions = make_shared<AlgorithmSpecProgressDefinitions>(model1);
      }
    }
    if (m.find("ResourceRequirements") != m.end() && !m["ResourceRequirements"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceRequirements"].type()) {
        vector<ConditionExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceRequirements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConditionExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceRequirements = make_shared<vector<ConditionExpression>>(expect1);
      }
    }
    if (m.find("SupportedInstanceTypes") != m.end() && !m["SupportedInstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedInstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedInstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SupportsDistributedTraining") != m.end() && !m["SupportsDistributedTraining"].empty()) {
      supportsDistributedTraining = make_shared<bool>(boost::any_cast<bool>(m["SupportsDistributedTraining"]));
    }
  }


  virtual ~AlgorithmSpec() = default;
};
class NodeSpec : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> type{};

  NodeSpec() {}

  explicit NodeSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~NodeSpec() = default;
};
class AllocateStrategySpec : public Darabonba::Model {
public:
  shared_ptr<vector<NodeSpec>> nodeSpecs{};

  AllocateStrategySpec() {}

  explicit AllocateStrategySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeSpecs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeSpecs") != m.end() && !m["NodeSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeSpecs"].type()) {
        vector<NodeSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeSpecs = make_shared<vector<NodeSpec>>(expect1);
      }
    }
  }


  virtual ~AllocateStrategySpec() = default;
};
class ChannelProperty : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ChannelProperty() {}

  explicit ChannelProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ChannelProperty() = default;
};
class ComponentSpec : public Darabonba::Model {
public:
  shared_ptr<Location> codeDir{};
  shared_ptr<string> command{};
  shared_ptr<vector<HyperParameterDefinition>> hyperParameters{};
  shared_ptr<string> image{};
  shared_ptr<vector<Channel>> inputChannels{};
  shared_ptr<string> jobType{};
  shared_ptr<vector<MetricDefinition>> metricDefinitions{};
  shared_ptr<vector<Channel>> outputChannels{};
  shared_ptr<vector<ConditionExpression>> resourceRequirements{};

  ComponentSpec() {}

  explicit ComponentSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeDir) {
      res["CodeDir"] = codeDir ? boost::any(codeDir->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (hyperParameters) {
      vector<boost::any> temp1;
      for(auto item1:*hyperParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HyperParameters"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (inputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*inputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputChannels"] = boost::any(temp1);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (metricDefinitions) {
      vector<boost::any> temp1;
      for(auto item1:*metricDefinitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricDefinitions"] = boost::any(temp1);
    }
    if (outputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*outputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputChannels"] = boost::any(temp1);
    }
    if (resourceRequirements) {
      vector<boost::any> temp1;
      for(auto item1:*resourceRequirements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceRequirements"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeDir") != m.end() && !m["CodeDir"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeDir"].type()) {
        Location model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeDir"]));
        codeDir = make_shared<Location>(model1);
      }
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HyperParameters"].type()) {
        vector<HyperParameterDefinition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HyperParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HyperParameterDefinition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hyperParameters = make_shared<vector<HyperParameterDefinition>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("InputChannels") != m.end() && !m["InputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["InputChannels"].type()) {
        vector<Channel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Channel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputChannels = make_shared<vector<Channel>>(expect1);
      }
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MetricDefinitions") != m.end() && !m["MetricDefinitions"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricDefinitions"].type()) {
        vector<MetricDefinition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricDefinitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MetricDefinition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricDefinitions = make_shared<vector<MetricDefinition>>(expect1);
      }
    }
    if (m.find("OutputChannels") != m.end() && !m["OutputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputChannels"].type()) {
        vector<Channel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Channel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputChannels = make_shared<vector<Channel>>(expect1);
      }
    }
    if (m.find("ResourceRequirements") != m.end() && !m["ResourceRequirements"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceRequirements"].type()) {
        vector<ConditionExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceRequirements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConditionExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceRequirements = make_shared<vector<ConditionExpression>>(expect1);
      }
    }
  }


  virtual ~ComponentSpec() = default;
};
class FeaturesQuota : public Darabonba::Model {
public:
  shared_ptr<bool> isEnabled{};

  FeaturesQuota() {}

  explicit FeaturesQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
  }


  virtual ~FeaturesQuota() = default;
};
class Features : public Darabonba::Model {
public:
  shared_ptr<FeaturesQuota> quota{};

  Features() {}

  explicit Features(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quota) {
      res["Quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quota"].type()) {
        FeaturesQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quota"]));
        quota = make_shared<FeaturesQuota>(model1);
      }
    }
  }


  virtual ~Features() = default;
};
class GPUInfo : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> type{};

  GPUInfo() {}

  explicit GPUInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GPUInfo() = default;
};
class JobViewMetric : public Darabonba::Model {
public:
  shared_ptr<string> CPUUsageRate{};
  shared_ptr<string> diskReadRate{};
  shared_ptr<string> diskWriteRate{};
  shared_ptr<string> GPUUsageRate{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> memoryUsageRate{};
  shared_ptr<string> networkInputRate{};
  shared_ptr<string> networkOutputRate{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};
  shared_ptr<string> userId{};

  JobViewMetric() {}

  explicit JobViewMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPUUsageRate) {
      res["CPUUsageRate"] = boost::any(*CPUUsageRate);
    }
    if (diskReadRate) {
      res["DiskReadRate"] = boost::any(*diskReadRate);
    }
    if (diskWriteRate) {
      res["DiskWriteRate"] = boost::any(*diskWriteRate);
    }
    if (GPUUsageRate) {
      res["GPUUsageRate"] = boost::any(*GPUUsageRate);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (memoryUsageRate) {
      res["MemoryUsageRate"] = boost::any(*memoryUsageRate);
    }
    if (networkInputRate) {
      res["NetworkInputRate"] = boost::any(*networkInputRate);
    }
    if (networkOutputRate) {
      res["NetworkOutputRate"] = boost::any(*networkOutputRate);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPUUsageRate") != m.end() && !m["CPUUsageRate"].empty()) {
      CPUUsageRate = make_shared<string>(boost::any_cast<string>(m["CPUUsageRate"]));
    }
    if (m.find("DiskReadRate") != m.end() && !m["DiskReadRate"].empty()) {
      diskReadRate = make_shared<string>(boost::any_cast<string>(m["DiskReadRate"]));
    }
    if (m.find("DiskWriteRate") != m.end() && !m["DiskWriteRate"].empty()) {
      diskWriteRate = make_shared<string>(boost::any_cast<string>(m["DiskWriteRate"]));
    }
    if (m.find("GPUUsageRate") != m.end() && !m["GPUUsageRate"].empty()) {
      GPUUsageRate = make_shared<string>(boost::any_cast<string>(m["GPUUsageRate"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MemoryUsageRate") != m.end() && !m["MemoryUsageRate"].empty()) {
      memoryUsageRate = make_shared<string>(boost::any_cast<string>(m["MemoryUsageRate"]));
    }
    if (m.find("NetworkInputRate") != m.end() && !m["NetworkInputRate"].empty()) {
      networkInputRate = make_shared<string>(boost::any_cast<string>(m["NetworkInputRate"]));
    }
    if (m.find("NetworkOutputRate") != m.end() && !m["NetworkOutputRate"].empty()) {
      networkOutputRate = make_shared<string>(boost::any_cast<string>(m["NetworkOutputRate"]));
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~JobViewMetric() = default;
};
class Label : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Label() {}

  explicit Label(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Label() = default;
};
class MachineGroup : public Darabonba::Model {
public:
  shared_ptr<string> creatorID{};
  shared_ptr<string> defaultDriver{};
  shared_ptr<long> ecsCount{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<string> gmtCreatedTime{};
  shared_ptr<string> gmtExpiredTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> gmtStartedTime{};
  shared_ptr<string> machineGroupID{};
  shared_ptr<string> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> supportedDrivers{};

  MachineGroup() {}

  explicit MachineGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorID) {
      res["CreatorID"] = boost::any(*creatorID);
    }
    if (defaultDriver) {
      res["DefaultDriver"] = boost::any(*defaultDriver);
    }
    if (ecsCount) {
      res["EcsCount"] = boost::any(*ecsCount);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (gmtCreatedTime) {
      res["GmtCreatedTime"] = boost::any(*gmtCreatedTime);
    }
    if (gmtExpiredTime) {
      res["GmtExpiredTime"] = boost::any(*gmtExpiredTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (gmtStartedTime) {
      res["GmtStartedTime"] = boost::any(*gmtStartedTime);
    }
    if (machineGroupID) {
      res["MachineGroupID"] = boost::any(*machineGroupID);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportedDrivers) {
      res["SupportedDrivers"] = boost::any(*supportedDrivers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorID") != m.end() && !m["CreatorID"].empty()) {
      creatorID = make_shared<string>(boost::any_cast<string>(m["CreatorID"]));
    }
    if (m.find("DefaultDriver") != m.end() && !m["DefaultDriver"].empty()) {
      defaultDriver = make_shared<string>(boost::any_cast<string>(m["DefaultDriver"]));
    }
    if (m.find("EcsCount") != m.end() && !m["EcsCount"].empty()) {
      ecsCount = make_shared<long>(boost::any_cast<long>(m["EcsCount"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("GmtCreatedTime") != m.end() && !m["GmtCreatedTime"].empty()) {
      gmtCreatedTime = make_shared<string>(boost::any_cast<string>(m["GmtCreatedTime"]));
    }
    if (m.find("GmtExpiredTime") != m.end() && !m["GmtExpiredTime"].empty()) {
      gmtExpiredTime = make_shared<string>(boost::any_cast<string>(m["GmtExpiredTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("GmtStartedTime") != m.end() && !m["GmtStartedTime"].empty()) {
      gmtStartedTime = make_shared<string>(boost::any_cast<string>(m["GmtStartedTime"]));
    }
    if (m.find("MachineGroupID") != m.end() && !m["MachineGroupID"].empty()) {
      machineGroupID = make_shared<string>(boost::any_cast<string>(m["MachineGroupID"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<string>(boost::any_cast<string>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportedDrivers") != m.end() && !m["SupportedDrivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedDrivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedDrivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedDrivers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~MachineGroup() = default;
};
class Metric : public Darabonba::Model {
public:
  shared_ptr<long> time{};
  shared_ptr<string> value{};

  Metric() {}

  explicit Metric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~Metric() = default;
};
class QuotaIdName : public Darabonba::Model {
public:
  shared_ptr<string> quotaId{};
  shared_ptr<string> quotaName{};

  QuotaIdName() {}

  explicit QuotaIdName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
  }


  virtual ~QuotaIdName() = default;
};
class Node : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<vector<QuotaIdName>> boundQuotas{};
  shared_ptr<string> CPU{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtExpiredTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isBound{};
  shared_ptr<string> machineGroupId{};
  shared_ptr<string> memory{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceGroupName{};

  Node() {}

  explicit Node(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (boundQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*boundQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BoundQuotas"] = boost::any(temp1);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtExpiredTime) {
      res["GmtExpiredTime"] = boost::any(*gmtExpiredTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isBound) {
      res["IsBound"] = boost::any(*isBound);
    }
    if (machineGroupId) {
      res["MachineGroupId"] = boost::any(*machineGroupId);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("BoundQuotas") != m.end() && !m["BoundQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["BoundQuotas"].type()) {
        vector<QuotaIdName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BoundQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuotaIdName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boundQuotas = make_shared<vector<QuotaIdName>>(expect1);
      }
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtExpiredTime") != m.end() && !m["GmtExpiredTime"].empty()) {
      gmtExpiredTime = make_shared<string>(boost::any_cast<string>(m["GmtExpiredTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsBound") != m.end() && !m["IsBound"].empty()) {
      isBound = make_shared<bool>(boost::any_cast<bool>(m["IsBound"]));
    }
    if (m.find("MachineGroupId") != m.end() && !m["MachineGroupId"].empty()) {
      machineGroupId = make_shared<string>(boost::any_cast<string>(m["MachineGroupId"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~Node() = default;
};
class NodeMetric : public Darabonba::Model {
public:
  shared_ptr<string> GPUType{};
  shared_ptr<vector<Metric>> metrics{};
  shared_ptr<string> nodeID{};

  NodeMetric() {}

  explicit NodeMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (nodeID) {
      res["NodeID"] = boost::any(*nodeID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<Metric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Metric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<Metric>>(expect1);
      }
    }
    if (m.find("NodeID") != m.end() && !m["NodeID"].empty()) {
      nodeID = make_shared<string>(boost::any_cast<string>(m["NodeID"]));
    }
  }


  virtual ~NodeMetric() = default;
};
class NodeType : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> nodeType{};

  NodeType() {}

  explicit NodeType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~NodeType() = default;
};
class NodeTypeStatistic : public Darabonba::Model {
public:
  shared_ptr<long> canBeBoundCount{};
  shared_ptr<string> nodeType{};
  shared_ptr<long> totalCount{};

  NodeTypeStatistic() {}

  explicit NodeTypeStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canBeBoundCount) {
      res["CanBeBoundCount"] = boost::any(*canBeBoundCount);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanBeBoundCount") != m.end() && !m["CanBeBoundCount"].empty()) {
      canBeBoundCount = make_shared<long>(boost::any_cast<long>(m["CanBeBoundCount"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~NodeTypeStatistic() = default;
};
class NodeViewMetric : public Darabonba::Model {
public:
  shared_ptr<string> CPUUsageRate{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> diskReadRate{};
  shared_ptr<string> diskWriteRate{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> machineGroupID{};
  shared_ptr<string> memoryUsageRate{};
  shared_ptr<string> networkInputRate{};
  shared_ptr<string> networkOutputRate{};
  shared_ptr<string> nodeID{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> nodeType{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<map<string, boost::any>> taskIdMap{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};
  shared_ptr<long> totalTasks{};
  shared_ptr<vector<string>> userIDs{};
  shared_ptr<string> userNumber{};

  NodeViewMetric() {}

  explicit NodeViewMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPUUsageRate) {
      res["CPUUsageRate"] = boost::any(*CPUUsageRate);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (diskReadRate) {
      res["DiskReadRate"] = boost::any(*diskReadRate);
    }
    if (diskWriteRate) {
      res["DiskWriteRate"] = boost::any(*diskWriteRate);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (machineGroupID) {
      res["MachineGroupID"] = boost::any(*machineGroupID);
    }
    if (memoryUsageRate) {
      res["MemoryUsageRate"] = boost::any(*memoryUsageRate);
    }
    if (networkInputRate) {
      res["NetworkInputRate"] = boost::any(*networkInputRate);
    }
    if (networkOutputRate) {
      res["NetworkOutputRate"] = boost::any(*networkOutputRate);
    }
    if (nodeID) {
      res["NodeID"] = boost::any(*nodeID);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (taskIdMap) {
      res["TaskIdMap"] = boost::any(*taskIdMap);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    if (totalTasks) {
      res["TotalTasks"] = boost::any(*totalTasks);
    }
    if (userIDs) {
      res["UserIDs"] = boost::any(*userIDs);
    }
    if (userNumber) {
      res["UserNumber"] = boost::any(*userNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPUUsageRate") != m.end() && !m["CPUUsageRate"].empty()) {
      CPUUsageRate = make_shared<string>(boost::any_cast<string>(m["CPUUsageRate"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DiskReadRate") != m.end() && !m["DiskReadRate"].empty()) {
      diskReadRate = make_shared<string>(boost::any_cast<string>(m["DiskReadRate"]));
    }
    if (m.find("DiskWriteRate") != m.end() && !m["DiskWriteRate"].empty()) {
      diskWriteRate = make_shared<string>(boost::any_cast<string>(m["DiskWriteRate"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("MachineGroupID") != m.end() && !m["MachineGroupID"].empty()) {
      machineGroupID = make_shared<string>(boost::any_cast<string>(m["MachineGroupID"]));
    }
    if (m.find("MemoryUsageRate") != m.end() && !m["MemoryUsageRate"].empty()) {
      memoryUsageRate = make_shared<string>(boost::any_cast<string>(m["MemoryUsageRate"]));
    }
    if (m.find("NetworkInputRate") != m.end() && !m["NetworkInputRate"].empty()) {
      networkInputRate = make_shared<string>(boost::any_cast<string>(m["NetworkInputRate"]));
    }
    if (m.find("NetworkOutputRate") != m.end() && !m["NetworkOutputRate"].empty()) {
      networkOutputRate = make_shared<string>(boost::any_cast<string>(m["NetworkOutputRate"]));
    }
    if (m.find("NodeID") != m.end() && !m["NodeID"].empty()) {
      nodeID = make_shared<string>(boost::any_cast<string>(m["NodeID"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TaskIdMap") != m.end() && !m["TaskIdMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TaskIdMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      taskIdMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
    if (m.find("TotalTasks") != m.end() && !m["TotalTasks"].empty()) {
      totalTasks = make_shared<long>(boost::any_cast<long>(m["TotalTasks"]));
    }
    if (m.find("UserIDs") != m.end() && !m["UserIDs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIDs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIDs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIDs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserNumber") != m.end() && !m["UserNumber"].empty()) {
      userNumber = make_shared<string>(boost::any_cast<string>(m["UserNumber"]));
    }
  }


  virtual ~NodeViewMetric() = default;
};
class Permission : public Darabonba::Model {
public:
  shared_ptr<bool> isEnabled{};
  shared_ptr<string> resourceType{};

  Permission() {}

  explicit Permission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~Permission() = default;
};
class QueueInfo : public Darabonba::Model {
public:
  shared_ptr<string> gmtEnqueuedTime{};
  shared_ptr<string> gmtPositionModifiedTime{};
  shared_ptr<long> position{};
  shared_ptr<long> priority{};
  shared_ptr<string> queueStrategy{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> workloadId{};
  shared_ptr<string> workloadType{};
  shared_ptr<string> workspaceId{};

  QueueInfo() {}

  explicit QueueInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtEnqueuedTime) {
      res["GmtEnqueuedTime"] = boost::any(*gmtEnqueuedTime);
    }
    if (gmtPositionModifiedTime) {
      res["GmtPositionModifiedTime"] = boost::any(*gmtPositionModifiedTime);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (queueStrategy) {
      res["QueueStrategy"] = boost::any(*queueStrategy);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadType) {
      res["WorkloadType"] = boost::any(*workloadType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtEnqueuedTime") != m.end() && !m["GmtEnqueuedTime"].empty()) {
      gmtEnqueuedTime = make_shared<string>(boost::any_cast<string>(m["GmtEnqueuedTime"]));
    }
    if (m.find("GmtPositionModifiedTime") != m.end() && !m["GmtPositionModifiedTime"].empty()) {
      gmtPositionModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtPositionModifiedTime"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("QueueStrategy") != m.end() && !m["QueueStrategy"].empty()) {
      queueStrategy = make_shared<string>(boost::any_cast<string>(m["QueueStrategy"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<string>(boost::any_cast<string>(m["WorkloadId"]));
    }
    if (m.find("WorkloadType") != m.end() && !m["WorkloadType"].empty()) {
      workloadType = make_shared<string>(boost::any_cast<string>(m["WorkloadType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueueInfo() = default;
};
class ResourceSpec : public Darabonba::Model {
public:
  shared_ptr<vector<NodeSpec>> nodeSpecs{};

  ResourceSpec() {}

  explicit ResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeSpecs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeSpecs") != m.end() && !m["NodeSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeSpecs"].type()) {
        vector<NodeSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeSpecs = make_shared<vector<NodeSpec>>(expect1);
      }
    }
  }


  virtual ~ResourceSpec() = default;
};
class UserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  UserVpc() {}

  explicit UserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~UserVpc() = default;
};
class QuotaConfig : public Darabonba::Model {
public:
  shared_ptr<ACS> ACS{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> defaultGPUDriver{};
  shared_ptr<vector<string>> supportGPUDrivers{};
  shared_ptr<bool> supportRDMA{};
  shared_ptr<UserVpc> userVpc{};

  QuotaConfig() {}

  explicit QuotaConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ACS) {
      res["ACS"] = ACS ? boost::any(ACS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (defaultGPUDriver) {
      res["DefaultGPUDriver"] = boost::any(*defaultGPUDriver);
    }
    if (supportGPUDrivers) {
      res["SupportGPUDrivers"] = boost::any(*supportGPUDrivers);
    }
    if (supportRDMA) {
      res["SupportRDMA"] = boost::any(*supportRDMA);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ACS") != m.end() && !m["ACS"].empty()) {
      if (typeid(map<string, boost::any>) == m["ACS"].type()) {
        ACS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ACS"]));
        ACS = make_shared<ACS>(model1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DefaultGPUDriver") != m.end() && !m["DefaultGPUDriver"].empty()) {
      defaultGPUDriver = make_shared<string>(boost::any_cast<string>(m["DefaultGPUDriver"]));
    }
    if (m.find("SupportGPUDrivers") != m.end() && !m["SupportGPUDrivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportGPUDrivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportGPUDrivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportGPUDrivers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SupportRDMA") != m.end() && !m["SupportRDMA"].empty()) {
      supportRDMA = make_shared<bool>(boost::any_cast<bool>(m["SupportRDMA"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
  }


  virtual ~QuotaConfig() = default;
};
class ResourceAmount : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};

  ResourceAmount() {}

  explicit ResourceAmount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
  }


  virtual ~ResourceAmount() = default;
};
class QuotaDetails : public Darabonba::Model {
public:
  shared_ptr<ResourceAmount> actualMinQuota{};
  shared_ptr<ResourceAmount> desiredMinQuota{};
  shared_ptr<ResourceAmount> requestedQuota{};
  shared_ptr<ResourceAmount> usedQuota{};

  QuotaDetails() {}

  explicit QuotaDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualMinQuota) {
      res["ActualMinQuota"] = actualMinQuota ? boost::any(actualMinQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (desiredMinQuota) {
      res["DesiredMinQuota"] = desiredMinQuota ? boost::any(desiredMinQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestedQuota) {
      res["RequestedQuota"] = requestedQuota ? boost::any(requestedQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedQuota) {
      res["UsedQuota"] = usedQuota ? boost::any(usedQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualMinQuota") != m.end() && !m["ActualMinQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["ActualMinQuota"].type()) {
        ResourceAmount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ActualMinQuota"]));
        actualMinQuota = make_shared<ResourceAmount>(model1);
      }
    }
    if (m.find("DesiredMinQuota") != m.end() && !m["DesiredMinQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["DesiredMinQuota"].type()) {
        ResourceAmount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DesiredMinQuota"]));
        desiredMinQuota = make_shared<ResourceAmount>(model1);
      }
    }
    if (m.find("RequestedQuota") != m.end() && !m["RequestedQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedQuota"].type()) {
        ResourceAmount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedQuota"]));
        requestedQuota = make_shared<ResourceAmount>(model1);
      }
    }
    if (m.find("UsedQuota") != m.end() && !m["UsedQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedQuota"].type()) {
        ResourceAmount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedQuota"]));
        usedQuota = make_shared<ResourceAmount>(model1);
      }
    }
  }


  virtual ~QuotaDetails() = default;
};
class WorkspaceIdName : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  WorkspaceIdName() {}

  explicit WorkspaceIdName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~WorkspaceIdName() = default;
};
class Quota : public Darabonba::Model {
public:
  shared_ptr<string> allocateStrategy{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreatedTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> latestOperationId{};
  shared_ptr<ResourceSpec> min{};
  shared_ptr<string> parentQuotaId{};
  shared_ptr<string> queueStrategy{};
  shared_ptr<QuotaConfig> quotaConfig{};
  shared_ptr<QuotaDetails> quotaDetails{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<vector<string>> resourceGroupIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<vector<QuotaIdName>> subQuotas{};
  shared_ptr<vector<WorkspaceIdName>> workspaces{};

  Quota() {}

  explicit Quota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocateStrategy) {
      res["AllocateStrategy"] = boost::any(*allocateStrategy);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreatedTime) {
      res["GmtCreatedTime"] = boost::any(*gmtCreatedTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestOperationId) {
      res["LatestOperationId"] = boost::any(*latestOperationId);
    }
    if (min) {
      res["Min"] = min ? boost::any(min->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentQuotaId) {
      res["ParentQuotaId"] = boost::any(*parentQuotaId);
    }
    if (queueStrategy) {
      res["QueueStrategy"] = boost::any(*queueStrategy);
    }
    if (quotaConfig) {
      res["QuotaConfig"] = quotaConfig ? boost::any(quotaConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quotaDetails) {
      res["QuotaDetails"] = quotaDetails ? boost::any(quotaDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (resourceGroupIds) {
      res["ResourceGroupIds"] = boost::any(*resourceGroupIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubQuotas"] = boost::any(temp1);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocateStrategy") != m.end() && !m["AllocateStrategy"].empty()) {
      allocateStrategy = make_shared<string>(boost::any_cast<string>(m["AllocateStrategy"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreatedTime") != m.end() && !m["GmtCreatedTime"].empty()) {
      gmtCreatedTime = make_shared<string>(boost::any_cast<string>(m["GmtCreatedTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestOperationId") != m.end() && !m["LatestOperationId"].empty()) {
      latestOperationId = make_shared<string>(boost::any_cast<string>(m["LatestOperationId"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      if (typeid(map<string, boost::any>) == m["Min"].type()) {
        ResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Min"]));
        min = make_shared<ResourceSpec>(model1);
      }
    }
    if (m.find("ParentQuotaId") != m.end() && !m["ParentQuotaId"].empty()) {
      parentQuotaId = make_shared<string>(boost::any_cast<string>(m["ParentQuotaId"]));
    }
    if (m.find("QueueStrategy") != m.end() && !m["QueueStrategy"].empty()) {
      queueStrategy = make_shared<string>(boost::any_cast<string>(m["QueueStrategy"]));
    }
    if (m.find("QuotaConfig") != m.end() && !m["QuotaConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaConfig"].type()) {
        QuotaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaConfig"]));
        quotaConfig = make_shared<QuotaConfig>(model1);
      }
    }
    if (m.find("QuotaDetails") != m.end() && !m["QuotaDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaDetails"].type()) {
        QuotaDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaDetails"]));
        quotaDetails = make_shared<QuotaDetails>(model1);
      }
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("ResourceGroupIds") != m.end() && !m["ResourceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubQuotas") != m.end() && !m["SubQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["SubQuotas"].type()) {
        vector<QuotaIdName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuotaIdName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotas = make_shared<vector<QuotaIdName>>(expect1);
      }
    }
    if (m.find("Workspaces") != m.end() && !m["Workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Workspaces"].type()) {
        vector<WorkspaceIdName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WorkspaceIdName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<WorkspaceIdName>>(expect1);
      }
    }
  }


  virtual ~Quota() = default;
};
class QuotaJobViewMetric : public Darabonba::Model {
public:
  shared_ptr<string> CPUUsageRate{};
  shared_ptr<string> diskReadRate{};
  shared_ptr<string> diskWriteRate{};
  shared_ptr<string> GPUUsageRate{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> memoryUsageRate{};
  shared_ptr<string> networkInputRate{};
  shared_ptr<string> networkOutputRate{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};
  shared_ptr<string> userId{};

  QuotaJobViewMetric() {}

  explicit QuotaJobViewMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPUUsageRate) {
      res["CPUUsageRate"] = boost::any(*CPUUsageRate);
    }
    if (diskReadRate) {
      res["DiskReadRate"] = boost::any(*diskReadRate);
    }
    if (diskWriteRate) {
      res["DiskWriteRate"] = boost::any(*diskWriteRate);
    }
    if (GPUUsageRate) {
      res["GPUUsageRate"] = boost::any(*GPUUsageRate);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (memoryUsageRate) {
      res["MemoryUsageRate"] = boost::any(*memoryUsageRate);
    }
    if (networkInputRate) {
      res["NetworkInputRate"] = boost::any(*networkInputRate);
    }
    if (networkOutputRate) {
      res["NetworkOutputRate"] = boost::any(*networkOutputRate);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPUUsageRate") != m.end() && !m["CPUUsageRate"].empty()) {
      CPUUsageRate = make_shared<string>(boost::any_cast<string>(m["CPUUsageRate"]));
    }
    if (m.find("DiskReadRate") != m.end() && !m["DiskReadRate"].empty()) {
      diskReadRate = make_shared<string>(boost::any_cast<string>(m["DiskReadRate"]));
    }
    if (m.find("DiskWriteRate") != m.end() && !m["DiskWriteRate"].empty()) {
      diskWriteRate = make_shared<string>(boost::any_cast<string>(m["DiskWriteRate"]));
    }
    if (m.find("GPUUsageRate") != m.end() && !m["GPUUsageRate"].empty()) {
      GPUUsageRate = make_shared<string>(boost::any_cast<string>(m["GPUUsageRate"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MemoryUsageRate") != m.end() && !m["MemoryUsageRate"].empty()) {
      memoryUsageRate = make_shared<string>(boost::any_cast<string>(m["MemoryUsageRate"]));
    }
    if (m.find("NetworkInputRate") != m.end() && !m["NetworkInputRate"].empty()) {
      networkInputRate = make_shared<string>(boost::any_cast<string>(m["NetworkInputRate"]));
    }
    if (m.find("NetworkOutputRate") != m.end() && !m["NetworkOutputRate"].empty()) {
      networkOutputRate = make_shared<string>(boost::any_cast<string>(m["NetworkOutputRate"]));
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QuotaJobViewMetric() = default;
};
class QuotaMetric : public Darabonba::Model {
public:
  shared_ptr<string> GPUType{};
  shared_ptr<vector<Metric>> metrics{};

  QuotaMetric() {}

  explicit QuotaMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<Metric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Metric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<Metric>>(expect1);
      }
    }
  }


  virtual ~QuotaMetric() = default;
};
class QuotaNodeViewMetric : public Darabonba::Model {
public:
  shared_ptr<string> CPUUsageRate{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> diskReadRate{};
  shared_ptr<string> diskWriteRate{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memoryUsageRate{};
  shared_ptr<string> networkInputRate{};
  shared_ptr<string> networkOutputRate{};
  shared_ptr<string> nodeID{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> quotaId{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<map<string, boost::any>> taskIdMap{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};
  shared_ptr<long> totalTasks{};
  shared_ptr<vector<string>> userIDs{};
  shared_ptr<string> userNumber{};

  QuotaNodeViewMetric() {}

  explicit QuotaNodeViewMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPUUsageRate) {
      res["CPUUsageRate"] = boost::any(*CPUUsageRate);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (diskReadRate) {
      res["DiskReadRate"] = boost::any(*diskReadRate);
    }
    if (diskWriteRate) {
      res["DiskWriteRate"] = boost::any(*diskWriteRate);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memoryUsageRate) {
      res["MemoryUsageRate"] = boost::any(*memoryUsageRate);
    }
    if (networkInputRate) {
      res["NetworkInputRate"] = boost::any(*networkInputRate);
    }
    if (networkOutputRate) {
      res["NetworkOutputRate"] = boost::any(*networkOutputRate);
    }
    if (nodeID) {
      res["NodeID"] = boost::any(*nodeID);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (taskIdMap) {
      res["TaskIdMap"] = boost::any(*taskIdMap);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    if (totalTasks) {
      res["TotalTasks"] = boost::any(*totalTasks);
    }
    if (userIDs) {
      res["UserIDs"] = boost::any(*userIDs);
    }
    if (userNumber) {
      res["UserNumber"] = boost::any(*userNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPUUsageRate") != m.end() && !m["CPUUsageRate"].empty()) {
      CPUUsageRate = make_shared<string>(boost::any_cast<string>(m["CPUUsageRate"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DiskReadRate") != m.end() && !m["DiskReadRate"].empty()) {
      diskReadRate = make_shared<string>(boost::any_cast<string>(m["DiskReadRate"]));
    }
    if (m.find("DiskWriteRate") != m.end() && !m["DiskWriteRate"].empty()) {
      diskWriteRate = make_shared<string>(boost::any_cast<string>(m["DiskWriteRate"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("MemoryUsageRate") != m.end() && !m["MemoryUsageRate"].empty()) {
      memoryUsageRate = make_shared<string>(boost::any_cast<string>(m["MemoryUsageRate"]));
    }
    if (m.find("NetworkInputRate") != m.end() && !m["NetworkInputRate"].empty()) {
      networkInputRate = make_shared<string>(boost::any_cast<string>(m["NetworkInputRate"]));
    }
    if (m.find("NetworkOutputRate") != m.end() && !m["NetworkOutputRate"].empty()) {
      networkOutputRate = make_shared<string>(boost::any_cast<string>(m["NetworkOutputRate"]));
    }
    if (m.find("NodeID") != m.end() && !m["NodeID"].empty()) {
      nodeID = make_shared<string>(boost::any_cast<string>(m["NodeID"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TaskIdMap") != m.end() && !m["TaskIdMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TaskIdMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      taskIdMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
    if (m.find("TotalTasks") != m.end() && !m["TotalTasks"].empty()) {
      totalTasks = make_shared<long>(boost::any_cast<long>(m["TotalTasks"]));
    }
    if (m.find("UserIDs") != m.end() && !m["UserIDs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIDs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIDs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIDs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserNumber") != m.end() && !m["UserNumber"].empty()) {
      userNumber = make_shared<string>(boost::any_cast<string>(m["UserNumber"]));
    }
  }


  virtual ~QuotaNodeViewMetric() = default;
};
class QuotaUserViewMetric : public Darabonba::Model {
public:
  shared_ptr<long> CPUNodeNumber{};
  shared_ptr<string> CPUUsageRate{};
  shared_ptr<vector<string>> cpuJobNames{};
  shared_ptr<vector<string>> cpuNodeNames{};
  shared_ptr<string> diskReadRate{};
  shared_ptr<string> diskWriteRate{};
  shared_ptr<long> GPUNodeNumber{};
  shared_ptr<string> GPUUsageRate{};
  shared_ptr<vector<string>> gpuJobNames{};
  shared_ptr<vector<string>> gpuNodeNames{};
  shared_ptr<string> jobType{};
  shared_ptr<string> memoryUsageRate{};
  shared_ptr<string> networkInputRate{};
  shared_ptr<string> networkOutputRate{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};
  shared_ptr<string> userId{};

  QuotaUserViewMetric() {}

  explicit QuotaUserViewMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPUNodeNumber) {
      res["CPUNodeNumber"] = boost::any(*CPUNodeNumber);
    }
    if (CPUUsageRate) {
      res["CPUUsageRate"] = boost::any(*CPUUsageRate);
    }
    if (cpuJobNames) {
      res["CpuJobNames"] = boost::any(*cpuJobNames);
    }
    if (cpuNodeNames) {
      res["CpuNodeNames"] = boost::any(*cpuNodeNames);
    }
    if (diskReadRate) {
      res["DiskReadRate"] = boost::any(*diskReadRate);
    }
    if (diskWriteRate) {
      res["DiskWriteRate"] = boost::any(*diskWriteRate);
    }
    if (GPUNodeNumber) {
      res["GPUNodeNumber"] = boost::any(*GPUNodeNumber);
    }
    if (GPUUsageRate) {
      res["GPUUsageRate"] = boost::any(*GPUUsageRate);
    }
    if (gpuJobNames) {
      res["GpuJobNames"] = boost::any(*gpuJobNames);
    }
    if (gpuNodeNames) {
      res["GpuNodeNames"] = boost::any(*gpuNodeNames);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (memoryUsageRate) {
      res["MemoryUsageRate"] = boost::any(*memoryUsageRate);
    }
    if (networkInputRate) {
      res["NetworkInputRate"] = boost::any(*networkInputRate);
    }
    if (networkOutputRate) {
      res["NetworkOutputRate"] = boost::any(*networkOutputRate);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPUNodeNumber") != m.end() && !m["CPUNodeNumber"].empty()) {
      CPUNodeNumber = make_shared<long>(boost::any_cast<long>(m["CPUNodeNumber"]));
    }
    if (m.find("CPUUsageRate") != m.end() && !m["CPUUsageRate"].empty()) {
      CPUUsageRate = make_shared<string>(boost::any_cast<string>(m["CPUUsageRate"]));
    }
    if (m.find("CpuJobNames") != m.end() && !m["CpuJobNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CpuJobNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CpuJobNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cpuJobNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CpuNodeNames") != m.end() && !m["CpuNodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CpuNodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CpuNodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cpuNodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DiskReadRate") != m.end() && !m["DiskReadRate"].empty()) {
      diskReadRate = make_shared<string>(boost::any_cast<string>(m["DiskReadRate"]));
    }
    if (m.find("DiskWriteRate") != m.end() && !m["DiskWriteRate"].empty()) {
      diskWriteRate = make_shared<string>(boost::any_cast<string>(m["DiskWriteRate"]));
    }
    if (m.find("GPUNodeNumber") != m.end() && !m["GPUNodeNumber"].empty()) {
      GPUNodeNumber = make_shared<long>(boost::any_cast<long>(m["GPUNodeNumber"]));
    }
    if (m.find("GPUUsageRate") != m.end() && !m["GPUUsageRate"].empty()) {
      GPUUsageRate = make_shared<string>(boost::any_cast<string>(m["GPUUsageRate"]));
    }
    if (m.find("GpuJobNames") != m.end() && !m["GpuJobNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GpuJobNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GpuJobNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gpuJobNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GpuNodeNames") != m.end() && !m["GpuNodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GpuNodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GpuNodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gpuNodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MemoryUsageRate") != m.end() && !m["MemoryUsageRate"].empty()) {
      memoryUsageRate = make_shared<string>(boost::any_cast<string>(m["MemoryUsageRate"]));
    }
    if (m.find("NetworkInputRate") != m.end() && !m["NetworkInputRate"].empty()) {
      networkInputRate = make_shared<string>(boost::any_cast<string>(m["NetworkInputRate"]));
    }
    if (m.find("NetworkOutputRate") != m.end() && !m["NetworkOutputRate"].empty()) {
      networkOutputRate = make_shared<string>(boost::any_cast<string>(m["NetworkOutputRate"]));
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QuotaUserViewMetric() = default;
};
class ResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> creatorID{};
  shared_ptr<string> gmtCreatedTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<UserVpc> userVpc{};
  shared_ptr<string> workspaceID{};

  ResourceGroup() {}

  explicit ResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorID) {
      res["CreatorID"] = boost::any(*creatorID);
    }
    if (gmtCreatedTime) {
      res["GmtCreatedTime"] = boost::any(*gmtCreatedTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceID) {
      res["WorkspaceID"] = boost::any(*workspaceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorID") != m.end() && !m["CreatorID"].empty()) {
      creatorID = make_shared<string>(boost::any_cast<string>(m["CreatorID"]));
    }
    if (m.find("GmtCreatedTime") != m.end() && !m["GmtCreatedTime"].empty()) {
      gmtCreatedTime = make_shared<string>(boost::any_cast<string>(m["GmtCreatedTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
    if (m.find("WorkspaceID") != m.end() && !m["WorkspaceID"].empty()) {
      workspaceID = make_shared<string>(boost::any_cast<string>(m["WorkspaceID"]));
    }
  }


  virtual ~ResourceGroup() = default;
};
class ResourceGroupMetric : public Darabonba::Model {
public:
  shared_ptr<string> gpuType{};
  shared_ptr<vector<Metric>> metrics{};
  shared_ptr<string> resourceGroupID{};

  ResourceGroupMetric() {}

  explicit ResourceGroupMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuType) {
      res["GpuType"] = boost::any(*gpuType);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GpuType") != m.end() && !m["GpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["GpuType"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<Metric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Metric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<Metric>>(expect1);
      }
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
  }


  virtual ~ResourceGroupMetric() = default;
};
class ResourceOperation : public Darabonba::Model {
public:
  shared_ptr<string> creatorId{};
  shared_ptr<string> gmtCreatedTime{};
  shared_ptr<string> gmtEndTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationId{};
  shared_ptr<string> operationSpecJson{};
  shared_ptr<string> operationType{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> status{};

  ResourceOperation() {}

  explicit ResourceOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (gmtCreatedTime) {
      res["GmtCreatedTime"] = boost::any(*gmtCreatedTime);
    }
    if (gmtEndTime) {
      res["GmtEndTime"] = boost::any(*gmtEndTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (operationSpecJson) {
      res["OperationSpecJson"] = boost::any(*operationSpecJson);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("GmtCreatedTime") != m.end() && !m["GmtCreatedTime"].empty()) {
      gmtCreatedTime = make_shared<string>(boost::any_cast<string>(m["GmtCreatedTime"]));
    }
    if (m.find("GmtEndTime") != m.end() && !m["GmtEndTime"].empty()) {
      gmtEndTime = make_shared<string>(boost::any_cast<string>(m["GmtEndTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("OperationSpecJson") != m.end() && !m["OperationSpecJson"].empty()) {
      operationSpecJson = make_shared<string>(boost::any_cast<string>(m["OperationSpecJson"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ResourceOperation() = default;
};
class UserViewMetric : public Darabonba::Model {
public:
  shared_ptr<long> CPUNodeNumber{};
  shared_ptr<string> CPUUsageRate{};
  shared_ptr<vector<string>> cpuJobNames{};
  shared_ptr<vector<string>> cpuNodeNames{};
  shared_ptr<string> diskReadRate{};
  shared_ptr<string> diskWriteRate{};
  shared_ptr<long> GPUNodeNumber{};
  shared_ptr<string> GPUUsageRate{};
  shared_ptr<vector<string>> gpuJobNames{};
  shared_ptr<vector<string>> gpuNodeNames{};
  shared_ptr<string> jobType{};
  shared_ptr<string> memoryUsageRate{};
  shared_ptr<string> networkInputRate{};
  shared_ptr<string> networkOutputRate{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};
  shared_ptr<string> userId{};

  UserViewMetric() {}

  explicit UserViewMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPUNodeNumber) {
      res["CPUNodeNumber"] = boost::any(*CPUNodeNumber);
    }
    if (CPUUsageRate) {
      res["CPUUsageRate"] = boost::any(*CPUUsageRate);
    }
    if (cpuJobNames) {
      res["CpuJobNames"] = boost::any(*cpuJobNames);
    }
    if (cpuNodeNames) {
      res["CpuNodeNames"] = boost::any(*cpuNodeNames);
    }
    if (diskReadRate) {
      res["DiskReadRate"] = boost::any(*diskReadRate);
    }
    if (diskWriteRate) {
      res["DiskWriteRate"] = boost::any(*diskWriteRate);
    }
    if (GPUNodeNumber) {
      res["GPUNodeNumber"] = boost::any(*GPUNodeNumber);
    }
    if (GPUUsageRate) {
      res["GPUUsageRate"] = boost::any(*GPUUsageRate);
    }
    if (gpuJobNames) {
      res["GpuJobNames"] = boost::any(*gpuJobNames);
    }
    if (gpuNodeNames) {
      res["GpuNodeNames"] = boost::any(*gpuNodeNames);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (memoryUsageRate) {
      res["MemoryUsageRate"] = boost::any(*memoryUsageRate);
    }
    if (networkInputRate) {
      res["NetworkInputRate"] = boost::any(*networkInputRate);
    }
    if (networkOutputRate) {
      res["NetworkOutputRate"] = boost::any(*networkOutputRate);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPUNodeNumber") != m.end() && !m["CPUNodeNumber"].empty()) {
      CPUNodeNumber = make_shared<long>(boost::any_cast<long>(m["CPUNodeNumber"]));
    }
    if (m.find("CPUUsageRate") != m.end() && !m["CPUUsageRate"].empty()) {
      CPUUsageRate = make_shared<string>(boost::any_cast<string>(m["CPUUsageRate"]));
    }
    if (m.find("CpuJobNames") != m.end() && !m["CpuJobNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CpuJobNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CpuJobNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cpuJobNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CpuNodeNames") != m.end() && !m["CpuNodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CpuNodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CpuNodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cpuNodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DiskReadRate") != m.end() && !m["DiskReadRate"].empty()) {
      diskReadRate = make_shared<string>(boost::any_cast<string>(m["DiskReadRate"]));
    }
    if (m.find("DiskWriteRate") != m.end() && !m["DiskWriteRate"].empty()) {
      diskWriteRate = make_shared<string>(boost::any_cast<string>(m["DiskWriteRate"]));
    }
    if (m.find("GPUNodeNumber") != m.end() && !m["GPUNodeNumber"].empty()) {
      GPUNodeNumber = make_shared<long>(boost::any_cast<long>(m["GPUNodeNumber"]));
    }
    if (m.find("GPUUsageRate") != m.end() && !m["GPUUsageRate"].empty()) {
      GPUUsageRate = make_shared<string>(boost::any_cast<string>(m["GPUUsageRate"]));
    }
    if (m.find("GpuJobNames") != m.end() && !m["GpuJobNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GpuJobNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GpuJobNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gpuJobNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GpuNodeNames") != m.end() && !m["GpuNodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GpuNodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GpuNodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gpuNodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MemoryUsageRate") != m.end() && !m["MemoryUsageRate"].empty()) {
      memoryUsageRate = make_shared<string>(boost::any_cast<string>(m["MemoryUsageRate"]));
    }
    if (m.find("NetworkInputRate") != m.end() && !m["NetworkInputRate"].empty()) {
      networkInputRate = make_shared<string>(boost::any_cast<string>(m["NetworkInputRate"]));
    }
    if (m.find("NetworkOutputRate") != m.end() && !m["NetworkOutputRate"].empty()) {
      networkOutputRate = make_shared<string>(boost::any_cast<string>(m["NetworkOutputRate"]));
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UserViewMetric() = default;
};
class CreateAlgorithmRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmDescription{};
  shared_ptr<string> algorithmName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> workspaceId{};

  CreateAlgorithmRequest() {}

  explicit CreateAlgorithmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmDescription) {
      res["AlgorithmDescription"] = boost::any(*algorithmDescription);
    }
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmDescription") != m.end() && !m["AlgorithmDescription"].empty()) {
      algorithmDescription = make_shared<string>(boost::any_cast<string>(m["AlgorithmDescription"]));
    }
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateAlgorithmRequest() = default;
};
class CreateAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> requestId{};

  CreateAlgorithmResponseBody() {}

  explicit CreateAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAlgorithmResponseBody() = default;
};
class CreateAlgorithmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAlgorithmResponseBody> body{};

  CreateAlgorithmResponse() {}

  explicit CreateAlgorithmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAlgorithmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlgorithmResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlgorithmResponse() = default;
};
class CreateAlgorithmVersionRequest : public Darabonba::Model {
public:
  shared_ptr<AlgorithmSpec> algorithmSpec{};

  CreateAlgorithmVersionRequest() {}

  explicit CreateAlgorithmVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmSpec) {
      res["AlgorithmSpec"] = algorithmSpec ? boost::any(algorithmSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmSpec") != m.end() && !m["AlgorithmSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlgorithmSpec"].type()) {
        AlgorithmSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlgorithmSpec"]));
        algorithmSpec = make_shared<AlgorithmSpec>(model1);
      }
    }
  }


  virtual ~CreateAlgorithmVersionRequest() = default;
};
class CreateAlgorithmVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmSpecShrink{};

  CreateAlgorithmVersionShrinkRequest() {}

  explicit CreateAlgorithmVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmSpecShrink) {
      res["AlgorithmSpec"] = boost::any(*algorithmSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmSpec") != m.end() && !m["AlgorithmSpec"].empty()) {
      algorithmSpecShrink = make_shared<string>(boost::any_cast<string>(m["AlgorithmSpec"]));
    }
  }


  virtual ~CreateAlgorithmVersionShrinkRequest() = default;
};
class CreateAlgorithmVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmVersion{};

  CreateAlgorithmVersionResponseBody() {}

  explicit CreateAlgorithmVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
  }


  virtual ~CreateAlgorithmVersionResponseBody() = default;
};
class CreateAlgorithmVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAlgorithmVersionResponseBody> body{};

  CreateAlgorithmVersionResponse() {}

  explicit CreateAlgorithmVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAlgorithmVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlgorithmVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlgorithmVersionResponse() = default;
};
class CreateQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> allocateStrategy{};
  shared_ptr<string> description{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<ResourceSpec> min{};
  shared_ptr<string> parentQuotaId{};
  shared_ptr<string> queueStrategy{};
  shared_ptr<QuotaConfig> quotaConfig{};
  shared_ptr<string> quotaName{};
  shared_ptr<vector<string>> resourceGroupIds{};
  shared_ptr<string> resourceType{};

  CreateQuotaRequest() {}

  explicit CreateQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocateStrategy) {
      res["AllocateStrategy"] = boost::any(*allocateStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (min) {
      res["Min"] = min ? boost::any(min->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentQuotaId) {
      res["ParentQuotaId"] = boost::any(*parentQuotaId);
    }
    if (queueStrategy) {
      res["QueueStrategy"] = boost::any(*queueStrategy);
    }
    if (quotaConfig) {
      res["QuotaConfig"] = quotaConfig ? boost::any(quotaConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (resourceGroupIds) {
      res["ResourceGroupIds"] = boost::any(*resourceGroupIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocateStrategy") != m.end() && !m["AllocateStrategy"].empty()) {
      allocateStrategy = make_shared<string>(boost::any_cast<string>(m["AllocateStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      if (typeid(map<string, boost::any>) == m["Min"].type()) {
        ResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Min"]));
        min = make_shared<ResourceSpec>(model1);
      }
    }
    if (m.find("ParentQuotaId") != m.end() && !m["ParentQuotaId"].empty()) {
      parentQuotaId = make_shared<string>(boost::any_cast<string>(m["ParentQuotaId"]));
    }
    if (m.find("QueueStrategy") != m.end() && !m["QueueStrategy"].empty()) {
      queueStrategy = make_shared<string>(boost::any_cast<string>(m["QueueStrategy"]));
    }
    if (m.find("QuotaConfig") != m.end() && !m["QuotaConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaConfig"].type()) {
        QuotaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaConfig"]));
        quotaConfig = make_shared<QuotaConfig>(model1);
      }
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("ResourceGroupIds") != m.end() && !m["ResourceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateQuotaRequest() = default;
};
class CreateQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> quotaId{};
  shared_ptr<string> requestId{};

  CreateQuotaResponseBody() {}

  explicit CreateQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateQuotaResponseBody() = default;
};
class CreateQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQuotaResponseBody> body{};

  CreateQuotaResponse() {}

  explicit CreateQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQuotaResponse() = default;
};
class CreateResourceGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateResourceGroupRequestTag() {}

  explicit CreateResourceGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateResourceGroupRequestTag() = default;
};
class CreateResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> computingResourceProvider{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<CreateResourceGroupRequestTag>> tag{};
  shared_ptr<UserVpc> userVpc{};

  CreateResourceGroupRequest() {}

  explicit CreateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computingResourceProvider) {
      res["ComputingResourceProvider"] = boost::any(*computingResourceProvider);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputingResourceProvider") != m.end() && !m["ComputingResourceProvider"].empty()) {
      computingResourceProvider = make_shared<string>(boost::any_cast<string>(m["ComputingResourceProvider"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateResourceGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateResourceGroupRequestTag>>(expect1);
      }
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
  }


  virtual ~CreateResourceGroupRequest() = default;
};
class CreateResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupID{};

  CreateResourceGroupResponseBody() {}

  explicit CreateResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
  }


  virtual ~CreateResourceGroupResponseBody() = default;
};
class CreateResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceGroupResponseBody> body{};

  CreateResourceGroupResponse() {}

  explicit CreateResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceGroupResponse() = default;
};
class CreateTrainingJobRequestComputeResourceInstanceSpec : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  CreateTrainingJobRequestComputeResourceInstanceSpec() {}

  explicit CreateTrainingJobRequestComputeResourceInstanceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~CreateTrainingJobRequestComputeResourceInstanceSpec() = default;
};
class CreateTrainingJobRequestComputeResource : public Darabonba::Model {
public:
  shared_ptr<long> ecsCount{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<long> instanceCount{};
  shared_ptr<CreateTrainingJobRequestComputeResourceInstanceSpec> instanceSpec{};
  shared_ptr<string> resourceId{};

  CreateTrainingJobRequestComputeResource() {}

  explicit CreateTrainingJobRequestComputeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsCount) {
      res["EcsCount"] = boost::any(*ecsCount);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = instanceSpec ? boost::any(instanceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsCount") != m.end() && !m["EcsCount"].empty()) {
      ecsCount = make_shared<long>(boost::any_cast<long>(m["EcsCount"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceSpec"].type()) {
        CreateTrainingJobRequestComputeResourceInstanceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceSpec"]));
        instanceSpec = make_shared<CreateTrainingJobRequestComputeResourceInstanceSpec>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~CreateTrainingJobRequestComputeResource() = default;
};
class CreateTrainingJobRequestHyperParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateTrainingJobRequestHyperParameters() {}

  explicit CreateTrainingJobRequestHyperParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateTrainingJobRequestHyperParameters() = default;
};
class CreateTrainingJobRequestInputChannels : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> inputUri{};
  shared_ptr<string> name{};

  CreateTrainingJobRequestInputChannels() {}

  explicit CreateTrainingJobRequestInputChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (inputUri) {
      res["InputUri"] = boost::any(*inputUri);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("InputUri") != m.end() && !m["InputUri"].empty()) {
      inputUri = make_shared<string>(boost::any_cast<string>(m["InputUri"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateTrainingJobRequestInputChannels() = default;
};
class CreateTrainingJobRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTrainingJobRequestLabels() {}

  explicit CreateTrainingJobRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTrainingJobRequestLabels() = default;
};
class CreateTrainingJobRequestOutputChannels : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> name{};
  shared_ptr<string> outputUri{};

  CreateTrainingJobRequestOutputChannels() {}

  explicit CreateTrainingJobRequestOutputChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputUri) {
      res["OutputUri"] = boost::any(*outputUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OutputUri") != m.end() && !m["OutputUri"].empty()) {
      outputUri = make_shared<string>(boost::any_cast<string>(m["OutputUri"]));
    }
  }


  virtual ~CreateTrainingJobRequestOutputChannels() = default;
};
class CreateTrainingJobRequestScheduler : public Darabonba::Model {
public:
  shared_ptr<long> maxRunningTimeInSeconds{};

  CreateTrainingJobRequestScheduler() {}

  explicit CreateTrainingJobRequestScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRunningTimeInSeconds) {
      res["MaxRunningTimeInSeconds"] = boost::any(*maxRunningTimeInSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRunningTimeInSeconds") != m.end() && !m["MaxRunningTimeInSeconds"].empty()) {
      maxRunningTimeInSeconds = make_shared<long>(boost::any_cast<long>(m["MaxRunningTimeInSeconds"]));
    }
  }


  virtual ~CreateTrainingJobRequestScheduler() = default;
};
class CreateTrainingJobRequestSettings : public Darabonba::Model {
public:
  shared_ptr<string> AIMasterType{};
  shared_ptr<bool> enableErrorMonitoringInAIMaster{};
  shared_ptr<string> errorMonitoringArgs{};
  shared_ptr<long> priority{};

  CreateTrainingJobRequestSettings() {}

  explicit CreateTrainingJobRequestSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (AIMasterType) {
      res["AIMasterType"] = boost::any(*AIMasterType);
    }
    if (enableErrorMonitoringInAIMaster) {
      res["EnableErrorMonitoringInAIMaster"] = boost::any(*enableErrorMonitoringInAIMaster);
    }
    if (errorMonitoringArgs) {
      res["ErrorMonitoringArgs"] = boost::any(*errorMonitoringArgs);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AIMasterType") != m.end() && !m["AIMasterType"].empty()) {
      AIMasterType = make_shared<string>(boost::any_cast<string>(m["AIMasterType"]));
    }
    if (m.find("EnableErrorMonitoringInAIMaster") != m.end() && !m["EnableErrorMonitoringInAIMaster"].empty()) {
      enableErrorMonitoringInAIMaster = make_shared<bool>(boost::any_cast<bool>(m["EnableErrorMonitoringInAIMaster"]));
    }
    if (m.find("ErrorMonitoringArgs") != m.end() && !m["ErrorMonitoringArgs"].empty()) {
      errorMonitoringArgs = make_shared<string>(boost::any_cast<string>(m["ErrorMonitoringArgs"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
  }


  virtual ~CreateTrainingJobRequestSettings() = default;
};
class CreateTrainingJobRequestUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  CreateTrainingJobRequestUserVpc() {}

  explicit CreateTrainingJobRequestUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateTrainingJobRequestUserVpc() = default;
};
class CreateTrainingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<AlgorithmSpec> algorithmSpec{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<Location> codeDir{};
  shared_ptr<CreateTrainingJobRequestComputeResource> computeResource{};
  shared_ptr<vector<CreateTrainingJobRequestHyperParameters>> hyperParameters{};
  shared_ptr<vector<CreateTrainingJobRequestInputChannels>> inputChannels{};
  shared_ptr<vector<CreateTrainingJobRequestLabels>> labels{};
  shared_ptr<vector<CreateTrainingJobRequestOutputChannels>> outputChannels{};
  shared_ptr<string> roleArn{};
  shared_ptr<CreateTrainingJobRequestScheduler> scheduler{};
  shared_ptr<CreateTrainingJobRequestSettings> settings{};
  shared_ptr<string> trainingJobDescription{};
  shared_ptr<string> trainingJobName{};
  shared_ptr<CreateTrainingJobRequestUserVpc> userVpc{};
  shared_ptr<string> workspaceId{};

  CreateTrainingJobRequest() {}

  explicit CreateTrainingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmSpec) {
      res["AlgorithmSpec"] = algorithmSpec ? boost::any(algorithmSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (codeDir) {
      res["CodeDir"] = codeDir ? boost::any(codeDir->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (computeResource) {
      res["ComputeResource"] = computeResource ? boost::any(computeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hyperParameters) {
      vector<boost::any> temp1;
      for(auto item1:*hyperParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HyperParameters"] = boost::any(temp1);
    }
    if (inputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*inputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputChannels"] = boost::any(temp1);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (outputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*outputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputChannels"] = boost::any(temp1);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (scheduler) {
      res["Scheduler"] = scheduler ? boost::any(scheduler->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trainingJobDescription) {
      res["TrainingJobDescription"] = boost::any(*trainingJobDescription);
    }
    if (trainingJobName) {
      res["TrainingJobName"] = boost::any(*trainingJobName);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmSpec") != m.end() && !m["AlgorithmSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlgorithmSpec"].type()) {
        AlgorithmSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlgorithmSpec"]));
        algorithmSpec = make_shared<AlgorithmSpec>(model1);
      }
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("CodeDir") != m.end() && !m["CodeDir"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeDir"].type()) {
        Location model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeDir"]));
        codeDir = make_shared<Location>(model1);
      }
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComputeResource"].type()) {
        CreateTrainingJobRequestComputeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComputeResource"]));
        computeResource = make_shared<CreateTrainingJobRequestComputeResource>(model1);
      }
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HyperParameters"].type()) {
        vector<CreateTrainingJobRequestHyperParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HyperParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTrainingJobRequestHyperParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hyperParameters = make_shared<vector<CreateTrainingJobRequestHyperParameters>>(expect1);
      }
    }
    if (m.find("InputChannels") != m.end() && !m["InputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["InputChannels"].type()) {
        vector<CreateTrainingJobRequestInputChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTrainingJobRequestInputChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputChannels = make_shared<vector<CreateTrainingJobRequestInputChannels>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<CreateTrainingJobRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTrainingJobRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<CreateTrainingJobRequestLabels>>(expect1);
      }
    }
    if (m.find("OutputChannels") != m.end() && !m["OutputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputChannels"].type()) {
        vector<CreateTrainingJobRequestOutputChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTrainingJobRequestOutputChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputChannels = make_shared<vector<CreateTrainingJobRequestOutputChannels>>(expect1);
      }
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scheduler"].type()) {
        CreateTrainingJobRequestScheduler model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scheduler"]));
        scheduler = make_shared<CreateTrainingJobRequestScheduler>(model1);
      }
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      if (typeid(map<string, boost::any>) == m["Settings"].type()) {
        CreateTrainingJobRequestSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Settings"]));
        settings = make_shared<CreateTrainingJobRequestSettings>(model1);
      }
    }
    if (m.find("TrainingJobDescription") != m.end() && !m["TrainingJobDescription"].empty()) {
      trainingJobDescription = make_shared<string>(boost::any_cast<string>(m["TrainingJobDescription"]));
    }
    if (m.find("TrainingJobName") != m.end() && !m["TrainingJobName"].empty()) {
      trainingJobName = make_shared<string>(boost::any_cast<string>(m["TrainingJobName"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        CreateTrainingJobRequestUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<CreateTrainingJobRequestUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateTrainingJobRequest() = default;
};
class CreateTrainingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> trainingJobId{};

  CreateTrainingJobResponseBody() {}

  explicit CreateTrainingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
  }


  virtual ~CreateTrainingJobResponseBody() = default;
};
class CreateTrainingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrainingJobResponseBody> body{};

  CreateTrainingJobResponse() {}

  explicit CreateTrainingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTrainingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrainingJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrainingJobResponse() = default;
};
class DeleteMachineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> machineGroupID{};
  shared_ptr<string> requestId{};

  DeleteMachineGroupResponseBody() {}

  explicit DeleteMachineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (machineGroupID) {
      res["MachineGroupID"] = boost::any(*machineGroupID);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MachineGroupID") != m.end() && !m["MachineGroupID"].empty()) {
      machineGroupID = make_shared<string>(boost::any_cast<string>(m["MachineGroupID"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteMachineGroupResponseBody() = default;
};
class DeleteMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMachineGroupResponseBody> body{};

  DeleteMachineGroupResponse() {}

  explicit DeleteMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMachineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMachineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMachineGroupResponse() = default;
};
class DeleteQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> quotaId{};
  shared_ptr<string> requestId{};

  DeleteQuotaResponseBody() {}

  explicit DeleteQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteQuotaResponseBody() = default;
};
class DeleteQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQuotaResponseBody> body{};

  DeleteQuotaResponse() {}

  explicit DeleteQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQuotaResponse() = default;
};
class DeleteResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupID{};

  DeleteResourceGroupResponseBody() {}

  explicit DeleteResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
  }


  virtual ~DeleteResourceGroupResponseBody() = default;
};
class DeleteResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceGroupResponseBody> body{};

  DeleteResourceGroupResponse() {}

  explicit DeleteResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceGroupResponse() = default;
};
class DeleteResourceGroupMachineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> machineGroupID{};
  shared_ptr<string> requestId{};

  DeleteResourceGroupMachineGroupResponseBody() {}

  explicit DeleteResourceGroupMachineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (machineGroupID) {
      res["MachineGroupID"] = boost::any(*machineGroupID);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MachineGroupID") != m.end() && !m["MachineGroupID"].empty()) {
      machineGroupID = make_shared<string>(boost::any_cast<string>(m["MachineGroupID"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteResourceGroupMachineGroupResponseBody() = default;
};
class DeleteResourceGroupMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceGroupMachineGroupResponseBody> body{};

  DeleteResourceGroupMachineGroupResponse() {}

  explicit DeleteResourceGroupMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceGroupMachineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceGroupMachineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceGroupMachineGroupResponse() = default;
};
class GetAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithmDescription{};
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetAlgorithmResponseBody() {}

  explicit GetAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmDescription) {
      res["AlgorithmDescription"] = boost::any(*algorithmDescription);
    }
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmDescription") != m.end() && !m["AlgorithmDescription"].empty()) {
      algorithmDescription = make_shared<string>(boost::any_cast<string>(m["AlgorithmDescription"]));
    }
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetAlgorithmResponseBody() = default;
};
class GetAlgorithmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAlgorithmResponseBody> body{};

  GetAlgorithmResponse() {}

  explicit GetAlgorithmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlgorithmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAlgorithmResponseBody>(model1);
      }
    }
  }


  virtual ~GetAlgorithmResponse() = default;
};
class GetAlgorithmVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<AlgorithmSpec> algorithmSpec{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  GetAlgorithmVersionResponseBody() {}

  explicit GetAlgorithmVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmSpec) {
      res["AlgorithmSpec"] = algorithmSpec ? boost::any(algorithmSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmSpec") != m.end() && !m["AlgorithmSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlgorithmSpec"].type()) {
        AlgorithmSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlgorithmSpec"]));
        algorithmSpec = make_shared<AlgorithmSpec>(model1);
      }
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetAlgorithmVersionResponseBody() = default;
};
class GetAlgorithmVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAlgorithmVersionResponseBody> body{};

  GetAlgorithmVersionResponse() {}

  explicit GetAlgorithmVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlgorithmVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAlgorithmVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAlgorithmVersionResponse() = default;
};
class GetMachineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> defaultDriver{};
  shared_ptr<string> duration{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtExpired{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> gmtStarted{};
  shared_ptr<string> machineGroupID{};
  shared_ptr<string> orderID{};
  shared_ptr<string> PAIResourceID{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionID{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> supportedDrivers{};

  GetMachineGroupResponseBody() {}

  explicit GetMachineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (defaultDriver) {
      res["DefaultDriver"] = boost::any(*defaultDriver);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ecsType) {
      res["EcsType"] = boost::any(*ecsType);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtExpired) {
      res["GmtExpired"] = boost::any(*gmtExpired);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (gmtStarted) {
      res["GmtStarted"] = boost::any(*gmtStarted);
    }
    if (machineGroupID) {
      res["MachineGroupID"] = boost::any(*machineGroupID);
    }
    if (orderID) {
      res["OrderID"] = boost::any(*orderID);
    }
    if (PAIResourceID) {
      res["PAIResourceID"] = boost::any(*PAIResourceID);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionID) {
      res["RegionID"] = boost::any(*regionID);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportedDrivers) {
      res["SupportedDrivers"] = boost::any(*supportedDrivers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DefaultDriver") != m.end() && !m["DefaultDriver"].empty()) {
      defaultDriver = make_shared<string>(boost::any_cast<string>(m["DefaultDriver"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EcsType") != m.end() && !m["EcsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["EcsType"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtExpired") != m.end() && !m["GmtExpired"].empty()) {
      gmtExpired = make_shared<string>(boost::any_cast<string>(m["GmtExpired"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("GmtStarted") != m.end() && !m["GmtStarted"].empty()) {
      gmtStarted = make_shared<string>(boost::any_cast<string>(m["GmtStarted"]));
    }
    if (m.find("MachineGroupID") != m.end() && !m["MachineGroupID"].empty()) {
      machineGroupID = make_shared<string>(boost::any_cast<string>(m["MachineGroupID"]));
    }
    if (m.find("OrderID") != m.end() && !m["OrderID"].empty()) {
      orderID = make_shared<string>(boost::any_cast<string>(m["OrderID"]));
    }
    if (m.find("PAIResourceID") != m.end() && !m["PAIResourceID"].empty()) {
      PAIResourceID = make_shared<string>(boost::any_cast<string>(m["PAIResourceID"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionID") != m.end() && !m["RegionID"].empty()) {
      regionID = make_shared<string>(boost::any_cast<string>(m["RegionID"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportedDrivers") != m.end() && !m["SupportedDrivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedDrivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedDrivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedDrivers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMachineGroupResponseBody() = default;
};
class GetMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMachineGroupResponseBody> body{};

  GetMachineGroupResponse() {}

  explicit GetMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMachineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMachineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetMachineGroupResponse() = default;
};
class GetNodeMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeStep{};
  shared_ptr<bool> verbose{};

  GetNodeMetricsRequest() {}

  explicit GetNodeMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeStep) {
      res["TimeStep"] = boost::any(*timeStep);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeStep") != m.end() && !m["TimeStep"].empty()) {
      timeStep = make_shared<string>(boost::any_cast<string>(m["TimeStep"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetNodeMetricsRequest() = default;
};
class GetNodeMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> metricType{};
  shared_ptr<vector<NodeMetric>> nodesMetrics{};
  shared_ptr<string> resourceGroupID{};

  GetNodeMetricsResponseBody() {}

  explicit GetNodeMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (nodesMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*nodesMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodesMetrics"] = boost::any(temp1);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("NodesMetrics") != m.end() && !m["NodesMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["NodesMetrics"].type()) {
        vector<NodeMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodesMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodesMetrics = make_shared<vector<NodeMetric>>(expect1);
      }
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
  }


  virtual ~GetNodeMetricsResponseBody() = default;
};
class GetNodeMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeMetricsResponseBody> body{};

  GetNodeMetricsResponse() {}

  explicit GetNodeMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNodeMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeMetricsResponse() = default;
};
class GetQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> allocateStrategy{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreatedTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> latestOperationId{};
  shared_ptr<ResourceSpec> min{};
  shared_ptr<string> parentQuotaId{};
  shared_ptr<string> queueStrategy{};
  shared_ptr<QuotaConfig> quotaConfig{};
  shared_ptr<QuotaDetails> quotaDetails{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceGroupIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<vector<QuotaIdName>> subQuotas{};
  shared_ptr<vector<WorkspaceIdName>> workspaces{};

  GetQuotaResponseBody() {}

  explicit GetQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocateStrategy) {
      res["AllocateStrategy"] = boost::any(*allocateStrategy);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreatedTime) {
      res["GmtCreatedTime"] = boost::any(*gmtCreatedTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestOperationId) {
      res["LatestOperationId"] = boost::any(*latestOperationId);
    }
    if (min) {
      res["Min"] = min ? boost::any(min->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentQuotaId) {
      res["ParentQuotaId"] = boost::any(*parentQuotaId);
    }
    if (queueStrategy) {
      res["QueueStrategy"] = boost::any(*queueStrategy);
    }
    if (quotaConfig) {
      res["QuotaConfig"] = quotaConfig ? boost::any(quotaConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quotaDetails) {
      res["QuotaDetails"] = quotaDetails ? boost::any(quotaDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupIds) {
      res["ResourceGroupIds"] = boost::any(*resourceGroupIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*subQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubQuotas"] = boost::any(temp1);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocateStrategy") != m.end() && !m["AllocateStrategy"].empty()) {
      allocateStrategy = make_shared<string>(boost::any_cast<string>(m["AllocateStrategy"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreatedTime") != m.end() && !m["GmtCreatedTime"].empty()) {
      gmtCreatedTime = make_shared<string>(boost::any_cast<string>(m["GmtCreatedTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestOperationId") != m.end() && !m["LatestOperationId"].empty()) {
      latestOperationId = make_shared<string>(boost::any_cast<string>(m["LatestOperationId"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      if (typeid(map<string, boost::any>) == m["Min"].type()) {
        ResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Min"]));
        min = make_shared<ResourceSpec>(model1);
      }
    }
    if (m.find("ParentQuotaId") != m.end() && !m["ParentQuotaId"].empty()) {
      parentQuotaId = make_shared<string>(boost::any_cast<string>(m["ParentQuotaId"]));
    }
    if (m.find("QueueStrategy") != m.end() && !m["QueueStrategy"].empty()) {
      queueStrategy = make_shared<string>(boost::any_cast<string>(m["QueueStrategy"]));
    }
    if (m.find("QuotaConfig") != m.end() && !m["QuotaConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaConfig"].type()) {
        QuotaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaConfig"]));
        quotaConfig = make_shared<QuotaConfig>(model1);
      }
    }
    if (m.find("QuotaDetails") != m.end() && !m["QuotaDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaDetails"].type()) {
        QuotaDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaDetails"]));
        quotaDetails = make_shared<QuotaDetails>(model1);
      }
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupIds") != m.end() && !m["ResourceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubQuotas") != m.end() && !m["SubQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["SubQuotas"].type()) {
        vector<QuotaIdName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuotaIdName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQuotas = make_shared<vector<QuotaIdName>>(expect1);
      }
    }
    if (m.find("Workspaces") != m.end() && !m["Workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Workspaces"].type()) {
        vector<WorkspaceIdName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WorkspaceIdName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<WorkspaceIdName>>(expect1);
      }
    }
  }


  virtual ~GetQuotaResponseBody() = default;
};
class GetQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaResponseBody> body{};

  GetQuotaResponse() {}

  explicit GetQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaResponse() = default;
};
class GetResourceGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetResourceGroupRequestTag() {}

  explicit GetResourceGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResourceGroupRequestTag() = default;
};
class GetResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isAIWorkspaceDataEnabled{};
  shared_ptr<vector<GetResourceGroupRequestTag>> tag{};

  GetResourceGroupRequest() {}

  explicit GetResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isAIWorkspaceDataEnabled) {
      res["IsAIWorkspaceDataEnabled"] = boost::any(*isAIWorkspaceDataEnabled);
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
    if (m.find("IsAIWorkspaceDataEnabled") != m.end() && !m["IsAIWorkspaceDataEnabled"].empty()) {
      isAIWorkspaceDataEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsAIWorkspaceDataEnabled"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetResourceGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetResourceGroupRequestTag>>(expect1);
      }
    }
  }


  virtual ~GetResourceGroupRequest() = default;
};
class GetResourceGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isAIWorkspaceDataEnabled{};
  shared_ptr<string> tagShrink{};

  GetResourceGroupShrinkRequest() {}

  explicit GetResourceGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isAIWorkspaceDataEnabled) {
      res["IsAIWorkspaceDataEnabled"] = boost::any(*isAIWorkspaceDataEnabled);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsAIWorkspaceDataEnabled") != m.end() && !m["IsAIWorkspaceDataEnabled"].empty()) {
      isAIWorkspaceDataEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsAIWorkspaceDataEnabled"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetResourceGroupShrinkRequest() = default;
};
class GetResourceGroupResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetResourceGroupResponseBodyTags() {}

  explicit GetResourceGroupResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetResourceGroupResponseBodyTags() = default;
};
class GetResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterID{};
  shared_ptr<string> computingResourceProvider{};
  shared_ptr<string> creatorID{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreatedTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<bool> supportRDMA{};
  shared_ptr<vector<GetResourceGroupResponseBodyTags>> tags{};
  shared_ptr<UserVpc> userVpc{};
  shared_ptr<string> workspaceID{};

  GetResourceGroupResponseBody() {}

  explicit GetResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterID) {
      res["ClusterID"] = boost::any(*clusterID);
    }
    if (computingResourceProvider) {
      res["ComputingResourceProvider"] = boost::any(*computingResourceProvider);
    }
    if (creatorID) {
      res["CreatorID"] = boost::any(*creatorID);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreatedTime) {
      res["GmtCreatedTime"] = boost::any(*gmtCreatedTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportRDMA) {
      res["SupportRDMA"] = boost::any(*supportRDMA);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceID) {
      res["WorkspaceID"] = boost::any(*workspaceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterID") != m.end() && !m["ClusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["ClusterID"]));
    }
    if (m.find("ComputingResourceProvider") != m.end() && !m["ComputingResourceProvider"].empty()) {
      computingResourceProvider = make_shared<string>(boost::any_cast<string>(m["ComputingResourceProvider"]));
    }
    if (m.find("CreatorID") != m.end() && !m["CreatorID"].empty()) {
      creatorID = make_shared<string>(boost::any_cast<string>(m["CreatorID"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreatedTime") != m.end() && !m["GmtCreatedTime"].empty()) {
      gmtCreatedTime = make_shared<string>(boost::any_cast<string>(m["GmtCreatedTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportRDMA") != m.end() && !m["SupportRDMA"].empty()) {
      supportRDMA = make_shared<bool>(boost::any_cast<bool>(m["SupportRDMA"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetResourceGroupResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceGroupResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetResourceGroupResponseBodyTags>>(expect1);
      }
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
    if (m.find("WorkspaceID") != m.end() && !m["WorkspaceID"].empty()) {
      workspaceID = make_shared<string>(boost::any_cast<string>(m["WorkspaceID"]));
    }
  }


  virtual ~GetResourceGroupResponseBody() = default;
};
class GetResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceGroupResponseBody> body{};

  GetResourceGroupResponse() {}

  explicit GetResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceGroupResponse() = default;
};
class GetResourceGroupMachineGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetResourceGroupMachineGroupRequestTag() {}

  explicit GetResourceGroupMachineGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResourceGroupMachineGroupRequestTag() = default;
};
class GetResourceGroupMachineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceGroupMachineGroupRequestTag>> tag{};

  GetResourceGroupMachineGroupRequest() {}

  explicit GetResourceGroupMachineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetResourceGroupMachineGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceGroupMachineGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetResourceGroupMachineGroupRequestTag>>(expect1);
      }
    }
  }


  virtual ~GetResourceGroupMachineGroupRequest() = default;
};
class GetResourceGroupMachineGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagShrink{};

  GetResourceGroupMachineGroupShrinkRequest() {}

  explicit GetResourceGroupMachineGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetResourceGroupMachineGroupShrinkRequest() = default;
};
class GetResourceGroupMachineGroupResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetResourceGroupMachineGroupResponseBodyTags() {}

  explicit GetResourceGroupMachineGroupResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetResourceGroupMachineGroupResponseBodyTags() = default;
};
class GetResourceGroupMachineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cpu{};
  shared_ptr<string> defaultDriver{};
  shared_ptr<long> ecsCount{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<string> gmtCreatedTime{};
  shared_ptr<string> gmtExpiredTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> gmtStartedTime{};
  shared_ptr<string> gpu{};
  shared_ptr<string> gpuType{};
  shared_ptr<string> machineGroupID{};
  shared_ptr<string> memory{};
  shared_ptr<string> name{};
  shared_ptr<string> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> supportedDrivers{};
  shared_ptr<vector<GetResourceGroupMachineGroupResponseBodyTags>> tags{};

  GetResourceGroupMachineGroupResponseBody() {}

  explicit GetResourceGroupMachineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (defaultDriver) {
      res["DefaultDriver"] = boost::any(*defaultDriver);
    }
    if (ecsCount) {
      res["EcsCount"] = boost::any(*ecsCount);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (gmtCreatedTime) {
      res["GmtCreatedTime"] = boost::any(*gmtCreatedTime);
    }
    if (gmtExpiredTime) {
      res["GmtExpiredTime"] = boost::any(*gmtExpiredTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (gmtStartedTime) {
      res["GmtStartedTime"] = boost::any(*gmtStartedTime);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (gpuType) {
      res["GpuType"] = boost::any(*gpuType);
    }
    if (machineGroupID) {
      res["MachineGroupID"] = boost::any(*machineGroupID);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportedDrivers) {
      res["SupportedDrivers"] = boost::any(*supportedDrivers);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("DefaultDriver") != m.end() && !m["DefaultDriver"].empty()) {
      defaultDriver = make_shared<string>(boost::any_cast<string>(m["DefaultDriver"]));
    }
    if (m.find("EcsCount") != m.end() && !m["EcsCount"].empty()) {
      ecsCount = make_shared<long>(boost::any_cast<long>(m["EcsCount"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("GmtCreatedTime") != m.end() && !m["GmtCreatedTime"].empty()) {
      gmtCreatedTime = make_shared<string>(boost::any_cast<string>(m["GmtCreatedTime"]));
    }
    if (m.find("GmtExpiredTime") != m.end() && !m["GmtExpiredTime"].empty()) {
      gmtExpiredTime = make_shared<string>(boost::any_cast<string>(m["GmtExpiredTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("GmtStartedTime") != m.end() && !m["GmtStartedTime"].empty()) {
      gmtStartedTime = make_shared<string>(boost::any_cast<string>(m["GmtStartedTime"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<string>(boost::any_cast<string>(m["Gpu"]));
    }
    if (m.find("GpuType") != m.end() && !m["GpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["GpuType"]));
    }
    if (m.find("MachineGroupID") != m.end() && !m["MachineGroupID"].empty()) {
      machineGroupID = make_shared<string>(boost::any_cast<string>(m["MachineGroupID"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<string>(boost::any_cast<string>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportedDrivers") != m.end() && !m["SupportedDrivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedDrivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedDrivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedDrivers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetResourceGroupMachineGroupResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceGroupMachineGroupResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetResourceGroupMachineGroupResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~GetResourceGroupMachineGroupResponseBody() = default;
};
class GetResourceGroupMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceGroupMachineGroupResponseBody> body{};

  GetResourceGroupMachineGroupResponse() {}

  explicit GetResourceGroupMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceGroupMachineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceGroupMachineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceGroupMachineGroupResponse() = default;
};
class GetResourceGroupRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> podStatus{};
  shared_ptr<string> resourceGroupID{};

  GetResourceGroupRequestRequest() {}

  explicit GetResourceGroupRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (podStatus) {
      res["PodStatus"] = boost::any(*podStatus);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PodStatus") != m.end() && !m["PodStatus"].empty()) {
      podStatus = make_shared<string>(boost::any_cast<string>(m["PodStatus"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
  }


  virtual ~GetResourceGroupRequestRequest() = default;
};
class GetResourceGroupRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<vector<GPUInfo>> requestGPUInfos{};
  shared_ptr<long> requestMemory{};

  GetResourceGroupRequestResponseBody() {}

  explicit GetResourceGroupRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestCPU) {
      res["requestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["requestGPU"] = boost::any(*requestGPU);
    }
    if (requestGPUInfos) {
      vector<boost::any> temp1;
      for(auto item1:*requestGPUInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["requestGPUInfos"] = boost::any(temp1);
    }
    if (requestMemory) {
      res["requestMemory"] = boost::any(*requestMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestCPU") != m.end() && !m["requestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["requestCPU"]));
    }
    if (m.find("requestGPU") != m.end() && !m["requestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["requestGPU"]));
    }
    if (m.find("requestGPUInfos") != m.end() && !m["requestGPUInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["requestGPUInfos"].type()) {
        vector<GPUInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["requestGPUInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GPUInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestGPUInfos = make_shared<vector<GPUInfo>>(expect1);
      }
    }
    if (m.find("requestMemory") != m.end() && !m["requestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["requestMemory"]));
    }
  }


  virtual ~GetResourceGroupRequestResponseBody() = default;
};
class GetResourceGroupRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceGroupRequestResponseBody> body{};

  GetResourceGroupRequestResponse() {}

  explicit GetResourceGroupRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceGroupRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceGroupRequestResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceGroupRequestResponse() = default;
};
class GetResourceGroupTotalRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupID{};

  GetResourceGroupTotalRequest() {}

  explicit GetResourceGroupTotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
  }


  virtual ~GetResourceGroupTotalRequest() = default;
};
class GetResourceGroupTotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<vector<GPUInfo>> totalGPUInfos{};
  shared_ptr<long> totalMemory{};

  GetResourceGroupTotalResponseBody() {}

  explicit GetResourceGroupTotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCPU) {
      res["totalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["totalGPU"] = boost::any(*totalGPU);
    }
    if (totalGPUInfos) {
      vector<boost::any> temp1;
      for(auto item1:*totalGPUInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["totalGPUInfos"] = boost::any(temp1);
    }
    if (totalMemory) {
      res["totalMemory"] = boost::any(*totalMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("totalCPU") != m.end() && !m["totalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["totalCPU"]));
    }
    if (m.find("totalGPU") != m.end() && !m["totalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["totalGPU"]));
    }
    if (m.find("totalGPUInfos") != m.end() && !m["totalGPUInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["totalGPUInfos"].type()) {
        vector<GPUInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["totalGPUInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GPUInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        totalGPUInfos = make_shared<vector<GPUInfo>>(expect1);
      }
    }
    if (m.find("totalMemory") != m.end() && !m["totalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["totalMemory"]));
    }
  }


  virtual ~GetResourceGroupTotalResponseBody() = default;
};
class GetResourceGroupTotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceGroupTotalResponseBody> body{};

  GetResourceGroupTotalResponse() {}

  explicit GetResourceGroupTotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceGroupTotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceGroupTotalResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceGroupTotalResponse() = default;
};
class GetTrainingJobResponseBodyComputeResourceInstanceSpec : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  GetTrainingJobResponseBodyComputeResourceInstanceSpec() {}

  explicit GetTrainingJobResponseBodyComputeResourceInstanceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyComputeResourceInstanceSpec() = default;
};
class GetTrainingJobResponseBodyComputeResource : public Darabonba::Model {
public:
  shared_ptr<long> ecsCount{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<long> instanceCount{};
  shared_ptr<GetTrainingJobResponseBodyComputeResourceInstanceSpec> instanceSpec{};
  shared_ptr<string> resourceId{};

  GetTrainingJobResponseBodyComputeResource() {}

  explicit GetTrainingJobResponseBodyComputeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsCount) {
      res["EcsCount"] = boost::any(*ecsCount);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = instanceSpec ? boost::any(instanceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsCount") != m.end() && !m["EcsCount"].empty()) {
      ecsCount = make_shared<long>(boost::any_cast<long>(m["EcsCount"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceSpec"].type()) {
        GetTrainingJobResponseBodyComputeResourceInstanceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceSpec"]));
        instanceSpec = make_shared<GetTrainingJobResponseBodyComputeResourceInstanceSpec>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyComputeResource() = default;
};
class GetTrainingJobResponseBodyHyperParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetTrainingJobResponseBodyHyperParameters() {}

  explicit GetTrainingJobResponseBodyHyperParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyHyperParameters() = default;
};
class GetTrainingJobResponseBodyInputChannels : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> inputUri{};
  shared_ptr<string> name{};

  GetTrainingJobResponseBodyInputChannels() {}

  explicit GetTrainingJobResponseBodyInputChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (inputUri) {
      res["InputUri"] = boost::any(*inputUri);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("InputUri") != m.end() && !m["InputUri"].empty()) {
      inputUri = make_shared<string>(boost::any_cast<string>(m["InputUri"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyInputChannels() = default;
};
class GetTrainingJobResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};

  GetTrainingJobResponseBodyInstances() {}

  explicit GetTrainingJobResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyInstances() = default;
};
class GetTrainingJobResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTrainingJobResponseBodyLabels() {}

  explicit GetTrainingJobResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTrainingJobResponseBodyLabels() = default;
};
class GetTrainingJobResponseBodyLatestMetrics : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> timestamp{};
  shared_ptr<double> value{};

  GetTrainingJobResponseBodyLatestMetrics() {}

  explicit GetTrainingJobResponseBodyLatestMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyLatestMetrics() = default;
};
class GetTrainingJobResponseBodyLatestProgressOverallProgress : public Darabonba::Model {
public:
  shared_ptr<string> timestamp{};
  shared_ptr<double> value{};

  GetTrainingJobResponseBodyLatestProgressOverallProgress() {}

  explicit GetTrainingJobResponseBodyLatestProgressOverallProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyLatestProgressOverallProgress() = default;
};
class GetTrainingJobResponseBodyLatestProgressRemainingTime : public Darabonba::Model {
public:
  shared_ptr<string> timestamp{};
  shared_ptr<long> value{};

  GetTrainingJobResponseBodyLatestProgressRemainingTime() {}

  explicit GetTrainingJobResponseBodyLatestProgressRemainingTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyLatestProgressRemainingTime() = default;
};
class GetTrainingJobResponseBodyLatestProgress : public Darabonba::Model {
public:
  shared_ptr<GetTrainingJobResponseBodyLatestProgressOverallProgress> overallProgress{};
  shared_ptr<GetTrainingJobResponseBodyLatestProgressRemainingTime> remainingTime{};

  GetTrainingJobResponseBodyLatestProgress() {}

  explicit GetTrainingJobResponseBodyLatestProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (overallProgress) {
      res["OverallProgress"] = overallProgress ? boost::any(overallProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remainingTime) {
      res["RemainingTime"] = remainingTime ? boost::any(remainingTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OverallProgress") != m.end() && !m["OverallProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallProgress"].type()) {
        GetTrainingJobResponseBodyLatestProgressOverallProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallProgress"]));
        overallProgress = make_shared<GetTrainingJobResponseBodyLatestProgressOverallProgress>(model1);
      }
    }
    if (m.find("RemainingTime") != m.end() && !m["RemainingTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemainingTime"].type()) {
        GetTrainingJobResponseBodyLatestProgressRemainingTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemainingTime"]));
        remainingTime = make_shared<GetTrainingJobResponseBodyLatestProgressRemainingTime>(model1);
      }
    }
  }


  virtual ~GetTrainingJobResponseBodyLatestProgress() = default;
};
class GetTrainingJobResponseBodyOutputChannels : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> name{};
  shared_ptr<string> outputUri{};

  GetTrainingJobResponseBodyOutputChannels() {}

  explicit GetTrainingJobResponseBodyOutputChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputUri) {
      res["OutputUri"] = boost::any(*outputUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OutputUri") != m.end() && !m["OutputUri"].empty()) {
      outputUri = make_shared<string>(boost::any_cast<string>(m["OutputUri"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyOutputChannels() = default;
};
class GetTrainingJobResponseBodyOutputModel : public Darabonba::Model {
public:
  shared_ptr<string> outputChannelName{};
  shared_ptr<string> uri{};

  GetTrainingJobResponseBodyOutputModel() {}

  explicit GetTrainingJobResponseBodyOutputModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputChannelName) {
      res["OutputChannelName"] = boost::any(*outputChannelName);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputChannelName") != m.end() && !m["OutputChannelName"].empty()) {
      outputChannelName = make_shared<string>(boost::any_cast<string>(m["OutputChannelName"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyOutputModel() = default;
};
class GetTrainingJobResponseBodyScheduler : public Darabonba::Model {
public:
  shared_ptr<long> maxRunningTimeInSeconds{};

  GetTrainingJobResponseBodyScheduler() {}

  explicit GetTrainingJobResponseBodyScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRunningTimeInSeconds) {
      res["MaxRunningTimeInSeconds"] = boost::any(*maxRunningTimeInSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRunningTimeInSeconds") != m.end() && !m["MaxRunningTimeInSeconds"].empty()) {
      maxRunningTimeInSeconds = make_shared<long>(boost::any_cast<long>(m["MaxRunningTimeInSeconds"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyScheduler() = default;
};
class GetTrainingJobResponseBodySettings : public Darabonba::Model {
public:
  shared_ptr<string> AIMasterType{};
  shared_ptr<bool> enableErrorMonitoringInAIMaster{};
  shared_ptr<string> errorMonitoringArgs{};
  shared_ptr<long> priority{};

  GetTrainingJobResponseBodySettings() {}

  explicit GetTrainingJobResponseBodySettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (AIMasterType) {
      res["AIMasterType"] = boost::any(*AIMasterType);
    }
    if (enableErrorMonitoringInAIMaster) {
      res["EnableErrorMonitoringInAIMaster"] = boost::any(*enableErrorMonitoringInAIMaster);
    }
    if (errorMonitoringArgs) {
      res["ErrorMonitoringArgs"] = boost::any(*errorMonitoringArgs);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AIMasterType") != m.end() && !m["AIMasterType"].empty()) {
      AIMasterType = make_shared<string>(boost::any_cast<string>(m["AIMasterType"]));
    }
    if (m.find("EnableErrorMonitoringInAIMaster") != m.end() && !m["EnableErrorMonitoringInAIMaster"].empty()) {
      enableErrorMonitoringInAIMaster = make_shared<bool>(boost::any_cast<bool>(m["EnableErrorMonitoringInAIMaster"]));
    }
    if (m.find("ErrorMonitoringArgs") != m.end() && !m["ErrorMonitoringArgs"].empty()) {
      errorMonitoringArgs = make_shared<string>(boost::any_cast<string>(m["ErrorMonitoringArgs"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
  }


  virtual ~GetTrainingJobResponseBodySettings() = default;
};
class GetTrainingJobResponseBodyStatusTransitions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  GetTrainingJobResponseBodyStatusTransitions() {}

  explicit GetTrainingJobResponseBodyStatusTransitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyStatusTransitions() = default;
};
class GetTrainingJobResponseBodyUserVpc : public Darabonba::Model {
public:
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  GetTrainingJobResponseBodyUserVpc() {}

  explicit GetTrainingJobResponseBodyUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyUserVpc() = default;
};
class GetTrainingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<AlgorithmSpec> algorithmSpec{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<GetTrainingJobResponseBodyComputeResource> computeResource{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<GetTrainingJobResponseBodyHyperParameters>> hyperParameters{};
  shared_ptr<vector<GetTrainingJobResponseBodyInputChannels>> inputChannels{};
  shared_ptr<vector<GetTrainingJobResponseBodyInstances>> instances{};
  shared_ptr<bool> isTempAlgo{};
  shared_ptr<vector<GetTrainingJobResponseBodyLabels>> labels{};
  shared_ptr<vector<GetTrainingJobResponseBodyLatestMetrics>> latestMetrics{};
  shared_ptr<GetTrainingJobResponseBodyLatestProgress> latestProgress{};
  shared_ptr<vector<GetTrainingJobResponseBodyOutputChannels>> outputChannels{};
  shared_ptr<GetTrainingJobResponseBodyOutputModel> outputModel{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleArn{};
  shared_ptr<GetTrainingJobResponseBodyScheduler> scheduler{};
  shared_ptr<GetTrainingJobResponseBodySettings> settings{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetTrainingJobResponseBodyStatusTransitions>> statusTransitions{};
  shared_ptr<string> trainingJobDescription{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> trainingJobName{};
  shared_ptr<string> trainingJobUrl{};
  shared_ptr<string> userId{};
  shared_ptr<GetTrainingJobResponseBodyUserVpc> userVpc{};
  shared_ptr<string> workspaceId{};

  GetTrainingJobResponseBody() {}

  explicit GetTrainingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmSpec) {
      res["AlgorithmSpec"] = algorithmSpec ? boost::any(algorithmSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (computeResource) {
      res["ComputeResource"] = computeResource ? boost::any(computeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (hyperParameters) {
      vector<boost::any> temp1;
      for(auto item1:*hyperParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HyperParameters"] = boost::any(temp1);
    }
    if (inputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*inputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputChannels"] = boost::any(temp1);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (isTempAlgo) {
      res["IsTempAlgo"] = boost::any(*isTempAlgo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*latestMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LatestMetrics"] = boost::any(temp1);
    }
    if (latestProgress) {
      res["LatestProgress"] = latestProgress ? boost::any(latestProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*outputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputChannels"] = boost::any(temp1);
    }
    if (outputModel) {
      res["OutputModel"] = outputModel ? boost::any(outputModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (scheduler) {
      res["Scheduler"] = scheduler ? boost::any(scheduler->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusTransitions) {
      vector<boost::any> temp1;
      for(auto item1:*statusTransitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatusTransitions"] = boost::any(temp1);
    }
    if (trainingJobDescription) {
      res["TrainingJobDescription"] = boost::any(*trainingJobDescription);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (trainingJobName) {
      res["TrainingJobName"] = boost::any(*trainingJobName);
    }
    if (trainingJobUrl) {
      res["TrainingJobUrl"] = boost::any(*trainingJobUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmSpec") != m.end() && !m["AlgorithmSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlgorithmSpec"].type()) {
        AlgorithmSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlgorithmSpec"]));
        algorithmSpec = make_shared<AlgorithmSpec>(model1);
      }
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComputeResource"].type()) {
        GetTrainingJobResponseBodyComputeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComputeResource"]));
        computeResource = make_shared<GetTrainingJobResponseBodyComputeResource>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HyperParameters"].type()) {
        vector<GetTrainingJobResponseBodyHyperParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HyperParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrainingJobResponseBodyHyperParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hyperParameters = make_shared<vector<GetTrainingJobResponseBodyHyperParameters>>(expect1);
      }
    }
    if (m.find("InputChannels") != m.end() && !m["InputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["InputChannels"].type()) {
        vector<GetTrainingJobResponseBodyInputChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrainingJobResponseBodyInputChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputChannels = make_shared<vector<GetTrainingJobResponseBodyInputChannels>>(expect1);
      }
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<GetTrainingJobResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrainingJobResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<GetTrainingJobResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("IsTempAlgo") != m.end() && !m["IsTempAlgo"].empty()) {
      isTempAlgo = make_shared<bool>(boost::any_cast<bool>(m["IsTempAlgo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<GetTrainingJobResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrainingJobResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<GetTrainingJobResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("LatestMetrics") != m.end() && !m["LatestMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["LatestMetrics"].type()) {
        vector<GetTrainingJobResponseBodyLatestMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LatestMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrainingJobResponseBodyLatestMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        latestMetrics = make_shared<vector<GetTrainingJobResponseBodyLatestMetrics>>(expect1);
      }
    }
    if (m.find("LatestProgress") != m.end() && !m["LatestProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestProgress"].type()) {
        GetTrainingJobResponseBodyLatestProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestProgress"]));
        latestProgress = make_shared<GetTrainingJobResponseBodyLatestProgress>(model1);
      }
    }
    if (m.find("OutputChannels") != m.end() && !m["OutputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputChannels"].type()) {
        vector<GetTrainingJobResponseBodyOutputChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrainingJobResponseBodyOutputChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputChannels = make_shared<vector<GetTrainingJobResponseBodyOutputChannels>>(expect1);
      }
    }
    if (m.find("OutputModel") != m.end() && !m["OutputModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["OutputModel"].type()) {
        GetTrainingJobResponseBodyOutputModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OutputModel"]));
        outputModel = make_shared<GetTrainingJobResponseBodyOutputModel>(model1);
      }
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scheduler"].type()) {
        GetTrainingJobResponseBodyScheduler model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scheduler"]));
        scheduler = make_shared<GetTrainingJobResponseBodyScheduler>(model1);
      }
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      if (typeid(map<string, boost::any>) == m["Settings"].type()) {
        GetTrainingJobResponseBodySettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Settings"]));
        settings = make_shared<GetTrainingJobResponseBodySettings>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusTransitions") != m.end() && !m["StatusTransitions"].empty()) {
      if (typeid(vector<boost::any>) == m["StatusTransitions"].type()) {
        vector<GetTrainingJobResponseBodyStatusTransitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatusTransitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrainingJobResponseBodyStatusTransitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statusTransitions = make_shared<vector<GetTrainingJobResponseBodyStatusTransitions>>(expect1);
      }
    }
    if (m.find("TrainingJobDescription") != m.end() && !m["TrainingJobDescription"].empty()) {
      trainingJobDescription = make_shared<string>(boost::any_cast<string>(m["TrainingJobDescription"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("TrainingJobName") != m.end() && !m["TrainingJobName"].empty()) {
      trainingJobName = make_shared<string>(boost::any_cast<string>(m["TrainingJobName"]));
    }
    if (m.find("TrainingJobUrl") != m.end() && !m["TrainingJobUrl"].empty()) {
      trainingJobUrl = make_shared<string>(boost::any_cast<string>(m["TrainingJobUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        GetTrainingJobResponseBodyUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<GetTrainingJobResponseBodyUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetTrainingJobResponseBody() = default;
};
class GetTrainingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrainingJobResponseBody> body{};

  GetTrainingJobResponse() {}

  explicit GetTrainingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrainingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrainingJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrainingJobResponse() = default;
};
class GetUserViewMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> order{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> timeStep{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetUserViewMetricsRequest() {}

  explicit GetUserViewMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (timeStep) {
      res["TimeStep"] = boost::any(*timeStep);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("TimeStep") != m.end() && !m["TimeStep"].empty()) {
      timeStep = make_shared<string>(boost::any_cast<string>(m["TimeStep"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetUserViewMetricsRequest() = default;
};
class GetUserViewMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<UserViewMetric> summary{};
  shared_ptr<long> total{};
  shared_ptr<vector<UserViewMetric>> userMetrics{};

  GetUserViewMetricsResponseBody() {}

  explicit GetUserViewMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (summary) {
      res["Summary"] = summary ? boost::any(summary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (userMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*userMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserMetrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Summary"].type()) {
        UserViewMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Summary"]));
        summary = make_shared<UserViewMetric>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("UserMetrics") != m.end() && !m["UserMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["UserMetrics"].type()) {
        vector<UserViewMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UserViewMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userMetrics = make_shared<vector<UserViewMetric>>(expect1);
      }
    }
  }


  virtual ~GetUserViewMetricsResponseBody() = default;
};
class GetUserViewMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserViewMetricsResponseBody> body{};

  GetUserViewMetricsResponse() {}

  explicit GetUserViewMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserViewMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserViewMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserViewMetricsResponse() = default;
};
class ListAlgorithmVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAlgorithmVersionsRequest() {}

  explicit ListAlgorithmVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAlgorithmVersionsRequest() = default;
};
class ListAlgorithmVersionsResponseBodyAlgorithmVersions : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};

  ListAlgorithmVersionsResponseBodyAlgorithmVersions() {}

  explicit ListAlgorithmVersionsResponseBodyAlgorithmVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAlgorithmVersionsResponseBodyAlgorithmVersions() = default;
};
class ListAlgorithmVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions>> algorithmVersions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAlgorithmVersionsResponseBody() {}

  explicit ListAlgorithmVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmVersions) {
      vector<boost::any> temp1;
      for(auto item1:*algorithmVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlgorithmVersions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmVersions") != m.end() && !m["AlgorithmVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["AlgorithmVersions"].type()) {
        vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlgorithmVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlgorithmVersionsResponseBodyAlgorithmVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithmVersions = make_shared<vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlgorithmVersionsResponseBody() = default;
};
class ListAlgorithmVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlgorithmVersionsResponseBody> body{};

  ListAlgorithmVersionsResponse() {}

  explicit ListAlgorithmVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlgorithmVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlgorithmVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlgorithmVersionsResponse() = default;
};
class ListAlgorithmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> workspaceId{};

  ListAlgorithmsRequest() {}

  explicit ListAlgorithmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListAlgorithmsRequest() = default;
};
class ListAlgorithmsResponseBodyAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> algorithmDescription{};
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  ListAlgorithmsResponseBodyAlgorithms() {}

  explicit ListAlgorithmsResponseBodyAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmDescription) {
      res["AlgorithmDescription"] = boost::any(*algorithmDescription);
    }
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmDescription") != m.end() && !m["AlgorithmDescription"].empty()) {
      algorithmDescription = make_shared<string>(boost::any_cast<string>(m["AlgorithmDescription"]));
    }
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListAlgorithmsResponseBodyAlgorithms() = default;
};
class ListAlgorithmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlgorithmsResponseBodyAlgorithms>> algorithms{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAlgorithmsResponseBody() {}

  explicit ListAlgorithmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithms) {
      vector<boost::any> temp1;
      for(auto item1:*algorithms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Algorithms"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithms") != m.end() && !m["Algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["Algorithms"].type()) {
        vector<ListAlgorithmsResponseBodyAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlgorithmsResponseBodyAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<ListAlgorithmsResponseBodyAlgorithms>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlgorithmsResponseBody() = default;
};
class ListAlgorithmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlgorithmsResponseBody> body{};

  ListAlgorithmsResponse() {}

  explicit ListAlgorithmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlgorithmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlgorithmsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlgorithmsResponse() = default;
};
class ListQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> labels{};
  shared_ptr<string> layoutMode{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentQuotaId{};
  shared_ptr<string> quotaIds{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> statuses{};
  shared_ptr<string> workspaceIds{};

  ListQuotasRequest() {}

  explicit ListQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (layoutMode) {
      res["LayoutMode"] = boost::any(*layoutMode);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentQuotaId) {
      res["ParentQuotaId"] = boost::any(*parentQuotaId);
    }
    if (quotaIds) {
      res["QuotaIds"] = boost::any(*quotaIds);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    if (workspaceIds) {
      res["WorkspaceIds"] = boost::any(*workspaceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("LayoutMode") != m.end() && !m["LayoutMode"].empty()) {
      layoutMode = make_shared<string>(boost::any_cast<string>(m["LayoutMode"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentQuotaId") != m.end() && !m["ParentQuotaId"].empty()) {
      parentQuotaId = make_shared<string>(boost::any_cast<string>(m["ParentQuotaId"]));
    }
    if (m.find("QuotaIds") != m.end() && !m["QuotaIds"].empty()) {
      quotaIds = make_shared<string>(boost::any_cast<string>(m["QuotaIds"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      statuses = make_shared<string>(boost::any_cast<string>(m["Statuses"]));
    }
    if (m.find("WorkspaceIds") != m.end() && !m["WorkspaceIds"].empty()) {
      workspaceIds = make_shared<string>(boost::any_cast<string>(m["WorkspaceIds"]));
    }
  }


  virtual ~ListQuotasRequest() = default;
};
class ListQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Quota>> quotas{};
  shared_ptr<string> requestId{};

  ListQuotasResponseBody() {}

  explicit ListQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<Quota> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Quota model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<Quota>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListQuotasResponseBody() = default;
};
class ListQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotasResponseBody> body{};

  ListQuotasResponse() {}

  explicit ListQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotasResponse() = default;
};
class ListResourceGroupMachineGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> creatorID{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};

  ListResourceGroupMachineGroupsRequest() {}

  explicit ListResourceGroupMachineGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorID) {
      res["CreatorID"] = boost::any(*creatorID);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorID") != m.end() && !m["CreatorID"].empty()) {
      creatorID = make_shared<string>(boost::any_cast<string>(m["CreatorID"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<string>(boost::any_cast<string>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListResourceGroupMachineGroupsRequest() = default;
};
class ListResourceGroupMachineGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<MachineGroup>> machineGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListResourceGroupMachineGroupsResponseBody() {}

  explicit ListResourceGroupMachineGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (machineGroups) {
      vector<boost::any> temp1;
      for(auto item1:*machineGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MachineGroups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MachineGroups") != m.end() && !m["MachineGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["MachineGroups"].type()) {
        vector<MachineGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MachineGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MachineGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machineGroups = make_shared<vector<MachineGroup>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListResourceGroupMachineGroupsResponseBody() = default;
};
class ListResourceGroupMachineGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceGroupMachineGroupsResponseBody> body{};

  ListResourceGroupMachineGroupsResponse() {}

  explicit ListResourceGroupMachineGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceGroupMachineGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceGroupMachineGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceGroupMachineGroupsResponse() = default;
};
class ListResourceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> computingResourceProvider{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> showAll{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};

  ListResourceGroupsRequest() {}

  explicit ListResourceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computingResourceProvider) {
      res["ComputingResourceProvider"] = boost::any(*computingResourceProvider);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (showAll) {
      res["ShowAll"] = boost::any(*showAll);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputingResourceProvider") != m.end() && !m["ComputingResourceProvider"].empty()) {
      computingResourceProvider = make_shared<string>(boost::any_cast<string>(m["ComputingResourceProvider"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ShowAll") != m.end() && !m["ShowAll"].empty()) {
      showAll = make_shared<bool>(boost::any_cast<bool>(m["ShowAll"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListResourceGroupsRequest() = default;
};
class ListResourceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ResourceGroup>> resourceGroups{};
  shared_ptr<long> totalCount{};

  ListResourceGroupsResponseBody() {}

  explicit ListResourceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroups) {
      vector<boost::any> temp1;
      for(auto item1:*resourceGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceGroups"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroups") != m.end() && !m["ResourceGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceGroups"].type()) {
        vector<ResourceGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceGroups = make_shared<vector<ResourceGroup>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourceGroupsResponseBody() = default;
};
class ListResourceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceGroupsResponseBody> body{};

  ListResourceGroupsResponse() {}

  explicit ListResourceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceGroupsResponse() = default;
};
class ListTrainingJobLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> workerId{};

  ListTrainingJobLogsRequest() {}

  explicit ListTrainingJobLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (workerId) {
      res["WorkerId"] = boost::any(*workerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("WorkerId") != m.end() && !m["WorkerId"].empty()) {
      workerId = make_shared<string>(boost::any_cast<string>(m["WorkerId"]));
    }
  }


  virtual ~ListTrainingJobLogsRequest() = default;
};
class ListTrainingJobLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> logs{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListTrainingJobLogsResponseBody() {}

  explicit ListTrainingJobLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListTrainingJobLogsResponseBody() = default;
};
class ListTrainingJobLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrainingJobLogsResponseBody> body{};

  ListTrainingJobLogsResponse() {}

  explicit ListTrainingJobLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrainingJobLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrainingJobLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrainingJobLogsResponse() = default;
};
class ListTrainingJobMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};

  ListTrainingJobMetricsRequest() {}

  explicit ListTrainingJobMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListTrainingJobMetricsRequest() = default;
};
class ListTrainingJobMetricsResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> timestamp{};
  shared_ptr<double> value{};

  ListTrainingJobMetricsResponseBodyMetrics() {}

  explicit ListTrainingJobMetricsResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~ListTrainingJobMetricsResponseBodyMetrics() = default;
};
class ListTrainingJobMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTrainingJobMetricsResponseBodyMetrics>> metrics{};
  shared_ptr<string> requestId{};

  ListTrainingJobMetricsResponseBody() {}

  explicit ListTrainingJobMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<ListTrainingJobMetricsResponseBodyMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobMetricsResponseBodyMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<ListTrainingJobMetricsResponseBodyMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTrainingJobMetricsResponseBody() = default;
};
class ListTrainingJobMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrainingJobMetricsResponseBody> body{};

  ListTrainingJobMetricsResponse() {}

  explicit ListTrainingJobMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrainingJobMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrainingJobMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrainingJobMetricsResponse() = default;
};
class ListTrainingJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isTempAlgo{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> trainingJobName{};
  shared_ptr<string> workspaceId{};

  ListTrainingJobsRequest() {}

  explicit ListTrainingJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isTempAlgo) {
      res["IsTempAlgo"] = boost::any(*isTempAlgo);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (trainingJobName) {
      res["TrainingJobName"] = boost::any(*trainingJobName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsTempAlgo") != m.end() && !m["IsTempAlgo"].empty()) {
      isTempAlgo = make_shared<bool>(boost::any_cast<bool>(m["IsTempAlgo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("TrainingJobName") != m.end() && !m["TrainingJobName"].empty()) {
      trainingJobName = make_shared<string>(boost::any_cast<string>(m["TrainingJobName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListTrainingJobsRequest() = default;
};
class ListTrainingJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isTempAlgo{};
  shared_ptr<string> labelsShrink{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> trainingJobName{};
  shared_ptr<string> workspaceId{};

  ListTrainingJobsShrinkRequest() {}

  explicit ListTrainingJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isTempAlgo) {
      res["IsTempAlgo"] = boost::any(*isTempAlgo);
    }
    if (labelsShrink) {
      res["Labels"] = boost::any(*labelsShrink);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (trainingJobName) {
      res["TrainingJobName"] = boost::any(*trainingJobName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsTempAlgo") != m.end() && !m["IsTempAlgo"].empty()) {
      isTempAlgo = make_shared<bool>(boost::any_cast<bool>(m["IsTempAlgo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labelsShrink = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("TrainingJobName") != m.end() && !m["TrainingJobName"].empty()) {
      trainingJobName = make_shared<string>(boost::any_cast<string>(m["TrainingJobName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListTrainingJobsShrinkRequest() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsComputeResource : public Darabonba::Model {
public:
  shared_ptr<long> ecsCount{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<long> instanceCount{};
  shared_ptr<ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec> instanceSpec{};
  shared_ptr<string> resourceId{};

  ListTrainingJobsResponseBodyTrainingJobsComputeResource() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsComputeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsCount) {
      res["EcsCount"] = boost::any(*ecsCount);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = instanceSpec ? boost::any(instanceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsCount") != m.end() && !m["EcsCount"].empty()) {
      ecsCount = make_shared<long>(boost::any_cast<long>(m["EcsCount"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceSpec"].type()) {
        ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceSpec"]));
        instanceSpec = make_shared<ListTrainingJobsResponseBodyTrainingJobsComputeResourceInstanceSpec>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsComputeResource() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsHyperParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListTrainingJobsResponseBodyTrainingJobsHyperParameters() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsHyperParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsHyperParameters() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsInputChannels : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> inputUri{};
  shared_ptr<string> name{};

  ListTrainingJobsResponseBodyTrainingJobsInputChannels() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsInputChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (inputUri) {
      res["InputUri"] = boost::any(*inputUri);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("InputUri") != m.end() && !m["InputUri"].empty()) {
      inputUri = make_shared<string>(boost::any_cast<string>(m["InputUri"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsInputChannels() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTrainingJobsResponseBodyTrainingJobsLabels() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTrainingJobsResponseBodyTrainingJobsLabels() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsOutputChannels : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> name{};
  shared_ptr<string> outputUri{};

  ListTrainingJobsResponseBodyTrainingJobsOutputChannels() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsOutputChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputUri) {
      res["OutputUri"] = boost::any(*outputUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OutputUri") != m.end() && !m["OutputUri"].empty()) {
      outputUri = make_shared<string>(boost::any_cast<string>(m["OutputUri"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsOutputChannels() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsScheduler : public Darabonba::Model {
public:
  shared_ptr<long> maxRunningTimeInSeconds{};

  ListTrainingJobsResponseBodyTrainingJobsScheduler() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRunningTimeInSeconds) {
      res["MaxRunningTimeInSeconds"] = boost::any(*maxRunningTimeInSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRunningTimeInSeconds") != m.end() && !m["MaxRunningTimeInSeconds"].empty()) {
      maxRunningTimeInSeconds = make_shared<long>(boost::any_cast<long>(m["MaxRunningTimeInSeconds"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsScheduler() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsStatusTransitions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  ListTrainingJobsResponseBodyTrainingJobsStatusTransitions() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsStatusTransitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsStatusTransitions() = default;
};
class ListTrainingJobsResponseBodyTrainingJobsUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  ListTrainingJobsResponseBodyTrainingJobsUserVpc() {}

  explicit ListTrainingJobsResponseBodyTrainingJobsUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobsUserVpc() = default;
};
class ListTrainingJobsResponseBodyTrainingJobs : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<ListTrainingJobsResponseBodyTrainingJobsComputeResource> computeResource{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<ListTrainingJobsResponseBodyTrainingJobsHyperParameters>> hyperParameters{};
  shared_ptr<vector<ListTrainingJobsResponseBodyTrainingJobsInputChannels>> inputChannels{};
  shared_ptr<bool> isTempAlgo{};
  shared_ptr<vector<ListTrainingJobsResponseBodyTrainingJobsLabels>> labels{};
  shared_ptr<vector<ListTrainingJobsResponseBodyTrainingJobsOutputChannels>> outputChannels{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> roleArn{};
  shared_ptr<ListTrainingJobsResponseBodyTrainingJobsScheduler> scheduler{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListTrainingJobsResponseBodyTrainingJobsStatusTransitions>> statusTransitions{};
  shared_ptr<string> trainingJobDescription{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> trainingJobName{};
  shared_ptr<string> userId{};
  shared_ptr<ListTrainingJobsResponseBodyTrainingJobsUserVpc> userVpc{};
  shared_ptr<string> workspaceId{};

  ListTrainingJobsResponseBodyTrainingJobs() {}

  explicit ListTrainingJobsResponseBodyTrainingJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (computeResource) {
      res["ComputeResource"] = computeResource ? boost::any(computeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (hyperParameters) {
      vector<boost::any> temp1;
      for(auto item1:*hyperParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HyperParameters"] = boost::any(temp1);
    }
    if (inputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*inputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputChannels"] = boost::any(temp1);
    }
    if (isTempAlgo) {
      res["IsTempAlgo"] = boost::any(*isTempAlgo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (outputChannels) {
      vector<boost::any> temp1;
      for(auto item1:*outputChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputChannels"] = boost::any(temp1);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (scheduler) {
      res["Scheduler"] = scheduler ? boost::any(scheduler->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusTransitions) {
      vector<boost::any> temp1;
      for(auto item1:*statusTransitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatusTransitions"] = boost::any(temp1);
    }
    if (trainingJobDescription) {
      res["TrainingJobDescription"] = boost::any(*trainingJobDescription);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (trainingJobName) {
      res["TrainingJobName"] = boost::any(*trainingJobName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComputeResource"].type()) {
        ListTrainingJobsResponseBodyTrainingJobsComputeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComputeResource"]));
        computeResource = make_shared<ListTrainingJobsResponseBodyTrainingJobsComputeResource>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HyperParameters"].type()) {
        vector<ListTrainingJobsResponseBodyTrainingJobsHyperParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HyperParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobsResponseBodyTrainingJobsHyperParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hyperParameters = make_shared<vector<ListTrainingJobsResponseBodyTrainingJobsHyperParameters>>(expect1);
      }
    }
    if (m.find("InputChannels") != m.end() && !m["InputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["InputChannels"].type()) {
        vector<ListTrainingJobsResponseBodyTrainingJobsInputChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobsResponseBodyTrainingJobsInputChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputChannels = make_shared<vector<ListTrainingJobsResponseBodyTrainingJobsInputChannels>>(expect1);
      }
    }
    if (m.find("IsTempAlgo") != m.end() && !m["IsTempAlgo"].empty()) {
      isTempAlgo = make_shared<bool>(boost::any_cast<bool>(m["IsTempAlgo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListTrainingJobsResponseBodyTrainingJobsLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobsResponseBodyTrainingJobsLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListTrainingJobsResponseBodyTrainingJobsLabels>>(expect1);
      }
    }
    if (m.find("OutputChannels") != m.end() && !m["OutputChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputChannels"].type()) {
        vector<ListTrainingJobsResponseBodyTrainingJobsOutputChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobsResponseBodyTrainingJobsOutputChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputChannels = make_shared<vector<ListTrainingJobsResponseBodyTrainingJobsOutputChannels>>(expect1);
      }
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scheduler"].type()) {
        ListTrainingJobsResponseBodyTrainingJobsScheduler model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scheduler"]));
        scheduler = make_shared<ListTrainingJobsResponseBodyTrainingJobsScheduler>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusTransitions") != m.end() && !m["StatusTransitions"].empty()) {
      if (typeid(vector<boost::any>) == m["StatusTransitions"].type()) {
        vector<ListTrainingJobsResponseBodyTrainingJobsStatusTransitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatusTransitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobsResponseBodyTrainingJobsStatusTransitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statusTransitions = make_shared<vector<ListTrainingJobsResponseBodyTrainingJobsStatusTransitions>>(expect1);
      }
    }
    if (m.find("TrainingJobDescription") != m.end() && !m["TrainingJobDescription"].empty()) {
      trainingJobDescription = make_shared<string>(boost::any_cast<string>(m["TrainingJobDescription"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("TrainingJobName") != m.end() && !m["TrainingJobName"].empty()) {
      trainingJobName = make_shared<string>(boost::any_cast<string>(m["TrainingJobName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        ListTrainingJobsResponseBodyTrainingJobsUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<ListTrainingJobsResponseBodyTrainingJobsUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyTrainingJobs() = default;
};
class ListTrainingJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTrainingJobsResponseBodyTrainingJobs>> trainingJobs{};

  ListTrainingJobsResponseBody() {}

  explicit ListTrainingJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (trainingJobs) {
      vector<boost::any> temp1;
      for(auto item1:*trainingJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrainingJobs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TrainingJobs") != m.end() && !m["TrainingJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["TrainingJobs"].type()) {
        vector<ListTrainingJobsResponseBodyTrainingJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrainingJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobsResponseBodyTrainingJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trainingJobs = make_shared<vector<ListTrainingJobsResponseBodyTrainingJobs>>(expect1);
      }
    }
  }


  virtual ~ListTrainingJobsResponseBody() = default;
};
class ListTrainingJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrainingJobsResponseBody> body{};

  ListTrainingJobsResponse() {}

  explicit ListTrainingJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrainingJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrainingJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrainingJobsResponse() = default;
};
class ScaleQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<ResourceSpec> min{};
  shared_ptr<vector<string>> resourceGroupIds{};

  ScaleQuotaRequest() {}

  explicit ScaleQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (min) {
      res["Min"] = min ? boost::any(min->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceGroupIds) {
      res["ResourceGroupIds"] = boost::any(*resourceGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      if (typeid(map<string, boost::any>) == m["Min"].type()) {
        ResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Min"]));
        min = make_shared<ResourceSpec>(model1);
      }
    }
    if (m.find("ResourceGroupIds") != m.end() && !m["ResourceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScaleQuotaRequest() = default;
};
class ScaleQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> quotaId{};
  shared_ptr<string> requestId{};

  ScaleQuotaResponseBody() {}

  explicit ScaleQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ScaleQuotaResponseBody() = default;
};
class ScaleQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScaleQuotaResponseBody> body{};

  ScaleQuotaResponse() {}

  explicit ScaleQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScaleQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScaleQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~ScaleQuotaResponse() = default;
};
class StopTrainingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopTrainingJobResponseBody() {}

  explicit StopTrainingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopTrainingJobResponseBody() = default;
};
class StopTrainingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopTrainingJobResponseBody> body{};

  StopTrainingJobResponse() {}

  explicit StopTrainingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopTrainingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopTrainingJobResponseBody>(model1);
      }
    }
  }


  virtual ~StopTrainingJobResponse() = default;
};
class UpdateAlgorithmRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmDescription{};
  shared_ptr<string> displayName{};

  UpdateAlgorithmRequest() {}

  explicit UpdateAlgorithmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmDescription) {
      res["AlgorithmDescription"] = boost::any(*algorithmDescription);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmDescription") != m.end() && !m["AlgorithmDescription"].empty()) {
      algorithmDescription = make_shared<string>(boost::any_cast<string>(m["AlgorithmDescription"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
  }


  virtual ~UpdateAlgorithmRequest() = default;
};
class UpdateAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> requestId{};

  UpdateAlgorithmResponseBody() {}

  explicit UpdateAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAlgorithmResponseBody() = default;
};
class UpdateAlgorithmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlgorithmResponseBody> body{};

  UpdateAlgorithmResponse() {}

  explicit UpdateAlgorithmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlgorithmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlgorithmResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlgorithmResponse() = default;
};
class UpdateAlgorithmVersionRequest : public Darabonba::Model {
public:
  shared_ptr<AlgorithmSpec> algorithmSpec{};

  UpdateAlgorithmVersionRequest() {}

  explicit UpdateAlgorithmVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmSpec) {
      res["AlgorithmSpec"] = algorithmSpec ? boost::any(algorithmSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmSpec") != m.end() && !m["AlgorithmSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlgorithmSpec"].type()) {
        AlgorithmSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlgorithmSpec"]));
        algorithmSpec = make_shared<AlgorithmSpec>(model1);
      }
    }
  }


  virtual ~UpdateAlgorithmVersionRequest() = default;
};
class UpdateAlgorithmVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmSpecShrink{};

  UpdateAlgorithmVersionShrinkRequest() {}

  explicit UpdateAlgorithmVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmSpecShrink) {
      res["AlgorithmSpec"] = boost::any(*algorithmSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmSpec") != m.end() && !m["AlgorithmSpec"].empty()) {
      algorithmSpecShrink = make_shared<string>(boost::any_cast<string>(m["AlgorithmSpec"]));
    }
  }


  virtual ~UpdateAlgorithmVersionShrinkRequest() = default;
};
class UpdateAlgorithmVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> algorithmVersion{};

  UpdateAlgorithmVersionResponseBody() {}

  explicit UpdateAlgorithmVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["AlgorithmId"] = boost::any(*algorithmId);
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmId") != m.end() && !m["AlgorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["AlgorithmId"]));
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
  }


  virtual ~UpdateAlgorithmVersionResponseBody() = default;
};
class UpdateAlgorithmVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlgorithmVersionResponseBody> body{};

  UpdateAlgorithmVersionResponse() {}

  explicit UpdateAlgorithmVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlgorithmVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlgorithmVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlgorithmVersionResponse() = default;
};
class UpdateQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> queueStrategy{};

  UpdateQuotaRequest() {}

  explicit UpdateQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (queueStrategy) {
      res["QueueStrategy"] = boost::any(*queueStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("QueueStrategy") != m.end() && !m["QueueStrategy"].empty()) {
      queueStrategy = make_shared<string>(boost::any_cast<string>(m["QueueStrategy"]));
    }
  }


  virtual ~UpdateQuotaRequest() = default;
};
class UpdateQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> quotaId{};
  shared_ptr<string> requestId{};

  UpdateQuotaResponseBody() {}

  explicit UpdateQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateQuotaResponseBody() = default;
};
class UpdateQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaResponseBody> body{};

  UpdateQuotaResponse() {}

  explicit UpdateQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaResponse() = default;
};
class UpdateResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<bool> unbind{};
  shared_ptr<UserVpc> userVpc{};

  UpdateResourceGroupRequest() {}

  explicit UpdateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (unbind) {
      res["Unbind"] = boost::any(*unbind);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Unbind") != m.end() && !m["Unbind"].empty()) {
      unbind = make_shared<bool>(boost::any_cast<bool>(m["Unbind"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
  }


  virtual ~UpdateResourceGroupRequest() = default;
};
class UpdateResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupID{};
  shared_ptr<string> requestId{};

  UpdateResourceGroupResponseBody() {}

  explicit UpdateResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateResourceGroupResponseBody() = default;
};
class UpdateResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceGroupResponseBody> body{};

  UpdateResourceGroupResponse() {}

  explicit UpdateResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceGroupResponse() = default;
};
class UpdateTrainingJobLabelsRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateTrainingJobLabelsRequestLabels() {}

  explicit UpdateTrainingJobLabelsRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTrainingJobLabelsRequestLabels() = default;
};
class UpdateTrainingJobLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateTrainingJobLabelsRequestLabels>> labels{};

  UpdateTrainingJobLabelsRequest() {}

  explicit UpdateTrainingJobLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<UpdateTrainingJobLabelsRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTrainingJobLabelsRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdateTrainingJobLabelsRequestLabels>>(expect1);
      }
    }
  }


  virtual ~UpdateTrainingJobLabelsRequest() = default;
};
class UpdateTrainingJobLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTrainingJobLabelsResponseBody() {}

  explicit UpdateTrainingJobLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTrainingJobLabelsResponseBody() = default;
};
class UpdateTrainingJobLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTrainingJobLabelsResponseBody> body{};

  UpdateTrainingJobLabelsResponse() {}

  explicit UpdateTrainingJobLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTrainingJobLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTrainingJobLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTrainingJobLabelsResponse() = default;
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
  CreateAlgorithmResponse createAlgorithmWithOptions(shared_ptr<CreateAlgorithmRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlgorithmResponse createAlgorithm(shared_ptr<CreateAlgorithmRequest> request);
  CreateAlgorithmVersionResponse createAlgorithmVersionWithOptions(shared_ptr<string> AlgorithmId,
                                                                   shared_ptr<string> AlgorithmVersion,
                                                                   shared_ptr<CreateAlgorithmVersionRequest> tmpReq,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlgorithmVersionResponse createAlgorithmVersion(shared_ptr<string> AlgorithmId, shared_ptr<string> AlgorithmVersion, shared_ptr<CreateAlgorithmVersionRequest> request);
  CreateQuotaResponse createQuotaWithOptions(shared_ptr<CreateQuotaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQuotaResponse createQuota(shared_ptr<CreateQuotaRequest> request);
  CreateResourceGroupResponse createResourceGroupWithOptions(shared_ptr<CreateResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceGroupResponse createResourceGroup(shared_ptr<CreateResourceGroupRequest> request);
  CreateTrainingJobResponse createTrainingJobWithOptions(shared_ptr<CreateTrainingJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrainingJobResponse createTrainingJob(shared_ptr<CreateTrainingJobRequest> request);
  DeleteMachineGroupResponse deleteMachineGroupWithOptions(shared_ptr<string> MachineGroupID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMachineGroupResponse deleteMachineGroup(shared_ptr<string> MachineGroupID);
  DeleteQuotaResponse deleteQuotaWithOptions(shared_ptr<string> QuotaId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQuotaResponse deleteQuota(shared_ptr<string> QuotaId);
  DeleteResourceGroupResponse deleteResourceGroupWithOptions(shared_ptr<string> ResourceGroupID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceGroupResponse deleteResourceGroup(shared_ptr<string> ResourceGroupID);
  DeleteResourceGroupMachineGroupResponse deleteResourceGroupMachineGroupWithOptions(shared_ptr<string> MachineGroupID,
                                                                                     shared_ptr<string> ResourceGroupID,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceGroupMachineGroupResponse deleteResourceGroupMachineGroup(shared_ptr<string> MachineGroupID, shared_ptr<string> ResourceGroupID);
  GetAlgorithmResponse getAlgorithmWithOptions(shared_ptr<string> AlgorithmId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlgorithmResponse getAlgorithm(shared_ptr<string> AlgorithmId);
  GetAlgorithmVersionResponse getAlgorithmVersionWithOptions(shared_ptr<string> AlgorithmId,
                                                             shared_ptr<string> AlgorithmVersion,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlgorithmVersionResponse getAlgorithmVersion(shared_ptr<string> AlgorithmId, shared_ptr<string> AlgorithmVersion);
  GetMachineGroupResponse getMachineGroupWithOptions(shared_ptr<string> MachineGroupID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMachineGroupResponse getMachineGroup(shared_ptr<string> MachineGroupID);
  GetNodeMetricsResponse getNodeMetricsWithOptions(shared_ptr<string> ResourceGroupID,
                                                   shared_ptr<string> MetricType,
                                                   shared_ptr<GetNodeMetricsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeMetricsResponse getNodeMetrics(shared_ptr<string> ResourceGroupID, shared_ptr<string> MetricType, shared_ptr<GetNodeMetricsRequest> request);
  GetQuotaResponse getQuotaWithOptions(shared_ptr<string> QuotaId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaResponse getQuota(shared_ptr<string> QuotaId);
  GetResourceGroupResponse getResourceGroupWithOptions(shared_ptr<string> ResourceGroupID,
                                                       shared_ptr<GetResourceGroupRequest> tmpReq,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupResponse getResourceGroup(shared_ptr<string> ResourceGroupID, shared_ptr<GetResourceGroupRequest> request);
  GetResourceGroupMachineGroupResponse getResourceGroupMachineGroupWithOptions(shared_ptr<string> MachineGroupID,
                                                                               shared_ptr<string> ResourceGroupID,
                                                                               shared_ptr<GetResourceGroupMachineGroupRequest> tmpReq,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupMachineGroupResponse getResourceGroupMachineGroup(shared_ptr<string> MachineGroupID, shared_ptr<string> ResourceGroupID, shared_ptr<GetResourceGroupMachineGroupRequest> request);
  GetResourceGroupRequestResponse getResourceGroupRequestWithOptions(shared_ptr<GetResourceGroupRequestRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupRequestResponse getResourceGroupRequest(shared_ptr<GetResourceGroupRequestRequest> request);
  GetResourceGroupTotalResponse getResourceGroupTotalWithOptions(shared_ptr<GetResourceGroupTotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupTotalResponse getResourceGroupTotal(shared_ptr<GetResourceGroupTotalRequest> request);
  GetTrainingJobResponse getTrainingJobWithOptions(shared_ptr<string> TrainingJobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrainingJobResponse getTrainingJob(shared_ptr<string> TrainingJobId);
  GetUserViewMetricsResponse getUserViewMetricsWithOptions(shared_ptr<string> ResourceGroupID,
                                                           shared_ptr<GetUserViewMetricsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserViewMetricsResponse getUserViewMetrics(shared_ptr<string> ResourceGroupID, shared_ptr<GetUserViewMetricsRequest> request);
  ListAlgorithmVersionsResponse listAlgorithmVersionsWithOptions(shared_ptr<string> AlgorithmId,
                                                                 shared_ptr<ListAlgorithmVersionsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlgorithmVersionsResponse listAlgorithmVersions(shared_ptr<string> AlgorithmId, shared_ptr<ListAlgorithmVersionsRequest> request);
  ListAlgorithmsResponse listAlgorithmsWithOptions(shared_ptr<ListAlgorithmsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlgorithmsResponse listAlgorithms(shared_ptr<ListAlgorithmsRequest> request);
  ListQuotasResponse listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotasResponse listQuotas(shared_ptr<ListQuotasRequest> request);
  ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroupsWithOptions(shared_ptr<string> ResourceGroupID,
                                                                                   shared_ptr<ListResourceGroupMachineGroupsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceGroupMachineGroupsResponse listResourceGroupMachineGroups(shared_ptr<string> ResourceGroupID, shared_ptr<ListResourceGroupMachineGroupsRequest> request);
  ListResourceGroupsResponse listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceGroupsResponse listResourceGroups(shared_ptr<ListResourceGroupsRequest> request);
  ListTrainingJobLogsResponse listTrainingJobLogsWithOptions(shared_ptr<string> TrainingJobId,
                                                             shared_ptr<ListTrainingJobLogsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrainingJobLogsResponse listTrainingJobLogs(shared_ptr<string> TrainingJobId, shared_ptr<ListTrainingJobLogsRequest> request);
  ListTrainingJobMetricsResponse listTrainingJobMetricsWithOptions(shared_ptr<string> TrainingJobId,
                                                                   shared_ptr<ListTrainingJobMetricsRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrainingJobMetricsResponse listTrainingJobMetrics(shared_ptr<string> TrainingJobId, shared_ptr<ListTrainingJobMetricsRequest> request);
  ListTrainingJobsResponse listTrainingJobsWithOptions(shared_ptr<ListTrainingJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrainingJobsResponse listTrainingJobs(shared_ptr<ListTrainingJobsRequest> request);
  ScaleQuotaResponse scaleQuotaWithOptions(shared_ptr<string> QuotaId,
                                           shared_ptr<ScaleQuotaRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScaleQuotaResponse scaleQuota(shared_ptr<string> QuotaId, shared_ptr<ScaleQuotaRequest> request);
  StopTrainingJobResponse stopTrainingJobWithOptions(shared_ptr<string> TrainingJobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTrainingJobResponse stopTrainingJob(shared_ptr<string> TrainingJobId);
  UpdateAlgorithmResponse updateAlgorithmWithOptions(shared_ptr<string> AlgorithmId,
                                                     shared_ptr<UpdateAlgorithmRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlgorithmResponse updateAlgorithm(shared_ptr<string> AlgorithmId, shared_ptr<UpdateAlgorithmRequest> request);
  UpdateAlgorithmVersionResponse updateAlgorithmVersionWithOptions(shared_ptr<string> AlgorithmId,
                                                                   shared_ptr<string> AlgorithmVersion,
                                                                   shared_ptr<UpdateAlgorithmVersionRequest> tmpReq,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlgorithmVersionResponse updateAlgorithmVersion(shared_ptr<string> AlgorithmId, shared_ptr<string> AlgorithmVersion, shared_ptr<UpdateAlgorithmVersionRequest> request);
  UpdateQuotaResponse updateQuotaWithOptions(shared_ptr<string> QuotaId,
                                             shared_ptr<UpdateQuotaRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaResponse updateQuota(shared_ptr<string> QuotaId, shared_ptr<UpdateQuotaRequest> request);
  UpdateResourceGroupResponse updateResourceGroupWithOptions(shared_ptr<string> ResourceGroupID,
                                                             shared_ptr<UpdateResourceGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceGroupResponse updateResourceGroup(shared_ptr<string> ResourceGroupID, shared_ptr<UpdateResourceGroupRequest> request);
  UpdateTrainingJobLabelsResponse updateTrainingJobLabelsWithOptions(shared_ptr<string> TrainingJobId,
                                                                     shared_ptr<UpdateTrainingJobLabelsRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTrainingJobLabelsResponse updateTrainingJobLabels(shared_ptr<string> TrainingJobId, shared_ptr<UpdateTrainingJobLabelsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PaiStudio20220112

#endif
