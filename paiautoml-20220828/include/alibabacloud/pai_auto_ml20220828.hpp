// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAIAUTOML20220828_H_
#define ALIBABACLOUD_PAIAUTOML20220828_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PaiAutoML20220828 {
class AutofeExperimentConfigurationOdpsConfig : public Darabonba::Model {
public:
  shared_ptr<string> odpsAccessId{};
  shared_ptr<string> odpsAccessKey{};
  shared_ptr<string> odpsEndpoint{};
  shared_ptr<string> odpsProjectName{};
  shared_ptr<string> odpsRegionId{};
  shared_ptr<string> odpsRoleArn{};

  AutofeExperimentConfigurationOdpsConfig() {}

  explicit AutofeExperimentConfigurationOdpsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (odpsAccessId) {
      res["odps_access_id"] = boost::any(*odpsAccessId);
    }
    if (odpsAccessKey) {
      res["odps_access_key"] = boost::any(*odpsAccessKey);
    }
    if (odpsEndpoint) {
      res["odps_endpoint"] = boost::any(*odpsEndpoint);
    }
    if (odpsProjectName) {
      res["odps_project_name"] = boost::any(*odpsProjectName);
    }
    if (odpsRegionId) {
      res["odps_region_id"] = boost::any(*odpsRegionId);
    }
    if (odpsRoleArn) {
      res["odps_role_arn"] = boost::any(*odpsRoleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("odps_access_id") != m.end() && !m["odps_access_id"].empty()) {
      odpsAccessId = make_shared<string>(boost::any_cast<string>(m["odps_access_id"]));
    }
    if (m.find("odps_access_key") != m.end() && !m["odps_access_key"].empty()) {
      odpsAccessKey = make_shared<string>(boost::any_cast<string>(m["odps_access_key"]));
    }
    if (m.find("odps_endpoint") != m.end() && !m["odps_endpoint"].empty()) {
      odpsEndpoint = make_shared<string>(boost::any_cast<string>(m["odps_endpoint"]));
    }
    if (m.find("odps_project_name") != m.end() && !m["odps_project_name"].empty()) {
      odpsProjectName = make_shared<string>(boost::any_cast<string>(m["odps_project_name"]));
    }
    if (m.find("odps_region_id") != m.end() && !m["odps_region_id"].empty()) {
      odpsRegionId = make_shared<string>(boost::any_cast<string>(m["odps_region_id"]));
    }
    if (m.find("odps_role_arn") != m.end() && !m["odps_role_arn"].empty()) {
      odpsRoleArn = make_shared<string>(boost::any_cast<string>(m["odps_role_arn"]));
    }
  }


  virtual ~AutofeExperimentConfigurationOdpsConfig() = default;
};
class AutofeExperimentConfigurationOssConfig : public Darabonba::Model {
public:
  shared_ptr<string> ossAccessId{};
  shared_ptr<string> ossAccessKey{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossRoleArn{};

  AutofeExperimentConfigurationOssConfig() {}

  explicit AutofeExperimentConfigurationOssConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossAccessId) {
      res["oss_access_id"] = boost::any(*ossAccessId);
    }
    if (ossAccessKey) {
      res["oss_access_key"] = boost::any(*ossAccessKey);
    }
    if (ossBucket) {
      res["oss_bucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["oss_endpoint"] = boost::any(*ossEndpoint);
    }
    if (ossRoleArn) {
      res["oss_role_arn"] = boost::any(*ossRoleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("oss_access_id") != m.end() && !m["oss_access_id"].empty()) {
      ossAccessId = make_shared<string>(boost::any_cast<string>(m["oss_access_id"]));
    }
    if (m.find("oss_access_key") != m.end() && !m["oss_access_key"].empty()) {
      ossAccessKey = make_shared<string>(boost::any_cast<string>(m["oss_access_key"]));
    }
    if (m.find("oss_bucket") != m.end() && !m["oss_bucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["oss_bucket"]));
    }
    if (m.find("oss_endpoint") != m.end() && !m["oss_endpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["oss_endpoint"]));
    }
    if (m.find("oss_role_arn") != m.end() && !m["oss_role_arn"].empty()) {
      ossRoleArn = make_shared<string>(boost::any_cast<string>(m["oss_role_arn"]));
    }
  }


  virtual ~AutofeExperimentConfigurationOssConfig() = default;
};
class AutofeExperimentConfigurationYmlConfig : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> aggregateOnly{};
  shared_ptr<string> analyzeExpId{};
  shared_ptr<string> cpu{};
  shared_ptr<string> dataPartition{};
  shared_ptr<string> dataSource{};
  shared_ptr<string> dataType{};
  shared_ptr<string> debugMode{};
  shared_ptr<string> excludeColumns{};
  shared_ptr<string> featureSelection{};
  shared_ptr<string> filterThresh{};
  shared_ptr<string> ivThresh{};
  shared_ptr<string> label{};
  shared_ptr<string> memory{};
  shared_ptr<string> outputConfigOssDir{};
  shared_ptr<string> pipelineExpId{};
  shared_ptr<string> reuseResults{};
  shared_ptr<string> sampleRatio{};
  shared_ptr<string> sampleSize{};
  shared_ptr<string> selectionExpId{};
  shared_ptr<string> skipSelect{};
  shared_ptr<string> workers{};
  shared_ptr<string> workspaceName{};

  AutofeExperimentConfigurationYmlConfig() {}

  explicit AutofeExperimentConfigurationYmlConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (aggregateOnly) {
      res["aggregate_only"] = boost::any(*aggregateOnly);
    }
    if (analyzeExpId) {
      res["analyze_exp_id"] = boost::any(*analyzeExpId);
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (dataPartition) {
      res["data_partition"] = boost::any(*dataPartition);
    }
    if (dataSource) {
      res["data_source"] = boost::any(*dataSource);
    }
    if (dataType) {
      res["data_type"] = boost::any(*dataType);
    }
    if (debugMode) {
      res["debug_mode"] = boost::any(*debugMode);
    }
    if (excludeColumns) {
      res["exclude_columns"] = boost::any(*excludeColumns);
    }
    if (featureSelection) {
      res["feature_selection"] = boost::any(*featureSelection);
    }
    if (filterThresh) {
      res["filter_thresh"] = boost::any(*filterThresh);
    }
    if (ivThresh) {
      res["iv_thresh"] = boost::any(*ivThresh);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (memory) {
      res["memory"] = boost::any(*memory);
    }
    if (outputConfigOssDir) {
      res["output_config_oss_dir"] = boost::any(*outputConfigOssDir);
    }
    if (pipelineExpId) {
      res["pipeline_exp_id"] = boost::any(*pipelineExpId);
    }
    if (reuseResults) {
      res["reuse_results"] = boost::any(*reuseResults);
    }
    if (sampleRatio) {
      res["sample_ratio"] = boost::any(*sampleRatio);
    }
    if (sampleSize) {
      res["sample_size"] = boost::any(*sampleSize);
    }
    if (selectionExpId) {
      res["selection_exp_id"] = boost::any(*selectionExpId);
    }
    if (skipSelect) {
      res["skip_select"] = boost::any(*skipSelect);
    }
    if (workers) {
      res["workers"] = boost::any(*workers);
    }
    if (workspaceName) {
      res["workspace_name"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("aggregate_only") != m.end() && !m["aggregate_only"].empty()) {
      aggregateOnly = make_shared<string>(boost::any_cast<string>(m["aggregate_only"]));
    }
    if (m.find("analyze_exp_id") != m.end() && !m["analyze_exp_id"].empty()) {
      analyzeExpId = make_shared<string>(boost::any_cast<string>(m["analyze_exp_id"]));
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["cpu"]));
    }
    if (m.find("data_partition") != m.end() && !m["data_partition"].empty()) {
      dataPartition = make_shared<string>(boost::any_cast<string>(m["data_partition"]));
    }
    if (m.find("data_source") != m.end() && !m["data_source"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["data_source"]));
    }
    if (m.find("data_type") != m.end() && !m["data_type"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["data_type"]));
    }
    if (m.find("debug_mode") != m.end() && !m["debug_mode"].empty()) {
      debugMode = make_shared<string>(boost::any_cast<string>(m["debug_mode"]));
    }
    if (m.find("exclude_columns") != m.end() && !m["exclude_columns"].empty()) {
      excludeColumns = make_shared<string>(boost::any_cast<string>(m["exclude_columns"]));
    }
    if (m.find("feature_selection") != m.end() && !m["feature_selection"].empty()) {
      featureSelection = make_shared<string>(boost::any_cast<string>(m["feature_selection"]));
    }
    if (m.find("filter_thresh") != m.end() && !m["filter_thresh"].empty()) {
      filterThresh = make_shared<string>(boost::any_cast<string>(m["filter_thresh"]));
    }
    if (m.find("iv_thresh") != m.end() && !m["iv_thresh"].empty()) {
      ivThresh = make_shared<string>(boost::any_cast<string>(m["iv_thresh"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("memory") != m.end() && !m["memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["memory"]));
    }
    if (m.find("output_config_oss_dir") != m.end() && !m["output_config_oss_dir"].empty()) {
      outputConfigOssDir = make_shared<string>(boost::any_cast<string>(m["output_config_oss_dir"]));
    }
    if (m.find("pipeline_exp_id") != m.end() && !m["pipeline_exp_id"].empty()) {
      pipelineExpId = make_shared<string>(boost::any_cast<string>(m["pipeline_exp_id"]));
    }
    if (m.find("reuse_results") != m.end() && !m["reuse_results"].empty()) {
      reuseResults = make_shared<string>(boost::any_cast<string>(m["reuse_results"]));
    }
    if (m.find("sample_ratio") != m.end() && !m["sample_ratio"].empty()) {
      sampleRatio = make_shared<string>(boost::any_cast<string>(m["sample_ratio"]));
    }
    if (m.find("sample_size") != m.end() && !m["sample_size"].empty()) {
      sampleSize = make_shared<string>(boost::any_cast<string>(m["sample_size"]));
    }
    if (m.find("selection_exp_id") != m.end() && !m["selection_exp_id"].empty()) {
      selectionExpId = make_shared<string>(boost::any_cast<string>(m["selection_exp_id"]));
    }
    if (m.find("skip_select") != m.end() && !m["skip_select"].empty()) {
      skipSelect = make_shared<string>(boost::any_cast<string>(m["skip_select"]));
    }
    if (m.find("workers") != m.end() && !m["workers"].empty()) {
      workers = make_shared<string>(boost::any_cast<string>(m["workers"]));
    }
    if (m.find("workspace_name") != m.end() && !m["workspace_name"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspace_name"]));
    }
  }


  virtual ~AutofeExperimentConfigurationYmlConfig() = default;
};
class AutofeExperimentConfiguration : public Darabonba::Model {
public:
  shared_ptr<AutofeExperimentConfigurationOdpsConfig> odpsConfig{};
  shared_ptr<AutofeExperimentConfigurationOssConfig> ossConfig{};
  shared_ptr<AutofeExperimentConfigurationYmlConfig> ymlConfig{};

  AutofeExperimentConfiguration() {}

  explicit AutofeExperimentConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (odpsConfig) {
      res["odps_config"] = odpsConfig ? boost::any(odpsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossConfig) {
      res["oss_config"] = ossConfig ? boost::any(ossConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ymlConfig) {
      res["yml_config"] = ymlConfig ? boost::any(ymlConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("odps_config") != m.end() && !m["odps_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["odps_config"].type()) {
        AutofeExperimentConfigurationOdpsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["odps_config"]));
        odpsConfig = make_shared<AutofeExperimentConfigurationOdpsConfig>(model1);
      }
    }
    if (m.find("oss_config") != m.end() && !m["oss_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["oss_config"].type()) {
        AutofeExperimentConfigurationOssConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["oss_config"]));
        ossConfig = make_shared<AutofeExperimentConfigurationOssConfig>(model1);
      }
    }
    if (m.find("yml_config") != m.end() && !m["yml_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["yml_config"].type()) {
        AutofeExperimentConfigurationYmlConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["yml_config"]));
        ymlConfig = make_shared<AutofeExperimentConfigurationYmlConfig>(model1);
      }
    }
  }


  virtual ~AutofeExperimentConfiguration() = default;
};
class HpoExperimentConfigDlcConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> protocol{};
  shared_ptr<string> region{};

  HpoExperimentConfigDlcConfig() {}

  explicit HpoExperimentConfigDlcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["access_id"] = boost::any(*accessId);
    }
    if (accessKey) {
      res["access_key"] = boost::any(*accessKey);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("access_id") != m.end() && !m["access_id"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["access_id"]));
    }
    if (m.find("access_key") != m.end() && !m["access_key"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["access_key"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
  }


  virtual ~HpoExperimentConfigDlcConfig() = default;
};
class HpoExperimentConfigK8sConfig : public Darabonba::Model {
public:
  shared_ptr<string> nniContainerCpuLimit{};
  shared_ptr<string> nniContainerMemoryLimit{};
  shared_ptr<string> nniContainerRequestedCpu{};
  shared_ptr<string> nniContainerRequestedMemory{};

  HpoExperimentConfigK8sConfig() {}

  explicit HpoExperimentConfigK8sConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nniContainerCpuLimit) {
      res["nni_container_cpu_limit"] = boost::any(*nniContainerCpuLimit);
    }
    if (nniContainerMemoryLimit) {
      res["nni_container_memory_limit"] = boost::any(*nniContainerMemoryLimit);
    }
    if (nniContainerRequestedCpu) {
      res["nni_container_requested_cpu"] = boost::any(*nniContainerRequestedCpu);
    }
    if (nniContainerRequestedMemory) {
      res["nni_container_requested_memory"] = boost::any(*nniContainerRequestedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nni_container_cpu_limit") != m.end() && !m["nni_container_cpu_limit"].empty()) {
      nniContainerCpuLimit = make_shared<string>(boost::any_cast<string>(m["nni_container_cpu_limit"]));
    }
    if (m.find("nni_container_memory_limit") != m.end() && !m["nni_container_memory_limit"].empty()) {
      nniContainerMemoryLimit = make_shared<string>(boost::any_cast<string>(m["nni_container_memory_limit"]));
    }
    if (m.find("nni_container_requested_cpu") != m.end() && !m["nni_container_requested_cpu"].empty()) {
      nniContainerRequestedCpu = make_shared<string>(boost::any_cast<string>(m["nni_container_requested_cpu"]));
    }
    if (m.find("nni_container_requested_memory") != m.end() && !m["nni_container_requested_memory"].empty()) {
      nniContainerRequestedMemory = make_shared<string>(boost::any_cast<string>(m["nni_container_requested_memory"]));
    }
  }


  virtual ~HpoExperimentConfigK8sConfig() = default;
};
class HpoExperimentConfigMetricConfig : public Darabonba::Model {
public:
  shared_ptr<string> finalMode{};
  shared_ptr<map<string, boost::any>> metricDict{};
  shared_ptr<vector<string>> metricSource{};
  shared_ptr<string> metricType{};
  shared_ptr<string> sourceListFinalMode{};

  HpoExperimentConfigMetricConfig() {}

  explicit HpoExperimentConfigMetricConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finalMode) {
      res["final_mode"] = boost::any(*finalMode);
    }
    if (metricDict) {
      res["metric_dict"] = boost::any(*metricDict);
    }
    if (metricSource) {
      res["metric_source"] = boost::any(*metricSource);
    }
    if (metricType) {
      res["metric_type"] = boost::any(*metricType);
    }
    if (sourceListFinalMode) {
      res["source_list_final_mode"] = boost::any(*sourceListFinalMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("final_mode") != m.end() && !m["final_mode"].empty()) {
      finalMode = make_shared<string>(boost::any_cast<string>(m["final_mode"]));
    }
    if (m.find("metric_dict") != m.end() && !m["metric_dict"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metric_dict"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metricDict = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("metric_source") != m.end() && !m["metric_source"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["metric_source"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["metric_source"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      metricSource = make_shared<vector<string>>(toVec1);
    }
    if (m.find("metric_type") != m.end() && !m["metric_type"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metric_type"]));
    }
    if (m.find("source_list_final_mode") != m.end() && !m["source_list_final_mode"].empty()) {
      sourceListFinalMode = make_shared<string>(boost::any_cast<string>(m["source_list_final_mode"]));
    }
  }


  virtual ~HpoExperimentConfigMetricConfig() = default;
};
class HpoExperimentConfigMonitorConfig : public Darabonba::Model {
public:
  shared_ptr<string> atMobiles{};
  shared_ptr<string> atUserIds{};
  shared_ptr<string> isAtAll{};
  shared_ptr<string> keyword{};
  shared_ptr<string> url{};

  HpoExperimentConfigMonitorConfig() {}

  explicit HpoExperimentConfigMonitorConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atMobiles) {
      res["at_mobiles"] = boost::any(*atMobiles);
    }
    if (atUserIds) {
      res["at_user_ids"] = boost::any(*atUserIds);
    }
    if (isAtAll) {
      res["is_at_all"] = boost::any(*isAtAll);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("at_mobiles") != m.end() && !m["at_mobiles"].empty()) {
      atMobiles = make_shared<string>(boost::any_cast<string>(m["at_mobiles"]));
    }
    if (m.find("at_user_ids") != m.end() && !m["at_user_ids"].empty()) {
      atUserIds = make_shared<string>(boost::any_cast<string>(m["at_user_ids"]));
    }
    if (m.find("is_at_all") != m.end() && !m["is_at_all"].empty()) {
      isAtAll = make_shared<string>(boost::any_cast<string>(m["is_at_all"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~HpoExperimentConfigMonitorConfig() = default;
};
class HpoExperimentConfigOdpsConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> logViewHost{};
  shared_ptr<string> projectName{};
  shared_ptr<string> region{};
  shared_ptr<string> roleArn{};

  HpoExperimentConfigOdpsConfig() {}

  explicit HpoExperimentConfigOdpsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["access_id"] = boost::any(*accessId);
    }
    if (accessKey) {
      res["access_key"] = boost::any(*accessKey);
    }
    if (endPoint) {
      res["end_point"] = boost::any(*endPoint);
    }
    if (logViewHost) {
      res["log_view_host"] = boost::any(*logViewHost);
    }
    if (projectName) {
      res["project_name"] = boost::any(*projectName);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (roleArn) {
      res["role_arn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("access_id") != m.end() && !m["access_id"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["access_id"]));
    }
    if (m.find("access_key") != m.end() && !m["access_key"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["access_key"]));
    }
    if (m.find("end_point") != m.end() && !m["end_point"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["end_point"]));
    }
    if (m.find("log_view_host") != m.end() && !m["log_view_host"].empty()) {
      logViewHost = make_shared<string>(boost::any_cast<string>(m["log_view_host"]));
    }
    if (m.find("project_name") != m.end() && !m["project_name"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["project_name"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("role_arn") != m.end() && !m["role_arn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["role_arn"]));
    }
  }


  virtual ~HpoExperimentConfigOdpsConfig() = default;
};
class HpoExperimentConfigOssConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyID{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> roleArn{};

  HpoExperimentConfigOssConfig() {}

  explicit HpoExperimentConfigOssConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyID) {
      res["accessKeyID"] = boost::any(*accessKeyID);
    }
    if (accessKeySecret) {
      res["accessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (roleArn) {
      res["role_arn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyID") != m.end() && !m["accessKeyID"].empty()) {
      accessKeyID = make_shared<string>(boost::any_cast<string>(m["accessKeyID"]));
    }
    if (m.find("accessKeySecret") != m.end() && !m["accessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["accessKeySecret"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("role_arn") != m.end() && !m["role_arn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["role_arn"]));
    }
  }


  virtual ~HpoExperimentConfigOssConfig() = default;
};
class HpoExperimentConfigOutputConfig : public Darabonba::Model {
public:
  shared_ptr<string> modelPath{};
  shared_ptr<string> summaryPath{};

  HpoExperimentConfigOutputConfig() {}

  explicit HpoExperimentConfigOutputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelPath) {
      res["model_path"] = boost::any(*modelPath);
    }
    if (summaryPath) {
      res["summary_path"] = boost::any(*summaryPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("model_path") != m.end() && !m["model_path"].empty()) {
      modelPath = make_shared<string>(boost::any_cast<string>(m["model_path"]));
    }
    if (m.find("summary_path") != m.end() && !m["summary_path"].empty()) {
      summaryPath = make_shared<string>(boost::any_cast<string>(m["summary_path"]));
    }
  }


  virtual ~HpoExperimentConfigOutputConfig() = default;
};
class HpoExperimentConfigPaiflowConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> regionId{};
  shared_ptr<string> workspaceId{};

  HpoExperimentConfigPaiflowConfig() {}

  explicit HpoExperimentConfigPaiflowConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["access_key_id"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["access_key_secret"] = boost::any(*accessKeySecret);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (workspaceId) {
      res["workspace_id"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("access_key_id") != m.end() && !m["access_key_id"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["access_key_id"]));
    }
    if (m.find("access_key_secret") != m.end() && !m["access_key_secret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["access_key_secret"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("workspace_id") != m.end() && !m["workspace_id"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspace_id"]));
    }
  }


  virtual ~HpoExperimentConfigPaiflowConfig() = default;
};
class HpoExperimentConfigParamsConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> paramsSrcDstFilepath{};

  HpoExperimentConfigParamsConfig() {}

  explicit HpoExperimentConfigParamsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramsSrcDstFilepath) {
      res["params_src_dst_filepath"] = boost::any(*paramsSrcDstFilepath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("params_src_dst_filepath") != m.end() && !m["params_src_dst_filepath"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["params_src_dst_filepath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["params_src_dst_filepath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paramsSrcDstFilepath = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~HpoExperimentConfigParamsConfig() = default;
};
class HpoExperimentConfigPlatformConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cmd{};
  shared_ptr<string> name{};
  shared_ptr<string> resume{};

  HpoExperimentConfigPlatformConfig() {}

  explicit HpoExperimentConfigPlatformConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmd) {
      res["cmd"] = boost::any(*cmd);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resume) {
      res["resume"] = boost::any(*resume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cmd") != m.end() && !m["cmd"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["cmd"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["cmd"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cmd = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resume") != m.end() && !m["resume"].empty()) {
      resume = make_shared<string>(boost::any_cast<string>(m["resume"]));
    }
  }


  virtual ~HpoExperimentConfigPlatformConfig() = default;
};
class HpoExperimentConfigScheduleConfig : public Darabonba::Model {
public:
  shared_ptr<string> day{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  HpoExperimentConfigScheduleConfig() {}

  explicit HpoExperimentConfigScheduleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["day"] = boost::any(*day);
    }
    if (endTime) {
      res["end_time"] = boost::any(*endTime);
    }
    if (startTime) {
      res["start_time"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("day") != m.end() && !m["day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["day"]));
    }
    if (m.find("end_time") != m.end() && !m["end_time"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["end_time"]));
    }
    if (m.find("start_time") != m.end() && !m["start_time"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["start_time"]));
    }
  }


  virtual ~HpoExperimentConfigScheduleConfig() = default;
};
class HpoExperimentConfigTsConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> regionId{};

  HpoExperimentConfigTsConfig() {}

  explicit HpoExperimentConfigTsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["access_key_id"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["access_key_secret"] = boost::any(*accessKeySecret);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("access_key_id") != m.end() && !m["access_key_id"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["access_key_id"]));
    }
    if (m.find("access_key_secret") != m.end() && !m["access_key_secret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["access_key_secret"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
  }


  virtual ~HpoExperimentConfigTsConfig() = default;
};
class HpoExperimentConfigYmlConfigAssessorClassArgs : public Darabonba::Model {
public:
  shared_ptr<bool> earlystop{};
  shared_ptr<string> movingAvg{};
  shared_ptr<string> optimizeMode{};
  shared_ptr<double> proportion{};
  shared_ptr<long> startStep{};

  HpoExperimentConfigYmlConfigAssessorClassArgs() {}

  explicit HpoExperimentConfigYmlConfigAssessorClassArgs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (earlystop) {
      res["earlystop"] = boost::any(*earlystop);
    }
    if (movingAvg) {
      res["moving_avg"] = boost::any(*movingAvg);
    }
    if (optimizeMode) {
      res["optimize_mode"] = boost::any(*optimizeMode);
    }
    if (proportion) {
      res["proportion"] = boost::any(*proportion);
    }
    if (startStep) {
      res["start_step"] = boost::any(*startStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("earlystop") != m.end() && !m["earlystop"].empty()) {
      earlystop = make_shared<bool>(boost::any_cast<bool>(m["earlystop"]));
    }
    if (m.find("moving_avg") != m.end() && !m["moving_avg"].empty()) {
      movingAvg = make_shared<string>(boost::any_cast<string>(m["moving_avg"]));
    }
    if (m.find("optimize_mode") != m.end() && !m["optimize_mode"].empty()) {
      optimizeMode = make_shared<string>(boost::any_cast<string>(m["optimize_mode"]));
    }
    if (m.find("proportion") != m.end() && !m["proportion"].empty()) {
      proportion = make_shared<double>(boost::any_cast<double>(m["proportion"]));
    }
    if (m.find("start_step") != m.end() && !m["start_step"].empty()) {
      startStep = make_shared<long>(boost::any_cast<long>(m["start_step"]));
    }
  }


  virtual ~HpoExperimentConfigYmlConfigAssessorClassArgs() = default;
};
class HpoExperimentConfigYmlConfigAssessor : public Darabonba::Model {
public:
  shared_ptr<HpoExperimentConfigYmlConfigAssessorClassArgs> classArgs{};
  shared_ptr<string> name{};

  HpoExperimentConfigYmlConfigAssessor() {}

  explicit HpoExperimentConfigYmlConfigAssessor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classArgs) {
      res["class_args"] = classArgs ? boost::any(classArgs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("class_args") != m.end() && !m["class_args"].empty()) {
      if (typeid(map<string, boost::any>) == m["class_args"].type()) {
        HpoExperimentConfigYmlConfigAssessorClassArgs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["class_args"]));
        classArgs = make_shared<HpoExperimentConfigYmlConfigAssessorClassArgs>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HpoExperimentConfigYmlConfigAssessor() = default;
};
class HpoExperimentConfigYmlConfigTuner : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> classArgs{};
  shared_ptr<string> name{};

  HpoExperimentConfigYmlConfigTuner() {}

  explicit HpoExperimentConfigYmlConfigTuner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classArgs) {
      res["class_args"] = boost::any(*classArgs);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("class_args") != m.end() && !m["class_args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["class_args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      classArgs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HpoExperimentConfigYmlConfigTuner() = default;
};
class HpoExperimentConfigYmlConfig : public Darabonba::Model {
public:
  shared_ptr<HpoExperimentConfigYmlConfigAssessor> assessor{};
  shared_ptr<bool> debug{};
  shared_ptr<string> experimentName{};
  shared_ptr<string> logLevel{};
  shared_ptr<long> maxTrialNumber{};
  shared_ptr<long> trialConcurrency{};
  shared_ptr<HpoExperimentConfigYmlConfigTuner> tuner{};

  HpoExperimentConfigYmlConfig() {}

  explicit HpoExperimentConfigYmlConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assessor) {
      res["assessor"] = assessor ? boost::any(assessor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (debug) {
      res["debug"] = boost::any(*debug);
    }
    if (experimentName) {
      res["experiment_name"] = boost::any(*experimentName);
    }
    if (logLevel) {
      res["log_level"] = boost::any(*logLevel);
    }
    if (maxTrialNumber) {
      res["max_trial_number"] = boost::any(*maxTrialNumber);
    }
    if (trialConcurrency) {
      res["trial_concurrency"] = boost::any(*trialConcurrency);
    }
    if (tuner) {
      res["tuner"] = tuner ? boost::any(tuner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assessor") != m.end() && !m["assessor"].empty()) {
      if (typeid(map<string, boost::any>) == m["assessor"].type()) {
        HpoExperimentConfigYmlConfigAssessor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["assessor"]));
        assessor = make_shared<HpoExperimentConfigYmlConfigAssessor>(model1);
      }
    }
    if (m.find("debug") != m.end() && !m["debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["debug"]));
    }
    if (m.find("experiment_name") != m.end() && !m["experiment_name"].empty()) {
      experimentName = make_shared<string>(boost::any_cast<string>(m["experiment_name"]));
    }
    if (m.find("log_level") != m.end() && !m["log_level"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["log_level"]));
    }
    if (m.find("max_trial_number") != m.end() && !m["max_trial_number"].empty()) {
      maxTrialNumber = make_shared<long>(boost::any_cast<long>(m["max_trial_number"]));
    }
    if (m.find("trial_concurrency") != m.end() && !m["trial_concurrency"].empty()) {
      trialConcurrency = make_shared<long>(boost::any_cast<long>(m["trial_concurrency"]));
    }
    if (m.find("tuner") != m.end() && !m["tuner"].empty()) {
      if (typeid(map<string, boost::any>) == m["tuner"].type()) {
        HpoExperimentConfigYmlConfigTuner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tuner"]));
        tuner = make_shared<HpoExperimentConfigYmlConfigTuner>(model1);
      }
    }
  }


  virtual ~HpoExperimentConfigYmlConfig() = default;
};
class HpoExperimentConfig : public Darabonba::Model {
public:
  shared_ptr<HpoExperimentConfigDlcConfig> dlcConfig{};
  shared_ptr<HpoExperimentConfigK8sConfig> k8sConfig{};
  shared_ptr<HpoExperimentConfigMetricConfig> metricConfig{};
  shared_ptr<HpoExperimentConfigMonitorConfig> monitorConfig{};
  shared_ptr<HpoExperimentConfigOdpsConfig> odpsConfig{};
  shared_ptr<HpoExperimentConfigOssConfig> ossConfig{};
  shared_ptr<HpoExperimentConfigOutputConfig> outputConfig{};
  shared_ptr<HpoExperimentConfigPaiflowConfig> paiflowConfig{};
  shared_ptr<HpoExperimentConfigParamsConfig> paramsConfig{};
  shared_ptr<HpoExperimentConfigPlatformConfig> platformConfig{};
  shared_ptr<HpoExperimentConfigScheduleConfig> scheduleConfig{};
  shared_ptr<map<string, boost::any>> searchSpace{};
  shared_ptr<HpoExperimentConfigTsConfig> tsConfig{};
  shared_ptr<HpoExperimentConfigYmlConfig> ymlConfig{};

  HpoExperimentConfig() {}

  explicit HpoExperimentConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dlcConfig) {
      res["dlc_config"] = dlcConfig ? boost::any(dlcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (k8sConfig) {
      res["k8s_config"] = k8sConfig ? boost::any(k8sConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metricConfig) {
      res["metric_config"] = metricConfig ? boost::any(metricConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (monitorConfig) {
      res["monitor_config"] = monitorConfig ? boost::any(monitorConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (odpsConfig) {
      res["odps_config"] = odpsConfig ? boost::any(odpsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossConfig) {
      res["oss_config"] = ossConfig ? boost::any(ossConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputConfig) {
      res["output_config"] = outputConfig ? boost::any(outputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paiflowConfig) {
      res["paiflow_config"] = paiflowConfig ? boost::any(paiflowConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paramsConfig) {
      res["params_config"] = paramsConfig ? boost::any(paramsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (platformConfig) {
      res["platform_config"] = platformConfig ? boost::any(platformConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleConfig) {
      res["schedule_config"] = scheduleConfig ? boost::any(scheduleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (searchSpace) {
      res["search_space"] = boost::any(*searchSpace);
    }
    if (tsConfig) {
      res["ts_config"] = tsConfig ? boost::any(tsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ymlConfig) {
      res["yml_config"] = ymlConfig ? boost::any(ymlConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dlc_config") != m.end() && !m["dlc_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["dlc_config"].type()) {
        HpoExperimentConfigDlcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dlc_config"]));
        dlcConfig = make_shared<HpoExperimentConfigDlcConfig>(model1);
      }
    }
    if (m.find("k8s_config") != m.end() && !m["k8s_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["k8s_config"].type()) {
        HpoExperimentConfigK8sConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["k8s_config"]));
        k8sConfig = make_shared<HpoExperimentConfigK8sConfig>(model1);
      }
    }
    if (m.find("metric_config") != m.end() && !m["metric_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["metric_config"].type()) {
        HpoExperimentConfigMetricConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metric_config"]));
        metricConfig = make_shared<HpoExperimentConfigMetricConfig>(model1);
      }
    }
    if (m.find("monitor_config") != m.end() && !m["monitor_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["monitor_config"].type()) {
        HpoExperimentConfigMonitorConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["monitor_config"]));
        monitorConfig = make_shared<HpoExperimentConfigMonitorConfig>(model1);
      }
    }
    if (m.find("odps_config") != m.end() && !m["odps_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["odps_config"].type()) {
        HpoExperimentConfigOdpsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["odps_config"]));
        odpsConfig = make_shared<HpoExperimentConfigOdpsConfig>(model1);
      }
    }
    if (m.find("oss_config") != m.end() && !m["oss_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["oss_config"].type()) {
        HpoExperimentConfigOssConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["oss_config"]));
        ossConfig = make_shared<HpoExperimentConfigOssConfig>(model1);
      }
    }
    if (m.find("output_config") != m.end() && !m["output_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["output_config"].type()) {
        HpoExperimentConfigOutputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output_config"]));
        outputConfig = make_shared<HpoExperimentConfigOutputConfig>(model1);
      }
    }
    if (m.find("paiflow_config") != m.end() && !m["paiflow_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["paiflow_config"].type()) {
        HpoExperimentConfigPaiflowConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["paiflow_config"]));
        paiflowConfig = make_shared<HpoExperimentConfigPaiflowConfig>(model1);
      }
    }
    if (m.find("params_config") != m.end() && !m["params_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["params_config"].type()) {
        HpoExperimentConfigParamsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["params_config"]));
        paramsConfig = make_shared<HpoExperimentConfigParamsConfig>(model1);
      }
    }
    if (m.find("platform_config") != m.end() && !m["platform_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["platform_config"].type()) {
        HpoExperimentConfigPlatformConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["platform_config"]));
        platformConfig = make_shared<HpoExperimentConfigPlatformConfig>(model1);
      }
    }
    if (m.find("schedule_config") != m.end() && !m["schedule_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule_config"].type()) {
        HpoExperimentConfigScheduleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule_config"]));
        scheduleConfig = make_shared<HpoExperimentConfigScheduleConfig>(model1);
      }
    }
    if (m.find("search_space") != m.end() && !m["search_space"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["search_space"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      searchSpace = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ts_config") != m.end() && !m["ts_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["ts_config"].type()) {
        HpoExperimentConfigTsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ts_config"]));
        tsConfig = make_shared<HpoExperimentConfigTsConfig>(model1);
      }
    }
    if (m.find("yml_config") != m.end() && !m["yml_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["yml_config"].type()) {
        HpoExperimentConfigYmlConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["yml_config"]));
        ymlConfig = make_shared<HpoExperimentConfigYmlConfig>(model1);
      }
    }
  }


  virtual ~HpoExperimentConfig() = default;
};
class CreateHpoExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> description{};
  shared_ptr<HpoExperimentConfig> hpoExperimentConfiguration{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  CreateHpoExperimentRequest() {}

  explicit CreateHpoExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hpoExperimentConfiguration) {
      res["HpoExperimentConfiguration"] = hpoExperimentConfiguration ? boost::any(hpoExperimentConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HpoExperimentConfiguration") != m.end() && !m["HpoExperimentConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["HpoExperimentConfiguration"].type()) {
        HpoExperimentConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HpoExperimentConfiguration"]));
        hpoExperimentConfiguration = make_shared<HpoExperimentConfig>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateHpoExperimentRequest() = default;
};
class CreateHpoExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, string>> detail{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateHpoExperimentResponseBody() {}

  explicit CreateHpoExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
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
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Detail"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateHpoExperimentResponseBody() = default;
};
class CreateHpoExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHpoExperimentResponseBody> body{};

  CreateHpoExperimentResponse() {}

  explicit CreateHpoExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHpoExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHpoExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHpoExperimentResponse() = default;
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
  CreateHpoExperimentResponse createHpoExperimentWithOptions(shared_ptr<CreateHpoExperimentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHpoExperimentResponse createHpoExperiment(shared_ptr<CreateHpoExperimentRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PaiAutoML20220828

#endif
