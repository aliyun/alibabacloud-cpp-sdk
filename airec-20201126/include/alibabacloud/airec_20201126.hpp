// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIREC20201126_H_
#define ALIBABACLOUD_AIREC20201126_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Airec20201126 {
class ExtraDataSourceMeta : public Darabonba::Model {
public:
  shared_ptr<bool> internal{};
  shared_ptr<string> metaType{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};
  shared_ptr<long> updateFrequency{};

  ExtraDataSourceMeta() {}

  explicit ExtraDataSourceMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internal) {
      res["Internal"] = boost::any(*internal);
    }
    if (metaType) {
      res["MetaType"] = boost::any(*metaType);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateFrequency) {
      res["UpdateFrequency"] = boost::any(*updateFrequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Internal") != m.end() && !m["Internal"].empty()) {
      internal = make_shared<bool>(boost::any_cast<bool>(m["Internal"]));
    }
    if (m.find("MetaType") != m.end() && !m["MetaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["MetaType"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateFrequency") != m.end() && !m["UpdateFrequency"].empty()) {
      updateFrequency = make_shared<long>(boost::any_cast<long>(m["UpdateFrequency"]));
    }
  }


  virtual ~ExtraDataSourceMeta() = default;
};
class ExtraDataSource : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ExtraDataSourceMeta> meta{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ExtraDataSource() {}

  explicit ExtraDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["Meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["Meta"].type()) {
        ExtraDataSourceMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Meta"]));
        meta = make_shared<ExtraDataSourceMeta>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ExtraDataSource() = default;
};
class FeatureTableMetaFeatureList : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> featureName{};
  shared_ptr<string> fieldName{};
  shared_ptr<string> status{};

  FeatureTableMetaFeatureList() {}

  explicit FeatureTableMetaFeatureList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (fieldName) {
      res["FieldName"] = boost::any(*fieldName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FieldName") != m.end() && !m["FieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["FieldName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~FeatureTableMetaFeatureList() = default;
};
class FeatureTableMeta : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<vector<FeatureTableMetaFeatureList>> featureList{};
  shared_ptr<bool> internal{};
  shared_ptr<string> metaType{};
  shared_ptr<string> source{};
  shared_ptr<long> updateFrequency{};

  FeatureTableMeta() {}

  explicit FeatureTableMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (featureList) {
      vector<boost::any> temp1;
      for(auto item1:*featureList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureList"] = boost::any(temp1);
    }
    if (internal) {
      res["Internal"] = boost::any(*internal);
    }
    if (metaType) {
      res["MetaType"] = boost::any(*metaType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (updateFrequency) {
      res["UpdateFrequency"] = boost::any(*updateFrequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("FeatureList") != m.end() && !m["FeatureList"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureList"].type()) {
        vector<FeatureTableMetaFeatureList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FeatureTableMetaFeatureList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureList = make_shared<vector<FeatureTableMetaFeatureList>>(expect1);
      }
    }
    if (m.find("Internal") != m.end() && !m["Internal"].empty()) {
      internal = make_shared<bool>(boost::any_cast<bool>(m["Internal"]));
    }
    if (m.find("MetaType") != m.end() && !m["MetaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["MetaType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UpdateFrequency") != m.end() && !m["UpdateFrequency"].empty()) {
      updateFrequency = make_shared<long>(boost::any_cast<long>(m["UpdateFrequency"]));
    }
  }


  virtual ~FeatureTableMeta() = default;
};
class FeatureTable : public Darabonba::Model {
public:
  shared_ptr<string> featureTableId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<FeatureTableMeta> meta{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  FeatureTable() {}

  explicit FeatureTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureTableId) {
      res["FeatureTableId"] = boost::any(*featureTableId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["Meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureTableId") != m.end() && !m["FeatureTableId"].empty()) {
      featureTableId = make_shared<string>(boost::any_cast<string>(m["FeatureTableId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["Meta"].type()) {
        FeatureTableMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Meta"]));
        meta = make_shared<FeatureTableMeta>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~FeatureTable() = default;
};
class RankingModelTemplateMeta : public Darabonba::Model {
public:
  shared_ptr<bool> authorized{};
  shared_ptr<bool> autoRun{};
  shared_ptr<long> autoRunTime{};
  shared_ptr<string> autoRunType{};
  shared_ptr<bool> canDeploy{};
  shared_ptr<string> conf{};
  shared_ptr<string> deployStatus{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossArn{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> sampleId{};
  shared_ptr<string> sampleName{};
  shared_ptr<long> sampleTimeWindow{};
  shared_ptr<string> sampleTimeWindowType{};
  shared_ptr<string> type{};

  RankingModelTemplateMeta() {}

  explicit RankingModelTemplateMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorized) {
      res["Authorized"] = boost::any(*authorized);
    }
    if (autoRun) {
      res["AutoRun"] = boost::any(*autoRun);
    }
    if (autoRunTime) {
      res["AutoRunTime"] = boost::any(*autoRunTime);
    }
    if (autoRunType) {
      res["AutoRunType"] = boost::any(*autoRunType);
    }
    if (canDeploy) {
      res["CanDeploy"] = boost::any(*canDeploy);
    }
    if (conf) {
      res["Conf"] = boost::any(*conf);
    }
    if (deployStatus) {
      res["DeployStatus"] = boost::any(*deployStatus);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossArn) {
      res["OssArn"] = boost::any(*ossArn);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (sampleId) {
      res["SampleId"] = boost::any(*sampleId);
    }
    if (sampleName) {
      res["SampleName"] = boost::any(*sampleName);
    }
    if (sampleTimeWindow) {
      res["SampleTimeWindow"] = boost::any(*sampleTimeWindow);
    }
    if (sampleTimeWindowType) {
      res["SampleTimeWindowType"] = boost::any(*sampleTimeWindowType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authorized") != m.end() && !m["Authorized"].empty()) {
      authorized = make_shared<bool>(boost::any_cast<bool>(m["Authorized"]));
    }
    if (m.find("AutoRun") != m.end() && !m["AutoRun"].empty()) {
      autoRun = make_shared<bool>(boost::any_cast<bool>(m["AutoRun"]));
    }
    if (m.find("AutoRunTime") != m.end() && !m["AutoRunTime"].empty()) {
      autoRunTime = make_shared<long>(boost::any_cast<long>(m["AutoRunTime"]));
    }
    if (m.find("AutoRunType") != m.end() && !m["AutoRunType"].empty()) {
      autoRunType = make_shared<string>(boost::any_cast<string>(m["AutoRunType"]));
    }
    if (m.find("CanDeploy") != m.end() && !m["CanDeploy"].empty()) {
      canDeploy = make_shared<bool>(boost::any_cast<bool>(m["CanDeploy"]));
    }
    if (m.find("Conf") != m.end() && !m["Conf"].empty()) {
      conf = make_shared<string>(boost::any_cast<string>(m["Conf"]));
    }
    if (m.find("DeployStatus") != m.end() && !m["DeployStatus"].empty()) {
      deployStatus = make_shared<string>(boost::any_cast<string>(m["DeployStatus"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssArn") != m.end() && !m["OssArn"].empty()) {
      ossArn = make_shared<string>(boost::any_cast<string>(m["OssArn"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("SampleId") != m.end() && !m["SampleId"].empty()) {
      sampleId = make_shared<string>(boost::any_cast<string>(m["SampleId"]));
    }
    if (m.find("SampleName") != m.end() && !m["SampleName"].empty()) {
      sampleName = make_shared<string>(boost::any_cast<string>(m["SampleName"]));
    }
    if (m.find("SampleTimeWindow") != m.end() && !m["SampleTimeWindow"].empty()) {
      sampleTimeWindow = make_shared<long>(boost::any_cast<long>(m["SampleTimeWindow"]));
    }
    if (m.find("SampleTimeWindowType") != m.end() && !m["SampleTimeWindowType"].empty()) {
      sampleTimeWindowType = make_shared<string>(boost::any_cast<string>(m["SampleTimeWindowType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RankingModelTemplateMeta() = default;
};
class RankingModelTemplate : public Darabonba::Model {
public:
  shared_ptr<RankingModelTemplateMeta> meta{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<long> versionNum{};

  RankingModelTemplate() {}

  explicit RankingModelTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meta) {
      res["Meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (versionNum) {
      res["VersionNum"] = boost::any(*versionNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["Meta"].type()) {
        RankingModelTemplateMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Meta"]));
        meta = make_shared<RankingModelTemplateMeta>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("VersionNum") != m.end() && !m["VersionNum"].empty()) {
      versionNum = make_shared<long>(boost::any_cast<long>(m["VersionNum"]));
    }
  }


  virtual ~RankingModelTemplate() = default;
};
class RankingModelVersionRunResult : public Darabonba::Model {
public:
  shared_ptr<string> assessAuc{};
  shared_ptr<string> assessGauc{};
  shared_ptr<string> assessLoss{};
  shared_ptr<string> trainAuc{};
  shared_ptr<string> trainGauc{};
  shared_ptr<string> trainLoss{};

  RankingModelVersionRunResult() {}

  explicit RankingModelVersionRunResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assessAuc) {
      res["AssessAuc"] = boost::any(*assessAuc);
    }
    if (assessGauc) {
      res["AssessGauc"] = boost::any(*assessGauc);
    }
    if (assessLoss) {
      res["AssessLoss"] = boost::any(*assessLoss);
    }
    if (trainAuc) {
      res["TrainAuc"] = boost::any(*trainAuc);
    }
    if (trainGauc) {
      res["TrainGauc"] = boost::any(*trainGauc);
    }
    if (trainLoss) {
      res["TrainLoss"] = boost::any(*trainLoss);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssessAuc") != m.end() && !m["AssessAuc"].empty()) {
      assessAuc = make_shared<string>(boost::any_cast<string>(m["AssessAuc"]));
    }
    if (m.find("AssessGauc") != m.end() && !m["AssessGauc"].empty()) {
      assessGauc = make_shared<string>(boost::any_cast<string>(m["AssessGauc"]));
    }
    if (m.find("AssessLoss") != m.end() && !m["AssessLoss"].empty()) {
      assessLoss = make_shared<string>(boost::any_cast<string>(m["AssessLoss"]));
    }
    if (m.find("TrainAuc") != m.end() && !m["TrainAuc"].empty()) {
      trainAuc = make_shared<string>(boost::any_cast<string>(m["TrainAuc"]));
    }
    if (m.find("TrainGauc") != m.end() && !m["TrainGauc"].empty()) {
      trainGauc = make_shared<string>(boost::any_cast<string>(m["TrainGauc"]));
    }
    if (m.find("TrainLoss") != m.end() && !m["TrainLoss"].empty()) {
      trainLoss = make_shared<string>(boost::any_cast<string>(m["TrainLoss"]));
    }
  }


  virtual ~RankingModelVersionRunResult() = default;
};
class RankingModelVersion : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> runLog{};
  shared_ptr<RankingModelVersionRunResult> runResult{};
  shared_ptr<string> runTime{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};

  RankingModelVersion() {}

  explicit RankingModelVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (runLog) {
      res["RunLog"] = boost::any(*runLog);
    }
    if (runResult) {
      res["RunResult"] = runResult ? boost::any(runResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runTime) {
      res["RunTime"] = boost::any(*runTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RunLog") != m.end() && !m["RunLog"].empty()) {
      runLog = make_shared<string>(boost::any_cast<string>(m["RunLog"]));
    }
    if (m.find("RunResult") != m.end() && !m["RunResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunResult"].type()) {
        RankingModelVersionRunResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunResult"]));
        runResult = make_shared<RankingModelVersionRunResult>(model1);
      }
    }
    if (m.find("RunTime") != m.end() && !m["RunTime"].empty()) {
      runTime = make_shared<string>(boost::any_cast<string>(m["RunTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~RankingModelVersion() = default;
};
class RankingSystemMetaPredictEngine : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> version{};

  RankingSystemMetaPredictEngine() {}

  explicit RankingSystemMetaPredictEngine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~RankingSystemMetaPredictEngine() = default;
};
class RankingSystemMeta : public Darabonba::Model {
public:
  shared_ptr<bool> autoDeploy{};
  shared_ptr<string> autoDeployAuc{};
  shared_ptr<string> conf{};
  shared_ptr<string> failMsg{};
  shared_ptr<string> modelVersionName{};
  shared_ptr<RankingSystemMetaPredictEngine> predictEngine{};
  shared_ptr<string> predictEngineType{};

  RankingSystemMeta() {}

  explicit RankingSystemMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeploy) {
      res["AutoDeploy"] = boost::any(*autoDeploy);
    }
    if (autoDeployAuc) {
      res["AutoDeployAuc"] = boost::any(*autoDeployAuc);
    }
    if (conf) {
      res["Conf"] = boost::any(*conf);
    }
    if (failMsg) {
      res["FailMsg"] = boost::any(*failMsg);
    }
    if (modelVersionName) {
      res["ModelVersionName"] = boost::any(*modelVersionName);
    }
    if (predictEngine) {
      res["PredictEngine"] = predictEngine ? boost::any(predictEngine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (predictEngineType) {
      res["PredictEngineType"] = boost::any(*predictEngineType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoDeploy") != m.end() && !m["AutoDeploy"].empty()) {
      autoDeploy = make_shared<bool>(boost::any_cast<bool>(m["AutoDeploy"]));
    }
    if (m.find("AutoDeployAuc") != m.end() && !m["AutoDeployAuc"].empty()) {
      autoDeployAuc = make_shared<string>(boost::any_cast<string>(m["AutoDeployAuc"]));
    }
    if (m.find("Conf") != m.end() && !m["Conf"].empty()) {
      conf = make_shared<string>(boost::any_cast<string>(m["Conf"]));
    }
    if (m.find("FailMsg") != m.end() && !m["FailMsg"].empty()) {
      failMsg = make_shared<string>(boost::any_cast<string>(m["FailMsg"]));
    }
    if (m.find("ModelVersionName") != m.end() && !m["ModelVersionName"].empty()) {
      modelVersionName = make_shared<string>(boost::any_cast<string>(m["ModelVersionName"]));
    }
    if (m.find("PredictEngine") != m.end() && !m["PredictEngine"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredictEngine"].type()) {
        RankingSystemMetaPredictEngine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredictEngine"]));
        predictEngine = make_shared<RankingSystemMetaPredictEngine>(model1);
      }
    }
    if (m.find("PredictEngineType") != m.end() && !m["PredictEngineType"].empty()) {
      predictEngineType = make_shared<string>(boost::any_cast<string>(m["PredictEngineType"]));
    }
  }


  virtual ~RankingSystemMeta() = default;
};
class RankingSystem : public Darabonba::Model {
public:
  shared_ptr<string> applyStatus{};
  shared_ptr<string> deployStatus{};
  shared_ptr<RankingSystemMeta> meta{};
  shared_ptr<string> modelTemplateId{};
  shared_ptr<string> name{};
  shared_ptr<vector<long>> sceneIdList{};

  RankingSystem() {}

  explicit RankingSystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyStatus) {
      res["ApplyStatus"] = boost::any(*applyStatus);
    }
    if (deployStatus) {
      res["DeployStatus"] = boost::any(*deployStatus);
    }
    if (meta) {
      res["Meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelTemplateId) {
      res["ModelTemplateId"] = boost::any(*modelTemplateId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneIdList) {
      res["SceneIdList"] = boost::any(*sceneIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyStatus") != m.end() && !m["ApplyStatus"].empty()) {
      applyStatus = make_shared<string>(boost::any_cast<string>(m["ApplyStatus"]));
    }
    if (m.find("DeployStatus") != m.end() && !m["DeployStatus"].empty()) {
      deployStatus = make_shared<string>(boost::any_cast<string>(m["DeployStatus"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["Meta"].type()) {
        RankingSystemMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Meta"]));
        meta = make_shared<RankingSystemMeta>(model1);
      }
    }
    if (m.find("ModelTemplateId") != m.end() && !m["ModelTemplateId"].empty()) {
      modelTemplateId = make_shared<string>(boost::any_cast<string>(m["ModelTemplateId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneIdList") != m.end() && !m["SceneIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SceneIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SceneIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      sceneIdList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RankingSystem() = default;
};
class RankingSystemHistoryMetaPredictEngine : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> version{};

  RankingSystemHistoryMetaPredictEngine() {}

  explicit RankingSystemHistoryMetaPredictEngine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~RankingSystemHistoryMetaPredictEngine() = default;
};
class RankingSystemHistoryMeta : public Darabonba::Model {
public:
  shared_ptr<bool> autoDeploy{};
  shared_ptr<string> autoDeployAuc{};
  shared_ptr<string> conf{};
  shared_ptr<string> modelTemplateName{};
  shared_ptr<RankingSystemHistoryMetaPredictEngine> predictEngine{};
  shared_ptr<string> predictEngineType{};
  shared_ptr<string> previousOperateId{};

  RankingSystemHistoryMeta() {}

  explicit RankingSystemHistoryMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeploy) {
      res["AutoDeploy"] = boost::any(*autoDeploy);
    }
    if (autoDeployAuc) {
      res["AutoDeployAuc"] = boost::any(*autoDeployAuc);
    }
    if (conf) {
      res["Conf"] = boost::any(*conf);
    }
    if (modelTemplateName) {
      res["ModelTemplateName"] = boost::any(*modelTemplateName);
    }
    if (predictEngine) {
      res["PredictEngine"] = predictEngine ? boost::any(predictEngine->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (predictEngineType) {
      res["PredictEngineType"] = boost::any(*predictEngineType);
    }
    if (previousOperateId) {
      res["PreviousOperateId"] = boost::any(*previousOperateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoDeploy") != m.end() && !m["AutoDeploy"].empty()) {
      autoDeploy = make_shared<bool>(boost::any_cast<bool>(m["AutoDeploy"]));
    }
    if (m.find("AutoDeployAuc") != m.end() && !m["AutoDeployAuc"].empty()) {
      autoDeployAuc = make_shared<string>(boost::any_cast<string>(m["AutoDeployAuc"]));
    }
    if (m.find("Conf") != m.end() && !m["Conf"].empty()) {
      conf = make_shared<string>(boost::any_cast<string>(m["Conf"]));
    }
    if (m.find("ModelTemplateName") != m.end() && !m["ModelTemplateName"].empty()) {
      modelTemplateName = make_shared<string>(boost::any_cast<string>(m["ModelTemplateName"]));
    }
    if (m.find("PredictEngine") != m.end() && !m["PredictEngine"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredictEngine"].type()) {
        RankingSystemHistoryMetaPredictEngine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredictEngine"]));
        predictEngine = make_shared<RankingSystemHistoryMetaPredictEngine>(model1);
      }
    }
    if (m.find("PredictEngineType") != m.end() && !m["PredictEngineType"].empty()) {
      predictEngineType = make_shared<string>(boost::any_cast<string>(m["PredictEngineType"]));
    }
    if (m.find("PreviousOperateId") != m.end() && !m["PreviousOperateId"].empty()) {
      previousOperateId = make_shared<string>(boost::any_cast<string>(m["PreviousOperateId"]));
    }
  }


  virtual ~RankingSystemHistoryMeta() = default;
};
class RankingSystemHistory : public Darabonba::Model {
public:
  shared_ptr<RankingSystemHistoryMeta> meta{};
  shared_ptr<string> name{};
  shared_ptr<string> operateId{};
  shared_ptr<string> operateTime{};
  shared_ptr<string> operateType{};

  RankingSystemHistory() {}

  explicit RankingSystemHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meta) {
      res["Meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operateId) {
      res["OperateId"] = boost::any(*operateId);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["Meta"].type()) {
        RankingSystemHistoryMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Meta"]));
        meta = make_shared<RankingSystemHistoryMeta>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperateId") != m.end() && !m["OperateId"].empty()) {
      operateId = make_shared<string>(boost::any_cast<string>(m["OperateId"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["OperateTime"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
  }


  virtual ~RankingSystemHistory() = default;
};
class SampleMetaConfigFeatureConfig : public Darabonba::Model {
public:
  shared_ptr<string> itemFeatures{};
  shared_ptr<string> userFeatures{};

  SampleMetaConfigFeatureConfig() {}

  explicit SampleMetaConfigFeatureConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemFeatures) {
      res["ItemFeatures"] = boost::any(*itemFeatures);
    }
    if (userFeatures) {
      res["UserFeatures"] = boost::any(*userFeatures);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemFeatures") != m.end() && !m["ItemFeatures"].empty()) {
      itemFeatures = make_shared<string>(boost::any_cast<string>(m["ItemFeatures"]));
    }
    if (m.find("UserFeatures") != m.end() && !m["UserFeatures"].empty()) {
      userFeatures = make_shared<string>(boost::any_cast<string>(m["UserFeatures"]));
    }
  }


  virtual ~SampleMetaConfigFeatureConfig() = default;
};
class SampleMetaConfigLabelLogic : public Darabonba::Model {
public:
  shared_ptr<long> bhvTimeWindow{};
  shared_ptr<string> negativeBhvTypes{};
  shared_ptr<string> positiveBhvTypes{};

  SampleMetaConfigLabelLogic() {}

  explicit SampleMetaConfigLabelLogic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bhvTimeWindow) {
      res["BhvTimeWindow"] = boost::any(*bhvTimeWindow);
    }
    if (negativeBhvTypes) {
      res["NegativeBhvTypes"] = boost::any(*negativeBhvTypes);
    }
    if (positiveBhvTypes) {
      res["PositiveBhvTypes"] = boost::any(*positiveBhvTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BhvTimeWindow") != m.end() && !m["BhvTimeWindow"].empty()) {
      bhvTimeWindow = make_shared<long>(boost::any_cast<long>(m["BhvTimeWindow"]));
    }
    if (m.find("NegativeBhvTypes") != m.end() && !m["NegativeBhvTypes"].empty()) {
      negativeBhvTypes = make_shared<string>(boost::any_cast<string>(m["NegativeBhvTypes"]));
    }
    if (m.find("PositiveBhvTypes") != m.end() && !m["PositiveBhvTypes"].empty()) {
      positiveBhvTypes = make_shared<string>(boost::any_cast<string>(m["PositiveBhvTypes"]));
    }
  }


  virtual ~SampleMetaConfigLabelLogic() = default;
};
class SampleMetaConfigWeightLogicList : public Darabonba::Model {
public:
  shared_ptr<string> bhv{};
  shared_ptr<string> weight{};

  SampleMetaConfigWeightLogicList() {}

  explicit SampleMetaConfigWeightLogicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bhv) {
      res["Bhv"] = boost::any(*bhv);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bhv") != m.end() && !m["Bhv"].empty()) {
      bhv = make_shared<string>(boost::any_cast<string>(m["Bhv"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
  }


  virtual ~SampleMetaConfigWeightLogicList() = default;
};
class SampleMetaConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bhvTableSourceIds{};
  shared_ptr<SampleMetaConfigFeatureConfig> featureConfig{};
  shared_ptr<SampleMetaConfigLabelLogic> labelLogic{};
  shared_ptr<vector<SampleMetaConfigWeightLogicList>> weightLogicList{};

  SampleMetaConfig() {}

  explicit SampleMetaConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bhvTableSourceIds) {
      res["BhvTableSourceIds"] = boost::any(*bhvTableSourceIds);
    }
    if (featureConfig) {
      res["FeatureConfig"] = featureConfig ? boost::any(featureConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (labelLogic) {
      res["LabelLogic"] = labelLogic ? boost::any(labelLogic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weightLogicList) {
      vector<boost::any> temp1;
      for(auto item1:*weightLogicList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WeightLogicList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BhvTableSourceIds") != m.end() && !m["BhvTableSourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BhvTableSourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BhvTableSourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bhvTableSourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FeatureConfig") != m.end() && !m["FeatureConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FeatureConfig"].type()) {
        SampleMetaConfigFeatureConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FeatureConfig"]));
        featureConfig = make_shared<SampleMetaConfigFeatureConfig>(model1);
      }
    }
    if (m.find("LabelLogic") != m.end() && !m["LabelLogic"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabelLogic"].type()) {
        SampleMetaConfigLabelLogic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabelLogic"]));
        labelLogic = make_shared<SampleMetaConfigLabelLogic>(model1);
      }
    }
    if (m.find("WeightLogicList") != m.end() && !m["WeightLogicList"].empty()) {
      if (typeid(vector<boost::any>) == m["WeightLogicList"].type()) {
        vector<SampleMetaConfigWeightLogicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WeightLogicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SampleMetaConfigWeightLogicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        weightLogicList = make_shared<vector<SampleMetaConfigWeightLogicList>>(expect1);
      }
    }
  }


  virtual ~SampleMetaConfig() = default;
};
class SampleMetaExtendParams : public Darabonba::Model {
public:
  shared_ptr<long> latestTaskStatus{};
  shared_ptr<long> sampleCount{};

  SampleMetaExtendParams() {}

  explicit SampleMetaExtendParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latestTaskStatus) {
      res["LatestTaskStatus"] = boost::any(*latestTaskStatus);
    }
    if (sampleCount) {
      res["SampleCount"] = boost::any(*sampleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LatestTaskStatus") != m.end() && !m["LatestTaskStatus"].empty()) {
      latestTaskStatus = make_shared<long>(boost::any_cast<long>(m["LatestTaskStatus"]));
    }
    if (m.find("SampleCount") != m.end() && !m["SampleCount"].empty()) {
      sampleCount = make_shared<long>(boost::any_cast<long>(m["SampleCount"]));
    }
  }


  virtual ~SampleMetaExtendParams() = default;
};
class SampleMeta : public Darabonba::Model {
public:
  shared_ptr<bool> autoUpdate{};
  shared_ptr<long> autoUpdateFrequency{};
  shared_ptr<string> clonedId{};
  shared_ptr<SampleMetaConfig> config{};
  shared_ptr<SampleMetaExtendParams> extendParams{};
  shared_ptr<string> metaType{};
  shared_ptr<string> name{};
  shared_ptr<string> storeConfig{};
  shared_ptr<string> type{};

  SampleMeta() {}

  explicit SampleMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpdate) {
      res["AutoUpdate"] = boost::any(*autoUpdate);
    }
    if (autoUpdateFrequency) {
      res["AutoUpdateFrequency"] = boost::any(*autoUpdateFrequency);
    }
    if (clonedId) {
      res["ClonedId"] = boost::any(*clonedId);
    }
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extendParams) {
      res["ExtendParams"] = extendParams ? boost::any(extendParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metaType) {
      res["MetaType"] = boost::any(*metaType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (storeConfig) {
      res["StoreConfig"] = boost::any(*storeConfig);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoUpdate") != m.end() && !m["AutoUpdate"].empty()) {
      autoUpdate = make_shared<bool>(boost::any_cast<bool>(m["AutoUpdate"]));
    }
    if (m.find("AutoUpdateFrequency") != m.end() && !m["AutoUpdateFrequency"].empty()) {
      autoUpdateFrequency = make_shared<long>(boost::any_cast<long>(m["AutoUpdateFrequency"]));
    }
    if (m.find("ClonedId") != m.end() && !m["ClonedId"].empty()) {
      clonedId = make_shared<string>(boost::any_cast<string>(m["ClonedId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        SampleMetaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<SampleMetaConfig>(model1);
      }
    }
    if (m.find("ExtendParams") != m.end() && !m["ExtendParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendParams"].type()) {
        SampleMetaExtendParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendParams"]));
        extendParams = make_shared<SampleMetaExtendParams>(model1);
      }
    }
    if (m.find("MetaType") != m.end() && !m["MetaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["MetaType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StoreConfig") != m.end() && !m["StoreConfig"].empty()) {
      storeConfig = make_shared<string>(boost::any_cast<string>(m["StoreConfig"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SampleMeta() = default;
};
class Sample : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<SampleMeta> meta{};
  shared_ptr<string> sampleId{};
  shared_ptr<string> status{};

  Sample() {}

  explicit Sample(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["Meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sampleId) {
      res["SampleId"] = boost::any(*sampleId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["Meta"].type()) {
        SampleMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Meta"]));
        meta = make_shared<SampleMeta>(model1);
      }
    }
    if (m.find("SampleId") != m.end() && !m["SampleId"].empty()) {
      sampleId = make_shared<string>(boost::any_cast<string>(m["SampleId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~Sample() = default;
};
class AttachDatasetResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> state{};
  shared_ptr<string> versionId{};

  AttachDatasetResponseBodyResult() {}

  explicit AttachDatasetResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~AttachDatasetResponseBodyResult() = default;
};
class AttachDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AttachDatasetResponseBodyResult> result{};

  AttachDatasetResponseBody() {}

  explicit AttachDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        AttachDatasetResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<AttachDatasetResponseBodyResult>(model1);
      }
    }
  }


  virtual ~AttachDatasetResponseBody() = default;
};
class AttachDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachDatasetResponseBody> body{};

  AttachDatasetResponse() {}

  explicit AttachDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~AttachDatasetResponse() = default;
};
class AttachIndexVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  AttachIndexVersionResponseBody() {}

  explicit AttachIndexVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~AttachIndexVersionResponseBody() = default;
};
class AttachIndexVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachIndexVersionResponseBody> body{};

  AttachIndexVersionResponse() {}

  explicit AttachIndexVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachIndexVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachIndexVersionResponseBody>(model1);
      }
    }
  }


  virtual ~AttachIndexVersionResponse() = default;
};
class CheckRankingModelReachableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CheckRankingModelReachableResponseBody() {}

  explicit CheckRankingModelReachableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~CheckRankingModelReachableResponseBody() = default;
};
class CheckRankingModelReachableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckRankingModelReachableResponseBody> body{};

  CheckRankingModelReachableResponse() {}

  explicit CheckRankingModelReachableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckRankingModelReachableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckRankingModelReachableResponseBody>(model1);
      }
    }
  }


  virtual ~CheckRankingModelReachableResponse() = default;
};
class CloneExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};

  CloneExperimentRequest() {}

  explicit CloneExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CloneExperimentRequest() = default;
};
class CloneExperimentResponseBodyResultAlgorithmsConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  CloneExperimentResponseBodyResultAlgorithmsConfig() {}

  explicit CloneExperimentResponseBodyResultAlgorithmsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CloneExperimentResponseBodyResultAlgorithmsConfig() = default;
};
class CloneExperimentResponseBodyResultAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<CloneExperimentResponseBodyResultAlgorithmsConfig>> config{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<bool> hasConfig{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CloneExperimentResponseBodyResultAlgorithms() {}

  explicit CloneExperimentResponseBodyResultAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (hasConfig) {
      res["hasConfig"] = boost::any(*hasConfig);
    }
    if (key) {
      res["key"] = boost::any(*key);
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
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<CloneExperimentResponseBodyResultAlgorithmsConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CloneExperimentResponseBodyResultAlgorithmsConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<CloneExperimentResponseBodyResultAlgorithmsConfig>>(expect1);
      }
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("hasConfig") != m.end() && !m["hasConfig"].empty()) {
      hasConfig = make_shared<bool>(boost::any_cast<bool>(m["hasConfig"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CloneExperimentResponseBodyResultAlgorithms() = default;
};
class CloneExperimentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<CloneExperimentResponseBodyResultAlgorithms>> algorithms{};
  shared_ptr<bool> base{};
  shared_ptr<vector<string>> buckets{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineTime{};
  shared_ptr<string> onlineTime{};
  shared_ptr<string> status{};

  CloneExperimentResponseBodyResult() {}

  explicit CloneExperimentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["algorithms"] = boost::any(temp1);
    }
    if (base) {
      res["base"] = boost::any(*base);
    }
    if (buckets) {
      res["buckets"] = boost::any(*buckets);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (experimentId) {
      res["experimentId"] = boost::any(*experimentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offlineTime) {
      res["offlineTime"] = boost::any(*offlineTime);
    }
    if (onlineTime) {
      res["onlineTime"] = boost::any(*onlineTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithms") != m.end() && !m["algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["algorithms"].type()) {
        vector<CloneExperimentResponseBodyResultAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CloneExperimentResponseBodyResultAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<CloneExperimentResponseBodyResultAlgorithms>>(expect1);
      }
    }
    if (m.find("base") != m.end() && !m["base"].empty()) {
      base = make_shared<bool>(boost::any_cast<bool>(m["base"]));
    }
    if (m.find("buckets") != m.end() && !m["buckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["buckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["buckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("experimentId") != m.end() && !m["experimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["experimentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offlineTime") != m.end() && !m["offlineTime"].empty()) {
      offlineTime = make_shared<string>(boost::any_cast<string>(m["offlineTime"]));
    }
    if (m.find("onlineTime") != m.end() && !m["onlineTime"].empty()) {
      onlineTime = make_shared<string>(boost::any_cast<string>(m["onlineTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~CloneExperimentResponseBodyResult() = default;
};
class CloneExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CloneExperimentResponseBodyResult> result{};

  CloneExperimentResponseBody() {}

  explicit CloneExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CloneExperimentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CloneExperimentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CloneExperimentResponseBody() = default;
};
class CloneExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneExperimentResponseBody> body{};

  CloneExperimentResponse() {}

  explicit CloneExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CloneExperimentResponse() = default;
};
class CloneSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Sample> result{};

  CloneSampleResponseBody() {}

  explicit CloneSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        Sample model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<Sample>(model1);
      }
    }
  }


  virtual ~CloneSampleResponseBody() = default;
};
class CloneSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneSampleResponseBody> body{};

  CloneSampleResponse() {}

  explicit CloneSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneSampleResponseBody>(model1);
      }
    }
  }


  virtual ~CloneSampleResponse() = default;
};
class ColdStartRankRequest : public Darabonba::Model {
public:
  shared_ptr<string> features{};
  shared_ptr<string> imei{};
  shared_ptr<string> items{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> userId{};

  ColdStartRankRequest() {}

  explicit ColdStartRankRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (features) {
      res["features"] = boost::any(*features);
    }
    if (imei) {
      res["imei"] = boost::any(*imei);
    }
    if (items) {
      res["items"] = boost::any(*items);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("features") != m.end() && !m["features"].empty()) {
      features = make_shared<string>(boost::any_cast<string>(m["features"]));
    }
    if (m.find("imei") != m.end() && !m["imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["imei"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      items = make_shared<string>(boost::any_cast<string>(m["items"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ColdStartRankRequest() = default;
};
class ColdStartRankResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> traceInfo{};

  ColdStartRankResponseBodyResult() {}

  explicit ColdStartRankResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (traceInfo) {
      res["traceInfo"] = boost::any(*traceInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("traceInfo") != m.end() && !m["traceInfo"].empty()) {
      traceInfo = make_shared<string>(boost::any_cast<string>(m["traceInfo"]));
    }
  }


  virtual ~ColdStartRankResponseBodyResult() = default;
};
class ColdStartRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ColdStartRankResponseBodyResult>> result{};

  ColdStartRankResponseBody() {}

  explicit ColdStartRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ColdStartRankResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ColdStartRankResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ColdStartRankResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ColdStartRankResponseBody() = default;
};
class ColdStartRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ColdStartRankResponseBody> body{};

  ColdStartRankResponse() {}

  explicit ColdStartRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ColdStartRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ColdStartRankResponseBody>(model1);
      }
    }
  }


  virtual ~ColdStartRankResponse() = default;
};
class CreateCustomAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  CreateCustomAnalysisTaskRequest() {}

  explicit CreateCustomAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateCustomAnalysisTaskRequest() = default;
};
class CreateCustomAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateCustomAnalysisTaskResponseBody() {}

  explicit CreateCustomAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateCustomAnalysisTaskResponseBody() = default;
};
class CreateCustomAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCustomAnalysisTaskResponseBody> body{};

  CreateCustomAnalysisTaskResponse() {}

  explicit CreateCustomAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomAnalysisTaskResponse() = default;
};
class CreateCustomSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Sample> result{};

  CreateCustomSampleResponseBody() {}

  explicit CreateCustomSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        Sample model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<Sample>(model1);
      }
    }
  }


  virtual ~CreateCustomSampleResponseBody() = default;
};
class CreateCustomSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCustomSampleResponseBody> body{};

  CreateCustomSampleResponse() {}

  explicit CreateCustomSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomSampleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomSampleResponse() = default;
};
class CreateDataDiagnoseTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CreateDataDiagnoseTaskResponseBody() {}

  explicit CreateDataDiagnoseTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~CreateDataDiagnoseTaskResponseBody() = default;
};
class CreateDataDiagnoseTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataDiagnoseTaskResponseBody> body{};

  CreateDataDiagnoseTaskResponse() {}

  explicit CreateDataDiagnoseTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataDiagnoseTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataDiagnoseTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataDiagnoseTaskResponse() = default;
};
class CreateExtraDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ExtraDataSource> result{};

  CreateExtraDataSourceResponseBody() {}

  explicit CreateExtraDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExtraDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExtraDataSource>(model1);
      }
    }
  }


  virtual ~CreateExtraDataSourceResponseBody() = default;
};
class CreateExtraDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExtraDataSourceResponseBody> body{};

  CreateExtraDataSourceResponse() {}

  explicit CreateExtraDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExtraDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExtraDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExtraDataSourceResponse() = default;
};
class CreateFilteringAlgorithmRequest : public Darabonba::Model {
public:
  shared_ptr<string> dryRun{};

  CreateFilteringAlgorithmRequest() {}

  explicit CreateFilteringAlgorithmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["dryRun"]));
    }
  }


  virtual ~CreateFilteringAlgorithmRequest() = default;
};
class CreateFilteringAlgorithmResponseBodyResultMetaThreshold : public Darabonba::Model {
public:
  shared_ptr<long> indexLossThreshold{};
  shared_ptr<long> indexSizeThreshold{};
  shared_ptr<long> sourceDataRecordThreshold{};
  shared_ptr<long> sourceDataSizeThreshold{};

  CreateFilteringAlgorithmResponseBodyResultMetaThreshold() {}

  explicit CreateFilteringAlgorithmResponseBodyResultMetaThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexLossThreshold) {
      res["indexLossThreshold"] = boost::any(*indexLossThreshold);
    }
    if (indexSizeThreshold) {
      res["indexSizeThreshold"] = boost::any(*indexSizeThreshold);
    }
    if (sourceDataRecordThreshold) {
      res["sourceDataRecordThreshold"] = boost::any(*sourceDataRecordThreshold);
    }
    if (sourceDataSizeThreshold) {
      res["sourceDataSizeThreshold"] = boost::any(*sourceDataSizeThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexLossThreshold") != m.end() && !m["indexLossThreshold"].empty()) {
      indexLossThreshold = make_shared<long>(boost::any_cast<long>(m["indexLossThreshold"]));
    }
    if (m.find("indexSizeThreshold") != m.end() && !m["indexSizeThreshold"].empty()) {
      indexSizeThreshold = make_shared<long>(boost::any_cast<long>(m["indexSizeThreshold"]));
    }
    if (m.find("sourceDataRecordThreshold") != m.end() && !m["sourceDataRecordThreshold"].empty()) {
      sourceDataRecordThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataRecordThreshold"]));
    }
    if (m.find("sourceDataSizeThreshold") != m.end() && !m["sourceDataSizeThreshold"].empty()) {
      sourceDataSizeThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataSizeThreshold"]));
    }
  }


  virtual ~CreateFilteringAlgorithmResponseBodyResultMetaThreshold() = default;
};
class CreateFilteringAlgorithmResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> category{};
  shared_ptr<string> cron{};
  shared_ptr<bool> cronEnabled{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> extInfo{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> projectName{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};
  shared_ptr<CreateFilteringAlgorithmResponseBodyResultMetaThreshold> threshold{};
  shared_ptr<string> type{};

  CreateFilteringAlgorithmResponseBodyResultMeta() {}

  explicit CreateFilteringAlgorithmResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["algorithmName"] = boost::any(*algorithmName);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (cronEnabled) {
      res["cronEnabled"] = boost::any(*cronEnabled);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (threshold) {
      res["threshold"] = threshold ? boost::any(threshold->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmName") != m.end() && !m["algorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["algorithmName"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("cronEnabled") != m.end() && !m["cronEnabled"].empty()) {
      cronEnabled = make_shared<bool>(boost::any_cast<bool>(m["cronEnabled"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      if (typeid(map<string, boost::any>) == m["threshold"].type()) {
        CreateFilteringAlgorithmResponseBodyResultMetaThreshold model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["threshold"]));
        threshold = make_shared<CreateFilteringAlgorithmResponseBodyResultMetaThreshold>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateFilteringAlgorithmResponseBodyResultMeta() = default;
};
class CreateFilteringAlgorithmResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<CreateFilteringAlgorithmResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  CreateFilteringAlgorithmResponseBodyResult() {}

  explicit CreateFilteringAlgorithmResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["algorithmId"] = boost::any(*algorithmId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmId") != m.end() && !m["algorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["algorithmId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        CreateFilteringAlgorithmResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<CreateFilteringAlgorithmResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~CreateFilteringAlgorithmResponseBodyResult() = default;
};
class CreateFilteringAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateFilteringAlgorithmResponseBodyResult> result{};

  CreateFilteringAlgorithmResponseBody() {}

  explicit CreateFilteringAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateFilteringAlgorithmResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateFilteringAlgorithmResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateFilteringAlgorithmResponseBody() = default;
};
class CreateFilteringAlgorithmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFilteringAlgorithmResponseBody> body{};

  CreateFilteringAlgorithmResponse() {}

  explicit CreateFilteringAlgorithmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFilteringAlgorithmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFilteringAlgorithmResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFilteringAlgorithmResponse() = default;
};
class CreateFlowControlTaskRequest : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};

  CreateFlowControlTaskRequest() {}

  explicit CreateFlowControlTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateFlowControlTaskRequest() = default;
};
class CreateFlowControlTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  CreateFlowControlTaskResponseBodyResult() {}

  explicit CreateFlowControlTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
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
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateFlowControlTaskResponseBodyResult() = default;
};
class CreateFlowControlTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateFlowControlTaskResponseBodyResult> result{};

  CreateFlowControlTaskResponseBody() {}

  explicit CreateFlowControlTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateFlowControlTaskResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateFlowControlTaskResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateFlowControlTaskResponseBody() = default;
};
class CreateFlowControlTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFlowControlTaskResponseBody> body{};

  CreateFlowControlTaskResponse() {}

  explicit CreateFlowControlTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFlowControlTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowControlTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowControlTaskResponse() = default;
};
class CreateInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  CreateInstanceResponseBodyResult() {}

  explicit CreateInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~CreateInstanceResponseBodyResult() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateInstanceResponseBodyResult> result{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateInstanceResponseBodyResult>(model1);
      }
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
class CreateRankingModelRequest : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};

  CreateRankingModelRequest() {}

  explicit CreateRankingModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateRankingModelRequest() = default;
};
class CreateRankingModelResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> rankingModelId{};

  CreateRankingModelResponseBodyResult() {}

  explicit CreateRankingModelResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (rankingModelId) {
      res["rankingModelId"] = boost::any(*rankingModelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("rankingModelId") != m.end() && !m["rankingModelId"].empty()) {
      rankingModelId = make_shared<string>(boost::any_cast<string>(m["rankingModelId"]));
    }
  }


  virtual ~CreateRankingModelResponseBodyResult() = default;
};
class CreateRankingModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateRankingModelResponseBodyResult> result{};

  CreateRankingModelResponseBody() {}

  explicit CreateRankingModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateRankingModelResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateRankingModelResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRankingModelResponseBody() = default;
};
class CreateRankingModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRankingModelResponseBody> body{};

  CreateRankingModelResponse() {}

  explicit CreateRankingModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRankingModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRankingModelResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRankingModelResponse() = default;
};
class CreateRankingModelTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingModelTemplate> result{};

  CreateRankingModelTemplateResponseBody() {}

  explicit CreateRankingModelTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingModelTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingModelTemplate>(model1);
      }
    }
  }


  virtual ~CreateRankingModelTemplateResponseBody() = default;
};
class CreateRankingModelTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRankingModelTemplateResponseBody> body{};

  CreateRankingModelTemplateResponse() {}

  explicit CreateRankingModelTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRankingModelTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRankingModelTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRankingModelTemplateResponse() = default;
};
class CreateRankingSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingSystem> result{};

  CreateRankingSystemResponseBody() {}

  explicit CreateRankingSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingSystem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingSystem>(model1);
      }
    }
  }


  virtual ~CreateRankingSystemResponseBody() = default;
};
class CreateRankingSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRankingSystemResponseBody> body{};

  CreateRankingSystemResponse() {}

  explicit CreateRankingSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRankingSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRankingSystemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRankingSystemResponse() = default;
};
class CreateRuleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> status{};

  CreateRuleResponseBodyResult() {}

  explicit CreateRuleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (ruleId) {
      res["ruleId"] = boost::any(*ruleId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("ruleId") != m.end() && !m["ruleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["ruleId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~CreateRuleResponseBodyResult() = default;
};
class CreateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateRuleResponseBodyResult> result{};

  CreateRuleResponseBody() {}

  explicit CreateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateRuleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateRuleResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateRuleResponseBody() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRuleResponseBody> body{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleResponse() = default;
};
class CreateSampleFormatConfigRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  CreateSampleFormatConfigRequest() {}

  explicit CreateSampleFormatConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSampleFormatConfigRequest() = default;
};
class CreateSampleFormatConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateSampleFormatConfigResponseBody() {}

  explicit CreateSampleFormatConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateSampleFormatConfigResponseBody() = default;
};
class CreateSampleFormatConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSampleFormatConfigResponseBody> body{};

  CreateSampleFormatConfigResponse() {}

  explicit CreateSampleFormatConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSampleFormatConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSampleFormatConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSampleFormatConfigResponse() = default;
};
class CreateSceneRequest : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};

  CreateSceneRequest() {}

  explicit CreateSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateSceneRequest() = default;
};
class CreateSceneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  CreateSceneResponseBodyResult() {}

  explicit CreateSceneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~CreateSceneResponseBodyResult() = default;
};
class CreateSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateSceneResponseBodyResult> result{};

  CreateSceneResponseBody() {}

  explicit CreateSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateSceneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateSceneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateSceneResponseBody() = default;
};
class CreateSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSceneResponseBody> body{};

  CreateSceneResponse() {}

  explicit CreateSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSceneResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSceneResponse() = default;
};
class CreateUmengTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};

  CreateUmengTokenRequest() {}

  explicit CreateUmengTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
  }


  virtual ~CreateUmengTokenRequest() = default;
};
class CreateUmengTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CreateUmengTokenResponseBody() {}

  explicit CreateUmengTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~CreateUmengTokenResponseBody() = default;
};
class CreateUmengTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUmengTokenResponseBody> body{};

  CreateUmengTokenResponse() {}

  explicit CreateUmengTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUmengTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUmengTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUmengTokenResponse() = default;
};
class DecribeRankingModelResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> rankingModelId{};

  DecribeRankingModelResponseBodyResult() {}

  explicit DecribeRankingModelResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (rankingModelId) {
      res["rankingModelId"] = boost::any(*rankingModelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("rankingModelId") != m.end() && !m["rankingModelId"].empty()) {
      rankingModelId = make_shared<string>(boost::any_cast<string>(m["rankingModelId"]));
    }
  }


  virtual ~DecribeRankingModelResponseBodyResult() = default;
};
class DecribeRankingModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DecribeRankingModelResponseBodyResult> result{};

  DecribeRankingModelResponseBody() {}

  explicit DecribeRankingModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DecribeRankingModelResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DecribeRankingModelResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DecribeRankingModelResponseBody() = default;
};
class DecribeRankingModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DecribeRankingModelResponseBody> body{};

  DecribeRankingModelResponse() {}

  explicit DecribeRankingModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DecribeRankingModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DecribeRankingModelResponseBody>(model1);
      }
    }
  }


  virtual ~DecribeRankingModelResponse() = default;
};
class DeleteDataSetResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> state{};
  shared_ptr<string> versionId{};

  DeleteDataSetResponseBodyResult() {}

  explicit DeleteDataSetResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~DeleteDataSetResponseBodyResult() = default;
};
class DeleteDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteDataSetResponseBodyResult> result{};

  DeleteDataSetResponseBody() {}

  explicit DeleteDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DeleteDataSetResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteDataSetResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteDataSetResponseBody() = default;
};
class DeleteDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataSetResponseBody> body{};

  DeleteDataSetResponse() {}

  explicit DeleteDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSetResponse() = default;
};
class DeleteExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteExperimentResponseBody() {}

  explicit DeleteExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DeleteExperimentResponseBody() = default;
};
class DeleteExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentResponseBody> body{};

  DeleteExperimentResponse() {}

  explicit DeleteExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentResponse() = default;
};
class DeleteExtraDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ExtraDataSource> result{};

  DeleteExtraDataSourceResponseBody() {}

  explicit DeleteExtraDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExtraDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExtraDataSource>(model1);
      }
    }
  }


  virtual ~DeleteExtraDataSourceResponseBody() = default;
};
class DeleteExtraDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExtraDataSourceResponseBody> body{};

  DeleteExtraDataSourceResponse() {}

  explicit DeleteExtraDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExtraDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExtraDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExtraDataSourceResponse() = default;
};
class DeleteFilteringAlgorithmResponseBodyResultMetaExtInfo : public Darabonba::Model {
public:
  shared_ptr<string> itemSeparator{};
  shared_ptr<string> kvSeparator{};

  DeleteFilteringAlgorithmResponseBodyResultMetaExtInfo() {}

  explicit DeleteFilteringAlgorithmResponseBodyResultMetaExtInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemSeparator) {
      res["itemSeparator"] = boost::any(*itemSeparator);
    }
    if (kvSeparator) {
      res["kvSeparator"] = boost::any(*kvSeparator);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("itemSeparator") != m.end() && !m["itemSeparator"].empty()) {
      itemSeparator = make_shared<string>(boost::any_cast<string>(m["itemSeparator"]));
    }
    if (m.find("kvSeparator") != m.end() && !m["kvSeparator"].empty()) {
      kvSeparator = make_shared<string>(boost::any_cast<string>(m["kvSeparator"]));
    }
  }


  virtual ~DeleteFilteringAlgorithmResponseBodyResultMetaExtInfo() = default;
};
class DeleteFilteringAlgorithmResponseBodyResultMetaThreshold : public Darabonba::Model {
public:
  shared_ptr<long> indexLossThreshold{};
  shared_ptr<long> indexSizeThreshold{};
  shared_ptr<long> sourceDataRecordThreshold{};
  shared_ptr<long> sourceDataSizeThreshold{};

  DeleteFilteringAlgorithmResponseBodyResultMetaThreshold() {}

  explicit DeleteFilteringAlgorithmResponseBodyResultMetaThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexLossThreshold) {
      res["indexLossThreshold"] = boost::any(*indexLossThreshold);
    }
    if (indexSizeThreshold) {
      res["indexSizeThreshold"] = boost::any(*indexSizeThreshold);
    }
    if (sourceDataRecordThreshold) {
      res["sourceDataRecordThreshold"] = boost::any(*sourceDataRecordThreshold);
    }
    if (sourceDataSizeThreshold) {
      res["sourceDataSizeThreshold"] = boost::any(*sourceDataSizeThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexLossThreshold") != m.end() && !m["indexLossThreshold"].empty()) {
      indexLossThreshold = make_shared<long>(boost::any_cast<long>(m["indexLossThreshold"]));
    }
    if (m.find("indexSizeThreshold") != m.end() && !m["indexSizeThreshold"].empty()) {
      indexSizeThreshold = make_shared<long>(boost::any_cast<long>(m["indexSizeThreshold"]));
    }
    if (m.find("sourceDataRecordThreshold") != m.end() && !m["sourceDataRecordThreshold"].empty()) {
      sourceDataRecordThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataRecordThreshold"]));
    }
    if (m.find("sourceDataSizeThreshold") != m.end() && !m["sourceDataSizeThreshold"].empty()) {
      sourceDataSizeThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataSizeThreshold"]));
    }
  }


  virtual ~DeleteFilteringAlgorithmResponseBodyResultMetaThreshold() = default;
};
class DeleteFilteringAlgorithmResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> category{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> cron{};
  shared_ptr<bool> cronEnabled{};
  shared_ptr<string> description{};
  shared_ptr<DeleteFilteringAlgorithmResponseBodyResultMetaExtInfo> extInfo{};
  shared_ptr<string> metaType{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> taskId{};
  shared_ptr<DeleteFilteringAlgorithmResponseBodyResultMetaThreshold> threshold{};
  shared_ptr<string> type{};

  DeleteFilteringAlgorithmResponseBodyResultMeta() {}

  explicit DeleteFilteringAlgorithmResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["algorithmName"] = boost::any(*algorithmName);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (cronEnabled) {
      res["cronEnabled"] = boost::any(*cronEnabled);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extInfo) {
      res["extInfo"] = extInfo ? boost::any(extInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (threshold) {
      res["threshold"] = threshold ? boost::any(threshold->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmName") != m.end() && !m["algorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["algorithmName"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("cronEnabled") != m.end() && !m["cronEnabled"].empty()) {
      cronEnabled = make_shared<bool>(boost::any_cast<bool>(m["cronEnabled"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["extInfo"].type()) {
        DeleteFilteringAlgorithmResponseBodyResultMetaExtInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extInfo"]));
        extInfo = make_shared<DeleteFilteringAlgorithmResponseBodyResultMetaExtInfo>(model1);
      }
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      if (typeid(map<string, boost::any>) == m["threshold"].type()) {
        DeleteFilteringAlgorithmResponseBodyResultMetaThreshold model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["threshold"]));
        threshold = make_shared<DeleteFilteringAlgorithmResponseBodyResultMetaThreshold>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DeleteFilteringAlgorithmResponseBodyResultMeta() = default;
};
class DeleteFilteringAlgorithmResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<DeleteFilteringAlgorithmResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  DeleteFilteringAlgorithmResponseBodyResult() {}

  explicit DeleteFilteringAlgorithmResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["algorithmId"] = boost::any(*algorithmId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmId") != m.end() && !m["algorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["algorithmId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        DeleteFilteringAlgorithmResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<DeleteFilteringAlgorithmResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DeleteFilteringAlgorithmResponseBodyResult() = default;
};
class DeleteFilteringAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteFilteringAlgorithmResponseBodyResult> result{};

  DeleteFilteringAlgorithmResponseBody() {}

  explicit DeleteFilteringAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DeleteFilteringAlgorithmResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteFilteringAlgorithmResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteFilteringAlgorithmResponseBody() = default;
};
class DeleteFilteringAlgorithmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFilteringAlgorithmResponseBody> body{};

  DeleteFilteringAlgorithmResponse() {}

  explicit DeleteFilteringAlgorithmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFilteringAlgorithmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFilteringAlgorithmResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFilteringAlgorithmResponse() = default;
};
class DeleteFlowControlTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteFlowControlTaskResponseBody() {}

  explicit DeleteFlowControlTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DeleteFlowControlTaskResponseBody() = default;
};
class DeleteFlowControlTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFlowControlTaskResponseBody> body{};

  DeleteFlowControlTaskResponse() {}

  explicit DeleteFlowControlTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFlowControlTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowControlTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowControlTaskResponse() = default;
};
class DeleteRankingModelResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> rankingModelId{};

  DeleteRankingModelResponseBodyResult() {}

  explicit DeleteRankingModelResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (rankingModelId) {
      res["rankingModelId"] = boost::any(*rankingModelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("rankingModelId") != m.end() && !m["rankingModelId"].empty()) {
      rankingModelId = make_shared<string>(boost::any_cast<string>(m["rankingModelId"]));
    }
  }


  virtual ~DeleteRankingModelResponseBodyResult() = default;
};
class DeleteRankingModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteRankingModelResponseBodyResult> result{};

  DeleteRankingModelResponseBody() {}

  explicit DeleteRankingModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DeleteRankingModelResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteRankingModelResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteRankingModelResponseBody() = default;
};
class DeleteRankingModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRankingModelResponseBody> body{};

  DeleteRankingModelResponse() {}

  explicit DeleteRankingModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRankingModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRankingModelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRankingModelResponse() = default;
};
class DeleteRankingModelTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingModelTemplate> result{};

  DeleteRankingModelTemplateResponseBody() {}

  explicit DeleteRankingModelTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingModelTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingModelTemplate>(model1);
      }
    }
  }


  virtual ~DeleteRankingModelTemplateResponseBody() = default;
};
class DeleteRankingModelTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRankingModelTemplateResponseBody> body{};

  DeleteRankingModelTemplateResponse() {}

  explicit DeleteRankingModelTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRankingModelTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRankingModelTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRankingModelTemplateResponse() = default;
};
class DeleteRankingModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRankingModelVersionResponseBody() {}

  explicit DeleteRankingModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRankingModelVersionResponseBody() = default;
};
class DeleteRankingModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRankingModelVersionResponseBody> body{};

  DeleteRankingModelVersionResponse() {}

  explicit DeleteRankingModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRankingModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRankingModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRankingModelVersionResponse() = default;
};
class DeleteRankingSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingSystem> result{};

  DeleteRankingSystemResponseBody() {}

  explicit DeleteRankingSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingSystem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingSystem>(model1);
      }
    }
  }


  virtual ~DeleteRankingSystemResponseBody() = default;
};
class DeleteRankingSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRankingSystemResponseBody> body{};

  DeleteRankingSystemResponse() {}

  explicit DeleteRankingSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRankingSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRankingSystemResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRankingSystemResponse() = default;
};
class DeleteSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Sample> result{};

  DeleteSampleResponseBody() {}

  explicit DeleteSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        Sample model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<Sample>(model1);
      }
    }
  }


  virtual ~DeleteSampleResponseBody() = default;
};
class DeleteSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSampleResponseBody> body{};

  DeleteSampleResponse() {}

  explicit DeleteSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSampleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSampleResponse() = default;
};
class DeleteSceneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  DeleteSceneResponseBodyResult() {}

  explicit DeleteSceneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
  }


  virtual ~DeleteSceneResponseBodyResult() = default;
};
class DeleteSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteSceneResponseBodyResult> result{};

  DeleteSceneResponseBody() {}

  explicit DeleteSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DeleteSceneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteSceneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteSceneResponseBody() = default;
};
class DeleteSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSceneResponseBody> body{};

  DeleteSceneResponse() {}

  explicit DeleteSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSceneResponse() = default;
};
class DeployRankingSystemRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  DeployRankingSystemRequest() {}

  explicit DeployRankingSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployRankingSystemRequest() = default;
};
class DeployRankingSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeployRankingSystemResponseBody() {}

  explicit DeployRankingSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeployRankingSystemResponseBody() = default;
};
class DeployRankingSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployRankingSystemResponseBody> body{};

  DeployRankingSystemResponse() {}

  explicit DeployRankingSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployRankingSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployRankingSystemResponseBody>(model1);
      }
    }
  }


  virtual ~DeployRankingSystemResponse() = default;
};
class DescribeBaseExperimentResponseBodyResultAlgorithmsConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  DescribeBaseExperimentResponseBodyResultAlgorithmsConfig() {}

  explicit DescribeBaseExperimentResponseBodyResultAlgorithmsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~DescribeBaseExperimentResponseBodyResultAlgorithmsConfig() = default;
};
class DescribeBaseExperimentResponseBodyResultAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<DescribeBaseExperimentResponseBodyResultAlgorithmsConfig>> config{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<bool> hasConfig{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeBaseExperimentResponseBodyResultAlgorithms() {}

  explicit DescribeBaseExperimentResponseBodyResultAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (hasConfig) {
      res["hasConfig"] = boost::any(*hasConfig);
    }
    if (key) {
      res["key"] = boost::any(*key);
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
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<DescribeBaseExperimentResponseBodyResultAlgorithmsConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBaseExperimentResponseBodyResultAlgorithmsConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<DescribeBaseExperimentResponseBodyResultAlgorithmsConfig>>(expect1);
      }
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("hasConfig") != m.end() && !m["hasConfig"].empty()) {
      hasConfig = make_shared<bool>(boost::any_cast<bool>(m["hasConfig"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeBaseExperimentResponseBodyResultAlgorithms() = default;
};
class DescribeBaseExperimentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBaseExperimentResponseBodyResultAlgorithms>> algorithms{};
  shared_ptr<bool> base{};
  shared_ptr<vector<string>> buckets{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineTime{};
  shared_ptr<string> onlineTime{};
  shared_ptr<string> status{};

  DescribeBaseExperimentResponseBodyResult() {}

  explicit DescribeBaseExperimentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["algorithms"] = boost::any(temp1);
    }
    if (base) {
      res["base"] = boost::any(*base);
    }
    if (buckets) {
      res["buckets"] = boost::any(*buckets);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (experimentId) {
      res["experimentId"] = boost::any(*experimentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offlineTime) {
      res["offlineTime"] = boost::any(*offlineTime);
    }
    if (onlineTime) {
      res["onlineTime"] = boost::any(*onlineTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithms") != m.end() && !m["algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["algorithms"].type()) {
        vector<DescribeBaseExperimentResponseBodyResultAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBaseExperimentResponseBodyResultAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<DescribeBaseExperimentResponseBodyResultAlgorithms>>(expect1);
      }
    }
    if (m.find("base") != m.end() && !m["base"].empty()) {
      base = make_shared<bool>(boost::any_cast<bool>(m["base"]));
    }
    if (m.find("buckets") != m.end() && !m["buckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["buckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["buckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("experimentId") != m.end() && !m["experimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["experimentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offlineTime") != m.end() && !m["offlineTime"].empty()) {
      offlineTime = make_shared<string>(boost::any_cast<string>(m["offlineTime"]));
    }
    if (m.find("onlineTime") != m.end() && !m["onlineTime"].empty()) {
      onlineTime = make_shared<string>(boost::any_cast<string>(m["onlineTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeBaseExperimentResponseBodyResult() = default;
};
class DescribeBaseExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBaseExperimentResponseBodyResult> result{};

  DescribeBaseExperimentResponseBody() {}

  explicit DescribeBaseExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeBaseExperimentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeBaseExperimentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeBaseExperimentResponseBody() = default;
};
class DescribeBaseExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBaseExperimentResponseBody> body{};

  DescribeBaseExperimentResponse() {}

  explicit DescribeBaseExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBaseExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBaseExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBaseExperimentResponse() = default;
};
class DescribeCustomAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  DescribeCustomAnalysisTaskRequest() {}

  explicit DescribeCustomAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeCustomAnalysisTaskRequest() = default;
};
class DescribeCustomAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DescribeCustomAnalysisTaskResponseBody() {}

  explicit DescribeCustomAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeCustomAnalysisTaskResponseBody() = default;
};
class DescribeCustomAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCustomAnalysisTaskResponseBody> body{};

  DescribeCustomAnalysisTaskResponse() {}

  explicit DescribeCustomAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCustomAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCustomAnalysisTaskResponse() = default;
};
class DescribeDataSetMessageResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> errorLevel{};
  shared_ptr<string> errorType{};
  shared_ptr<string> message{};
  shared_ptr<string> timestamp{};

  DescribeDataSetMessageResponseBodyResult() {}

  explicit DescribeDataSetMessageResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorLevel) {
      res["errorLevel"] = boost::any(*errorLevel);
    }
    if (errorType) {
      res["errorType"] = boost::any(*errorType);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorLevel") != m.end() && !m["errorLevel"].empty()) {
      errorLevel = make_shared<string>(boost::any_cast<string>(m["errorLevel"]));
    }
    if (m.find("errorType") != m.end() && !m["errorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["errorType"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["timestamp"]));
    }
  }


  virtual ~DescribeDataSetMessageResponseBodyResult() = default;
};
class DescribeDataSetMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDataSetMessageResponseBodyResult>> result{};

  DescribeDataSetMessageResponseBody() {}

  explicit DescribeDataSetMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeDataSetMessageResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataSetMessageResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeDataSetMessageResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeDataSetMessageResponseBody() = default;
};
class DescribeDataSetMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataSetMessageResponseBody> body{};

  DescribeDataSetMessageResponse() {}

  explicit DescribeDataSetMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataSetMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataSetMessageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataSetMessageResponse() = default;
};
class DescribeDefaultAlgorithmsResponseBodyResultConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  DescribeDefaultAlgorithmsResponseBodyResultConfig() {}

  explicit DescribeDefaultAlgorithmsResponseBodyResultConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~DescribeDefaultAlgorithmsResponseBodyResultConfig() = default;
};
class DescribeDefaultAlgorithmsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<DescribeDefaultAlgorithmsResponseBodyResultConfig>> config{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<bool> hasConfig{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeDefaultAlgorithmsResponseBodyResult() {}

  explicit DescribeDefaultAlgorithmsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (hasConfig) {
      res["hasConfig"] = boost::any(*hasConfig);
    }
    if (key) {
      res["key"] = boost::any(*key);
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
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<DescribeDefaultAlgorithmsResponseBodyResultConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDefaultAlgorithmsResponseBodyResultConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<DescribeDefaultAlgorithmsResponseBodyResultConfig>>(expect1);
      }
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("hasConfig") != m.end() && !m["hasConfig"].empty()) {
      hasConfig = make_shared<bool>(boost::any_cast<bool>(m["hasConfig"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeDefaultAlgorithmsResponseBodyResult() = default;
};
class DescribeDefaultAlgorithmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDefaultAlgorithmsResponseBodyResult>> result{};

  DescribeDefaultAlgorithmsResponseBody() {}

  explicit DescribeDefaultAlgorithmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeDefaultAlgorithmsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDefaultAlgorithmsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeDefaultAlgorithmsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeDefaultAlgorithmsResponseBody() = default;
};
class DescribeDefaultAlgorithmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefaultAlgorithmsResponseBody> body{};

  DescribeDefaultAlgorithmsResponse() {}

  explicit DescribeDefaultAlgorithmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefaultAlgorithmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefaultAlgorithmsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefaultAlgorithmsResponse() = default;
};
class DescribeExperimentResponseBodyResultAlgorithmsConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  DescribeExperimentResponseBodyResultAlgorithmsConfig() {}

  explicit DescribeExperimentResponseBodyResultAlgorithmsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~DescribeExperimentResponseBodyResultAlgorithmsConfig() = default;
};
class DescribeExperimentResponseBodyResultAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<DescribeExperimentResponseBodyResultAlgorithmsConfig>> config{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<bool> hasConfig{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeExperimentResponseBodyResultAlgorithms() {}

  explicit DescribeExperimentResponseBodyResultAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (hasConfig) {
      res["hasConfig"] = boost::any(*hasConfig);
    }
    if (key) {
      res["key"] = boost::any(*key);
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
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<DescribeExperimentResponseBodyResultAlgorithmsConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExperimentResponseBodyResultAlgorithmsConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<DescribeExperimentResponseBodyResultAlgorithmsConfig>>(expect1);
      }
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("hasConfig") != m.end() && !m["hasConfig"].empty()) {
      hasConfig = make_shared<bool>(boost::any_cast<bool>(m["hasConfig"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeExperimentResponseBodyResultAlgorithms() = default;
};
class DescribeExperimentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeExperimentResponseBodyResultAlgorithms>> algorithms{};
  shared_ptr<bool> base{};
  shared_ptr<vector<string>> buckets{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineTime{};
  shared_ptr<string> onlineTime{};
  shared_ptr<string> status{};

  DescribeExperimentResponseBodyResult() {}

  explicit DescribeExperimentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["algorithms"] = boost::any(temp1);
    }
    if (base) {
      res["base"] = boost::any(*base);
    }
    if (buckets) {
      res["buckets"] = boost::any(*buckets);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (experimentId) {
      res["experimentId"] = boost::any(*experimentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offlineTime) {
      res["offlineTime"] = boost::any(*offlineTime);
    }
    if (onlineTime) {
      res["onlineTime"] = boost::any(*onlineTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithms") != m.end() && !m["algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["algorithms"].type()) {
        vector<DescribeExperimentResponseBodyResultAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExperimentResponseBodyResultAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<DescribeExperimentResponseBodyResultAlgorithms>>(expect1);
      }
    }
    if (m.find("base") != m.end() && !m["base"].empty()) {
      base = make_shared<bool>(boost::any_cast<bool>(m["base"]));
    }
    if (m.find("buckets") != m.end() && !m["buckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["buckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["buckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("experimentId") != m.end() && !m["experimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["experimentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offlineTime") != m.end() && !m["offlineTime"].empty()) {
      offlineTime = make_shared<string>(boost::any_cast<string>(m["offlineTime"]));
    }
    if (m.find("onlineTime") != m.end() && !m["onlineTime"].empty()) {
      onlineTime = make_shared<string>(boost::any_cast<string>(m["onlineTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeExperimentResponseBodyResult() = default;
};
class DescribeExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeExperimentResponseBodyResult> result{};

  DescribeExperimentResponseBody() {}

  explicit DescribeExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeExperimentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeExperimentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeExperimentResponseBody() = default;
};
class DescribeExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExperimentResponseBody> body{};

  DescribeExperimentResponse() {}

  explicit DescribeExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExperimentResponse() = default;
};
class DescribeExperimentEnvResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> bucketCount{};
  shared_ptr<string> divideType{};

  DescribeExperimentEnvResponseBodyResult() {}

  explicit DescribeExperimentEnvResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketCount) {
      res["bucketCount"] = boost::any(*bucketCount);
    }
    if (divideType) {
      res["divideType"] = boost::any(*divideType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketCount") != m.end() && !m["bucketCount"].empty()) {
      bucketCount = make_shared<long>(boost::any_cast<long>(m["bucketCount"]));
    }
    if (m.find("divideType") != m.end() && !m["divideType"].empty()) {
      divideType = make_shared<string>(boost::any_cast<string>(m["divideType"]));
    }
  }


  virtual ~DescribeExperimentEnvResponseBodyResult() = default;
};
class DescribeExperimentEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeExperimentEnvResponseBodyResult> result{};

  DescribeExperimentEnvResponseBody() {}

  explicit DescribeExperimentEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeExperimentEnvResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeExperimentEnvResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeExperimentEnvResponseBody() = default;
};
class DescribeExperimentEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExperimentEnvResponseBody> body{};

  DescribeExperimentEnvResponse() {}

  explicit DescribeExperimentEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExperimentEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExperimentEnvResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExperimentEnvResponse() = default;
};
class DescribeExperimentEnvProgressResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> progress{};
  shared_ptr<string> status{};

  DescribeExperimentEnvProgressResponseBodyResult() {}

  explicit DescribeExperimentEnvProgressResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["progress"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeExperimentEnvProgressResponseBodyResult() = default;
};
class DescribeExperimentEnvProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeExperimentEnvProgressResponseBodyResult> result{};

  DescribeExperimentEnvProgressResponseBody() {}

  explicit DescribeExperimentEnvProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeExperimentEnvProgressResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeExperimentEnvProgressResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeExperimentEnvProgressResponseBody() = default;
};
class DescribeExperimentEnvProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExperimentEnvProgressResponseBody> body{};

  DescribeExperimentEnvProgressResponse() {}

  explicit DescribeExperimentEnvProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExperimentEnvProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExperimentEnvProgressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExperimentEnvProgressResponse() = default;
};
class DescribeFilteringAlgorithmResponseBodyResultMetaExtInfo : public Darabonba::Model {
public:
  shared_ptr<string> itemSeparator{};
  shared_ptr<string> kvSeparator{};

  DescribeFilteringAlgorithmResponseBodyResultMetaExtInfo() {}

  explicit DescribeFilteringAlgorithmResponseBodyResultMetaExtInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemSeparator) {
      res["itemSeparator"] = boost::any(*itemSeparator);
    }
    if (kvSeparator) {
      res["kvSeparator"] = boost::any(*kvSeparator);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("itemSeparator") != m.end() && !m["itemSeparator"].empty()) {
      itemSeparator = make_shared<string>(boost::any_cast<string>(m["itemSeparator"]));
    }
    if (m.find("kvSeparator") != m.end() && !m["kvSeparator"].empty()) {
      kvSeparator = make_shared<string>(boost::any_cast<string>(m["kvSeparator"]));
    }
  }


  virtual ~DescribeFilteringAlgorithmResponseBodyResultMetaExtInfo() = default;
};
class DescribeFilteringAlgorithmResponseBodyResultMetaThreshold : public Darabonba::Model {
public:
  shared_ptr<long> indexLossThreshold{};
  shared_ptr<long> indexSizeThreshold{};
  shared_ptr<long> sourceDataRecordThreshold{};
  shared_ptr<long> sourceDataSizeThreshold{};

  DescribeFilteringAlgorithmResponseBodyResultMetaThreshold() {}

  explicit DescribeFilteringAlgorithmResponseBodyResultMetaThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexLossThreshold) {
      res["indexLossThreshold"] = boost::any(*indexLossThreshold);
    }
    if (indexSizeThreshold) {
      res["indexSizeThreshold"] = boost::any(*indexSizeThreshold);
    }
    if (sourceDataRecordThreshold) {
      res["sourceDataRecordThreshold"] = boost::any(*sourceDataRecordThreshold);
    }
    if (sourceDataSizeThreshold) {
      res["sourceDataSizeThreshold"] = boost::any(*sourceDataSizeThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexLossThreshold") != m.end() && !m["indexLossThreshold"].empty()) {
      indexLossThreshold = make_shared<long>(boost::any_cast<long>(m["indexLossThreshold"]));
    }
    if (m.find("indexSizeThreshold") != m.end() && !m["indexSizeThreshold"].empty()) {
      indexSizeThreshold = make_shared<long>(boost::any_cast<long>(m["indexSizeThreshold"]));
    }
    if (m.find("sourceDataRecordThreshold") != m.end() && !m["sourceDataRecordThreshold"].empty()) {
      sourceDataRecordThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataRecordThreshold"]));
    }
    if (m.find("sourceDataSizeThreshold") != m.end() && !m["sourceDataSizeThreshold"].empty()) {
      sourceDataSizeThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataSizeThreshold"]));
    }
  }


  virtual ~DescribeFilteringAlgorithmResponseBodyResultMetaThreshold() = default;
};
class DescribeFilteringAlgorithmResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> category{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> cron{};
  shared_ptr<bool> cronEnabled{};
  shared_ptr<string> description{};
  shared_ptr<DescribeFilteringAlgorithmResponseBodyResultMetaExtInfo> extInfo{};
  shared_ptr<string> metaType{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> taskId{};
  shared_ptr<DescribeFilteringAlgorithmResponseBodyResultMetaThreshold> threshold{};
  shared_ptr<string> type{};

  DescribeFilteringAlgorithmResponseBodyResultMeta() {}

  explicit DescribeFilteringAlgorithmResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["algorithmName"] = boost::any(*algorithmName);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (cronEnabled) {
      res["cronEnabled"] = boost::any(*cronEnabled);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extInfo) {
      res["extInfo"] = extInfo ? boost::any(extInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (threshold) {
      res["threshold"] = threshold ? boost::any(threshold->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmName") != m.end() && !m["algorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["algorithmName"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("cronEnabled") != m.end() && !m["cronEnabled"].empty()) {
      cronEnabled = make_shared<bool>(boost::any_cast<bool>(m["cronEnabled"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["extInfo"].type()) {
        DescribeFilteringAlgorithmResponseBodyResultMetaExtInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extInfo"]));
        extInfo = make_shared<DescribeFilteringAlgorithmResponseBodyResultMetaExtInfo>(model1);
      }
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      if (typeid(map<string, boost::any>) == m["threshold"].type()) {
        DescribeFilteringAlgorithmResponseBodyResultMetaThreshold model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["threshold"]));
        threshold = make_shared<DescribeFilteringAlgorithmResponseBodyResultMetaThreshold>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeFilteringAlgorithmResponseBodyResultMeta() = default;
};
class DescribeFilteringAlgorithmResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<DescribeFilteringAlgorithmResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  DescribeFilteringAlgorithmResponseBodyResult() {}

  explicit DescribeFilteringAlgorithmResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["algorithmId"] = boost::any(*algorithmId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmId") != m.end() && !m["algorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["algorithmId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        DescribeFilteringAlgorithmResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<DescribeFilteringAlgorithmResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeFilteringAlgorithmResponseBodyResult() = default;
};
class DescribeFilteringAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFilteringAlgorithmResponseBodyResult> result{};

  DescribeFilteringAlgorithmResponseBody() {}

  explicit DescribeFilteringAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeFilteringAlgorithmResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeFilteringAlgorithmResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeFilteringAlgorithmResponseBody() = default;
};
class DescribeFilteringAlgorithmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFilteringAlgorithmResponseBody> body{};

  DescribeFilteringAlgorithmResponse() {}

  explicit DescribeFilteringAlgorithmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFilteringAlgorithmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFilteringAlgorithmResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFilteringAlgorithmResponse() = default;
};
class DescribeInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> dataSetVersion{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> industry{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scene{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  DescribeInstanceResponseBodyResult() {}

  explicit DescribeInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (dataSetVersion) {
      res["dataSetVersion"] = boost::any(*dataSetVersion);
    }
    if (expiredTime) {
      res["expiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
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
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("dataSetVersion") != m.end() && !m["dataSetVersion"].empty()) {
      dataSetVersion = make_shared<string>(boost::any_cast<string>(m["dataSetVersion"]));
    }
    if (m.find("expiredTime") != m.end() && !m["expiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expiredTime"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeInstanceResponseBodyResult() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceResponseBodyResult> result{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeInstanceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponseBody() = default;
};
class DescribeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceResponseBody> body{};

  DescribeInstanceResponse() {}

  explicit DescribeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeLatestTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> builtTime{};
  shared_ptr<string> code{};
  shared_ptr<long> costSeconds{};
  shared_ptr<string> flowType{};
  shared_ptr<string> message{};
  shared_ptr<long> progress{};
  shared_ptr<bool> rollbackEnabled{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<string> switchedTime{};
  shared_ptr<string> versionId{};

  DescribeLatestTaskResponseBodyResult() {}

  explicit DescribeLatestTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (builtTime) {
      res["builtTime"] = boost::any(*builtTime);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (costSeconds) {
      res["costSeconds"] = boost::any(*costSeconds);
    }
    if (flowType) {
      res["flowType"] = boost::any(*flowType);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (rollbackEnabled) {
      res["rollbackEnabled"] = boost::any(*rollbackEnabled);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("builtTime") != m.end() && !m["builtTime"].empty()) {
      builtTime = make_shared<string>(boost::any_cast<string>(m["builtTime"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("costSeconds") != m.end() && !m["costSeconds"].empty()) {
      costSeconds = make_shared<long>(boost::any_cast<long>(m["costSeconds"]));
    }
    if (m.find("flowType") != m.end() && !m["flowType"].empty()) {
      flowType = make_shared<string>(boost::any_cast<string>(m["flowType"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["progress"]));
    }
    if (m.find("rollbackEnabled") != m.end() && !m["rollbackEnabled"].empty()) {
      rollbackEnabled = make_shared<bool>(boost::any_cast<bool>(m["rollbackEnabled"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<string>(boost::any_cast<string>(m["switchedTime"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~DescribeLatestTaskResponseBodyResult() = default;
};
class DescribeLatestTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeLatestTaskResponseBodyResult>> result{};

  DescribeLatestTaskResponseBody() {}

  explicit DescribeLatestTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeLatestTaskResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLatestTaskResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeLatestTaskResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeLatestTaskResponseBody() = default;
};
class DescribeLatestTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLatestTaskResponseBody> body{};

  DescribeLatestTaskResponse() {}

  explicit DescribeLatestTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLatestTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLatestTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLatestTaskResponse() = default;
};
class DescribeQuotaResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> currentQps{};
  shared_ptr<long> itemCount{};
  shared_ptr<long> itemCountUsed{};
  shared_ptr<long> qps{};
  shared_ptr<long> userCount{};
  shared_ptr<long> userCountUsed{};

  DescribeQuotaResponseBodyResult() {}

  explicit DescribeQuotaResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentQps) {
      res["currentQps"] = boost::any(*currentQps);
    }
    if (itemCount) {
      res["itemCount"] = boost::any(*itemCount);
    }
    if (itemCountUsed) {
      res["itemCountUsed"] = boost::any(*itemCountUsed);
    }
    if (qps) {
      res["qps"] = boost::any(*qps);
    }
    if (userCount) {
      res["userCount"] = boost::any(*userCount);
    }
    if (userCountUsed) {
      res["userCountUsed"] = boost::any(*userCountUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentQps") != m.end() && !m["currentQps"].empty()) {
      currentQps = make_shared<long>(boost::any_cast<long>(m["currentQps"]));
    }
    if (m.find("itemCount") != m.end() && !m["itemCount"].empty()) {
      itemCount = make_shared<long>(boost::any_cast<long>(m["itemCount"]));
    }
    if (m.find("itemCountUsed") != m.end() && !m["itemCountUsed"].empty()) {
      itemCountUsed = make_shared<long>(boost::any_cast<long>(m["itemCountUsed"]));
    }
    if (m.find("qps") != m.end() && !m["qps"].empty()) {
      qps = make_shared<long>(boost::any_cast<long>(m["qps"]));
    }
    if (m.find("userCount") != m.end() && !m["userCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["userCount"]));
    }
    if (m.find("userCountUsed") != m.end() && !m["userCountUsed"].empty()) {
      userCountUsed = make_shared<long>(boost::any_cast<long>(m["userCountUsed"]));
    }
  }


  virtual ~DescribeQuotaResponseBodyResult() = default;
};
class DescribeQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeQuotaResponseBodyResult> result{};

  DescribeQuotaResponseBody() {}

  explicit DescribeQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeQuotaResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeQuotaResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeQuotaResponseBody() = default;
};
class DescribeQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQuotaResponseBody> body{};

  DescribeQuotaResponse() {}

  explicit DescribeQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQuotaResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["acceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acceptLanguage") != m.end() && !m["acceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["acceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> consoleUrl{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribeRegionsResponseBodyResult() {}

  explicit DescribeRegionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consoleUrl) {
      res["consoleUrl"] = boost::any(*consoleUrl);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (localName) {
      res["localName"] = boost::any(*localName);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consoleUrl") != m.end() && !m["consoleUrl"].empty()) {
      consoleUrl = make_shared<string>(boost::any_cast<string>(m["consoleUrl"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("localName") != m.end() && !m["localName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["localName"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyResult() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyResult>> result{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeRegionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeRegionsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ruleType{};
  shared_ptr<string> sceneId{};

  DescribeRuleRequest() {}

  explicit DescribeRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleType) {
      res["ruleType"] = boost::any(*ruleType);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ruleType") != m.end() && !m["ruleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["ruleType"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
  }


  virtual ~DescribeRuleRequest() = default;
};
class DescribeRuleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> status{};

  DescribeRuleResponseBodyResult() {}

  explicit DescribeRuleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (ruleId) {
      res["ruleId"] = boost::any(*ruleId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("ruleId") != m.end() && !m["ruleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["ruleId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeRuleResponseBodyResult() = default;
};
class DescribeRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRuleResponseBodyResult> result{};

  DescribeRuleResponseBody() {}

  explicit DescribeRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeRuleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeRuleResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeRuleResponseBody() = default;
};
class DescribeRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleResponseBody> body{};

  DescribeRuleResponse() {}

  explicit DescribeRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleResponse() = default;
};
class DescribeSceneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  DescribeSceneResponseBodyResult() {}

  explicit DescribeSceneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeSceneResponseBodyResult() = default;
};
class DescribeSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSceneResponseBodyResult> result{};

  DescribeSceneResponseBody() {}

  explicit DescribeSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeSceneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeSceneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeSceneResponseBody() = default;
};
class DescribeSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSceneResponseBody> body{};

  DescribeSceneResponse() {}

  explicit DescribeSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSceneResponse() = default;
};
class DescribeSceneBucketResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> inUse{};
  shared_ptr<long> num{};

  DescribeSceneBucketResponseBodyResult() {}

  explicit DescribeSceneBucketResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (inUse) {
      res["inUse"] = boost::any(*inUse);
    }
    if (num) {
      res["num"] = boost::any(*num);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("inUse") != m.end() && !m["inUse"].empty()) {
      inUse = make_shared<string>(boost::any_cast<string>(m["inUse"]));
    }
    if (m.find("num") != m.end() && !m["num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["num"]));
    }
  }


  virtual ~DescribeSceneBucketResponseBodyResult() = default;
};
class DescribeSceneBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSceneBucketResponseBodyResult> result{};

  DescribeSceneBucketResponseBody() {}

  explicit DescribeSceneBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeSceneBucketResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeSceneBucketResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeSceneBucketResponseBody() = default;
};
class DescribeSceneBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSceneBucketResponseBody> body{};

  DescribeSceneBucketResponse() {}

  explicit DescribeSceneBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSceneBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSceneBucketResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSceneBucketResponse() = default;
};
class DescribeSceneThroughputResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> pvCount{};

  DescribeSceneThroughputResponseBodyResult() {}

  explicit DescribeSceneThroughputResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pvCount) {
      res["pvCount"] = boost::any(*pvCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pvCount") != m.end() && !m["pvCount"].empty()) {
      pvCount = make_shared<long>(boost::any_cast<long>(m["pvCount"]));
    }
  }


  virtual ~DescribeSceneThroughputResponseBodyResult() = default;
};
class DescribeSceneThroughputResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSceneThroughputResponseBodyResult> result{};

  DescribeSceneThroughputResponseBody() {}

  explicit DescribeSceneThroughputResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeSceneThroughputResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeSceneThroughputResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeSceneThroughputResponseBody() = default;
};
class DescribeSceneThroughputResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSceneThroughputResponseBody> body{};

  DescribeSceneThroughputResponse() {}

  explicit DescribeSceneThroughputResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSceneThroughputResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSceneThroughputResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSceneThroughputResponse() = default;
};
class DescribeSyncReportDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> levelType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};

  DescribeSyncReportDetailRequest() {}

  explicit DescribeSyncReportDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (levelType) {
      res["levelType"] = boost::any(*levelType);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("levelType") != m.end() && !m["levelType"].empty()) {
      levelType = make_shared<string>(boost::any_cast<string>(m["levelType"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeSyncReportDetailRequest() = default;
};
class DescribeSyncReportDetailResponseBodyResultHistoryData : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<double> errorPercent{};
  shared_ptr<long> startTime{};

  DescribeSyncReportDetailResponseBodyResultHistoryData() {}

  explicit DescribeSyncReportDetailResponseBodyResultHistoryData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (errorPercent) {
      res["errorPercent"] = boost::any(*errorPercent);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("errorPercent") != m.end() && !m["errorPercent"].empty()) {
      errorPercent = make_shared<double>(boost::any_cast<double>(m["errorPercent"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~DescribeSyncReportDetailResponseBodyResultHistoryData() = default;
};
class DescribeSyncReportDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> defaultDisplay{};
  shared_ptr<long> errorCount{};
  shared_ptr<double> errorPercent{};
  shared_ptr<vector<DescribeSyncReportDetailResponseBodyResultHistoryData>> historyData{};
  shared_ptr<bool> sampleDisplay{};
  shared_ptr<string> type{};

  DescribeSyncReportDetailResponseBodyResult() {}

  explicit DescribeSyncReportDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDisplay) {
      res["defaultDisplay"] = boost::any(*defaultDisplay);
    }
    if (errorCount) {
      res["errorCount"] = boost::any(*errorCount);
    }
    if (errorPercent) {
      res["errorPercent"] = boost::any(*errorPercent);
    }
    if (historyData) {
      vector<boost::any> temp1;
      for(auto item1:*historyData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["historyData"] = boost::any(temp1);
    }
    if (sampleDisplay) {
      res["sampleDisplay"] = boost::any(*sampleDisplay);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultDisplay") != m.end() && !m["defaultDisplay"].empty()) {
      defaultDisplay = make_shared<bool>(boost::any_cast<bool>(m["defaultDisplay"]));
    }
    if (m.find("errorCount") != m.end() && !m["errorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["errorCount"]));
    }
    if (m.find("errorPercent") != m.end() && !m["errorPercent"].empty()) {
      errorPercent = make_shared<double>(boost::any_cast<double>(m["errorPercent"]));
    }
    if (m.find("historyData") != m.end() && !m["historyData"].empty()) {
      if (typeid(vector<boost::any>) == m["historyData"].type()) {
        vector<DescribeSyncReportDetailResponseBodyResultHistoryData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["historyData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSyncReportDetailResponseBodyResultHistoryData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyData = make_shared<vector<DescribeSyncReportDetailResponseBodyResultHistoryData>>(expect1);
      }
    }
    if (m.find("sampleDisplay") != m.end() && !m["sampleDisplay"].empty()) {
      sampleDisplay = make_shared<bool>(boost::any_cast<bool>(m["sampleDisplay"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeSyncReportDetailResponseBodyResult() = default;
};
class DescribeSyncReportDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSyncReportDetailResponseBodyResult>> result{};

  DescribeSyncReportDetailResponseBody() {}

  explicit DescribeSyncReportDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeSyncReportDetailResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSyncReportDetailResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeSyncReportDetailResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeSyncReportDetailResponseBody() = default;
};
class DescribeSyncReportDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSyncReportDetailResponseBody> body{};

  DescribeSyncReportDetailResponse() {}

  explicit DescribeSyncReportDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSyncReportDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSyncReportDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSyncReportDetailResponse() = default;
};
class DescribeSyncReportOutliersRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> levelType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};

  DescribeSyncReportOutliersRequest() {}

  explicit DescribeSyncReportOutliersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (levelType) {
      res["levelType"] = boost::any(*levelType);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("levelType") != m.end() && !m["levelType"].empty()) {
      levelType = make_shared<string>(boost::any_cast<string>(m["levelType"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeSyncReportOutliersRequest() = default;
};
class DescribeSyncReportOutliersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DescribeSyncReportOutliersResponseBody() {}

  explicit DescribeSyncReportOutliersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeSyncReportOutliersResponseBody() = default;
};
class DescribeSyncReportOutliersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSyncReportOutliersResponseBody> body{};

  DescribeSyncReportOutliersResponse() {}

  explicit DescribeSyncReportOutliersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSyncReportOutliersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSyncReportOutliersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSyncReportOutliersResponse() = default;
};
class DescribeUserMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> metricType{};
  shared_ptr<long> startTime{};

  DescribeUserMetricsRequest() {}

  explicit DescribeUserMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~DescribeUserMetricsRequest() = default;
};
class DescribeUserMetricsResponseBodyResultDataPoints : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<double> val{};

  DescribeUserMetricsResponseBodyResultDataPoints() {}

  explicit DescribeUserMetricsResponseBodyResultDataPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (val) {
      res["val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("val") != m.end() && !m["val"].empty()) {
      val = make_shared<double>(boost::any_cast<double>(m["val"]));
    }
  }


  virtual ~DescribeUserMetricsResponseBodyResultDataPoints() = default;
};
class DescribeUserMetricsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserMetricsResponseBodyResultDataPoints>> dataPoints{};
  shared_ptr<string> sceneId{};

  DescribeUserMetricsResponseBodyResult() {}

  explicit DescribeUserMetricsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPoints) {
      vector<boost::any> temp1;
      for(auto item1:*dataPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataPoints"] = boost::any(temp1);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataPoints") != m.end() && !m["dataPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["dataPoints"].type()) {
        vector<DescribeUserMetricsResponseBodyResultDataPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserMetricsResponseBodyResultDataPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataPoints = make_shared<vector<DescribeUserMetricsResponseBodyResultDataPoints>>(expect1);
      }
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
  }


  virtual ~DescribeUserMetricsResponseBodyResult() = default;
};
class DescribeUserMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUserMetricsResponseBodyResult>> result{};

  DescribeUserMetricsResponseBody() {}

  explicit DescribeUserMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeUserMetricsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserMetricsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeUserMetricsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeUserMetricsResponseBody() = default;
};
class DescribeUserMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserMetricsResponseBody> body{};

  DescribeUserMetricsResponse() {}

  explicit DescribeUserMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserMetricsResponse() = default;
};
class DowngradeInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DowngradeInstanceResponseBodyResult() {}

  explicit DowngradeInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~DowngradeInstanceResponseBodyResult() = default;
};
class DowngradeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DowngradeInstanceResponseBodyResult> result{};

  DowngradeInstanceResponseBody() {}

  explicit DowngradeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DowngradeInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DowngradeInstanceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DowngradeInstanceResponseBody() = default;
};
class DowngradeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DowngradeInstanceResponseBody> body{};

  DowngradeInstanceResponse() {}

  explicit DowngradeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DowngradeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DowngradeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DowngradeInstanceResponse() = default;
};
class EnableExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  EnableExperimentResponseBody() {}

  explicit EnableExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~EnableExperimentResponseBody() = default;
};
class EnableExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableExperimentResponseBody> body{};

  EnableExperimentResponse() {}

  explicit EnableExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~EnableExperimentResponse() = default;
};
class GenerateSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Sample> result{};

  GenerateSampleResponseBody() {}

  explicit GenerateSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        Sample model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<Sample>(model1);
      }
    }
  }


  virtual ~GenerateSampleResponseBody() = default;
};
class GenerateSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateSampleResponseBody> body{};

  GenerateSampleResponse() {}

  explicit GenerateSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateSampleResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateSampleResponse() = default;
};
class GetExtraDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ExtraDataSource> result{};

  GetExtraDataSourceResponseBody() {}

  explicit GetExtraDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExtraDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExtraDataSource>(model1);
      }
    }
  }


  virtual ~GetExtraDataSourceResponseBody() = default;
};
class GetExtraDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExtraDataSourceResponseBody> body{};

  GetExtraDataSourceResponse() {}

  explicit GetExtraDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExtraDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExtraDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetExtraDataSourceResponse() = default;
};
class GetFlowControlTaskResponseBodyResultMetaSelectionParams : public Darabonba::Model {
public:
  shared_ptr<string> selectType{};
  shared_ptr<string> selectValue{};
  shared_ptr<string> selectionOperation{};

  GetFlowControlTaskResponseBodyResultMetaSelectionParams() {}

  explicit GetFlowControlTaskResponseBodyResultMetaSelectionParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (selectType) {
      res["selectType"] = boost::any(*selectType);
    }
    if (selectValue) {
      res["selectValue"] = boost::any(*selectValue);
    }
    if (selectionOperation) {
      res["selectionOperation"] = boost::any(*selectionOperation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("selectType") != m.end() && !m["selectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["selectType"]));
    }
    if (m.find("selectValue") != m.end() && !m["selectValue"].empty()) {
      selectValue = make_shared<string>(boost::any_cast<string>(m["selectValue"]));
    }
    if (m.find("selectionOperation") != m.end() && !m["selectionOperation"].empty()) {
      selectionOperation = make_shared<string>(boost::any_cast<string>(m["selectionOperation"]));
    }
  }


  virtual ~GetFlowControlTaskResponseBodyResultMetaSelectionParams() = default;
};
class GetFlowControlTaskResponseBodyResultMetaTarget : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> value{};

  GetFlowControlTaskResponseBodyResultMetaTarget() {}

  explicit GetFlowControlTaskResponseBodyResultMetaTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~GetFlowControlTaskResponseBodyResultMetaTarget() = default;
};
class GetFlowControlTaskResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> metaType{};
  shared_ptr<string> sceneIds{};
  shared_ptr<vector<GetFlowControlTaskResponseBodyResultMetaSelectionParams>> selectionParams{};
  shared_ptr<long> startTime{};
  shared_ptr<GetFlowControlTaskResponseBodyResultMetaTarget> target{};
  shared_ptr<string> taskName{};

  GetFlowControlTaskResponseBodyResultMeta() {}

  explicit GetFlowControlTaskResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (sceneIds) {
      res["sceneIds"] = boost::any(*sceneIds);
    }
    if (selectionParams) {
      vector<boost::any> temp1;
      for(auto item1:*selectionParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["selectionParams"] = boost::any(temp1);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("sceneIds") != m.end() && !m["sceneIds"].empty()) {
      sceneIds = make_shared<string>(boost::any_cast<string>(m["sceneIds"]));
    }
    if (m.find("selectionParams") != m.end() && !m["selectionParams"].empty()) {
      if (typeid(vector<boost::any>) == m["selectionParams"].type()) {
        vector<GetFlowControlTaskResponseBodyResultMetaSelectionParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["selectionParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFlowControlTaskResponseBodyResultMetaSelectionParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selectionParams = make_shared<vector<GetFlowControlTaskResponseBodyResultMetaSelectionParams>>(expect1);
      }
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      if (typeid(map<string, boost::any>) == m["target"].type()) {
        GetFlowControlTaskResponseBodyResultMetaTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["target"]));
        target = make_shared<GetFlowControlTaskResponseBodyResultMetaTarget>(model1);
      }
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
  }


  virtual ~GetFlowControlTaskResponseBodyResultMeta() = default;
};
class GetFlowControlTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<GetFlowControlTaskResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  GetFlowControlTaskResponseBodyResult() {}

  explicit GetFlowControlTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        GetFlowControlTaskResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<GetFlowControlTaskResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetFlowControlTaskResponseBodyResult() = default;
};
class GetFlowControlTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetFlowControlTaskResponseBodyResult>> result{};

  GetFlowControlTaskResponseBody() {}

  explicit GetFlowControlTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<GetFlowControlTaskResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFlowControlTaskResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetFlowControlTaskResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~GetFlowControlTaskResponseBody() = default;
};
class GetFlowControlTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFlowControlTaskResponseBody> body{};

  GetFlowControlTaskResponse() {}

  explicit GetFlowControlTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFlowControlTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFlowControlTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetFlowControlTaskResponse() = default;
};
class GetLatestDataDiagnoseTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  GetLatestDataDiagnoseTaskStatusResponseBody() {}

  explicit GetLatestDataDiagnoseTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetLatestDataDiagnoseTaskStatusResponseBody() = default;
};
class GetLatestDataDiagnoseTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLatestDataDiagnoseTaskStatusResponseBody> body{};

  GetLatestDataDiagnoseTaskStatusResponse() {}

  explicit GetLatestDataDiagnoseTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLatestDataDiagnoseTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLatestDataDiagnoseTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetLatestDataDiagnoseTaskStatusResponse() = default;
};
class GetRankingModelTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingModelTemplate> result{};

  GetRankingModelTemplateResponseBody() {}

  explicit GetRankingModelTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingModelTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingModelTemplate>(model1);
      }
    }
  }


  virtual ~GetRankingModelTemplateResponseBody() = default;
};
class GetRankingModelTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRankingModelTemplateResponseBody> body{};

  GetRankingModelTemplateResponse() {}

  explicit GetRankingModelTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRankingModelTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRankingModelTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetRankingModelTemplateResponse() = default;
};
class GetRankingModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingModelVersion> result{};

  GetRankingModelVersionResponseBody() {}

  explicit GetRankingModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingModelVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingModelVersion>(model1);
      }
    }
  }


  virtual ~GetRankingModelVersionResponseBody() = default;
};
class GetRankingModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRankingModelVersionResponseBody> body{};

  GetRankingModelVersionResponse() {}

  explicit GetRankingModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRankingModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRankingModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetRankingModelVersionResponse() = default;
};
class GetRankingSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingSystem> result{};

  GetRankingSystemResponseBody() {}

  explicit GetRankingSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingSystem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingSystem>(model1);
      }
    }
  }


  virtual ~GetRankingSystemResponseBody() = default;
};
class GetRankingSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRankingSystemResponseBody> body{};

  GetRankingSystemResponse() {}

  explicit GetRankingSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRankingSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRankingSystemResponseBody>(model1);
      }
    }
  }


  virtual ~GetRankingSystemResponse() = default;
};
class GetRankingSystemHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingSystemHistory> result{};

  GetRankingSystemHistoryResponseBody() {}

  explicit GetRankingSystemHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingSystemHistory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingSystemHistory>(model1);
      }
    }
  }


  virtual ~GetRankingSystemHistoryResponseBody() = default;
};
class GetRankingSystemHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRankingSystemHistoryResponseBody> body{};

  GetRankingSystemHistoryResponse() {}

  explicit GetRankingSystemHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRankingSystemHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRankingSystemHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetRankingSystemHistoryResponse() = default;
};
class GetSampleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> withExtendParmas{};

  GetSampleRequest() {}

  explicit GetSampleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withExtendParmas) {
      res["withExtendParmas"] = boost::any(*withExtendParmas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withExtendParmas") != m.end() && !m["withExtendParmas"].empty()) {
      withExtendParmas = make_shared<bool>(boost::any_cast<bool>(m["withExtendParmas"]));
    }
  }


  virtual ~GetSampleRequest() = default;
};
class GetSampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Sample> result{};

  GetSampleResponseBody() {}

  explicit GetSampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        Sample model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<Sample>(model1);
      }
    }
  }


  virtual ~GetSampleResponseBody() = default;
};
class GetSampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSampleResponseBody> body{};

  GetSampleResponse() {}

  explicit GetSampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSampleResponseBody>(model1);
      }
    }
  }


  virtual ~GetSampleResponse() = default;
};
class InitComputingResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> type{};

  InitComputingResourceRequest() {}

  explicit InitComputingResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~InitComputingResourceRequest() = default;
};
class InitComputingResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InitComputingResourceResponseBody() {}

  explicit InitComputingResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitComputingResourceResponseBody() = default;
};
class InitComputingResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitComputingResourceResponseBody> body{};

  InitComputingResourceResponse() {}

  explicit InitComputingResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitComputingResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitComputingResourceResponseBody>(model1);
      }
    }
  }


  virtual ~InitComputingResourceResponse() = default;
};
class ListDashboardDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> experimentIds{};
  shared_ptr<string> matchTypes{};
  shared_ptr<string> metricType{};
  shared_ptr<string> sceneIds{};
  shared_ptr<long> startTime{};
  shared_ptr<string> traceIds{};

  ListDashboardDetailsRequest() {}

  explicit ListDashboardDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (experimentIds) {
      res["experimentIds"] = boost::any(*experimentIds);
    }
    if (matchTypes) {
      res["matchTypes"] = boost::any(*matchTypes);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    if (sceneIds) {
      res["sceneIds"] = boost::any(*sceneIds);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (traceIds) {
      res["traceIds"] = boost::any(*traceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("experimentIds") != m.end() && !m["experimentIds"].empty()) {
      experimentIds = make_shared<string>(boost::any_cast<string>(m["experimentIds"]));
    }
    if (m.find("matchTypes") != m.end() && !m["matchTypes"].empty()) {
      matchTypes = make_shared<string>(boost::any_cast<string>(m["matchTypes"]));
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
    if (m.find("sceneIds") != m.end() && !m["sceneIds"].empty()) {
      sceneIds = make_shared<string>(boost::any_cast<string>(m["sceneIds"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("traceIds") != m.end() && !m["traceIds"].empty()) {
      traceIds = make_shared<string>(boost::any_cast<string>(m["traceIds"]));
    }
  }


  virtual ~ListDashboardDetailsRequest() = default;
};
class ListDashboardDetailsResponseBodyResultMetricRes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<map<string, boost::any>> total{};

  ListDashboardDetailsResponseBodyResultMetricRes() {}

  explicit ListDashboardDetailsResponseBodyResultMetricRes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["total"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      total = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListDashboardDetailsResponseBodyResultMetricRes() = default;
};
class ListDashboardDetailsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<ListDashboardDetailsResponseBodyResultMetricRes> metricRes{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> traceId{};

  ListDashboardDetailsResponseBodyResult() {}

  explicit ListDashboardDetailsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricRes) {
      res["metricRes"] = metricRes ? boost::any(metricRes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricRes") != m.end() && !m["metricRes"].empty()) {
      if (typeid(map<string, boost::any>) == m["metricRes"].type()) {
        ListDashboardDetailsResponseBodyResultMetricRes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metricRes"]));
        metricRes = make_shared<ListDashboardDetailsResponseBodyResultMetricRes>(model1);
      }
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ListDashboardDetailsResponseBodyResult() = default;
};
class ListDashboardDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDashboardDetailsResponseBodyResult>> result{};

  ListDashboardDetailsResponseBody() {}

  explicit ListDashboardDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDashboardDetailsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardDetailsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDashboardDetailsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDashboardDetailsResponseBody() = default;
};
class ListDashboardDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDashboardDetailsResponseBody> body{};

  ListDashboardDetailsResponse() {}

  explicit ListDashboardDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDashboardDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDashboardDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDashboardDetailsResponse() = default;
};
class ListDashboardDetailsFlowsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> experimentIds{};
  shared_ptr<string> metricType{};
  shared_ptr<string> sceneIds{};
  shared_ptr<long> startTime{};
  shared_ptr<string> traceIds{};

  ListDashboardDetailsFlowsRequest() {}

  explicit ListDashboardDetailsFlowsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (experimentIds) {
      res["experimentIds"] = boost::any(*experimentIds);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    if (sceneIds) {
      res["sceneIds"] = boost::any(*sceneIds);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (traceIds) {
      res["traceIds"] = boost::any(*traceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("experimentIds") != m.end() && !m["experimentIds"].empty()) {
      experimentIds = make_shared<string>(boost::any_cast<string>(m["experimentIds"]));
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
    if (m.find("sceneIds") != m.end() && !m["sceneIds"].empty()) {
      sceneIds = make_shared<string>(boost::any_cast<string>(m["sceneIds"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("traceIds") != m.end() && !m["traceIds"].empty()) {
      traceIds = make_shared<string>(boost::any_cast<string>(m["traceIds"]));
    }
  }


  virtual ~ListDashboardDetailsFlowsRequest() = default;
};
class ListDashboardDetailsFlowsResponseBodyResultMetricData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> metricRes{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> traceId{};

  ListDashboardDetailsFlowsResponseBodyResultMetricData() {}

  explicit ListDashboardDetailsFlowsResponseBodyResultMetricData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricRes) {
      res["metricRes"] = boost::any(*metricRes);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricRes") != m.end() && !m["metricRes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metricRes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metricRes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~ListDashboardDetailsFlowsResponseBodyResultMetricData() = default;
};
class ListDashboardDetailsFlowsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListDashboardDetailsFlowsResponseBodyResultMetricData>> metricData{};
  shared_ptr<string> metricType{};

  ListDashboardDetailsFlowsResponseBodyResult() {}

  explicit ListDashboardDetailsFlowsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricData) {
      vector<boost::any> temp1;
      for(auto item1:*metricData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["metricData"] = boost::any(temp1);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricData") != m.end() && !m["metricData"].empty()) {
      if (typeid(vector<boost::any>) == m["metricData"].type()) {
        vector<ListDashboardDetailsFlowsResponseBodyResultMetricData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["metricData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardDetailsFlowsResponseBodyResultMetricData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricData = make_shared<vector<ListDashboardDetailsFlowsResponseBodyResultMetricData>>(expect1);
      }
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
  }


  virtual ~ListDashboardDetailsFlowsResponseBodyResult() = default;
};
class ListDashboardDetailsFlowsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListDashboardDetailsFlowsResponseBodyResult> result{};

  ListDashboardDetailsFlowsResponseBody() {}

  explicit ListDashboardDetailsFlowsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListDashboardDetailsFlowsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListDashboardDetailsFlowsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListDashboardDetailsFlowsResponseBody() = default;
};
class ListDashboardDetailsFlowsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDashboardDetailsFlowsResponseBody> body{};

  ListDashboardDetailsFlowsResponse() {}

  explicit ListDashboardDetailsFlowsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDashboardDetailsFlowsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDashboardDetailsFlowsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDashboardDetailsFlowsResponse() = default;
};
class ListDashboardMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> metricQuery{};
  shared_ptr<string> metricType{};
  shared_ptr<string> metricView{};
  shared_ptr<long> startTime{};

  ListDashboardMetricsRequest() {}

  explicit ListDashboardMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (metricQuery) {
      res["metricQuery"] = boost::any(*metricQuery);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    if (metricView) {
      res["metricView"] = boost::any(*metricView);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("metricQuery") != m.end() && !m["metricQuery"].empty()) {
      metricQuery = make_shared<string>(boost::any_cast<string>(m["metricQuery"]));
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
    if (m.find("metricView") != m.end() && !m["metricView"].empty()) {
      metricView = make_shared<string>(boost::any_cast<string>(m["metricView"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~ListDashboardMetricsRequest() = default;
};
class ListDashboardMetricsResponseBodyResultDetail : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> val{};

  ListDashboardMetricsResponseBodyResultDetail() {}

  explicit ListDashboardMetricsResponseBodyResultDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (val) {
      res["val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("val") != m.end() && !m["val"].empty()) {
      val = make_shared<string>(boost::any_cast<string>(m["val"]));
    }
  }


  virtual ~ListDashboardMetricsResponseBodyResultDetail() = default;
};
class ListDashboardMetricsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListDashboardMetricsResponseBodyResultDetail>> detail{};
  shared_ptr<map<string, boost::any>> total{};

  ListDashboardMetricsResponseBodyResult() {}

  explicit ListDashboardMetricsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<ListDashboardMetricsResponseBodyResultDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardMetricsResponseBodyResultDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<ListDashboardMetricsResponseBodyResultDetail>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["total"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      total = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListDashboardMetricsResponseBodyResult() = default;
};
class ListDashboardMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDashboardMetricsResponseBodyResult>> result{};

  ListDashboardMetricsResponseBody() {}

  explicit ListDashboardMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDashboardMetricsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardMetricsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDashboardMetricsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDashboardMetricsResponseBody() = default;
};
class ListDashboardMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDashboardMetricsResponseBody> body{};

  ListDashboardMetricsResponse() {}

  explicit ListDashboardMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDashboardMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDashboardMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDashboardMetricsResponse() = default;
};
class ListDashboardMetricsFlowsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> metricType{};
  shared_ptr<long> startTime{};

  ListDashboardMetricsFlowsRequest() {}

  explicit ListDashboardMetricsFlowsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~ListDashboardMetricsFlowsRequest() = default;
};
class ListDashboardMetricsFlowsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> metricData{};
  shared_ptr<string> metricType{};

  ListDashboardMetricsFlowsResponseBodyResult() {}

  explicit ListDashboardMetricsFlowsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricData) {
      res["metricData"] = boost::any(*metricData);
    }
    if (metricType) {
      res["metricType"] = boost::any(*metricType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricData") != m.end() && !m["metricData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["metricData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metricData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("metricType") != m.end() && !m["metricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["metricType"]));
    }
  }


  virtual ~ListDashboardMetricsFlowsResponseBodyResult() = default;
};
class ListDashboardMetricsFlowsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDashboardMetricsFlowsResponseBodyResult>> result{};

  ListDashboardMetricsFlowsResponseBody() {}

  explicit ListDashboardMetricsFlowsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDashboardMetricsFlowsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardMetricsFlowsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDashboardMetricsFlowsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDashboardMetricsFlowsResponseBody() = default;
};
class ListDashboardMetricsFlowsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDashboardMetricsFlowsResponseBody> body{};

  ListDashboardMetricsFlowsResponse() {}

  explicit ListDashboardMetricsFlowsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDashboardMetricsFlowsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDashboardMetricsFlowsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDashboardMetricsFlowsResponse() = default;
};
class ListDataDiagnoseReportsRequest : public Darabonba::Model {
public:
  shared_ptr<long> taskCreateTime{};

  ListDataDiagnoseReportsRequest() {}

  explicit ListDataDiagnoseReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskCreateTime) {
      res["taskCreateTime"] = boost::any(*taskCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskCreateTime") != m.end() && !m["taskCreateTime"].empty()) {
      taskCreateTime = make_shared<long>(boost::any_cast<long>(m["taskCreateTime"]));
    }
  }


  virtual ~ListDataDiagnoseReportsRequest() = default;
};
class ListDataDiagnoseReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ListDataDiagnoseReportsResponseBody() {}

  explicit ListDataDiagnoseReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListDataDiagnoseReportsResponseBody() = default;
};
class ListDataDiagnoseReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataDiagnoseReportsResponseBody> body{};

  ListDataDiagnoseReportsResponse() {}

  explicit ListDataDiagnoseReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataDiagnoseReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataDiagnoseReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataDiagnoseReportsResponse() = default;
};
class ListDataDiagnoseSampleDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> key{};
  shared_ptr<long> startTime{};
  shared_ptr<long> taskCreateTime{};
  shared_ptr<string> taskSource{};

  ListDataDiagnoseSampleDetailsRequest() {}

  explicit ListDataDiagnoseSampleDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (taskCreateTime) {
      res["taskCreateTime"] = boost::any(*taskCreateTime);
    }
    if (taskSource) {
      res["taskSource"] = boost::any(*taskSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("taskCreateTime") != m.end() && !m["taskCreateTime"].empty()) {
      taskCreateTime = make_shared<long>(boost::any_cast<long>(m["taskCreateTime"]));
    }
    if (m.find("taskSource") != m.end() && !m["taskSource"].empty()) {
      taskSource = make_shared<string>(boost::any_cast<string>(m["taskSource"]));
    }
  }


  virtual ~ListDataDiagnoseSampleDetailsRequest() = default;
};
class ListDataDiagnoseSampleDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ListDataDiagnoseSampleDetailsResponseBody() {}

  explicit ListDataDiagnoseSampleDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListDataDiagnoseSampleDetailsResponseBody() = default;
};
class ListDataDiagnoseSampleDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataDiagnoseSampleDetailsResponseBody> body{};

  ListDataDiagnoseSampleDetailsResponse() {}

  explicit ListDataDiagnoseSampleDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataDiagnoseSampleDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataDiagnoseSampleDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataDiagnoseSampleDetailsResponse() = default;
};
class ListDataSetResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> state{};
  shared_ptr<string> versionId{};

  ListDataSetResponseBodyResult() {}

  explicit ListDataSetResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~ListDataSetResponseBodyResult() = default;
};
class ListDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSetResponseBodyResult>> result{};

  ListDataSetResponseBody() {}

  explicit ListDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDataSetResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSetResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataSetResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDataSetResponseBody() = default;
};
class ListDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSetResponseBody> body{};

  ListDataSetResponse() {}

  explicit ListDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSetResponse() = default;
};
class ListDataSourceResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> type{};

  ListDataSourceResponseBodyResultMeta() {}

  explicit ListDataSourceResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["timestamp"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListDataSourceResponseBodyResultMeta() = default;
};
class ListDataSourceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ListDataSourceResponseBodyResultMeta> meta{};
  shared_ptr<string> tableName{};

  ListDataSourceResponseBodyResult() {}

  explicit ListDataSourceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        ListDataSourceResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<ListDataSourceResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~ListDataSourceResponseBodyResult() = default;
};
class ListDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSourceResponseBodyResult>> result{};

  ListDataSourceResponseBody() {}

  explicit ListDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDataSourceResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataSourceResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDataSourceResponseBody() = default;
};
class ListDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceResponseBody> body{};

  ListDataSourceResponse() {}

  explicit ListDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceResponse() = default;
};
class ListExperimentsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> base{};
  shared_ptr<vector<string>> buckets{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineTime{};
  shared_ptr<string> onlineTime{};
  shared_ptr<string> status{};

  ListExperimentsResponseBodyResult() {}

  explicit ListExperimentsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (base) {
      res["base"] = boost::any(*base);
    }
    if (buckets) {
      res["buckets"] = boost::any(*buckets);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (experimentId) {
      res["experimentId"] = boost::any(*experimentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offlineTime) {
      res["offlineTime"] = boost::any(*offlineTime);
    }
    if (onlineTime) {
      res["onlineTime"] = boost::any(*onlineTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("base") != m.end() && !m["base"].empty()) {
      base = make_shared<bool>(boost::any_cast<bool>(m["base"]));
    }
    if (m.find("buckets") != m.end() && !m["buckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["buckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["buckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("experimentId") != m.end() && !m["experimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["experimentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offlineTime") != m.end() && !m["offlineTime"].empty()) {
      offlineTime = make_shared<string>(boost::any_cast<string>(m["offlineTime"]));
    }
    if (m.find("onlineTime") != m.end() && !m["onlineTime"].empty()) {
      onlineTime = make_shared<string>(boost::any_cast<string>(m["onlineTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListExperimentsResponseBodyResult() = default;
};
class ListExperimentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListExperimentsResponseBodyResult>> result{};

  ListExperimentsResponseBody() {}

  explicit ListExperimentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListExperimentsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListExperimentsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListExperimentsResponseBody() = default;
};
class ListExperimentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentsResponseBody> body{};

  ListExperimentsResponse() {}

  explicit ListExperimentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExperimentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentsResponse() = default;
};
class ListExtraDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListExtraDataSourcesRequest() {}

  explicit ListExtraDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListExtraDataSourcesRequest() = default;
};
class ListExtraDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ExtraDataSource>> result{};

  ListExtraDataSourcesResponseBody() {}

  explicit ListExtraDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ExtraDataSource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtraDataSource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ExtraDataSource>>(expect1);
      }
    }
  }


  virtual ~ListExtraDataSourcesResponseBody() = default;
};
class ListExtraDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExtraDataSourcesResponseBody> body{};

  ListExtraDataSourcesResponse() {}

  explicit ListExtraDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExtraDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExtraDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListExtraDataSourcesResponse() = default;
};
class ListFeatureTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> type{};
  shared_ptr<string> updateFrequency{};

  ListFeatureTablesRequest() {}

  explicit ListFeatureTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["dataSourceId"] = boost::any(*dataSourceId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updateFrequency) {
      res["updateFrequency"] = boost::any(*updateFrequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSourceId") != m.end() && !m["dataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["dataSourceId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updateFrequency") != m.end() && !m["updateFrequency"].empty()) {
      updateFrequency = make_shared<string>(boost::any_cast<string>(m["updateFrequency"]));
    }
  }


  virtual ~ListFeatureTablesRequest() = default;
};
class ListFeatureTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<FeatureTable>> result{};

  ListFeatureTablesResponseBody() {}

  explicit ListFeatureTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<FeatureTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FeatureTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<FeatureTable>>(expect1);
      }
    }
  }


  virtual ~ListFeatureTablesResponseBody() = default;
};
class ListFeatureTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureTablesResponseBody> body{};

  ListFeatureTablesResponse() {}

  explicit ListFeatureTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureTablesResponse() = default;
};
class ListFilteringAlgorithmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<long> page{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};

  ListFilteringAlgorithmsRequest() {}

  explicit ListFilteringAlgorithmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["algorithmId"] = boost::any(*algorithmId);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmId") != m.end() && !m["algorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["algorithmId"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListFilteringAlgorithmsRequest() = default;
};
class ListFilteringAlgorithmsResponseBodyHeaders : public Darabonba::Model {
public:
  shared_ptr<long> xTotalCount{};

  ListFilteringAlgorithmsResponseBodyHeaders() {}

  explicit ListFilteringAlgorithmsResponseBodyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (xTotalCount) {
      res["X-Total-Count"] = boost::any(*xTotalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X-Total-Count") != m.end() && !m["X-Total-Count"].empty()) {
      xTotalCount = make_shared<long>(boost::any_cast<long>(m["X-Total-Count"]));
    }
  }


  virtual ~ListFilteringAlgorithmsResponseBodyHeaders() = default;
};
class ListFilteringAlgorithmsResponseBodyResultMetaExtInfo : public Darabonba::Model {
public:
  shared_ptr<string> itemSeparator{};
  shared_ptr<string> kvSeparator{};

  ListFilteringAlgorithmsResponseBodyResultMetaExtInfo() {}

  explicit ListFilteringAlgorithmsResponseBodyResultMetaExtInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemSeparator) {
      res["itemSeparator"] = boost::any(*itemSeparator);
    }
    if (kvSeparator) {
      res["kvSeparator"] = boost::any(*kvSeparator);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("itemSeparator") != m.end() && !m["itemSeparator"].empty()) {
      itemSeparator = make_shared<string>(boost::any_cast<string>(m["itemSeparator"]));
    }
    if (m.find("kvSeparator") != m.end() && !m["kvSeparator"].empty()) {
      kvSeparator = make_shared<string>(boost::any_cast<string>(m["kvSeparator"]));
    }
  }


  virtual ~ListFilteringAlgorithmsResponseBodyResultMetaExtInfo() = default;
};
class ListFilteringAlgorithmsResponseBodyResultMetaThreshold : public Darabonba::Model {
public:
  shared_ptr<long> indexLossThreshold{};
  shared_ptr<long> indexSizeThreshold{};
  shared_ptr<long> sourceDataRecordThreshold{};
  shared_ptr<long> sourceDataSizeThreshold{};

  ListFilteringAlgorithmsResponseBodyResultMetaThreshold() {}

  explicit ListFilteringAlgorithmsResponseBodyResultMetaThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexLossThreshold) {
      res["indexLossThreshold"] = boost::any(*indexLossThreshold);
    }
    if (indexSizeThreshold) {
      res["indexSizeThreshold"] = boost::any(*indexSizeThreshold);
    }
    if (sourceDataRecordThreshold) {
      res["sourceDataRecordThreshold"] = boost::any(*sourceDataRecordThreshold);
    }
    if (sourceDataSizeThreshold) {
      res["sourceDataSizeThreshold"] = boost::any(*sourceDataSizeThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexLossThreshold") != m.end() && !m["indexLossThreshold"].empty()) {
      indexLossThreshold = make_shared<long>(boost::any_cast<long>(m["indexLossThreshold"]));
    }
    if (m.find("indexSizeThreshold") != m.end() && !m["indexSizeThreshold"].empty()) {
      indexSizeThreshold = make_shared<long>(boost::any_cast<long>(m["indexSizeThreshold"]));
    }
    if (m.find("sourceDataRecordThreshold") != m.end() && !m["sourceDataRecordThreshold"].empty()) {
      sourceDataRecordThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataRecordThreshold"]));
    }
    if (m.find("sourceDataSizeThreshold") != m.end() && !m["sourceDataSizeThreshold"].empty()) {
      sourceDataSizeThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataSizeThreshold"]));
    }
  }


  virtual ~ListFilteringAlgorithmsResponseBodyResultMetaThreshold() = default;
};
class ListFilteringAlgorithmsResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> category{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> cron{};
  shared_ptr<bool> cronEnabled{};
  shared_ptr<string> description{};
  shared_ptr<ListFilteringAlgorithmsResponseBodyResultMetaExtInfo> extInfo{};
  shared_ptr<string> metaType{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> taskId{};
  shared_ptr<ListFilteringAlgorithmsResponseBodyResultMetaThreshold> threshold{};
  shared_ptr<string> type{};

  ListFilteringAlgorithmsResponseBodyResultMeta() {}

  explicit ListFilteringAlgorithmsResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["algorithmName"] = boost::any(*algorithmName);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (cronEnabled) {
      res["cronEnabled"] = boost::any(*cronEnabled);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extInfo) {
      res["extInfo"] = extInfo ? boost::any(extInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (threshold) {
      res["threshold"] = threshold ? boost::any(threshold->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmName") != m.end() && !m["algorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["algorithmName"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("cronEnabled") != m.end() && !m["cronEnabled"].empty()) {
      cronEnabled = make_shared<bool>(boost::any_cast<bool>(m["cronEnabled"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["extInfo"].type()) {
        ListFilteringAlgorithmsResponseBodyResultMetaExtInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extInfo"]));
        extInfo = make_shared<ListFilteringAlgorithmsResponseBodyResultMetaExtInfo>(model1);
      }
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      if (typeid(map<string, boost::any>) == m["threshold"].type()) {
        ListFilteringAlgorithmsResponseBodyResultMetaThreshold model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["threshold"]));
        threshold = make_shared<ListFilteringAlgorithmsResponseBodyResultMetaThreshold>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListFilteringAlgorithmsResponseBodyResultMeta() = default;
};
class ListFilteringAlgorithmsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ListFilteringAlgorithmsResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  ListFilteringAlgorithmsResponseBodyResult() {}

  explicit ListFilteringAlgorithmsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["algorithmId"] = boost::any(*algorithmId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmId") != m.end() && !m["algorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["algorithmId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        ListFilteringAlgorithmsResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<ListFilteringAlgorithmsResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListFilteringAlgorithmsResponseBodyResult() = default;
};
class ListFilteringAlgorithmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListFilteringAlgorithmsResponseBodyHeaders> headers{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListFilteringAlgorithmsResponseBodyResult>> result{};

  ListFilteringAlgorithmsResponseBody() {}

  explicit ListFilteringAlgorithmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = headers ? boost::any(headers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      if (typeid(map<string, boost::any>) == m["headers"].type()) {
        ListFilteringAlgorithmsResponseBodyHeaders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["headers"]));
        headers = make_shared<ListFilteringAlgorithmsResponseBodyHeaders>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListFilteringAlgorithmsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFilteringAlgorithmsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListFilteringAlgorithmsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListFilteringAlgorithmsResponseBody() = default;
};
class ListFilteringAlgorithmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFilteringAlgorithmsResponseBody> body{};

  ListFilteringAlgorithmsResponse() {}

  explicit ListFilteringAlgorithmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFilteringAlgorithmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFilteringAlgorithmsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFilteringAlgorithmsResponse() = default;
};
class ListFlowControlTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  ListFlowControlTaskRequest() {}

  explicit ListFlowControlTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
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
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListFlowControlTaskRequest() = default;
};
class ListFlowControlTaskResponseBodyResultMetaSelectionParams : public Darabonba::Model {
public:
  shared_ptr<string> selectType{};
  shared_ptr<string> selectValue{};
  shared_ptr<string> selectionOperation{};

  ListFlowControlTaskResponseBodyResultMetaSelectionParams() {}

  explicit ListFlowControlTaskResponseBodyResultMetaSelectionParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (selectType) {
      res["selectType"] = boost::any(*selectType);
    }
    if (selectValue) {
      res["selectValue"] = boost::any(*selectValue);
    }
    if (selectionOperation) {
      res["selectionOperation"] = boost::any(*selectionOperation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("selectType") != m.end() && !m["selectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["selectType"]));
    }
    if (m.find("selectValue") != m.end() && !m["selectValue"].empty()) {
      selectValue = make_shared<string>(boost::any_cast<string>(m["selectValue"]));
    }
    if (m.find("selectionOperation") != m.end() && !m["selectionOperation"].empty()) {
      selectionOperation = make_shared<string>(boost::any_cast<string>(m["selectionOperation"]));
    }
  }


  virtual ~ListFlowControlTaskResponseBodyResultMetaSelectionParams() = default;
};
class ListFlowControlTaskResponseBodyResultMetaTarget : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> value{};

  ListFlowControlTaskResponseBodyResultMetaTarget() {}

  explicit ListFlowControlTaskResponseBodyResultMetaTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~ListFlowControlTaskResponseBodyResultMetaTarget() = default;
};
class ListFlowControlTaskResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> metaType{};
  shared_ptr<string> sceneIds{};
  shared_ptr<vector<ListFlowControlTaskResponseBodyResultMetaSelectionParams>> selectionParams{};
  shared_ptr<long> startTime{};
  shared_ptr<ListFlowControlTaskResponseBodyResultMetaTarget> target{};
  shared_ptr<string> taskName{};

  ListFlowControlTaskResponseBodyResultMeta() {}

  explicit ListFlowControlTaskResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (sceneIds) {
      res["sceneIds"] = boost::any(*sceneIds);
    }
    if (selectionParams) {
      vector<boost::any> temp1;
      for(auto item1:*selectionParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["selectionParams"] = boost::any(temp1);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("sceneIds") != m.end() && !m["sceneIds"].empty()) {
      sceneIds = make_shared<string>(boost::any_cast<string>(m["sceneIds"]));
    }
    if (m.find("selectionParams") != m.end() && !m["selectionParams"].empty()) {
      if (typeid(vector<boost::any>) == m["selectionParams"].type()) {
        vector<ListFlowControlTaskResponseBodyResultMetaSelectionParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["selectionParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskResponseBodyResultMetaSelectionParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selectionParams = make_shared<vector<ListFlowControlTaskResponseBodyResultMetaSelectionParams>>(expect1);
      }
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      if (typeid(map<string, boost::any>) == m["target"].type()) {
        ListFlowControlTaskResponseBodyResultMetaTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["target"]));
        target = make_shared<ListFlowControlTaskResponseBodyResultMetaTarget>(model1);
      }
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
  }


  virtual ~ListFlowControlTaskResponseBodyResultMeta() = default;
};
class ListFlowControlTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ListFlowControlTaskResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  ListFlowControlTaskResponseBodyResult() {}

  explicit ListFlowControlTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        ListFlowControlTaskResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<ListFlowControlTaskResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListFlowControlTaskResponseBodyResult() = default;
};
class ListFlowControlTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListFlowControlTaskResponseBodyResult>> result{};

  ListFlowControlTaskResponseBody() {}

  explicit ListFlowControlTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListFlowControlTaskResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListFlowControlTaskResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListFlowControlTaskResponseBody() = default;
};
class ListFlowControlTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowControlTaskResponseBody> body{};

  ListFlowControlTaskResponse() {}

  explicit ListFlowControlTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowControlTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowControlTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskResponse() = default;
};
class ListFlowControlTaskInvalidItemsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> body{};

  ListFlowControlTaskInvalidItemsRequest() {}

  explicit ListFlowControlTaskInvalidItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      body = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListFlowControlTaskInvalidItemsRequest() = default;
};
class ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems : public Darabonba::Model {
public:
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};

  ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems() {}

  explicit ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
  }


  virtual ~ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems() = default;
};
class ListFlowControlTaskInvalidItemsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems>> invalidItems{};

  ListFlowControlTaskInvalidItemsResponseBodyResult() {}

  explicit ListFlowControlTaskInvalidItemsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invalidItems) {
      vector<boost::any> temp1;
      for(auto item1:*invalidItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["invalidItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("invalidItems") != m.end() && !m["invalidItems"].empty()) {
      if (typeid(vector<boost::any>) == m["invalidItems"].type()) {
        vector<ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["invalidItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invalidItems = make_shared<vector<ListFlowControlTaskInvalidItemsResponseBodyResultInvalidItems>>(expect1);
      }
    }
  }


  virtual ~ListFlowControlTaskInvalidItemsResponseBodyResult() = default;
};
class ListFlowControlTaskInvalidItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListFlowControlTaskInvalidItemsResponseBodyResult>> result{};

  ListFlowControlTaskInvalidItemsResponseBody() {}

  explicit ListFlowControlTaskInvalidItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListFlowControlTaskInvalidItemsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskInvalidItemsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListFlowControlTaskInvalidItemsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListFlowControlTaskInvalidItemsResponseBody() = default;
};
class ListFlowControlTaskInvalidItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowControlTaskInvalidItemsResponseBody> body{};

  ListFlowControlTaskInvalidItemsResponse() {}

  explicit ListFlowControlTaskInvalidItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowControlTaskInvalidItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowControlTaskInvalidItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskInvalidItemsResponse() = default;
};
class ListFlowControlTaskItemReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> selectTimeType{};
  shared_ptr<string> selectType{};

  ListFlowControlTaskItemReportsRequest() {}

  explicit ListFlowControlTaskItemReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (selectTimeType) {
      res["selectTimeType"] = boost::any(*selectTimeType);
    }
    if (selectType) {
      res["selectType"] = boost::any(*selectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["count"]));
    }
    if (m.find("selectTimeType") != m.end() && !m["selectTimeType"].empty()) {
      selectTimeType = make_shared<string>(boost::any_cast<string>(m["selectTimeType"]));
    }
    if (m.find("selectType") != m.end() && !m["selectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["selectType"]));
    }
  }


  virtual ~ListFlowControlTaskItemReportsRequest() = default;
};
class ListFlowControlTaskItemReportsResponseBodyResultDetail : public Darabonba::Model {
public:
  shared_ptr<string> accClickPercent{};
  shared_ptr<string> accItemClick{};
  shared_ptr<string> accItemCtr{};
  shared_ptr<string> accItemPv{};
  shared_ptr<string> accPvPercent{};
  shared_ptr<string> accTaskClick{};
  shared_ptr<string> accTaskCtr{};
  shared_ptr<string> accTaskPv{};
  shared_ptr<string> accTaskRank{};
  shared_ptr<string> clickPercent{};
  shared_ptr<string> itemClick{};
  shared_ptr<string> itemCtr{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemPv{};
  shared_ptr<string> itemType{};
  shared_ptr<string> pvPercent{};
  shared_ptr<string> taskClick{};
  shared_ptr<string> taskCtr{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskPv{};
  shared_ptr<string> taskRank{};

  ListFlowControlTaskItemReportsResponseBodyResultDetail() {}

  explicit ListFlowControlTaskItemReportsResponseBodyResultDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accClickPercent) {
      res["accClickPercent"] = boost::any(*accClickPercent);
    }
    if (accItemClick) {
      res["accItemClick"] = boost::any(*accItemClick);
    }
    if (accItemCtr) {
      res["accItemCtr"] = boost::any(*accItemCtr);
    }
    if (accItemPv) {
      res["accItemPv"] = boost::any(*accItemPv);
    }
    if (accPvPercent) {
      res["accPvPercent"] = boost::any(*accPvPercent);
    }
    if (accTaskClick) {
      res["accTaskClick"] = boost::any(*accTaskClick);
    }
    if (accTaskCtr) {
      res["accTaskCtr"] = boost::any(*accTaskCtr);
    }
    if (accTaskPv) {
      res["accTaskPv"] = boost::any(*accTaskPv);
    }
    if (accTaskRank) {
      res["accTaskRank"] = boost::any(*accTaskRank);
    }
    if (clickPercent) {
      res["clickPercent"] = boost::any(*clickPercent);
    }
    if (itemClick) {
      res["itemClick"] = boost::any(*itemClick);
    }
    if (itemCtr) {
      res["itemCtr"] = boost::any(*itemCtr);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemPv) {
      res["itemPv"] = boost::any(*itemPv);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (pvPercent) {
      res["pvPercent"] = boost::any(*pvPercent);
    }
    if (taskClick) {
      res["taskClick"] = boost::any(*taskClick);
    }
    if (taskCtr) {
      res["taskCtr"] = boost::any(*taskCtr);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskPv) {
      res["taskPv"] = boost::any(*taskPv);
    }
    if (taskRank) {
      res["taskRank"] = boost::any(*taskRank);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accClickPercent") != m.end() && !m["accClickPercent"].empty()) {
      accClickPercent = make_shared<string>(boost::any_cast<string>(m["accClickPercent"]));
    }
    if (m.find("accItemClick") != m.end() && !m["accItemClick"].empty()) {
      accItemClick = make_shared<string>(boost::any_cast<string>(m["accItemClick"]));
    }
    if (m.find("accItemCtr") != m.end() && !m["accItemCtr"].empty()) {
      accItemCtr = make_shared<string>(boost::any_cast<string>(m["accItemCtr"]));
    }
    if (m.find("accItemPv") != m.end() && !m["accItemPv"].empty()) {
      accItemPv = make_shared<string>(boost::any_cast<string>(m["accItemPv"]));
    }
    if (m.find("accPvPercent") != m.end() && !m["accPvPercent"].empty()) {
      accPvPercent = make_shared<string>(boost::any_cast<string>(m["accPvPercent"]));
    }
    if (m.find("accTaskClick") != m.end() && !m["accTaskClick"].empty()) {
      accTaskClick = make_shared<string>(boost::any_cast<string>(m["accTaskClick"]));
    }
    if (m.find("accTaskCtr") != m.end() && !m["accTaskCtr"].empty()) {
      accTaskCtr = make_shared<string>(boost::any_cast<string>(m["accTaskCtr"]));
    }
    if (m.find("accTaskPv") != m.end() && !m["accTaskPv"].empty()) {
      accTaskPv = make_shared<string>(boost::any_cast<string>(m["accTaskPv"]));
    }
    if (m.find("accTaskRank") != m.end() && !m["accTaskRank"].empty()) {
      accTaskRank = make_shared<string>(boost::any_cast<string>(m["accTaskRank"]));
    }
    if (m.find("clickPercent") != m.end() && !m["clickPercent"].empty()) {
      clickPercent = make_shared<string>(boost::any_cast<string>(m["clickPercent"]));
    }
    if (m.find("itemClick") != m.end() && !m["itemClick"].empty()) {
      itemClick = make_shared<string>(boost::any_cast<string>(m["itemClick"]));
    }
    if (m.find("itemCtr") != m.end() && !m["itemCtr"].empty()) {
      itemCtr = make_shared<string>(boost::any_cast<string>(m["itemCtr"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemPv") != m.end() && !m["itemPv"].empty()) {
      itemPv = make_shared<string>(boost::any_cast<string>(m["itemPv"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("pvPercent") != m.end() && !m["pvPercent"].empty()) {
      pvPercent = make_shared<string>(boost::any_cast<string>(m["pvPercent"]));
    }
    if (m.find("taskClick") != m.end() && !m["taskClick"].empty()) {
      taskClick = make_shared<string>(boost::any_cast<string>(m["taskClick"]));
    }
    if (m.find("taskCtr") != m.end() && !m["taskCtr"].empty()) {
      taskCtr = make_shared<string>(boost::any_cast<string>(m["taskCtr"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskPv") != m.end() && !m["taskPv"].empty()) {
      taskPv = make_shared<string>(boost::any_cast<string>(m["taskPv"]));
    }
    if (m.find("taskRank") != m.end() && !m["taskRank"].empty()) {
      taskRank = make_shared<string>(boost::any_cast<string>(m["taskRank"]));
    }
  }


  virtual ~ListFlowControlTaskItemReportsResponseBodyResultDetail() = default;
};
class ListFlowControlTaskItemReportsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowControlTaskItemReportsResponseBodyResultDetail>> detail{};

  ListFlowControlTaskItemReportsResponseBodyResult() {}

  explicit ListFlowControlTaskItemReportsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<ListFlowControlTaskItemReportsResponseBodyResultDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskItemReportsResponseBodyResultDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<ListFlowControlTaskItemReportsResponseBodyResultDetail>>(expect1);
      }
    }
  }


  virtual ~ListFlowControlTaskItemReportsResponseBodyResult() = default;
};
class ListFlowControlTaskItemReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListFlowControlTaskItemReportsResponseBodyResult> result{};

  ListFlowControlTaskItemReportsResponseBody() {}

  explicit ListFlowControlTaskItemReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListFlowControlTaskItemReportsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListFlowControlTaskItemReportsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskItemReportsResponseBody() = default;
};
class ListFlowControlTaskItemReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowControlTaskItemReportsResponseBody> body{};

  ListFlowControlTaskItemReportsResponse() {}

  explicit ListFlowControlTaskItemReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowControlTaskItemReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowControlTaskItemReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskItemReportsResponse() = default;
};
class ListFlowControlTaskItemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> size{};

  ListFlowControlTaskItemsRequest() {}

  explicit ListFlowControlTaskItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListFlowControlTaskItemsRequest() = default;
};
class ListFlowControlTaskItemsResponseBodyResultDetail : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> categoryPath{};
  shared_ptr<string> channel{};
  shared_ptr<string> duration{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> weight{};

  ListFlowControlTaskItemsResponseBodyResultDetail() {}

  explicit ListFlowControlTaskItemsResponseBodyResultDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["author"] = boost::any(*author);
    }
    if (categoryPath) {
      res["categoryPath"] = boost::any(*categoryPath);
    }
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (pubTime) {
      res["pubTime"] = boost::any(*pubTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("author") != m.end() && !m["author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["author"]));
    }
    if (m.find("categoryPath") != m.end() && !m["categoryPath"].empty()) {
      categoryPath = make_shared<string>(boost::any_cast<string>(m["categoryPath"]));
    }
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["duration"]));
    }
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["lastModifyTime"]));
    }
    if (m.find("pubTime") != m.end() && !m["pubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["pubTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["weight"]));
    }
  }


  virtual ~ListFlowControlTaskItemsResponseBodyResultDetail() = default;
};
class ListFlowControlTaskItemsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowControlTaskItemsResponseBodyResultDetail>> detail{};
  shared_ptr<string> totalCount{};
  shared_ptr<string> validCount{};

  ListFlowControlTaskItemsResponseBodyResult() {}

  explicit ListFlowControlTaskItemsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (validCount) {
      res["validCount"] = boost::any(*validCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<ListFlowControlTaskItemsResponseBodyResultDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskItemsResponseBodyResultDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<ListFlowControlTaskItemsResponseBodyResultDetail>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["totalCount"]));
    }
    if (m.find("validCount") != m.end() && !m["validCount"].empty()) {
      validCount = make_shared<string>(boost::any_cast<string>(m["validCount"]));
    }
  }


  virtual ~ListFlowControlTaskItemsResponseBodyResult() = default;
};
class ListFlowControlTaskItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListFlowControlTaskItemsResponseBodyResult> result{};

  ListFlowControlTaskItemsResponseBody() {}

  explicit ListFlowControlTaskItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListFlowControlTaskItemsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListFlowControlTaskItemsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskItemsResponseBody() = default;
};
class ListFlowControlTaskItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowControlTaskItemsResponseBody> body{};

  ListFlowControlTaskItemsResponse() {}

  explicit ListFlowControlTaskItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowControlTaskItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowControlTaskItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskItemsResponse() = default;
};
class ListFlowControlTaskReferenceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<double> last7PvPercent{};
  shared_ptr<double> last7ScenePv{};
  shared_ptr<double> last7TaskPv{};
  shared_ptr<double> lastPvPercent{};
  shared_ptr<long> lastScenePv{};
  shared_ptr<long> lastTaskPv{};
  shared_ptr<string> referenceId{};

  ListFlowControlTaskReferenceResponseBodyResult() {}

  explicit ListFlowControlTaskReferenceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (last7PvPercent) {
      res["last7PvPercent"] = boost::any(*last7PvPercent);
    }
    if (last7ScenePv) {
      res["last7ScenePv"] = boost::any(*last7ScenePv);
    }
    if (last7TaskPv) {
      res["last7TaskPv"] = boost::any(*last7TaskPv);
    }
    if (lastPvPercent) {
      res["lastPvPercent"] = boost::any(*lastPvPercent);
    }
    if (lastScenePv) {
      res["lastScenePv"] = boost::any(*lastScenePv);
    }
    if (lastTaskPv) {
      res["lastTaskPv"] = boost::any(*lastTaskPv);
    }
    if (referenceId) {
      res["referenceId"] = boost::any(*referenceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("last7PvPercent") != m.end() && !m["last7PvPercent"].empty()) {
      last7PvPercent = make_shared<double>(boost::any_cast<double>(m["last7PvPercent"]));
    }
    if (m.find("last7ScenePv") != m.end() && !m["last7ScenePv"].empty()) {
      last7ScenePv = make_shared<double>(boost::any_cast<double>(m["last7ScenePv"]));
    }
    if (m.find("last7TaskPv") != m.end() && !m["last7TaskPv"].empty()) {
      last7TaskPv = make_shared<double>(boost::any_cast<double>(m["last7TaskPv"]));
    }
    if (m.find("lastPvPercent") != m.end() && !m["lastPvPercent"].empty()) {
      lastPvPercent = make_shared<double>(boost::any_cast<double>(m["lastPvPercent"]));
    }
    if (m.find("lastScenePv") != m.end() && !m["lastScenePv"].empty()) {
      lastScenePv = make_shared<long>(boost::any_cast<long>(m["lastScenePv"]));
    }
    if (m.find("lastTaskPv") != m.end() && !m["lastTaskPv"].empty()) {
      lastTaskPv = make_shared<long>(boost::any_cast<long>(m["lastTaskPv"]));
    }
    if (m.find("referenceId") != m.end() && !m["referenceId"].empty()) {
      referenceId = make_shared<string>(boost::any_cast<string>(m["referenceId"]));
    }
  }


  virtual ~ListFlowControlTaskReferenceResponseBodyResult() = default;
};
class ListFlowControlTaskReferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListFlowControlTaskReferenceResponseBodyResult> result{};

  ListFlowControlTaskReferenceResponseBody() {}

  explicit ListFlowControlTaskReferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListFlowControlTaskReferenceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListFlowControlTaskReferenceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskReferenceResponseBody() = default;
};
class ListFlowControlTaskReferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowControlTaskReferenceResponseBody> body{};

  ListFlowControlTaskReferenceResponse() {}

  explicit ListFlowControlTaskReferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowControlTaskReferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowControlTaskReferenceResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskReferenceResponse() = default;
};
class ListFlowControlTaskReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  ListFlowControlTaskReportsRequest() {}

  explicit ListFlowControlTaskReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
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
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~ListFlowControlTaskReportsRequest() = default;
};
class ListFlowControlTaskReportsResponseBodyResultMetricsDetails : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<long> val{};

  ListFlowControlTaskReportsResponseBodyResultMetricsDetails() {}

  explicit ListFlowControlTaskReportsResponseBodyResultMetricsDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (val) {
      res["val"] = boost::any(*val);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("val") != m.end() && !m["val"].empty()) {
      val = make_shared<long>(boost::any_cast<long>(m["val"]));
    }
  }


  virtual ~ListFlowControlTaskReportsResponseBodyResultMetricsDetails() = default;
};
class ListFlowControlTaskReportsResponseBodyResultMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowControlTaskReportsResponseBodyResultMetricsDetails>> details{};
  shared_ptr<string> type{};

  ListFlowControlTaskReportsResponseBodyResultMetrics() {}

  explicit ListFlowControlTaskReportsResponseBodyResultMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["details"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("details") != m.end() && !m["details"].empty()) {
      if (typeid(vector<boost::any>) == m["details"].type()) {
        vector<ListFlowControlTaskReportsResponseBodyResultMetricsDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskReportsResponseBodyResultMetricsDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<ListFlowControlTaskReportsResponseBodyResultMetricsDetails>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListFlowControlTaskReportsResponseBodyResultMetrics() = default;
};
class ListFlowControlTaskReportsResponseBodyResultTotal : public Darabonba::Model {
public:
  shared_ptr<double> invalidPercent{};
  shared_ptr<double> accTaskCtr{};
  shared_ptr<long> accTaskPv{};
  shared_ptr<double> accTotalCtr{};

  ListFlowControlTaskReportsResponseBodyResultTotal() {}

  explicit ListFlowControlTaskReportsResponseBodyResultTotal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invalidPercent) {
      res["InvalidPercent"] = boost::any(*invalidPercent);
    }
    if (accTaskCtr) {
      res["accTaskCtr"] = boost::any(*accTaskCtr);
    }
    if (accTaskPv) {
      res["accTaskPv"] = boost::any(*accTaskPv);
    }
    if (accTotalCtr) {
      res["accTotalCtr"] = boost::any(*accTotalCtr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvalidPercent") != m.end() && !m["InvalidPercent"].empty()) {
      invalidPercent = make_shared<double>(boost::any_cast<double>(m["InvalidPercent"]));
    }
    if (m.find("accTaskCtr") != m.end() && !m["accTaskCtr"].empty()) {
      accTaskCtr = make_shared<double>(boost::any_cast<double>(m["accTaskCtr"]));
    }
    if (m.find("accTaskPv") != m.end() && !m["accTaskPv"].empty()) {
      accTaskPv = make_shared<long>(boost::any_cast<long>(m["accTaskPv"]));
    }
    if (m.find("accTotalCtr") != m.end() && !m["accTotalCtr"].empty()) {
      accTotalCtr = make_shared<double>(boost::any_cast<double>(m["accTotalCtr"]));
    }
  }


  virtual ~ListFlowControlTaskReportsResponseBodyResultTotal() = default;
};
class ListFlowControlTaskReportsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowControlTaskReportsResponseBodyResultMetrics>> metrics{};
  shared_ptr<ListFlowControlTaskReportsResponseBodyResultTotal> total{};

  ListFlowControlTaskReportsResponseBodyResult() {}

  explicit ListFlowControlTaskReportsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["metrics"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = total ? boost::any(total->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metrics") != m.end() && !m["metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["metrics"].type()) {
        vector<ListFlowControlTaskReportsResponseBodyResultMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowControlTaskReportsResponseBodyResultMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<ListFlowControlTaskReportsResponseBodyResultMetrics>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      if (typeid(map<string, boost::any>) == m["total"].type()) {
        ListFlowControlTaskReportsResponseBodyResultTotal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["total"]));
        total = make_shared<ListFlowControlTaskReportsResponseBodyResultTotal>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskReportsResponseBodyResult() = default;
};
class ListFlowControlTaskReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListFlowControlTaskReportsResponseBodyResult> result{};

  ListFlowControlTaskReportsResponseBody() {}

  explicit ListFlowControlTaskReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListFlowControlTaskReportsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListFlowControlTaskReportsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskReportsResponseBody() = default;
};
class ListFlowControlTaskReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowControlTaskReportsResponseBody> body{};

  ListFlowControlTaskReportsResponse() {}

  explicit ListFlowControlTaskReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowControlTaskReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowControlTaskReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowControlTaskReportsResponse() = default;
};
class ListIndexVersionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> builtTime{};
  shared_ptr<string> code{};
  shared_ptr<long> costSeconds{};
  shared_ptr<string> flowType{};
  shared_ptr<string> message{};
  shared_ptr<long> progress{};
  shared_ptr<bool> rollbackEnabled{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<string> switchedTime{};
  shared_ptr<string> versionId{};

  ListIndexVersionsResponseBodyResult() {}

  explicit ListIndexVersionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (builtTime) {
      res["builtTime"] = boost::any(*builtTime);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (costSeconds) {
      res["costSeconds"] = boost::any(*costSeconds);
    }
    if (flowType) {
      res["flowType"] = boost::any(*flowType);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (rollbackEnabled) {
      res["rollbackEnabled"] = boost::any(*rollbackEnabled);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("builtTime") != m.end() && !m["builtTime"].empty()) {
      builtTime = make_shared<string>(boost::any_cast<string>(m["builtTime"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("costSeconds") != m.end() && !m["costSeconds"].empty()) {
      costSeconds = make_shared<long>(boost::any_cast<long>(m["costSeconds"]));
    }
    if (m.find("flowType") != m.end() && !m["flowType"].empty()) {
      flowType = make_shared<string>(boost::any_cast<string>(m["flowType"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["progress"]));
    }
    if (m.find("rollbackEnabled") != m.end() && !m["rollbackEnabled"].empty()) {
      rollbackEnabled = make_shared<bool>(boost::any_cast<bool>(m["rollbackEnabled"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<string>(boost::any_cast<string>(m["switchedTime"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~ListIndexVersionsResponseBodyResult() = default;
};
class ListIndexVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIndexVersionsResponseBodyResult>> result{};

  ListIndexVersionsResponseBody() {}

  explicit ListIndexVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListIndexVersionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndexVersionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListIndexVersionsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListIndexVersionsResponseBody() = default;
};
class ListIndexVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIndexVersionsResponseBody> body{};

  ListIndexVersionsResponse() {}

  explicit ListIndexVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndexVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndexVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndexVersionsResponse() = default;
};
class ListInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> page{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};

  ListInstanceRequest() {}

  explicit ListInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["expiredTime"] = boost::any(*expiredTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expiredTime") != m.end() && !m["expiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expiredTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListInstanceRequest() = default;
};
class ListInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> dataSetVersion{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> industry{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListInstanceResponseBodyResult() {}

  explicit ListInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (dataSetVersion) {
      res["dataSetVersion"] = boost::any(*dataSetVersion);
    }
    if (expiredTime) {
      res["expiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
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
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("dataSetVersion") != m.end() && !m["dataSetVersion"].empty()) {
      dataSetVersion = make_shared<string>(boost::any_cast<string>(m["dataSetVersion"]));
    }
    if (m.find("expiredTime") != m.end() && !m["expiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expiredTime"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListInstanceResponseBodyResult() = default;
};
class ListInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInstanceResponseBodyResult>> result{};

  ListInstanceResponseBody() {}

  explicit ListInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListInstanceResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListInstanceResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListInstanceResponseBody() = default;
};
class ListInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceResponseBody> body{};

  ListInstanceResponse() {}

  explicit ListInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceResponse() = default;
};
class ListInstanceTaskResponseBodyResultSubProgressInfos : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<long> finishedNum{};
  shared_ptr<long> progress{};
  shared_ptr<long> totalNum{};
  shared_ptr<string> type{};

  ListInstanceTaskResponseBodyResultSubProgressInfos() {}

  explicit ListInstanceTaskResponseBodyResultSubProgressInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (finishedNum) {
      res["finishedNum"] = boost::any(*finishedNum);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (totalNum) {
      res["totalNum"] = boost::any(*totalNum);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["detail"]));
    }
    if (m.find("finishedNum") != m.end() && !m["finishedNum"].empty()) {
      finishedNum = make_shared<long>(boost::any_cast<long>(m["finishedNum"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["progress"]));
    }
    if (m.find("totalNum") != m.end() && !m["totalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["totalNum"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListInstanceTaskResponseBodyResultSubProgressInfos() = default;
};
class ListInstanceTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<ListInstanceTaskResponseBodyResultSubProgressInfos>> subProgressInfos{};
  shared_ptr<long> totalProgress{};

  ListInstanceTaskResponseBodyResult() {}

  explicit ListInstanceTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (subProgressInfos) {
      vector<boost::any> temp1;
      for(auto item1:*subProgressInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subProgressInfos"] = boost::any(temp1);
    }
    if (totalProgress) {
      res["totalProgress"] = boost::any(*totalProgress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("subProgressInfos") != m.end() && !m["subProgressInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["subProgressInfos"].type()) {
        vector<ListInstanceTaskResponseBodyResultSubProgressInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subProgressInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceTaskResponseBodyResultSubProgressInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subProgressInfos = make_shared<vector<ListInstanceTaskResponseBodyResultSubProgressInfos>>(expect1);
      }
    }
    if (m.find("totalProgress") != m.end() && !m["totalProgress"].empty()) {
      totalProgress = make_shared<long>(boost::any_cast<long>(m["totalProgress"]));
    }
  }


  virtual ~ListInstanceTaskResponseBodyResult() = default;
};
class ListInstanceTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInstanceTaskResponseBodyResult>> result{};

  ListInstanceTaskResponseBody() {}

  explicit ListInstanceTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListInstanceTaskResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceTaskResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListInstanceTaskResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListInstanceTaskResponseBody() = default;
};
class ListInstanceTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceTaskResponseBody> body{};

  ListInstanceTaskResponse() {}

  explicit ListInstanceTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceTaskResponse() = default;
};
class ListItemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> size{};
  shared_ptr<bool> strategyUsed{};
  shared_ptr<bool> withInvalidDetail{};

  ListItemsRequest() {}

  explicit ListItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (strategyUsed) {
      res["strategyUsed"] = boost::any(*strategyUsed);
    }
    if (withInvalidDetail) {
      res["withInvalidDetail"] = boost::any(*withInvalidDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("strategyUsed") != m.end() && !m["strategyUsed"].empty()) {
      strategyUsed = make_shared<bool>(boost::any_cast<bool>(m["strategyUsed"]));
    }
    if (m.find("withInvalidDetail") != m.end() && !m["withInvalidDetail"].empty()) {
      withInvalidDetail = make_shared<bool>(boost::any_cast<bool>(m["withInvalidDetail"]));
    }
  }


  virtual ~ListItemsRequest() = default;
};
class ListItemsResponseBodyResultDetail : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> brandId{};
  shared_ptr<string> categoryPath{};
  shared_ptr<string> channel{};
  shared_ptr<string> duration{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> shopId{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  ListItemsResponseBodyResultDetail() {}

  explicit ListItemsResponseBodyResultDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["author"] = boost::any(*author);
    }
    if (brandId) {
      res["brandId"] = boost::any(*brandId);
    }
    if (categoryPath) {
      res["categoryPath"] = boost::any(*categoryPath);
    }
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (pubTime) {
      res["pubTime"] = boost::any(*pubTime);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("author") != m.end() && !m["author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["author"]));
    }
    if (m.find("brandId") != m.end() && !m["brandId"].empty()) {
      brandId = make_shared<string>(boost::any_cast<string>(m["brandId"]));
    }
    if (m.find("categoryPath") != m.end() && !m["categoryPath"].empty()) {
      categoryPath = make_shared<string>(boost::any_cast<string>(m["categoryPath"]));
    }
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["duration"]));
    }
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("pubTime") != m.end() && !m["pubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["pubTime"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ListItemsResponseBodyResultDetail() = default;
};
class ListItemsResponseBodyResultTotal : public Darabonba::Model {
public:
  shared_ptr<long> instanceRecommendItem{};
  shared_ptr<long> queryCount{};
  shared_ptr<long> sceneRecommendItem{};
  shared_ptr<long> sceneWeightItem{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> weightItem{};

  ListItemsResponseBodyResultTotal() {}

  explicit ListItemsResponseBodyResultTotal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceRecommendItem) {
      res["instanceRecommendItem"] = boost::any(*instanceRecommendItem);
    }
    if (queryCount) {
      res["queryCount"] = boost::any(*queryCount);
    }
    if (sceneRecommendItem) {
      res["sceneRecommendItem"] = boost::any(*sceneRecommendItem);
    }
    if (sceneWeightItem) {
      res["sceneWeightItem"] = boost::any(*sceneWeightItem);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (weightItem) {
      res["weightItem"] = boost::any(*weightItem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceRecommendItem") != m.end() && !m["instanceRecommendItem"].empty()) {
      instanceRecommendItem = make_shared<long>(boost::any_cast<long>(m["instanceRecommendItem"]));
    }
    if (m.find("queryCount") != m.end() && !m["queryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["queryCount"]));
    }
    if (m.find("sceneRecommendItem") != m.end() && !m["sceneRecommendItem"].empty()) {
      sceneRecommendItem = make_shared<long>(boost::any_cast<long>(m["sceneRecommendItem"]));
    }
    if (m.find("sceneWeightItem") != m.end() && !m["sceneWeightItem"].empty()) {
      sceneWeightItem = make_shared<long>(boost::any_cast<long>(m["sceneWeightItem"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("weightItem") != m.end() && !m["weightItem"].empty()) {
      weightItem = make_shared<long>(boost::any_cast<long>(m["weightItem"]));
    }
  }


  virtual ~ListItemsResponseBodyResultTotal() = default;
};
class ListItemsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListItemsResponseBodyResultDetail>> detail{};
  shared_ptr<ListItemsResponseBodyResultTotal> total{};

  ListItemsResponseBodyResult() {}

  explicit ListItemsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["total"] = total ? boost::any(total->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<ListItemsResponseBodyResultDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListItemsResponseBodyResultDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<ListItemsResponseBodyResultDetail>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      if (typeid(map<string, boost::any>) == m["total"].type()) {
        ListItemsResponseBodyResultTotal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["total"]));
        total = make_shared<ListItemsResponseBodyResultTotal>(model1);
      }
    }
  }


  virtual ~ListItemsResponseBodyResult() = default;
};
class ListItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListItemsResponseBodyResult> result{};

  ListItemsResponseBody() {}

  explicit ListItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListItemsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListItemsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListItemsResponseBody() = default;
};
class ListItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListItemsResponseBody> body{};

  ListItemsResponse() {}

  explicit ListItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListItemsResponse() = default;
};
class ListLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> page{};
  shared_ptr<string> queryParams{};
  shared_ptr<long> size{};
  shared_ptr<long> startTime{};

  ListLogsRequest() {}

  explicit ListLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (queryParams) {
      res["queryParams"] = boost::any(*queryParams);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("queryParams") != m.end() && !m["queryParams"].empty()) {
      queryParams = make_shared<string>(boost::any_cast<string>(m["queryParams"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~ListLogsRequest() = default;
};
class ListLogsResponseBodyHeaders : public Darabonba::Model {
public:
  shared_ptr<long> xTotalCount{};

  ListLogsResponseBodyHeaders() {}

  explicit ListLogsResponseBodyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (xTotalCount) {
      res["X-Total-Count"] = boost::any(*xTotalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X-Total-Count") != m.end() && !m["X-Total-Count"].empty()) {
      xTotalCount = make_shared<long>(boost::any_cast<long>(m["X-Total-Count"]));
    }
  }


  virtual ~ListLogsResponseBodyHeaders() = default;
};
class ListLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListLogsResponseBodyHeaders> headers{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};

  ListLogsResponseBody() {}

  explicit ListLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (headers) {
      res["headers"] = headers ? boost::any(headers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      if (typeid(map<string, boost::any>) == m["headers"].type()) {
        ListLogsResponseBodyHeaders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["headers"]));
        headers = make_shared<ListLogsResponseBodyHeaders>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListLogsResponseBody() = default;
};
class ListLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLogsResponseBody> body{};

  ListLogsResponse() {}

  explicit ListLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogsResponse() = default;
};
class ListMixCategoriesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<long>> categories{};

  ListMixCategoriesResponseBodyResult() {}

  explicit ListMixCategoriesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      categories = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ListMixCategoriesResponseBodyResult() = default;
};
class ListMixCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListMixCategoriesResponseBodyResult>> result{};

  ListMixCategoriesResponseBody() {}

  explicit ListMixCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListMixCategoriesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMixCategoriesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListMixCategoriesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListMixCategoriesResponseBody() = default;
};
class ListMixCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMixCategoriesResponseBody> body{};

  ListMixCategoriesResponse() {}

  explicit ListMixCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMixCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMixCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMixCategoriesResponse() = default;
};
class ListOfflineStoragesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<vector<uint8_t>> tableName{};

  ListOfflineStoragesResponseBodyResult() {}

  explicit ListOfflineStoragesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["tableName"]));
    }
  }


  virtual ~ListOfflineStoragesResponseBodyResult() = default;
};
class ListOfflineStoragesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> requestId{};
  shared_ptr<vector<ListOfflineStoragesResponseBodyResult>> result{};

  ListOfflineStoragesResponseBody() {}

  explicit ListOfflineStoragesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListOfflineStoragesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOfflineStoragesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListOfflineStoragesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListOfflineStoragesResponseBody() = default;
};
class ListOfflineStoragesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOfflineStoragesResponseBody> body{};

  ListOfflineStoragesResponse() {}

  explicit ListOfflineStoragesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOfflineStoragesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOfflineStoragesResponseBody>(model1);
      }
    }
  }


  virtual ~ListOfflineStoragesResponse() = default;
};
class ListRankingModelTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> size{};

  ListRankingModelTemplatesRequest() {}

  explicit ListRankingModelTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListRankingModelTemplatesRequest() = default;
};
class ListRankingModelTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RankingModelTemplate>> result{};

  ListRankingModelTemplatesResponseBody() {}

  explicit ListRankingModelTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<RankingModelTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RankingModelTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<RankingModelTemplate>>(expect1);
      }
    }
  }


  virtual ~ListRankingModelTemplatesResponseBody() = default;
};
class ListRankingModelTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRankingModelTemplatesResponseBody> body{};

  ListRankingModelTemplatesResponse() {}

  explicit ListRankingModelTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRankingModelTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRankingModelTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRankingModelTemplatesResponse() = default;
};
class ListRankingModelVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};

  ListRankingModelVersionsRequest() {}

  explicit ListRankingModelVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~ListRankingModelVersionsRequest() = default;
};
class ListRankingModelVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RankingModelVersion>> result{};

  ListRankingModelVersionsResponseBody() {}

  explicit ListRankingModelVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<RankingModelVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RankingModelVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<RankingModelVersion>>(expect1);
      }
    }
  }


  virtual ~ListRankingModelVersionsResponseBody() = default;
};
class ListRankingModelVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRankingModelVersionsResponseBody> body{};

  ListRankingModelVersionsResponse() {}

  explicit ListRankingModelVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRankingModelVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRankingModelVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRankingModelVersionsResponse() = default;
};
class ListRankingModelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<string> rankingModelId{};
  shared_ptr<long> size{};

  ListRankingModelsRequest() {}

  explicit ListRankingModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (rankingModelId) {
      res["rankingModelId"] = boost::any(*rankingModelId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("rankingModelId") != m.end() && !m["rankingModelId"].empty()) {
      rankingModelId = make_shared<string>(boost::any_cast<string>(m["rankingModelId"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListRankingModelsRequest() = default;
};
class ListRankingModelsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> rankingModelId{};

  ListRankingModelsResponseBodyResult() {}

  explicit ListRankingModelsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (rankingModelId) {
      res["rankingModelId"] = boost::any(*rankingModelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("rankingModelId") != m.end() && !m["rankingModelId"].empty()) {
      rankingModelId = make_shared<string>(boost::any_cast<string>(m["rankingModelId"]));
    }
  }


  virtual ~ListRankingModelsResponseBodyResult() = default;
};
class ListRankingModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRankingModelsResponseBodyResult>> result{};

  ListRankingModelsResponseBody() {}

  explicit ListRankingModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRankingModelsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRankingModelsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRankingModelsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRankingModelsResponseBody() = default;
};
class ListRankingModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRankingModelsResponseBody> body{};

  ListRankingModelsResponse() {}

  explicit ListRankingModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRankingModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRankingModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRankingModelsResponse() = default;
};
class ListRankingSystemHistoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> operateType{};
  shared_ptr<long> page{};
  shared_ptr<long> size{};

  ListRankingSystemHistoriesRequest() {}

  explicit ListRankingSystemHistoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateType) {
      res["operateType"] = boost::any(*operateType);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operateType") != m.end() && !m["operateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["operateType"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListRankingSystemHistoriesRequest() = default;
};
class ListRankingSystemHistoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RankingSystemHistory>> result{};

  ListRankingSystemHistoriesResponseBody() {}

  explicit ListRankingSystemHistoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<RankingSystemHistory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RankingSystemHistory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<RankingSystemHistory>>(expect1);
      }
    }
  }


  virtual ~ListRankingSystemHistoriesResponseBody() = default;
};
class ListRankingSystemHistoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRankingSystemHistoriesResponseBody> body{};

  ListRankingSystemHistoriesResponse() {}

  explicit ListRankingSystemHistoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRankingSystemHistoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRankingSystemHistoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRankingSystemHistoriesResponse() = default;
};
class ListRankingSystemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deployStatus{};
  shared_ptr<string> name{};
  shared_ptr<long> page{};
  shared_ptr<long> size{};

  ListRankingSystemsRequest() {}

  explicit ListRankingSystemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployStatus) {
      res["deployStatus"] = boost::any(*deployStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deployStatus") != m.end() && !m["deployStatus"].empty()) {
      deployStatus = make_shared<string>(boost::any_cast<string>(m["deployStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListRankingSystemsRequest() = default;
};
class ListRankingSystemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RankingSystem>> result{};

  ListRankingSystemsResponseBody() {}

  explicit ListRankingSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<RankingSystem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RankingSystem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<RankingSystem>>(expect1);
      }
    }
  }


  virtual ~ListRankingSystemsResponseBody() = default;
};
class ListRankingSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRankingSystemsResponseBody> body{};

  ListRankingSystemsResponse() {}

  explicit ListRankingSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRankingSystemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRankingSystemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRankingSystemsResponse() = default;
};
class ListRuleConditionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> selectType{};
  shared_ptr<string> selectValue{};
  shared_ptr<string> selectionOperation{};

  ListRuleConditionsResponseBodyResult() {}

  explicit ListRuleConditionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (selectType) {
      res["selectType"] = boost::any(*selectType);
    }
    if (selectValue) {
      res["selectValue"] = boost::any(*selectValue);
    }
    if (selectionOperation) {
      res["selectionOperation"] = boost::any(*selectionOperation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("selectType") != m.end() && !m["selectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["selectType"]));
    }
    if (m.find("selectValue") != m.end() && !m["selectValue"].empty()) {
      selectValue = make_shared<string>(boost::any_cast<string>(m["selectValue"]));
    }
    if (m.find("selectionOperation") != m.end() && !m["selectionOperation"].empty()) {
      selectionOperation = make_shared<string>(boost::any_cast<string>(m["selectionOperation"]));
    }
  }


  virtual ~ListRuleConditionsResponseBodyResult() = default;
};
class ListRuleConditionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRuleConditionsResponseBodyResult>> result{};

  ListRuleConditionsResponseBody() {}

  explicit ListRuleConditionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRuleConditionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRuleConditionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRuleConditionsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRuleConditionsResponseBody() = default;
};
class ListRuleConditionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRuleConditionsResponseBody> body{};

  ListRuleConditionsResponse() {}

  explicit ListRuleConditionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRuleConditionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRuleConditionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRuleConditionsResponse() = default;
};
class ListRuleTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  ListRuleTasksRequest() {}

  explicit ListRuleTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
  }


  virtual ~ListRuleTasksRequest() = default;
};
class ListRuleTasksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> finishRate{};
  shared_ptr<long> finishTime{};

  ListRuleTasksResponseBodyResult() {}

  explicit ListRuleTasksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishRate) {
      res["finishRate"] = boost::any(*finishRate);
    }
    if (finishTime) {
      res["finishTime"] = boost::any(*finishTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishRate") != m.end() && !m["finishRate"].empty()) {
      finishRate = make_shared<long>(boost::any_cast<long>(m["finishRate"]));
    }
    if (m.find("finishTime") != m.end() && !m["finishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["finishTime"]));
    }
  }


  virtual ~ListRuleTasksResponseBodyResult() = default;
};
class ListRuleTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListRuleTasksResponseBodyResult> result{};

  ListRuleTasksResponseBody() {}

  explicit ListRuleTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListRuleTasksResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListRuleTasksResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListRuleTasksResponseBody() = default;
};
class ListRuleTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRuleTasksResponseBody> body{};

  ListRuleTasksResponse() {}

  explicit ListRuleTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRuleTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRuleTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListRuleTasksResponse() = default;
};
class ListRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> page{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> sceneId{};
  shared_ptr<long> size{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (ruleType) {
      res["ruleType"] = boost::any(*ruleType);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("ruleType") != m.end() && !m["ruleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["ruleType"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListRulesRequest() = default;
};
class ListRulesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> status{};

  ListRulesResponseBodyResult() {}

  explicit ListRulesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (ruleId) {
      res["ruleId"] = boost::any(*ruleId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("ruleId") != m.end() && !m["ruleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["ruleId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListRulesResponseBodyResult() = default;
};
class ListRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRulesResponseBodyResult>> result{};

  ListRulesResponseBody() {}

  explicit ListRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListRulesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListRulesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListRulesResponseBody() = default;
};
class ListRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRulesResponseBody> body{};

  ListRulesResponse() {}

  explicit ListRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRulesResponse() = default;
};
class ListSampleFormatConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ListSampleFormatConfigsResponseBody() {}

  explicit ListSampleFormatConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListSampleFormatConfigsResponseBody() = default;
};
class ListSampleFormatConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSampleFormatConfigsResponseBody> body{};

  ListSampleFormatConfigsResponse() {}

  explicit ListSampleFormatConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSampleFormatConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSampleFormatConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSampleFormatConfigsResponse() = default;
};
class ListSamplesRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<string> sampleId{};
  shared_ptr<long> size{};

  ListSamplesRequest() {}

  explicit ListSamplesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (sampleId) {
      res["sampleId"] = boost::any(*sampleId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("sampleId") != m.end() && !m["sampleId"].empty()) {
      sampleId = make_shared<string>(boost::any_cast<string>(m["sampleId"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListSamplesRequest() = default;
};
class ListSamplesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<Sample>> result{};

  ListSamplesResponseBody() {}

  explicit ListSamplesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<Sample> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Sample model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<Sample>>(expect1);
      }
    }
  }


  virtual ~ListSamplesResponseBody() = default;
};
class ListSamplesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSamplesResponseBody> body{};

  ListSamplesResponse() {}

  explicit ListSamplesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSamplesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSamplesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSamplesResponse() = default;
};
class ListSceneItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> operationRuleId{};
  shared_ptr<long> page{};
  shared_ptr<string> previewType{};
  shared_ptr<long> queryCount{};
  shared_ptr<string> selectionRuleId{};
  shared_ptr<long> size{};

  ListSceneItemsRequest() {}

  explicit ListSceneItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationRuleId) {
      res["operationRuleId"] = boost::any(*operationRuleId);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (previewType) {
      res["previewType"] = boost::any(*previewType);
    }
    if (queryCount) {
      res["queryCount"] = boost::any(*queryCount);
    }
    if (selectionRuleId) {
      res["selectionRuleId"] = boost::any(*selectionRuleId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operationRuleId") != m.end() && !m["operationRuleId"].empty()) {
      operationRuleId = make_shared<string>(boost::any_cast<string>(m["operationRuleId"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("previewType") != m.end() && !m["previewType"].empty()) {
      previewType = make_shared<string>(boost::any_cast<string>(m["previewType"]));
    }
    if (m.find("queryCount") != m.end() && !m["queryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["queryCount"]));
    }
    if (m.find("selectionRuleId") != m.end() && !m["selectionRuleId"].empty()) {
      selectionRuleId = make_shared<string>(boost::any_cast<string>(m["selectionRuleId"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListSceneItemsRequest() = default;
};
class ListSceneItemsResponseBodyResultDetail : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> brandId{};
  shared_ptr<string> categoryPath{};
  shared_ptr<string> channel{};
  shared_ptr<string> duration{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> shopId{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  ListSceneItemsResponseBodyResultDetail() {}

  explicit ListSceneItemsResponseBodyResultDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["author"] = boost::any(*author);
    }
    if (brandId) {
      res["brandId"] = boost::any(*brandId);
    }
    if (categoryPath) {
      res["categoryPath"] = boost::any(*categoryPath);
    }
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (pubTime) {
      res["pubTime"] = boost::any(*pubTime);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("author") != m.end() && !m["author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["author"]));
    }
    if (m.find("brandId") != m.end() && !m["brandId"].empty()) {
      brandId = make_shared<string>(boost::any_cast<string>(m["brandId"]));
    }
    if (m.find("categoryPath") != m.end() && !m["categoryPath"].empty()) {
      categoryPath = make_shared<string>(boost::any_cast<string>(m["categoryPath"]));
    }
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["duration"]));
    }
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("pubTime") != m.end() && !m["pubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["pubTime"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ListSceneItemsResponseBodyResultDetail() = default;
};
class ListSceneItemsResponseBodyResultTotal : public Darabonba::Model {
public:
  shared_ptr<long> instanceRecommendItem{};
  shared_ptr<long> sceneRecommendItem{};
  shared_ptr<long> sceneWeightItem{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> weightItem{};

  ListSceneItemsResponseBodyResultTotal() {}

  explicit ListSceneItemsResponseBodyResultTotal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceRecommendItem) {
      res["instanceRecommendItem"] = boost::any(*instanceRecommendItem);
    }
    if (sceneRecommendItem) {
      res["sceneRecommendItem"] = boost::any(*sceneRecommendItem);
    }
    if (sceneWeightItem) {
      res["sceneWeightItem"] = boost::any(*sceneWeightItem);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (weightItem) {
      res["weightItem"] = boost::any(*weightItem);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceRecommendItem") != m.end() && !m["instanceRecommendItem"].empty()) {
      instanceRecommendItem = make_shared<long>(boost::any_cast<long>(m["instanceRecommendItem"]));
    }
    if (m.find("sceneRecommendItem") != m.end() && !m["sceneRecommendItem"].empty()) {
      sceneRecommendItem = make_shared<long>(boost::any_cast<long>(m["sceneRecommendItem"]));
    }
    if (m.find("sceneWeightItem") != m.end() && !m["sceneWeightItem"].empty()) {
      sceneWeightItem = make_shared<long>(boost::any_cast<long>(m["sceneWeightItem"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("weightItem") != m.end() && !m["weightItem"].empty()) {
      weightItem = make_shared<long>(boost::any_cast<long>(m["weightItem"]));
    }
  }


  virtual ~ListSceneItemsResponseBodyResultTotal() = default;
};
class ListSceneItemsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListSceneItemsResponseBodyResultDetail>> detail{};
  shared_ptr<ListSceneItemsResponseBodyResultTotal> total{};

  ListSceneItemsResponseBodyResult() {}

  explicit ListSceneItemsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["total"] = total ? boost::any(total->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<ListSceneItemsResponseBodyResultDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSceneItemsResponseBodyResultDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<ListSceneItemsResponseBodyResultDetail>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      if (typeid(map<string, boost::any>) == m["total"].type()) {
        ListSceneItemsResponseBodyResultTotal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["total"]));
        total = make_shared<ListSceneItemsResponseBodyResultTotal>(model1);
      }
    }
  }


  virtual ~ListSceneItemsResponseBodyResult() = default;
};
class ListSceneItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSceneItemsResponseBodyResult> result{};

  ListSceneItemsResponseBody() {}

  explicit ListSceneItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListSceneItemsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListSceneItemsResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListSceneItemsResponseBody() = default;
};
class ListSceneItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSceneItemsResponseBody> body{};

  ListSceneItemsResponse() {}

  explicit ListSceneItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSceneItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSceneItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSceneItemsResponse() = default;
};
class ListSceneParametersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> sceneId{};
  shared_ptr<vector<string>> traceId{};

  ListSceneParametersResponseBodyResult() {}

  explicit ListSceneParametersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sceneId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sceneId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sceneId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["traceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["traceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      traceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSceneParametersResponseBodyResult() = default;
};
class ListSceneParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSceneParametersResponseBodyResult> result{};

  ListSceneParametersResponseBody() {}

  explicit ListSceneParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListSceneParametersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListSceneParametersResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListSceneParametersResponseBody() = default;
};
class ListSceneParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSceneParametersResponseBody> body{};

  ListSceneParametersResponse() {}

  explicit ListSceneParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSceneParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSceneParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ListSceneParametersResponse() = default;
};
class ListScenesRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<string> sceneId{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};

  ListScenesRequest() {}

  explicit ListScenesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListScenesRequest() = default;
};
class ListScenesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  ListScenesResponseBodyResult() {}

  explicit ListScenesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListScenesResponseBodyResult() = default;
};
class ListScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListScenesResponseBodyResult>> result{};

  ListScenesResponseBody() {}

  explicit ListScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListScenesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScenesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListScenesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListScenesResponseBody() = default;
};
class ListScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScenesResponseBody> body{};

  ListScenesResponse() {}

  explicit ListScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScenesResponseBody>(model1);
      }
    }
  }


  virtual ~ListScenesResponse() = default;
};
class ListUmengAppkeysResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appkey{};
  shared_ptr<string> name{};
  shared_ptr<string> platform{};

  ListUmengAppkeysResponseBodyResult() {}

  explicit ListUmengAppkeysResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appkey) {
      res["appkey"] = boost::any(*appkey);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appkey") != m.end() && !m["appkey"].empty()) {
      appkey = make_shared<string>(boost::any_cast<string>(m["appkey"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~ListUmengAppkeysResponseBodyResult() = default;
};
class ListUmengAppkeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUmengAppkeysResponseBodyResult>> result{};

  ListUmengAppkeysResponseBody() {}

  explicit ListUmengAppkeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListUmengAppkeysResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUmengAppkeysResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListUmengAppkeysResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListUmengAppkeysResponseBody() = default;
};
class ListUmengAppkeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUmengAppkeysResponseBody> body{};

  ListUmengAppkeysResponse() {}

  explicit ListUmengAppkeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUmengAppkeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUmengAppkeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListUmengAppkeysResponse() = default;
};
class ListUserClustersResponseBodyHeaders : public Darabonba::Model {
public:
  shared_ptr<long> xTotalCount{};

  ListUserClustersResponseBodyHeaders() {}

  explicit ListUserClustersResponseBodyHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (xTotalCount) {
      res["X-Total-Count"] = boost::any(*xTotalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X-Total-Count") != m.end() && !m["X-Total-Count"].empty()) {
      xTotalCount = make_shared<long>(boost::any_cast<long>(m["X-Total-Count"]));
    }
  }


  virtual ~ListUserClustersResponseBodyHeaders() = default;
};
class ListUserClustersResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> metaType{};

  ListUserClustersResponseBodyResultMeta() {}

  explicit ListUserClustersResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
  }


  virtual ~ListUserClustersResponseBodyResultMeta() = default;
};
class ListUserClustersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ListUserClustersResponseBodyResultMeta> meta{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  ListUserClustersResponseBodyResult() {}

  explicit ListUserClustersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        ListUserClustersResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<ListUserClustersResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListUserClustersResponseBodyResult() = default;
};
class ListUserClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListUserClustersResponseBodyHeaders> headers{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserClustersResponseBodyResult>> result{};

  ListUserClustersResponseBody() {}

  explicit ListUserClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = headers ? boost::any(headers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      if (typeid(map<string, boost::any>) == m["headers"].type()) {
        ListUserClustersResponseBodyHeaders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["headers"]));
        headers = make_shared<ListUserClustersResponseBodyHeaders>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListUserClustersResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserClustersResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListUserClustersResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListUserClustersResponseBody() = default;
};
class ListUserClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserClustersResponseBody> body{};

  ListUserClustersResponse() {}

  explicit ListUserClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserClustersResponse() = default;
};
class ModifyDataSourceResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> type{};

  ModifyDataSourceResponseBodyResultMeta() {}

  explicit ModifyDataSourceResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["timestamp"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModifyDataSourceResponseBodyResultMeta() = default;
};
class ModifyDataSourceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ModifyDataSourceResponseBodyResultMeta> meta{};
  shared_ptr<string> tableName{};

  ModifyDataSourceResponseBodyResult() {}

  explicit ModifyDataSourceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        ModifyDataSourceResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<ModifyDataSourceResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~ModifyDataSourceResponseBodyResult() = default;
};
class ModifyDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ModifyDataSourceResponseBodyResult> result{};

  ModifyDataSourceResponseBody() {}

  explicit ModifyDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyDataSourceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyDataSourceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyDataSourceResponseBody() = default;
};
class ModifyDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDataSourceResponseBody> body{};

  ModifyDataSourceResponse() {}

  explicit ModifyDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataSourceResponse() = default;
};
class ModifyFeatureTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<FeatureTable> result{};

  ModifyFeatureTableResponseBody() {}

  explicit ModifyFeatureTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        FeatureTable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<FeatureTable>(model1);
      }
    }
  }


  virtual ~ModifyFeatureTableResponseBody() = default;
};
class ModifyFeatureTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFeatureTableResponseBody> body{};

  ModifyFeatureTableResponse() {}

  explicit ModifyFeatureTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyFeatureTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFeatureTableResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFeatureTableResponse() = default;
};
class ModifyFilteringAlgorithmMetaResponseBodyResultMetaExtInfo : public Darabonba::Model {
public:
  shared_ptr<string> itemSeparator{};
  shared_ptr<string> kvSeparator{};

  ModifyFilteringAlgorithmMetaResponseBodyResultMetaExtInfo() {}

  explicit ModifyFilteringAlgorithmMetaResponseBodyResultMetaExtInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemSeparator) {
      res["itemSeparator"] = boost::any(*itemSeparator);
    }
    if (kvSeparator) {
      res["kvSeparator"] = boost::any(*kvSeparator);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("itemSeparator") != m.end() && !m["itemSeparator"].empty()) {
      itemSeparator = make_shared<string>(boost::any_cast<string>(m["itemSeparator"]));
    }
    if (m.find("kvSeparator") != m.end() && !m["kvSeparator"].empty()) {
      kvSeparator = make_shared<string>(boost::any_cast<string>(m["kvSeparator"]));
    }
  }


  virtual ~ModifyFilteringAlgorithmMetaResponseBodyResultMetaExtInfo() = default;
};
class ModifyFilteringAlgorithmMetaResponseBodyResultMetaThreshold : public Darabonba::Model {
public:
  shared_ptr<long> indexLossThreshold{};
  shared_ptr<long> indexSizeThreshold{};
  shared_ptr<long> sourceDataRecordThreshold{};
  shared_ptr<long> sourceDataSizeThreshold{};

  ModifyFilteringAlgorithmMetaResponseBodyResultMetaThreshold() {}

  explicit ModifyFilteringAlgorithmMetaResponseBodyResultMetaThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexLossThreshold) {
      res["indexLossThreshold"] = boost::any(*indexLossThreshold);
    }
    if (indexSizeThreshold) {
      res["indexSizeThreshold"] = boost::any(*indexSizeThreshold);
    }
    if (sourceDataRecordThreshold) {
      res["sourceDataRecordThreshold"] = boost::any(*sourceDataRecordThreshold);
    }
    if (sourceDataSizeThreshold) {
      res["sourceDataSizeThreshold"] = boost::any(*sourceDataSizeThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexLossThreshold") != m.end() && !m["indexLossThreshold"].empty()) {
      indexLossThreshold = make_shared<long>(boost::any_cast<long>(m["indexLossThreshold"]));
    }
    if (m.find("indexSizeThreshold") != m.end() && !m["indexSizeThreshold"].empty()) {
      indexSizeThreshold = make_shared<long>(boost::any_cast<long>(m["indexSizeThreshold"]));
    }
    if (m.find("sourceDataRecordThreshold") != m.end() && !m["sourceDataRecordThreshold"].empty()) {
      sourceDataRecordThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataRecordThreshold"]));
    }
    if (m.find("sourceDataSizeThreshold") != m.end() && !m["sourceDataSizeThreshold"].empty()) {
      sourceDataSizeThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataSizeThreshold"]));
    }
  }


  virtual ~ModifyFilteringAlgorithmMetaResponseBodyResultMetaThreshold() = default;
};
class ModifyFilteringAlgorithmMetaResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> category{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> cron{};
  shared_ptr<bool> cronEnabled{};
  shared_ptr<string> description{};
  shared_ptr<ModifyFilteringAlgorithmMetaResponseBodyResultMetaExtInfo> extInfo{};
  shared_ptr<string> metaType{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> taskId{};
  shared_ptr<ModifyFilteringAlgorithmMetaResponseBodyResultMetaThreshold> threshold{};
  shared_ptr<string> type{};

  ModifyFilteringAlgorithmMetaResponseBodyResultMeta() {}

  explicit ModifyFilteringAlgorithmMetaResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["algorithmName"] = boost::any(*algorithmName);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (cronEnabled) {
      res["cronEnabled"] = boost::any(*cronEnabled);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extInfo) {
      res["extInfo"] = extInfo ? boost::any(extInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (threshold) {
      res["threshold"] = threshold ? boost::any(threshold->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmName") != m.end() && !m["algorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["algorithmName"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("cronEnabled") != m.end() && !m["cronEnabled"].empty()) {
      cronEnabled = make_shared<bool>(boost::any_cast<bool>(m["cronEnabled"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["extInfo"].type()) {
        ModifyFilteringAlgorithmMetaResponseBodyResultMetaExtInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extInfo"]));
        extInfo = make_shared<ModifyFilteringAlgorithmMetaResponseBodyResultMetaExtInfo>(model1);
      }
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      if (typeid(map<string, boost::any>) == m["threshold"].type()) {
        ModifyFilteringAlgorithmMetaResponseBodyResultMetaThreshold model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["threshold"]));
        threshold = make_shared<ModifyFilteringAlgorithmMetaResponseBodyResultMetaThreshold>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModifyFilteringAlgorithmMetaResponseBodyResultMeta() = default;
};
class ModifyFilteringAlgorithmMetaResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ModifyFilteringAlgorithmMetaResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  ModifyFilteringAlgorithmMetaResponseBodyResult() {}

  explicit ModifyFilteringAlgorithmMetaResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["algorithmId"] = boost::any(*algorithmId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmId") != m.end() && !m["algorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["algorithmId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        ModifyFilteringAlgorithmMetaResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<ModifyFilteringAlgorithmMetaResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ModifyFilteringAlgorithmMetaResponseBodyResult() = default;
};
class ModifyFilteringAlgorithmMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyFilteringAlgorithmMetaResponseBodyResult> result{};

  ModifyFilteringAlgorithmMetaResponseBody() {}

  explicit ModifyFilteringAlgorithmMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyFilteringAlgorithmMetaResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyFilteringAlgorithmMetaResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyFilteringAlgorithmMetaResponseBody() = default;
};
class ModifyFilteringAlgorithmMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFilteringAlgorithmMetaResponseBody> body{};

  ModifyFilteringAlgorithmMetaResponse() {}

  explicit ModifyFilteringAlgorithmMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyFilteringAlgorithmMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFilteringAlgorithmMetaResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFilteringAlgorithmMetaResponse() = default;
};
class ModifyFlowControlTaskRequestSelectionParams : public Darabonba::Model {
public:
  shared_ptr<string> selectType{};
  shared_ptr<string> selectValue{};
  shared_ptr<string> selectionOperation{};

  ModifyFlowControlTaskRequestSelectionParams() {}

  explicit ModifyFlowControlTaskRequestSelectionParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (selectType) {
      res["selectType"] = boost::any(*selectType);
    }
    if (selectValue) {
      res["selectValue"] = boost::any(*selectValue);
    }
    if (selectionOperation) {
      res["selectionOperation"] = boost::any(*selectionOperation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("selectType") != m.end() && !m["selectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["selectType"]));
    }
    if (m.find("selectValue") != m.end() && !m["selectValue"].empty()) {
      selectValue = make_shared<string>(boost::any_cast<string>(m["selectValue"]));
    }
    if (m.find("selectionOperation") != m.end() && !m["selectionOperation"].empty()) {
      selectionOperation = make_shared<string>(boost::any_cast<string>(m["selectionOperation"]));
    }
  }


  virtual ~ModifyFlowControlTaskRequestSelectionParams() = default;
};
class ModifyFlowControlTaskRequestTarget : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> value{};

  ModifyFlowControlTaskRequestTarget() {}

  explicit ModifyFlowControlTaskRequestTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~ModifyFlowControlTaskRequestTarget() = default;
};
class ModifyFlowControlTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskName{};
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> metaType{};
  shared_ptr<string> sceneIds{};
  shared_ptr<vector<ModifyFlowControlTaskRequestSelectionParams>> selectionParams{};
  shared_ptr<long> startTime{};
  shared_ptr<ModifyFlowControlTaskRequestTarget> target{};

  ModifyFlowControlTaskRequest() {}

  explicit ModifyFlowControlTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (sceneIds) {
      res["sceneIds"] = boost::any(*sceneIds);
    }
    if (selectionParams) {
      vector<boost::any> temp1;
      for(auto item1:*selectionParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["selectionParams"] = boost::any(temp1);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("sceneIds") != m.end() && !m["sceneIds"].empty()) {
      sceneIds = make_shared<string>(boost::any_cast<string>(m["sceneIds"]));
    }
    if (m.find("selectionParams") != m.end() && !m["selectionParams"].empty()) {
      if (typeid(vector<boost::any>) == m["selectionParams"].type()) {
        vector<ModifyFlowControlTaskRequestSelectionParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["selectionParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyFlowControlTaskRequestSelectionParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selectionParams = make_shared<vector<ModifyFlowControlTaskRequestSelectionParams>>(expect1);
      }
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      if (typeid(map<string, boost::any>) == m["target"].type()) {
        ModifyFlowControlTaskRequestTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["target"]));
        target = make_shared<ModifyFlowControlTaskRequestTarget>(model1);
      }
    }
  }


  virtual ~ModifyFlowControlTaskRequest() = default;
};
class ModifyFlowControlTaskResponseBodyResultMetaSelectionParams : public Darabonba::Model {
public:
  shared_ptr<string> selectType{};
  shared_ptr<string> selectValue{};
  shared_ptr<string> selectionOperation{};

  ModifyFlowControlTaskResponseBodyResultMetaSelectionParams() {}

  explicit ModifyFlowControlTaskResponseBodyResultMetaSelectionParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (selectType) {
      res["selectType"] = boost::any(*selectType);
    }
    if (selectValue) {
      res["selectValue"] = boost::any(*selectValue);
    }
    if (selectionOperation) {
      res["selectionOperation"] = boost::any(*selectionOperation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("selectType") != m.end() && !m["selectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["selectType"]));
    }
    if (m.find("selectValue") != m.end() && !m["selectValue"].empty()) {
      selectValue = make_shared<string>(boost::any_cast<string>(m["selectValue"]));
    }
    if (m.find("selectionOperation") != m.end() && !m["selectionOperation"].empty()) {
      selectionOperation = make_shared<string>(boost::any_cast<string>(m["selectionOperation"]));
    }
  }


  virtual ~ModifyFlowControlTaskResponseBodyResultMetaSelectionParams() = default;
};
class ModifyFlowControlTaskResponseBodyResultMetaTarget : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> value{};

  ModifyFlowControlTaskResponseBodyResultMetaTarget() {}

  explicit ModifyFlowControlTaskResponseBodyResultMetaTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~ModifyFlowControlTaskResponseBodyResultMetaTarget() = default;
};
class ModifyFlowControlTaskResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> metaType{};
  shared_ptr<string> sceneIds{};
  shared_ptr<vector<ModifyFlowControlTaskResponseBodyResultMetaSelectionParams>> selectionParams{};
  shared_ptr<long> startTime{};
  shared_ptr<ModifyFlowControlTaskResponseBodyResultMetaTarget> target{};
  shared_ptr<string> taskName{};

  ModifyFlowControlTaskResponseBodyResultMeta() {}

  explicit ModifyFlowControlTaskResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (sceneIds) {
      res["sceneIds"] = boost::any(*sceneIds);
    }
    if (selectionParams) {
      vector<boost::any> temp1;
      for(auto item1:*selectionParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["selectionParams"] = boost::any(temp1);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("sceneIds") != m.end() && !m["sceneIds"].empty()) {
      sceneIds = make_shared<string>(boost::any_cast<string>(m["sceneIds"]));
    }
    if (m.find("selectionParams") != m.end() && !m["selectionParams"].empty()) {
      if (typeid(vector<boost::any>) == m["selectionParams"].type()) {
        vector<ModifyFlowControlTaskResponseBodyResultMetaSelectionParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["selectionParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyFlowControlTaskResponseBodyResultMetaSelectionParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selectionParams = make_shared<vector<ModifyFlowControlTaskResponseBodyResultMetaSelectionParams>>(expect1);
      }
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      if (typeid(map<string, boost::any>) == m["target"].type()) {
        ModifyFlowControlTaskResponseBodyResultMetaTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["target"]));
        target = make_shared<ModifyFlowControlTaskResponseBodyResultMetaTarget>(model1);
      }
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
  }


  virtual ~ModifyFlowControlTaskResponseBodyResultMeta() = default;
};
class ModifyFlowControlTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<ModifyFlowControlTaskResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  ModifyFlowControlTaskResponseBodyResult() {}

  explicit ModifyFlowControlTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        ModifyFlowControlTaskResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<ModifyFlowControlTaskResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ModifyFlowControlTaskResponseBodyResult() = default;
};
class ModifyFlowControlTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyFlowControlTaskResponseBodyResult> result{};

  ModifyFlowControlTaskResponseBody() {}

  explicit ModifyFlowControlTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyFlowControlTaskResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyFlowControlTaskResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyFlowControlTaskResponseBody() = default;
};
class ModifyFlowControlTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFlowControlTaskResponseBody> body{};

  ModifyFlowControlTaskResponse() {}

  explicit ModifyFlowControlTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyFlowControlTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFlowControlTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFlowControlTaskResponse() = default;
};
class ModifyInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> dataSetVersion{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> industry{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ModifyInstanceResponseBodyResult() {}

  explicit ModifyInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (dataSetVersion) {
      res["dataSetVersion"] = boost::any(*dataSetVersion);
    }
    if (expiredTime) {
      res["expiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (industry) {
      res["industry"] = boost::any(*industry);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
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
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("dataSetVersion") != m.end() && !m["dataSetVersion"].empty()) {
      dataSetVersion = make_shared<string>(boost::any_cast<string>(m["dataSetVersion"]));
    }
    if (m.find("expiredTime") != m.end() && !m["expiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expiredTime"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("industry") != m.end() && !m["industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["industry"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModifyInstanceResponseBodyResult() = default;
};
class ModifyInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ModifyInstanceResponseBodyResult> result{};

  ModifyInstanceResponseBody() {}

  explicit ModifyInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyInstanceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyInstanceResponseBody() = default;
};
class ModifyInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceResponseBody> body{};

  ModifyInstanceResponse() {}

  explicit ModifyInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceResponse() = default;
};
class ModifyItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  ModifyItemsResponseBody() {}

  explicit ModifyItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~ModifyItemsResponseBody() = default;
};
class ModifyItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyItemsResponseBody> body{};

  ModifyItemsResponse() {}

  explicit ModifyItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyItemsResponse() = default;
};
class ModifyOfflineStoragesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> requestId{};
  shared_ptr<bool> result{};

  ModifyOfflineStoragesResponseBody() {}

  explicit ModifyOfflineStoragesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~ModifyOfflineStoragesResponseBody() = default;
};
class ModifyOfflineStoragesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyOfflineStoragesResponseBody> body{};

  ModifyOfflineStoragesResponse() {}

  explicit ModifyOfflineStoragesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyOfflineStoragesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyOfflineStoragesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyOfflineStoragesResponse() = default;
};
class ModifyRankingModelResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> rankingModelId{};

  ModifyRankingModelResponseBodyResult() {}

  explicit ModifyRankingModelResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (rankingModelId) {
      res["rankingModelId"] = boost::any(*rankingModelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("rankingModelId") != m.end() && !m["rankingModelId"].empty()) {
      rankingModelId = make_shared<string>(boost::any_cast<string>(m["rankingModelId"]));
    }
  }


  virtual ~ModifyRankingModelResponseBodyResult() = default;
};
class ModifyRankingModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ModifyRankingModelResponseBodyResult> result{};

  ModifyRankingModelResponseBody() {}

  explicit ModifyRankingModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyRankingModelResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyRankingModelResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyRankingModelResponseBody() = default;
};
class ModifyRankingModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRankingModelResponseBody> body{};

  ModifyRankingModelResponse() {}

  explicit ModifyRankingModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRankingModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRankingModelResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRankingModelResponse() = default;
};
class ModifyRankingModelTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  ModifyRankingModelTemplateRequest() {}

  explicit ModifyRankingModelTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyRankingModelTemplateRequest() = default;
};
class ModifyRankingModelTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingModelTemplate> result{};

  ModifyRankingModelTemplateResponseBody() {}

  explicit ModifyRankingModelTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingModelTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingModelTemplate>(model1);
      }
    }
  }


  virtual ~ModifyRankingModelTemplateResponseBody() = default;
};
class ModifyRankingModelTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRankingModelTemplateResponseBody> body{};

  ModifyRankingModelTemplateResponse() {}

  explicit ModifyRankingModelTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRankingModelTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRankingModelTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRankingModelTemplateResponse() = default;
};
class ModifyRankingSystemRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  ModifyRankingSystemRequest() {}

  explicit ModifyRankingSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyRankingSystemRequest() = default;
};
class ModifyRankingSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RankingSystem> result{};

  ModifyRankingSystemResponseBody() {}

  explicit ModifyRankingSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RankingSystem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RankingSystem>(model1);
      }
    }
  }


  virtual ~ModifyRankingSystemResponseBody() = default;
};
class ModifyRankingSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRankingSystemResponseBody> body{};

  ModifyRankingSystemResponse() {}

  explicit ModifyRankingSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRankingSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRankingSystemResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRankingSystemResponse() = default;
};
class ModifyRuleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ruleId{};
  shared_ptr<map<string, boost::any>> ruleMeta{};
  shared_ptr<string> status{};

  ModifyRuleResponseBodyResult() {}

  explicit ModifyRuleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (ruleId) {
      res["ruleId"] = boost::any(*ruleId);
    }
    if (ruleMeta) {
      res["ruleMeta"] = boost::any(*ruleMeta);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("ruleId") != m.end() && !m["ruleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["ruleId"]));
    }
    if (m.find("ruleMeta") != m.end() && !m["ruleMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ruleMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ruleMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ModifyRuleResponseBodyResult() = default;
};
class ModifyRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ModifyRuleResponseBodyResult> result{};

  ModifyRuleResponseBody() {}

  explicit ModifyRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyRuleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyRuleResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyRuleResponseBody() = default;
};
class ModifyRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRuleResponseBody> body{};

  ModifyRuleResponse() {}

  explicit ModifyRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRuleResponse() = default;
};
class ModifySampleRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  ModifySampleRequest() {}

  explicit ModifySampleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySampleRequest() = default;
};
class ModifySampleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Sample> result{};

  ModifySampleResponseBody() {}

  explicit ModifySampleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        Sample model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<Sample>(model1);
      }
    }
  }


  virtual ~ModifySampleResponseBody() = default;
};
class ModifySampleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySampleResponseBody> body{};

  ModifySampleResponse() {}

  explicit ModifySampleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySampleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySampleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySampleResponse() = default;
};
class ModifySceneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  ModifySceneResponseBodyResult() {}

  explicit ModifySceneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ModifySceneResponseBodyResult() = default;
};
class ModifySceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ModifySceneResponseBodyResult> result{};

  ModifySceneResponseBody() {}

  explicit ModifySceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifySceneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifySceneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifySceneResponseBody() = default;
};
class ModifySceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySceneResponseBody> body{};

  ModifySceneResponse() {}

  explicit ModifySceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySceneResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySceneResponse() = default;
};
class OfflineFilteringAlgorithmResponseBodyResultMetaExtInfo : public Darabonba::Model {
public:
  shared_ptr<string> itemSeparator{};
  shared_ptr<string> kvSeparator{};

  OfflineFilteringAlgorithmResponseBodyResultMetaExtInfo() {}

  explicit OfflineFilteringAlgorithmResponseBodyResultMetaExtInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemSeparator) {
      res["itemSeparator"] = boost::any(*itemSeparator);
    }
    if (kvSeparator) {
      res["kvSeparator"] = boost::any(*kvSeparator);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("itemSeparator") != m.end() && !m["itemSeparator"].empty()) {
      itemSeparator = make_shared<string>(boost::any_cast<string>(m["itemSeparator"]));
    }
    if (m.find("kvSeparator") != m.end() && !m["kvSeparator"].empty()) {
      kvSeparator = make_shared<string>(boost::any_cast<string>(m["kvSeparator"]));
    }
  }


  virtual ~OfflineFilteringAlgorithmResponseBodyResultMetaExtInfo() = default;
};
class OfflineFilteringAlgorithmResponseBodyResultMetaThreshold : public Darabonba::Model {
public:
  shared_ptr<long> indexLossThreshold{};
  shared_ptr<long> indexSizeThreshold{};
  shared_ptr<long> sourceDataRecordThreshold{};
  shared_ptr<long> sourceDataSizeThreshold{};

  OfflineFilteringAlgorithmResponseBodyResultMetaThreshold() {}

  explicit OfflineFilteringAlgorithmResponseBodyResultMetaThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexLossThreshold) {
      res["indexLossThreshold"] = boost::any(*indexLossThreshold);
    }
    if (indexSizeThreshold) {
      res["indexSizeThreshold"] = boost::any(*indexSizeThreshold);
    }
    if (sourceDataRecordThreshold) {
      res["sourceDataRecordThreshold"] = boost::any(*sourceDataRecordThreshold);
    }
    if (sourceDataSizeThreshold) {
      res["sourceDataSizeThreshold"] = boost::any(*sourceDataSizeThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexLossThreshold") != m.end() && !m["indexLossThreshold"].empty()) {
      indexLossThreshold = make_shared<long>(boost::any_cast<long>(m["indexLossThreshold"]));
    }
    if (m.find("indexSizeThreshold") != m.end() && !m["indexSizeThreshold"].empty()) {
      indexSizeThreshold = make_shared<long>(boost::any_cast<long>(m["indexSizeThreshold"]));
    }
    if (m.find("sourceDataRecordThreshold") != m.end() && !m["sourceDataRecordThreshold"].empty()) {
      sourceDataRecordThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataRecordThreshold"]));
    }
    if (m.find("sourceDataSizeThreshold") != m.end() && !m["sourceDataSizeThreshold"].empty()) {
      sourceDataSizeThreshold = make_shared<long>(boost::any_cast<long>(m["sourceDataSizeThreshold"]));
    }
  }


  virtual ~OfflineFilteringAlgorithmResponseBodyResultMetaThreshold() = default;
};
class OfflineFilteringAlgorithmResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> category{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> cron{};
  shared_ptr<bool> cronEnabled{};
  shared_ptr<string> description{};
  shared_ptr<OfflineFilteringAlgorithmResponseBodyResultMetaExtInfo> extInfo{};
  shared_ptr<string> metaType{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> taskId{};
  shared_ptr<OfflineFilteringAlgorithmResponseBodyResultMetaThreshold> threshold{};
  shared_ptr<string> type{};

  OfflineFilteringAlgorithmResponseBodyResultMeta() {}

  explicit OfflineFilteringAlgorithmResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["algorithmName"] = boost::any(*algorithmName);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (cronEnabled) {
      res["cronEnabled"] = boost::any(*cronEnabled);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (extInfo) {
      res["extInfo"] = extInfo ? boost::any(extInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metaType) {
      res["metaType"] = boost::any(*metaType);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (threshold) {
      res["threshold"] = threshold ? boost::any(threshold->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmName") != m.end() && !m["algorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["algorithmName"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("cronEnabled") != m.end() && !m["cronEnabled"].empty()) {
      cronEnabled = make_shared<bool>(boost::any_cast<bool>(m["cronEnabled"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["extInfo"].type()) {
        OfflineFilteringAlgorithmResponseBodyResultMetaExtInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extInfo"]));
        extInfo = make_shared<OfflineFilteringAlgorithmResponseBodyResultMetaExtInfo>(model1);
      }
    }
    if (m.find("metaType") != m.end() && !m["metaType"].empty()) {
      metaType = make_shared<string>(boost::any_cast<string>(m["metaType"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      if (typeid(map<string, boost::any>) == m["threshold"].type()) {
        OfflineFilteringAlgorithmResponseBodyResultMetaThreshold model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["threshold"]));
        threshold = make_shared<OfflineFilteringAlgorithmResponseBodyResultMetaThreshold>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~OfflineFilteringAlgorithmResponseBodyResultMeta() = default;
};
class OfflineFilteringAlgorithmResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> algorithmId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<OfflineFilteringAlgorithmResponseBodyResultMeta> meta{};
  shared_ptr<string> status{};

  OfflineFilteringAlgorithmResponseBodyResult() {}

  explicit OfflineFilteringAlgorithmResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmId) {
      res["algorithmId"] = boost::any(*algorithmId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithmId") != m.end() && !m["algorithmId"].empty()) {
      algorithmId = make_shared<string>(boost::any_cast<string>(m["algorithmId"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        OfflineFilteringAlgorithmResponseBodyResultMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<OfflineFilteringAlgorithmResponseBodyResultMeta>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~OfflineFilteringAlgorithmResponseBodyResult() = default;
};
class OfflineFilteringAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<OfflineFilteringAlgorithmResponseBodyResult> result{};

  OfflineFilteringAlgorithmResponseBody() {}

  explicit OfflineFilteringAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        OfflineFilteringAlgorithmResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<OfflineFilteringAlgorithmResponseBodyResult>(model1);
      }
    }
  }


  virtual ~OfflineFilteringAlgorithmResponseBody() = default;
};
class OfflineFilteringAlgorithmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineFilteringAlgorithmResponseBody> body{};

  OfflineFilteringAlgorithmResponse() {}

  explicit OfflineFilteringAlgorithmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OfflineFilteringAlgorithmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineFilteringAlgorithmResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineFilteringAlgorithmResponse() = default;
};
class PublishFlowControlTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  PublishFlowControlTaskResponseBody() {}

  explicit PublishFlowControlTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~PublishFlowControlTaskResponseBody() = default;
};
class PublishFlowControlTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishFlowControlTaskResponseBody> body{};

  PublishFlowControlTaskResponse() {}

  explicit PublishFlowControlTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishFlowControlTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishFlowControlTaskResponseBody>(model1);
      }
    }
  }


  virtual ~PublishFlowControlTaskResponse() = default;
};
class PublishRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ruleType{};
  shared_ptr<string> sceneId{};

  PublishRuleRequest() {}

  explicit PublishRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleType) {
      res["ruleType"] = boost::any(*ruleType);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ruleType") != m.end() && !m["ruleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["ruleType"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
  }


  virtual ~PublishRuleRequest() = default;
};
class PublishRuleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};

  PublishRuleResponseBodyResult() {}

  explicit PublishRuleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["ruleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ruleId") != m.end() && !m["ruleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["ruleId"]));
    }
  }


  virtual ~PublishRuleResponseBodyResult() = default;
};
class PublishRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<PublishRuleResponseBodyResult> result{};

  PublishRuleResponseBody() {}

  explicit PublishRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        PublishRuleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<PublishRuleResponseBodyResult>(model1);
      }
    }
  }


  virtual ~PublishRuleResponseBody() = default;
};
class PublishRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishRuleResponseBody> body{};

  PublishRuleResponse() {}

  explicit PublishRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishRuleResponseBody>(model1);
      }
    }
  }


  virtual ~PublishRuleResponse() = default;
};
class PushColdStartDocumentRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> cmd{};
  shared_ptr<boost::any> fields{};

  PushColdStartDocumentRequestBody() {}

  explicit PushColdStartDocumentRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmd) {
      res["cmd"] = boost::any(*cmd);
    }
    if (fields) {
      res["fields"] = boost::any(*fields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cmd") != m.end() && !m["cmd"].empty()) {
      cmd = make_shared<string>(boost::any_cast<string>(m["cmd"]));
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      fields = make_shared<boost::any>(boost::any_cast<boost::any>(m["fields"]));
    }
  }


  virtual ~PushColdStartDocumentRequestBody() = default;
};
class PushColdStartDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<PushColdStartDocumentRequestBody>> body{};

  PushColdStartDocumentRequest() {}

  explicit PushColdStartDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<PushColdStartDocumentRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PushColdStartDocumentRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<PushColdStartDocumentRequestBody>>(expect1);
      }
    }
  }


  virtual ~PushColdStartDocumentRequest() = default;
};
class PushColdStartDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  PushColdStartDocumentResponseBody() {}

  explicit PushColdStartDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~PushColdStartDocumentResponseBody() = default;
};
class PushColdStartDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushColdStartDocumentResponseBody> body{};

  PushColdStartDocumentResponse() {}

  explicit PushColdStartDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushColdStartDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushColdStartDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~PushColdStartDocumentResponse() = default;
};
class PushDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  PushDocumentResponseBody() {}

  explicit PushDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~PushDocumentResponseBody() = default;
};
class PushDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushDocumentResponseBody> body{};

  PushDocumentResponse() {}

  explicit PushDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~PushDocumentResponse() = default;
};
class PushInterventionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  PushInterventionResponseBody() {}

  explicit PushInterventionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~PushInterventionResponseBody() = default;
};
class PushInterventionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushInterventionResponseBody> body{};

  PushInterventionResponse() {}

  explicit PushInterventionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushInterventionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushInterventionResponseBody>(model1);
      }
    }
  }


  virtual ~PushInterventionResponse() = default;
};
class QueryDataMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> bhvType{};
  shared_ptr<string> cmdType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> imei{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> messageSource{};
  shared_ptr<long> page{};
  shared_ptr<string> sceneId{};
  shared_ptr<long> size{};
  shared_ptr<long> startTime{};
  shared_ptr<string> traceId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userType{};

  QueryDataMessageRequest() {}

  explicit QueryDataMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bhvType) {
      res["bhvType"] = boost::any(*bhvType);
    }
    if (cmdType) {
      res["cmdType"] = boost::any(*cmdType);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (imei) {
      res["imei"] = boost::any(*imei);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (messageSource) {
      res["messageSource"] = boost::any(*messageSource);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userType) {
      res["userType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bhvType") != m.end() && !m["bhvType"].empty()) {
      bhvType = make_shared<string>(boost::any_cast<string>(m["bhvType"]));
    }
    if (m.find("cmdType") != m.end() && !m["cmdType"].empty()) {
      cmdType = make_shared<string>(boost::any_cast<string>(m["cmdType"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("imei") != m.end() && !m["imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["imei"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("messageSource") != m.end() && !m["messageSource"].empty()) {
      messageSource = make_shared<string>(boost::any_cast<string>(m["messageSource"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userType") != m.end() && !m["userType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["userType"]));
    }
  }


  virtual ~QueryDataMessageRequest() = default;
};
class QueryDataMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  QueryDataMessageResponseBody() {}

  explicit QueryDataMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QueryDataMessageResponseBody() = default;
};
class QueryDataMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDataMessageResponseBody> body{};

  QueryDataMessageResponse() {}

  explicit QueryDataMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDataMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDataMessageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDataMessageResponse() = default;
};
class QueryDataMessageStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bhvType{};
  shared_ptr<string> cmdType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> imei{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> messageSource{};
  shared_ptr<string> sceneId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> traceId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userType{};

  QueryDataMessageStatisticsRequest() {}

  explicit QueryDataMessageStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bhvType) {
      res["bhvType"] = boost::any(*bhvType);
    }
    if (cmdType) {
      res["cmdType"] = boost::any(*cmdType);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (imei) {
      res["imei"] = boost::any(*imei);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (messageSource) {
      res["messageSource"] = boost::any(*messageSource);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userType) {
      res["userType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bhvType") != m.end() && !m["bhvType"].empty()) {
      bhvType = make_shared<string>(boost::any_cast<string>(m["bhvType"]));
    }
    if (m.find("cmdType") != m.end() && !m["cmdType"].empty()) {
      cmdType = make_shared<string>(boost::any_cast<string>(m["cmdType"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("imei") != m.end() && !m["imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["imei"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("messageSource") != m.end() && !m["messageSource"].empty()) {
      messageSource = make_shared<string>(boost::any_cast<string>(m["messageSource"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userType") != m.end() && !m["userType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["userType"]));
    }
  }


  virtual ~QueryDataMessageStatisticsRequest() = default;
};
class QueryDataMessageStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  QueryDataMessageStatisticsResponseBody() {}

  explicit QueryDataMessageStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QueryDataMessageStatisticsResponseBody() = default;
};
class QueryDataMessageStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDataMessageStatisticsResponseBody> body{};

  QueryDataMessageStatisticsResponse() {}

  explicit QueryDataMessageStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDataMessageStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDataMessageStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDataMessageStatisticsResponse() = default;
};
class QueryExceptionHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};

  QueryExceptionHistoryRequest() {}

  explicit QueryExceptionHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~QueryExceptionHistoryRequest() = default;
};
class QueryExceptionHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  QueryExceptionHistoryResponseBody() {}

  explicit QueryExceptionHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QueryExceptionHistoryResponseBody() = default;
};
class QueryExceptionHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryExceptionHistoryResponseBody> body{};

  QueryExceptionHistoryResponse() {}

  explicit QueryExceptionHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryExceptionHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryExceptionHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~QueryExceptionHistoryResponse() = default;
};
class QueryRawDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> imei{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> userId{};
  shared_ptr<string> userType{};

  QueryRawDataRequest() {}

  explicit QueryRawDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imei) {
      res["imei"] = boost::any(*imei);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userType) {
      res["userType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imei") != m.end() && !m["imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["imei"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userType") != m.end() && !m["userType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["userType"]));
    }
  }


  virtual ~QueryRawDataRequest() = default;
};
class QueryRawDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  QueryRawDataResponseBody() {}

  explicit QueryRawDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QueryRawDataResponseBody() = default;
};
class QueryRawDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRawDataResponseBody> body{};

  QueryRawDataResponse() {}

  explicit QueryRawDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRawDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRawDataResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRawDataResponse() = default;
};
class QuerySingleAggregationReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  QuerySingleAggregationReportResponseBody() {}

  explicit QuerySingleAggregationReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QuerySingleAggregationReportResponseBody() = default;
};
class QuerySingleAggregationReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySingleAggregationReportResponseBody> body{};

  QuerySingleAggregationReportResponse() {}

  explicit QuerySingleAggregationReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySingleAggregationReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySingleAggregationReportResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySingleAggregationReportResponse() = default;
};
class QuerySingleReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> reportType{};

  QuerySingleReportRequest() {}

  explicit QuerySingleReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportType) {
      res["reportType"] = boost::any(*reportType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reportType") != m.end() && !m["reportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["reportType"]));
    }
  }


  virtual ~QuerySingleReportRequest() = default;
};
class QuerySingleReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  QuerySingleReportResponseBody() {}

  explicit QuerySingleReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QuerySingleReportResponseBody() = default;
};
class QuerySingleReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySingleReportResponseBody> body{};

  QuerySingleReportResponse() {}

  explicit QuerySingleReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySingleReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySingleReportResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySingleReportResponse() = default;
};
class QuerySyncReportAggregationRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  QuerySyncReportAggregationRequest() {}

  explicit QuerySyncReportAggregationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~QuerySyncReportAggregationRequest() = default;
};
class QuerySyncReportAggregationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  QuerySyncReportAggregationResponseBody() {}

  explicit QuerySyncReportAggregationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QuerySyncReportAggregationResponseBody() = default;
};
class QuerySyncReportAggregationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySyncReportAggregationResponseBody> body{};

  QuerySyncReportAggregationResponse() {}

  explicit QuerySyncReportAggregationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySyncReportAggregationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySyncReportAggregationResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySyncReportAggregationResponse() = default;
};
class RebuildIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  RebuildIndexResponseBody() {}

  explicit RebuildIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~RebuildIndexResponseBody() = default;
};
class RebuildIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RebuildIndexResponseBody> body{};

  RebuildIndexResponse() {}

  explicit RebuildIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebuildIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebuildIndexResponseBody>(model1);
      }
    }
  }


  virtual ~RebuildIndexResponse() = default;
};
class RecommendRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> imei{};
  shared_ptr<string> ip{};
  shared_ptr<string> items{};
  shared_ptr<bool> rankOpen{};
  shared_ptr<string> recType{};
  shared_ptr<long> returnCount{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> strategy{};
  shared_ptr<string> userId{};
  shared_ptr<string> userInfo{};

  RecommendRequest() {}

  explicit RecommendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (imei) {
      res["imei"] = boost::any(*imei);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (items) {
      res["items"] = boost::any(*items);
    }
    if (rankOpen) {
      res["rankOpen"] = boost::any(*rankOpen);
    }
    if (recType) {
      res["recType"] = boost::any(*recType);
    }
    if (returnCount) {
      res["returnCount"] = boost::any(*returnCount);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    if (strategy) {
      res["strategy"] = boost::any(*strategy);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userInfo) {
      res["userInfo"] = boost::any(*userInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
    if (m.find("imei") != m.end() && !m["imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["imei"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      items = make_shared<string>(boost::any_cast<string>(m["items"]));
    }
    if (m.find("rankOpen") != m.end() && !m["rankOpen"].empty()) {
      rankOpen = make_shared<bool>(boost::any_cast<bool>(m["rankOpen"]));
    }
    if (m.find("recType") != m.end() && !m["recType"].empty()) {
      recType = make_shared<string>(boost::any_cast<string>(m["recType"]));
    }
    if (m.find("returnCount") != m.end() && !m["returnCount"].empty()) {
      returnCount = make_shared<long>(boost::any_cast<long>(m["returnCount"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
    if (m.find("strategy") != m.end() && !m["strategy"].empty()) {
      strategy = make_shared<string>(boost::any_cast<string>(m["strategy"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userInfo") != m.end() && !m["userInfo"].empty()) {
      userInfo = make_shared<string>(boost::any_cast<string>(m["userInfo"]));
    }
  }


  virtual ~RecommendRequest() = default;
};
class RecommendResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<double> flowWeight{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemType{};
  shared_ptr<string> matchInfo{};
  shared_ptr<string> message{};
  shared_ptr<long> position{};
  shared_ptr<string> traceId{};
  shared_ptr<string> traceInfo{};
  shared_ptr<double> weight{};

  RecommendResponseBodyResult() {}

  explicit RecommendResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowWeight) {
      res["flowWeight"] = boost::any(*flowWeight);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemType) {
      res["itemType"] = boost::any(*itemType);
    }
    if (matchInfo) {
      res["matchInfo"] = boost::any(*matchInfo);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (traceInfo) {
      res["traceInfo"] = boost::any(*traceInfo);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flowWeight") != m.end() && !m["flowWeight"].empty()) {
      flowWeight = make_shared<double>(boost::any_cast<double>(m["flowWeight"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["itemId"]));
    }
    if (m.find("itemType") != m.end() && !m["itemType"].empty()) {
      itemType = make_shared<string>(boost::any_cast<string>(m["itemType"]));
    }
    if (m.find("matchInfo") != m.end() && !m["matchInfo"].empty()) {
      matchInfo = make_shared<string>(boost::any_cast<string>(m["matchInfo"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["position"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("traceInfo") != m.end() && !m["traceInfo"].empty()) {
      traceInfo = make_shared<string>(boost::any_cast<string>(m["traceInfo"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<double>(boost::any_cast<double>(m["weight"]));
    }
  }


  virtual ~RecommendResponseBodyResult() = default;
};
class RecommendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<RecommendResponseBodyResult>> result{};

  RecommendResponseBody() {}

  explicit RecommendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<RecommendResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecommendResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<RecommendResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~RecommendResponseBody() = default;
};
class RecommendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecommendResponseBody> body{};

  RecommendResponse() {}

  explicit RecommendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecommendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecommendResponseBody>(model1);
      }
    }
  }


  virtual ~RecommendResponse() = default;
};
class RefreshFeatureTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<FeatureTable> result{};

  RefreshFeatureTableResponseBody() {}

  explicit RefreshFeatureTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        FeatureTable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<FeatureTable>(model1);
      }
    }
  }


  virtual ~RefreshFeatureTableResponseBody() = default;
};
class RefreshFeatureTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshFeatureTableResponseBody> body{};

  RefreshFeatureTableResponse() {}

  explicit RefreshFeatureTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshFeatureTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshFeatureTableResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshFeatureTableResponse() = default;
};
class RollbackRankingSystemRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  RollbackRankingSystemRequest() {}

  explicit RollbackRankingSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RollbackRankingSystemRequest() = default;
};
class RollbackRankingSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  RollbackRankingSystemResponseBody() {}

  explicit RollbackRankingSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RollbackRankingSystemResponseBody() = default;
};
class RollbackRankingSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RollbackRankingSystemResponseBody> body{};

  RollbackRankingSystemResponse() {}

  explicit RollbackRankingSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RollbackRankingSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RollbackRankingSystemResponseBody>(model1);
      }
    }
  }


  virtual ~RollbackRankingSystemResponse() = default;
};
class RunInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  RunInstanceResponseBody() {}

  explicit RunInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~RunInstanceResponseBody() = default;
};
class RunInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunInstanceResponseBody> body{};

  RunInstanceResponse() {}

  explicit RunInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RunInstanceResponse() = default;
};
class RunRankingModelTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  RunRankingModelTemplateResponseBody() {}

  explicit RunRankingModelTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RunRankingModelTemplateResponseBody() = default;
};
class RunRankingModelTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunRankingModelTemplateResponseBody> body{};

  RunRankingModelTemplateResponse() {}

  explicit RunRankingModelTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunRankingModelTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunRankingModelTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~RunRankingModelTemplateResponse() = default;
};
class RunSampleFormatConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> mode{};

  RunSampleFormatConfigRequest() {}

  explicit RunSampleFormatConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
  }


  virtual ~RunSampleFormatConfigRequest() = default;
};
class RunSampleFormatConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  RunSampleFormatConfigResponseBody() {}

  explicit RunSampleFormatConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~RunSampleFormatConfigResponseBody() = default;
};
class RunSampleFormatConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunSampleFormatConfigResponseBody> body{};

  RunSampleFormatConfigResponse() {}

  explicit RunSampleFormatConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunSampleFormatConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunSampleFormatConfigResponseBody>(model1);
      }
    }
  }


  virtual ~RunSampleFormatConfigResponse() = default;
};
class StopDataSetResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> state{};
  shared_ptr<string> versionId{};

  StopDataSetResponseBodyResult() {}

  explicit StopDataSetResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["versionId"]));
    }
  }


  virtual ~StopDataSetResponseBodyResult() = default;
};
class StopDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<StopDataSetResponseBodyResult> result{};

  StopDataSetResponseBody() {}

  explicit StopDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        StopDataSetResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<StopDataSetResponseBodyResult>(model1);
      }
    }
  }


  virtual ~StopDataSetResponseBody() = default;
};
class StopDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDataSetResponseBody> body{};

  StopDataSetResponse() {}

  explicit StopDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~StopDataSetResponse() = default;
};
class StopFlowControlTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  StopFlowControlTaskResponseBody() {}

  explicit StopFlowControlTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~StopFlowControlTaskResponseBody() = default;
};
class StopFlowControlTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopFlowControlTaskResponseBody> body{};

  StopFlowControlTaskResponse() {}

  explicit StopFlowControlTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopFlowControlTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopFlowControlTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopFlowControlTaskResponse() = default;
};
class UnLockIndexVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  UnLockIndexVersionResponseBody() {}

  explicit UnLockIndexVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~UnLockIndexVersionResponseBody() = default;
};
class UnLockIndexVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnLockIndexVersionResponseBody> body{};

  UnLockIndexVersionResponse() {}

  explicit UnLockIndexVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnLockIndexVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnLockIndexVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UnLockIndexVersionResponse() = default;
};
class UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig() {}

  explicit UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig() = default;
};
class UpdateExperimentBasicInfoResponseBodyResultAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig>> config{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<bool> hasConfig{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateExperimentBasicInfoResponseBodyResultAlgorithms() {}

  explicit UpdateExperimentBasicInfoResponseBodyResultAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (hasConfig) {
      res["hasConfig"] = boost::any(*hasConfig);
    }
    if (key) {
      res["key"] = boost::any(*key);
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
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<UpdateExperimentBasicInfoResponseBodyResultAlgorithmsConfig>>(expect1);
      }
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("hasConfig") != m.end() && !m["hasConfig"].empty()) {
      hasConfig = make_shared<bool>(boost::any_cast<bool>(m["hasConfig"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateExperimentBasicInfoResponseBodyResultAlgorithms() = default;
};
class UpdateExperimentBasicInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateExperimentBasicInfoResponseBodyResultAlgorithms>> algorithms{};
  shared_ptr<bool> base{};
  shared_ptr<vector<string>> buckets{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineTime{};
  shared_ptr<string> onlineTime{};
  shared_ptr<string> status{};

  UpdateExperimentBasicInfoResponseBodyResult() {}

  explicit UpdateExperimentBasicInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["algorithms"] = boost::any(temp1);
    }
    if (base) {
      res["base"] = boost::any(*base);
    }
    if (buckets) {
      res["buckets"] = boost::any(*buckets);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (experimentId) {
      res["experimentId"] = boost::any(*experimentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offlineTime) {
      res["offlineTime"] = boost::any(*offlineTime);
    }
    if (onlineTime) {
      res["onlineTime"] = boost::any(*onlineTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithms") != m.end() && !m["algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["algorithms"].type()) {
        vector<UpdateExperimentBasicInfoResponseBodyResultAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentBasicInfoResponseBodyResultAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<UpdateExperimentBasicInfoResponseBodyResultAlgorithms>>(expect1);
      }
    }
    if (m.find("base") != m.end() && !m["base"].empty()) {
      base = make_shared<bool>(boost::any_cast<bool>(m["base"]));
    }
    if (m.find("buckets") != m.end() && !m["buckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["buckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["buckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("experimentId") != m.end() && !m["experimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["experimentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offlineTime") != m.end() && !m["offlineTime"].empty()) {
      offlineTime = make_shared<string>(boost::any_cast<string>(m["offlineTime"]));
    }
    if (m.find("onlineTime") != m.end() && !m["onlineTime"].empty()) {
      onlineTime = make_shared<string>(boost::any_cast<string>(m["onlineTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~UpdateExperimentBasicInfoResponseBodyResult() = default;
};
class UpdateExperimentBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateExperimentBasicInfoResponseBodyResult> result{};

  UpdateExperimentBasicInfoResponseBody() {}

  explicit UpdateExperimentBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateExperimentBasicInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateExperimentBasicInfoResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateExperimentBasicInfoResponseBody() = default;
};
class UpdateExperimentBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentBasicInfoResponseBody> body{};

  UpdateExperimentBasicInfoResponse() {}

  explicit UpdateExperimentBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExperimentBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentBasicInfoResponse() = default;
};
class UpdateExperimentConfigResponseBodyResultAlgorithmsConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  UpdateExperimentConfigResponseBodyResultAlgorithmsConfig() {}

  explicit UpdateExperimentConfigResponseBodyResultAlgorithmsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateExperimentConfigResponseBodyResultAlgorithmsConfig() = default;
};
class UpdateExperimentConfigResponseBodyResultAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<UpdateExperimentConfigResponseBodyResultAlgorithmsConfig>> config{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<bool> hasConfig{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateExperimentConfigResponseBodyResultAlgorithms() {}

  explicit UpdateExperimentConfigResponseBodyResultAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (hasConfig) {
      res["hasConfig"] = boost::any(*hasConfig);
    }
    if (key) {
      res["key"] = boost::any(*key);
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
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<UpdateExperimentConfigResponseBodyResultAlgorithmsConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentConfigResponseBodyResultAlgorithmsConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<UpdateExperimentConfigResponseBodyResultAlgorithmsConfig>>(expect1);
      }
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("hasConfig") != m.end() && !m["hasConfig"].empty()) {
      hasConfig = make_shared<bool>(boost::any_cast<bool>(m["hasConfig"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateExperimentConfigResponseBodyResultAlgorithms() = default;
};
class UpdateExperimentConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateExperimentConfigResponseBodyResultAlgorithms>> algorithms{};
  shared_ptr<bool> base{};
  shared_ptr<vector<string>> buckets{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineTime{};
  shared_ptr<string> onlineTime{};
  shared_ptr<string> status{};

  UpdateExperimentConfigResponseBodyResult() {}

  explicit UpdateExperimentConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["algorithms"] = boost::any(temp1);
    }
    if (base) {
      res["base"] = boost::any(*base);
    }
    if (buckets) {
      res["buckets"] = boost::any(*buckets);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (experimentId) {
      res["experimentId"] = boost::any(*experimentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offlineTime) {
      res["offlineTime"] = boost::any(*offlineTime);
    }
    if (onlineTime) {
      res["onlineTime"] = boost::any(*onlineTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithms") != m.end() && !m["algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["algorithms"].type()) {
        vector<UpdateExperimentConfigResponseBodyResultAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentConfigResponseBodyResultAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<UpdateExperimentConfigResponseBodyResultAlgorithms>>(expect1);
      }
    }
    if (m.find("base") != m.end() && !m["base"].empty()) {
      base = make_shared<bool>(boost::any_cast<bool>(m["base"]));
    }
    if (m.find("buckets") != m.end() && !m["buckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["buckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["buckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("experimentId") != m.end() && !m["experimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["experimentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offlineTime") != m.end() && !m["offlineTime"].empty()) {
      offlineTime = make_shared<string>(boost::any_cast<string>(m["offlineTime"]));
    }
    if (m.find("onlineTime") != m.end() && !m["onlineTime"].empty()) {
      onlineTime = make_shared<string>(boost::any_cast<string>(m["onlineTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~UpdateExperimentConfigResponseBodyResult() = default;
};
class UpdateExperimentConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateExperimentConfigResponseBodyResult> result{};

  UpdateExperimentConfigResponseBody() {}

  explicit UpdateExperimentConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateExperimentConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateExperimentConfigResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateExperimentConfigResponseBody() = default;
};
class UpdateExperimentConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentConfigResponseBody> body{};

  UpdateExperimentConfigResponse() {}

  explicit UpdateExperimentConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExperimentConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentConfigResponse() = default;
};
class UpdateExperimentStatusResponseBodyResultAlgorithmsConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  UpdateExperimentStatusResponseBodyResultAlgorithmsConfig() {}

  explicit UpdateExperimentStatusResponseBodyResultAlgorithmsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateExperimentStatusResponseBodyResultAlgorithmsConfig() = default;
};
class UpdateExperimentStatusResponseBodyResultAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<UpdateExperimentStatusResponseBodyResultAlgorithmsConfig>> config{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> experimentValue{};
  shared_ptr<bool> hasConfig{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateExperimentStatusResponseBodyResultAlgorithms() {}

  explicit UpdateExperimentStatusResponseBodyResultAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["config"] = boost::any(temp1);
    }
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (experimentValue) {
      res["experimentValue"] = boost::any(*experimentValue);
    }
    if (hasConfig) {
      res["hasConfig"] = boost::any(*hasConfig);
    }
    if (key) {
      res["key"] = boost::any(*key);
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
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(vector<boost::any>) == m["config"].type()) {
        vector<UpdateExperimentStatusResponseBodyResultAlgorithmsConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentStatusResponseBodyResultAlgorithmsConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<UpdateExperimentStatusResponseBodyResultAlgorithmsConfig>>(expect1);
      }
    }
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("experimentValue") != m.end() && !m["experimentValue"].empty()) {
      experimentValue = make_shared<string>(boost::any_cast<string>(m["experimentValue"]));
    }
    if (m.find("hasConfig") != m.end() && !m["hasConfig"].empty()) {
      hasConfig = make_shared<bool>(boost::any_cast<bool>(m["hasConfig"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateExperimentStatusResponseBodyResultAlgorithms() = default;
};
class UpdateExperimentStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateExperimentStatusResponseBodyResultAlgorithms>> algorithms{};
  shared_ptr<bool> base{};
  shared_ptr<vector<string>> buckets{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineTime{};
  shared_ptr<string> onlineTime{};
  shared_ptr<string> status{};

  UpdateExperimentStatusResponseBodyResult() {}

  explicit UpdateExperimentStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["algorithms"] = boost::any(temp1);
    }
    if (base) {
      res["base"] = boost::any(*base);
    }
    if (buckets) {
      res["buckets"] = boost::any(*buckets);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (experimentId) {
      res["experimentId"] = boost::any(*experimentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offlineTime) {
      res["offlineTime"] = boost::any(*offlineTime);
    }
    if (onlineTime) {
      res["onlineTime"] = boost::any(*onlineTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithms") != m.end() && !m["algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["algorithms"].type()) {
        vector<UpdateExperimentStatusResponseBodyResultAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentStatusResponseBodyResultAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<UpdateExperimentStatusResponseBodyResultAlgorithms>>(expect1);
      }
    }
    if (m.find("base") != m.end() && !m["base"].empty()) {
      base = make_shared<bool>(boost::any_cast<bool>(m["base"]));
    }
    if (m.find("buckets") != m.end() && !m["buckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["buckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["buckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("experimentId") != m.end() && !m["experimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["experimentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offlineTime") != m.end() && !m["offlineTime"].empty()) {
      offlineTime = make_shared<string>(boost::any_cast<string>(m["offlineTime"]));
    }
    if (m.find("onlineTime") != m.end() && !m["onlineTime"].empty()) {
      onlineTime = make_shared<string>(boost::any_cast<string>(m["onlineTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~UpdateExperimentStatusResponseBodyResult() = default;
};
class UpdateExperimentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateExperimentStatusResponseBodyResult> result{};

  UpdateExperimentStatusResponseBody() {}

  explicit UpdateExperimentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateExperimentStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateExperimentStatusResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateExperimentStatusResponseBody() = default;
};
class UpdateExperimentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentStatusResponseBody> body{};

  UpdateExperimentStatusResponse() {}

  explicit UpdateExperimentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExperimentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentStatusResponse() = default;
};
class UpgradeInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  UpgradeInstanceResponseBodyResult() {}

  explicit UpgradeInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~UpgradeInstanceResponseBodyResult() = default;
};
class UpgradeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<UpgradeInstanceResponseBodyResult> result{};

  UpgradeInstanceResponseBody() {}

  explicit UpgradeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpgradeInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpgradeInstanceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpgradeInstanceResponseBody() = default;
};
class UpgradeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeInstanceResponseBody> body{};

  UpgradeInstanceResponse() {}

  explicit UpgradeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeInstanceResponse() = default;
};
class ValidateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  ValidateInstanceResponseBody() {}

  explicit ValidateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~ValidateInstanceResponseBody() = default;
};
class ValidateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateInstanceResponseBody> body{};

  ValidateInstanceResponse() {}

  explicit ValidateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateInstanceResponse() = default;
};
class VerifyRankingSystemRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  VerifyRankingSystemRequest() {}

  explicit VerifyRankingSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyRankingSystemRequest() = default;
};
class VerifyRankingSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  VerifyRankingSystemResponseBody() {}

  explicit VerifyRankingSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~VerifyRankingSystemResponseBody() = default;
};
class VerifyRankingSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyRankingSystemResponseBody> body{};

  VerifyRankingSystemResponse() {}

  explicit VerifyRankingSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyRankingSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyRankingSystemResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyRankingSystemResponse() = default;
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
  AttachDatasetResponse attachDatasetWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<string> versionId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachDatasetResponse attachDataset(shared_ptr<string> instanceId, shared_ptr<string> versionId);
  AttachIndexVersionResponse attachIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> algorithmId,
                                                           shared_ptr<string> versionId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachIndexVersionResponse attachIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> algorithmId, shared_ptr<string> versionId);
  CheckRankingModelReachableResponse checkRankingModelReachableWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> rankingModelId,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckRankingModelReachableResponse checkRankingModelReachable(shared_ptr<string> instanceId, shared_ptr<string> rankingModelId);
  CloneExperimentResponse cloneExperimentWithOptions(shared_ptr<string> instanceId,
                                                     shared_ptr<string> sceneId,
                                                     shared_ptr<string> experimentId,
                                                     shared_ptr<CloneExperimentRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneExperimentResponse cloneExperiment(shared_ptr<string> instanceId,
                                          shared_ptr<string> sceneId,
                                          shared_ptr<string> experimentId,
                                          shared_ptr<CloneExperimentRequest> request);
  CloneSampleResponse cloneSampleWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> sampleId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneSampleResponse cloneSample(shared_ptr<string> instanceId, shared_ptr<string> sampleId);
  ColdStartRankResponse coldStartRankWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<ColdStartRankRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ColdStartRankResponse coldStartRank(shared_ptr<string> instanceId, shared_ptr<ColdStartRankRequest> request);
  CreateCustomAnalysisTaskResponse createCustomAnalysisTaskWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<CreateCustomAnalysisTaskRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomAnalysisTaskResponse createCustomAnalysisTask(shared_ptr<string> instanceId, shared_ptr<CreateCustomAnalysisTaskRequest> request);
  CreateCustomSampleResponse createCustomSampleWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomSampleResponse createCustomSample(shared_ptr<string> instanceId);
  CreateDataDiagnoseTaskResponse createDataDiagnoseTaskWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataDiagnoseTaskResponse createDataDiagnoseTask(shared_ptr<string> instanceId);
  CreateExtraDataSourceResponse createExtraDataSourceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExtraDataSourceResponse createExtraDataSource(shared_ptr<string> instanceId);
  CreateFilteringAlgorithmResponse createFilteringAlgorithmWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<CreateFilteringAlgorithmRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFilteringAlgorithmResponse createFilteringAlgorithm(shared_ptr<string> instanceId, shared_ptr<CreateFilteringAlgorithmRequest> request);
  CreateFlowControlTaskResponse createFlowControlTaskWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<CreateFlowControlTaskRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowControlTaskResponse createFlowControlTask(shared_ptr<string> instanceId, shared_ptr<CreateFlowControlTaskRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance();
  CreateRankingModelResponse createRankingModelWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<CreateRankingModelRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRankingModelResponse createRankingModel(shared_ptr<string> instanceId, shared_ptr<CreateRankingModelRequest> request);
  CreateRankingModelTemplateResponse createRankingModelTemplateWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRankingModelTemplateResponse createRankingModelTemplate(shared_ptr<string> instanceId);
  CreateRankingSystemResponse createRankingSystemWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRankingSystemResponse createRankingSystem(shared_ptr<string> instanceId);
  CreateRuleResponse createRuleWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<string> instanceId);
  CreateSampleFormatConfigResponse createSampleFormatConfigWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<string> sampleId,
                                                                       shared_ptr<CreateSampleFormatConfigRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSampleFormatConfigResponse createSampleFormatConfig(shared_ptr<string> instanceId, shared_ptr<string> sampleId, shared_ptr<CreateSampleFormatConfigRequest> request);
  CreateSceneResponse createSceneWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<CreateSceneRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSceneResponse createScene(shared_ptr<string> instanceId, shared_ptr<CreateSceneRequest> request);
  CreateUmengTokenResponse createUmengTokenWithOptions(shared_ptr<CreateUmengTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUmengTokenResponse createUmengToken(shared_ptr<CreateUmengTokenRequest> request);
  DecribeRankingModelResponse decribeRankingModelWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> rankingModelId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DecribeRankingModelResponse decribeRankingModel(shared_ptr<string> instanceId, shared_ptr<string> rankingModelId);
  DeleteDataSetResponse deleteDataSetWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<string> versionId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSetResponse deleteDataSet(shared_ptr<string> instanceId, shared_ptr<string> versionId);
  DeleteExperimentResponse deleteExperimentWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> sceneId,
                                                       shared_ptr<string> experimentId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentResponse deleteExperiment(shared_ptr<string> instanceId, shared_ptr<string> sceneId, shared_ptr<string> experimentId);
  DeleteExtraDataSourceResponse deleteExtraDataSourceWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> type,
                                                                 shared_ptr<string> dataSourceId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExtraDataSourceResponse deleteExtraDataSource(shared_ptr<string> instanceId, shared_ptr<string> type, shared_ptr<string> dataSourceId);
  DeleteFilteringAlgorithmResponse deleteFilteringAlgorithmWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<string> algorithmId,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFilteringAlgorithmResponse deleteFilteringAlgorithm(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  DeleteFlowControlTaskResponse deleteFlowControlTaskWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> taskId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowControlTaskResponse deleteFlowControlTask(shared_ptr<string> instanceId, shared_ptr<string> taskId);
  DeleteRankingModelResponse deleteRankingModelWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> rankingModelId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRankingModelResponse deleteRankingModel(shared_ptr<string> instanceId, shared_ptr<string> rankingModelId);
  DeleteRankingModelTemplateResponse deleteRankingModelTemplateWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> templateId,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRankingModelTemplateResponse deleteRankingModelTemplate(shared_ptr<string> instanceId, shared_ptr<string> templateId);
  DeleteRankingModelVersionResponse deleteRankingModelVersionWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<string> versionId,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRankingModelVersionResponse deleteRankingModelVersion(shared_ptr<string> instanceId, shared_ptr<string> versionId);
  DeleteRankingSystemResponse deleteRankingSystemWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> name,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRankingSystemResponse deleteRankingSystem(shared_ptr<string> instanceId, shared_ptr<string> name);
  DeleteSampleResponse deleteSampleWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<string> sampleId,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSampleResponse deleteSample(shared_ptr<string> instanceId, shared_ptr<string> sampleId);
  DeleteSceneResponse deleteSceneWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> sceneId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSceneResponse deleteScene(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DeployRankingSystemResponse deployRankingSystemWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> name,
                                                             shared_ptr<DeployRankingSystemRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployRankingSystemResponse deployRankingSystem(shared_ptr<string> instanceId, shared_ptr<string> name, shared_ptr<DeployRankingSystemRequest> request);
  DescribeBaseExperimentResponse describeBaseExperimentWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> sceneId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBaseExperimentResponse describeBaseExperiment(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DescribeCustomAnalysisTaskResponse describeCustomAnalysisTaskWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> taskId,
                                                                           shared_ptr<DescribeCustomAnalysisTaskRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomAnalysisTaskResponse describeCustomAnalysisTask(shared_ptr<string> instanceId, shared_ptr<string> taskId, shared_ptr<DescribeCustomAnalysisTaskRequest> request);
  DescribeDataSetMessageResponse describeDataSetMessageWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> versionId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataSetMessageResponse describeDataSetMessage(shared_ptr<string> instanceId, shared_ptr<string> versionId);
  DescribeDefaultAlgorithmsResponse describeDefaultAlgorithmsWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<string> sceneId,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefaultAlgorithmsResponse describeDefaultAlgorithms(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DescribeExperimentResponse describeExperimentWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> sceneId,
                                                           shared_ptr<string> experimentId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExperimentResponse describeExperiment(shared_ptr<string> instanceId, shared_ptr<string> sceneId, shared_ptr<string> experimentId);
  DescribeExperimentEnvResponse describeExperimentEnvWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> sceneId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExperimentEnvResponse describeExperimentEnv(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DescribeExperimentEnvProgressResponse describeExperimentEnvProgressWithOptions(shared_ptr<string> instanceId,
                                                                                 shared_ptr<string> sceneId,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExperimentEnvProgressResponse describeExperimentEnvProgress(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DescribeFilteringAlgorithmResponse describeFilteringAlgorithmWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> algorithmId,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFilteringAlgorithmResponse describeFilteringAlgorithm(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<string> instanceId);
  DescribeLatestTaskResponse describeLatestTaskWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> algorithmId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLatestTaskResponse describeLatestTask(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  DescribeQuotaResponse describeQuotaWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQuotaResponse describeQuota(shared_ptr<string> instanceId);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRuleResponse describeRuleWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<string> ruleId,
                                               shared_ptr<DescribeRuleRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleResponse describeRule(shared_ptr<string> instanceId, shared_ptr<string> ruleId, shared_ptr<DescribeRuleRequest> request);
  DescribeSceneResponse describeSceneWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<string> sceneId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSceneResponse describeScene(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DescribeSceneBucketResponse describeSceneBucketWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> sceneId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSceneBucketResponse describeSceneBucket(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DescribeSceneThroughputResponse describeSceneThroughputWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> sceneId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSceneThroughputResponse describeSceneThroughput(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  DescribeSyncReportDetailResponse describeSyncReportDetailWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<DescribeSyncReportDetailRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSyncReportDetailResponse describeSyncReportDetail(shared_ptr<string> instanceId, shared_ptr<DescribeSyncReportDetailRequest> request);
  DescribeSyncReportOutliersResponse describeSyncReportOutliersWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<DescribeSyncReportOutliersRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSyncReportOutliersResponse describeSyncReportOutliers(shared_ptr<string> instanceId, shared_ptr<DescribeSyncReportOutliersRequest> request);
  DescribeUserMetricsResponse describeUserMetricsWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<DescribeUserMetricsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserMetricsResponse describeUserMetrics(shared_ptr<string> instanceId, shared_ptr<DescribeUserMetricsRequest> request);
  DowngradeInstanceResponse downgradeInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DowngradeInstanceResponse downgradeInstance(shared_ptr<string> instanceId);
  EnableExperimentResponse enableExperimentWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> sceneId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableExperimentResponse enableExperiment(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  GenerateSampleResponse generateSampleWithOptions(shared_ptr<string> instanceId,
                                                   shared_ptr<string> sampleId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateSampleResponse generateSample(shared_ptr<string> instanceId, shared_ptr<string> sampleId);
  GetExtraDataSourceResponse getExtraDataSourceWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> type,
                                                           shared_ptr<string> dataSourceId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExtraDataSourceResponse getExtraDataSource(shared_ptr<string> instanceId, shared_ptr<string> type, shared_ptr<string> dataSourceId);
  GetFlowControlTaskResponse getFlowControlTaskWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> taskId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFlowControlTaskResponse getFlowControlTask(shared_ptr<string> instanceId, shared_ptr<string> taskId);
  GetLatestDataDiagnoseTaskStatusResponse getLatestDataDiagnoseTaskStatusWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLatestDataDiagnoseTaskStatusResponse getLatestDataDiagnoseTaskStatus(shared_ptr<string> instanceId);
  GetRankingModelTemplateResponse getRankingModelTemplateWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> templateId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRankingModelTemplateResponse getRankingModelTemplate(shared_ptr<string> instanceId, shared_ptr<string> templateId);
  GetRankingModelVersionResponse getRankingModelVersionWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> versionId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRankingModelVersionResponse getRankingModelVersion(shared_ptr<string> instanceId, shared_ptr<string> versionId);
  GetRankingSystemResponse getRankingSystemWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> name,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRankingSystemResponse getRankingSystem(shared_ptr<string> instanceId, shared_ptr<string> name);
  GetRankingSystemHistoryResponse getRankingSystemHistoryWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> name,
                                                                     shared_ptr<string> operateId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRankingSystemHistoryResponse getRankingSystemHistory(shared_ptr<string> instanceId, shared_ptr<string> name, shared_ptr<string> operateId);
  GetSampleResponse getSampleWithOptions(shared_ptr<string> instanceId,
                                         shared_ptr<string> sampleId,
                                         shared_ptr<GetSampleRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSampleResponse getSample(shared_ptr<string> instanceId, shared_ptr<string> sampleId, shared_ptr<GetSampleRequest> request);
  InitComputingResourceResponse initComputingResourceWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<InitComputingResourceRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitComputingResourceResponse initComputingResource(shared_ptr<string> instanceId, shared_ptr<InitComputingResourceRequest> request);
  ListDashboardDetailsResponse listDashboardDetailsWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<ListDashboardDetailsRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDashboardDetailsResponse listDashboardDetails(shared_ptr<string> instanceId, shared_ptr<ListDashboardDetailsRequest> request);
  ListDashboardDetailsFlowsResponse listDashboardDetailsFlowsWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<ListDashboardDetailsFlowsRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDashboardDetailsFlowsResponse listDashboardDetailsFlows(shared_ptr<string> instanceId, shared_ptr<ListDashboardDetailsFlowsRequest> request);
  ListDashboardMetricsResponse listDashboardMetricsWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<ListDashboardMetricsRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDashboardMetricsResponse listDashboardMetrics(shared_ptr<string> instanceId, shared_ptr<ListDashboardMetricsRequest> request);
  ListDashboardMetricsFlowsResponse listDashboardMetricsFlowsWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<ListDashboardMetricsFlowsRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDashboardMetricsFlowsResponse listDashboardMetricsFlows(shared_ptr<string> instanceId, shared_ptr<ListDashboardMetricsFlowsRequest> request);
  ListDataDiagnoseReportsResponse listDataDiagnoseReportsWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<ListDataDiagnoseReportsRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataDiagnoseReportsResponse listDataDiagnoseReports(shared_ptr<string> instanceId, shared_ptr<ListDataDiagnoseReportsRequest> request);
  ListDataDiagnoseSampleDetailsResponse listDataDiagnoseSampleDetailsWithOptions(shared_ptr<string> instanceId,
                                                                                 shared_ptr<ListDataDiagnoseSampleDetailsRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataDiagnoseSampleDetailsResponse listDataDiagnoseSampleDetails(shared_ptr<string> instanceId, shared_ptr<ListDataDiagnoseSampleDetailsRequest> request);
  ListDataSetResponse listDataSetWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSetResponse listDataSet(shared_ptr<string> instanceId);
  ListDataSourceResponse listDataSourceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceResponse listDataSource(shared_ptr<string> instanceId);
  ListExperimentsResponse listExperimentsWithOptions(shared_ptr<string> instanceId,
                                                     shared_ptr<string> sceneId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentsResponse listExperiments(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  ListExtraDataSourcesResponse listExtraDataSourcesWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<ListExtraDataSourcesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExtraDataSourcesResponse listExtraDataSources(shared_ptr<string> instanceId, shared_ptr<ListExtraDataSourcesRequest> request);
  ListFeatureTablesResponse listFeatureTablesWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<ListFeatureTablesRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureTablesResponse listFeatureTables(shared_ptr<string> instanceId, shared_ptr<ListFeatureTablesRequest> request);
  ListFilteringAlgorithmsResponse listFilteringAlgorithmsWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<ListFilteringAlgorithmsRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFilteringAlgorithmsResponse listFilteringAlgorithms(shared_ptr<string> instanceId, shared_ptr<ListFilteringAlgorithmsRequest> request);
  ListFlowControlTaskResponse listFlowControlTaskWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<ListFlowControlTaskRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowControlTaskResponse listFlowControlTask(shared_ptr<string> instanceId, shared_ptr<ListFlowControlTaskRequest> request);
  ListFlowControlTaskInvalidItemsResponse listFlowControlTaskInvalidItemsWithOptions(shared_ptr<string> instanceId,
                                                                                     shared_ptr<string> taskId,
                                                                                     shared_ptr<ListFlowControlTaskInvalidItemsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowControlTaskInvalidItemsResponse listFlowControlTaskInvalidItems(shared_ptr<string> instanceId, shared_ptr<string> taskId, shared_ptr<ListFlowControlTaskInvalidItemsRequest> request);
  ListFlowControlTaskItemReportsResponse listFlowControlTaskItemReportsWithOptions(shared_ptr<string> instanceId,
                                                                                   shared_ptr<string> taskId,
                                                                                   shared_ptr<ListFlowControlTaskItemReportsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowControlTaskItemReportsResponse listFlowControlTaskItemReports(shared_ptr<string> instanceId, shared_ptr<string> taskId, shared_ptr<ListFlowControlTaskItemReportsRequest> request);
  ListFlowControlTaskItemsResponse listFlowControlTaskItemsWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<string> taskId,
                                                                       shared_ptr<ListFlowControlTaskItemsRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowControlTaskItemsResponse listFlowControlTaskItems(shared_ptr<string> instanceId, shared_ptr<string> taskId, shared_ptr<ListFlowControlTaskItemsRequest> request);
  ListFlowControlTaskReferenceResponse listFlowControlTaskReferenceWithOptions(shared_ptr<string> instanceId,
                                                                               shared_ptr<string> taskId,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowControlTaskReferenceResponse listFlowControlTaskReference(shared_ptr<string> instanceId, shared_ptr<string> taskId);
  ListFlowControlTaskReportsResponse listFlowControlTaskReportsWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> taskId,
                                                                           shared_ptr<ListFlowControlTaskReportsRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowControlTaskReportsResponse listFlowControlTaskReports(shared_ptr<string> instanceId, shared_ptr<string> taskId, shared_ptr<ListFlowControlTaskReportsRequest> request);
  ListIndexVersionsResponse listIndexVersionsWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<string> algorithmId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndexVersionsResponse listIndexVersions(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  ListInstanceResponse listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceResponse listInstance(shared_ptr<ListInstanceRequest> request);
  ListInstanceTaskResponse listInstanceTaskWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceTaskResponse listInstanceTask(shared_ptr<string> instanceId);
  ListItemsResponse listItemsWithOptions(shared_ptr<string> instanceId,
                                         shared_ptr<ListItemsRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListItemsResponse listItems(shared_ptr<string> instanceId, shared_ptr<ListItemsRequest> request);
  ListLogsResponse listLogsWithOptions(shared_ptr<string> instanceId,
                                       shared_ptr<ListLogsRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogsResponse listLogs(shared_ptr<string> instanceId, shared_ptr<ListLogsRequest> request);
  ListMixCategoriesResponse listMixCategoriesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMixCategoriesResponse listMixCategories();
  ListOfflineStoragesResponse listOfflineStoragesWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOfflineStoragesResponse listOfflineStorages(shared_ptr<string> instanceId);
  ListRankingModelTemplatesResponse listRankingModelTemplatesWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<ListRankingModelTemplatesRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRankingModelTemplatesResponse listRankingModelTemplates(shared_ptr<string> instanceId, shared_ptr<ListRankingModelTemplatesRequest> request);
  ListRankingModelVersionsResponse listRankingModelVersionsWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<ListRankingModelVersionsRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRankingModelVersionsResponse listRankingModelVersions(shared_ptr<string> instanceId, shared_ptr<ListRankingModelVersionsRequest> request);
  ListRankingModelsResponse listRankingModelsWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<ListRankingModelsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRankingModelsResponse listRankingModels(shared_ptr<string> instanceId, shared_ptr<ListRankingModelsRequest> request);
  ListRankingSystemHistoriesResponse listRankingSystemHistoriesWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> name,
                                                                           shared_ptr<ListRankingSystemHistoriesRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRankingSystemHistoriesResponse listRankingSystemHistories(shared_ptr<string> instanceId, shared_ptr<string> name, shared_ptr<ListRankingSystemHistoriesRequest> request);
  ListRankingSystemsResponse listRankingSystemsWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<ListRankingSystemsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRankingSystemsResponse listRankingSystems(shared_ptr<string> instanceId, shared_ptr<ListRankingSystemsRequest> request);
  ListRuleConditionsResponse listRuleConditionsWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRuleConditionsResponse listRuleConditions(shared_ptr<string> instanceId);
  ListRuleTasksResponse listRuleTasksWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<ListRuleTasksRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRuleTasksResponse listRuleTasks(shared_ptr<string> instanceId, shared_ptr<ListRuleTasksRequest> request);
  ListRulesResponse listRulesWithOptions(shared_ptr<string> instanceId,
                                         shared_ptr<ListRulesRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<string> instanceId, shared_ptr<ListRulesRequest> request);
  ListSampleFormatConfigsResponse listSampleFormatConfigsWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> sampleId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSampleFormatConfigsResponse listSampleFormatConfigs(shared_ptr<string> instanceId, shared_ptr<string> sampleId);
  ListSamplesResponse listSamplesWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<ListSamplesRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSamplesResponse listSamples(shared_ptr<string> instanceId, shared_ptr<ListSamplesRequest> request);
  ListSceneItemsResponse listSceneItemsWithOptions(shared_ptr<string> instanceId,
                                                   shared_ptr<string> sceneId,
                                                   shared_ptr<ListSceneItemsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSceneItemsResponse listSceneItems(shared_ptr<string> instanceId, shared_ptr<string> sceneId, shared_ptr<ListSceneItemsRequest> request);
  ListSceneParametersResponse listSceneParametersWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSceneParametersResponse listSceneParameters(shared_ptr<string> instanceId);
  ListScenesResponse listScenesWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<ListScenesRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScenesResponse listScenes(shared_ptr<string> instanceId, shared_ptr<ListScenesRequest> request);
  ListUmengAppkeysResponse listUmengAppkeysWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUmengAppkeysResponse listUmengAppkeys();
  ListUserClustersResponse listUserClustersWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserClustersResponse listUserClusters(shared_ptr<string> instanceId);
  ModifyDataSourceResponse modifyDataSourceWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> tableName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataSourceResponse modifyDataSource(shared_ptr<string> instanceId, shared_ptr<string> tableName);
  ModifyFeatureTableResponse modifyFeatureTableWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> type,
                                                           shared_ptr<string> featureTableId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFeatureTableResponse modifyFeatureTable(shared_ptr<string> instanceId, shared_ptr<string> type, shared_ptr<string> featureTableId);
  ModifyFilteringAlgorithmMetaResponse modifyFilteringAlgorithmMetaWithOptions(shared_ptr<string> instanceId,
                                                                               shared_ptr<string> algorithmId,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFilteringAlgorithmMetaResponse modifyFilteringAlgorithmMeta(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  ModifyFlowControlTaskResponse modifyFlowControlTaskWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> taskId,
                                                                 shared_ptr<ModifyFlowControlTaskRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFlowControlTaskResponse modifyFlowControlTask(shared_ptr<string> instanceId, shared_ptr<string> taskId, shared_ptr<ModifyFlowControlTaskRequest> request);
  ModifyInstanceResponse modifyInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceResponse modifyInstance(shared_ptr<string> instanceId);
  ModifyItemsResponse modifyItemsWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyItemsResponse modifyItems(shared_ptr<string> instanceId);
  ModifyOfflineStoragesResponse modifyOfflineStoragesWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyOfflineStoragesResponse modifyOfflineStorages(shared_ptr<string> instanceId);
  ModifyRankingModelResponse modifyRankingModelWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> rankingModelId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRankingModelResponse modifyRankingModel(shared_ptr<string> instanceId, shared_ptr<string> rankingModelId);
  ModifyRankingModelTemplateResponse modifyRankingModelTemplateWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> templateId,
                                                                           shared_ptr<ModifyRankingModelTemplateRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRankingModelTemplateResponse modifyRankingModelTemplate(shared_ptr<string> instanceId, shared_ptr<string> templateId, shared_ptr<ModifyRankingModelTemplateRequest> request);
  ModifyRankingSystemResponse modifyRankingSystemWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> name,
                                                             shared_ptr<ModifyRankingSystemRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRankingSystemResponse modifyRankingSystem(shared_ptr<string> instanceId, shared_ptr<string> name, shared_ptr<ModifyRankingSystemRequest> request);
  ModifyRuleResponse modifyRuleWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<string> ruleId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRuleResponse modifyRule(shared_ptr<string> instanceId, shared_ptr<string> ruleId);
  ModifySampleResponse modifySampleWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<string> sampleId,
                                               shared_ptr<ModifySampleRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySampleResponse modifySample(shared_ptr<string> instanceId, shared_ptr<string> sampleId, shared_ptr<ModifySampleRequest> request);
  ModifySceneResponse modifySceneWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> sceneId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySceneResponse modifyScene(shared_ptr<string> instanceId, shared_ptr<string> sceneId);
  OfflineFilteringAlgorithmResponse offlineFilteringAlgorithmWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<string> algorithmId,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineFilteringAlgorithmResponse offlineFilteringAlgorithm(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  PublishFlowControlTaskResponse publishFlowControlTaskWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> taskId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishFlowControlTaskResponse publishFlowControlTask(shared_ptr<string> instanceId, shared_ptr<string> taskId);
  PublishRuleResponse publishRuleWithOptions(shared_ptr<string> ruleId,
                                             shared_ptr<string> instanceId,
                                             shared_ptr<PublishRuleRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishRuleResponse publishRule(shared_ptr<string> ruleId, shared_ptr<string> instanceId, shared_ptr<PublishRuleRequest> request);
  PushColdStartDocumentResponse pushColdStartDocumentWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> tableName,
                                                                 shared_ptr<PushColdStartDocumentRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushColdStartDocumentResponse pushColdStartDocument(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<PushColdStartDocumentRequest> request);
  PushDocumentResponse pushDocumentWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<string> tableName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushDocumentResponse pushDocument(shared_ptr<string> instanceId, shared_ptr<string> tableName);
  PushInterventionResponse pushInterventionWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushInterventionResponse pushIntervention(shared_ptr<string> instanceId);
  QueryDataMessageResponse queryDataMessageWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> table,
                                                       shared_ptr<QueryDataMessageRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDataMessageResponse queryDataMessage(shared_ptr<string> instanceId, shared_ptr<string> table, shared_ptr<QueryDataMessageRequest> request);
  QueryDataMessageStatisticsResponse queryDataMessageStatisticsWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> table,
                                                                           shared_ptr<QueryDataMessageStatisticsRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDataMessageStatisticsResponse queryDataMessageStatistics(shared_ptr<string> instanceId, shared_ptr<string> table, shared_ptr<QueryDataMessageStatisticsRequest> request);
  QueryExceptionHistoryResponse queryExceptionHistoryWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<QueryExceptionHistoryRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryExceptionHistoryResponse queryExceptionHistory(shared_ptr<string> instanceId, shared_ptr<QueryExceptionHistoryRequest> request);
  QueryRawDataResponse queryRawDataWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<string> table,
                                               shared_ptr<QueryRawDataRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRawDataResponse queryRawData(shared_ptr<string> instanceId, shared_ptr<string> table, shared_ptr<QueryRawDataRequest> request);
  QuerySingleAggregationReportResponse querySingleAggregationReportWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySingleAggregationReportResponse querySingleAggregationReport(shared_ptr<string> instanceId);
  QuerySingleReportResponse querySingleReportWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<QuerySingleReportRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySingleReportResponse querySingleReport(shared_ptr<string> instanceId, shared_ptr<QuerySingleReportRequest> request);
  QuerySyncReportAggregationResponse querySyncReportAggregationWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<QuerySyncReportAggregationRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySyncReportAggregationResponse querySyncReportAggregation(shared_ptr<string> instanceId, shared_ptr<QuerySyncReportAggregationRequest> request);
  RebuildIndexResponse rebuildIndexWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<string> algorithmId,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebuildIndexResponse rebuildIndex(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  RecommendResponse recommendWithOptions(shared_ptr<string> instanceId,
                                         shared_ptr<RecommendRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecommendResponse recommend(shared_ptr<string> instanceId, shared_ptr<RecommendRequest> request);
  RefreshFeatureTableResponse refreshFeatureTableWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> type,
                                                             shared_ptr<string> featureTableId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshFeatureTableResponse refreshFeatureTable(shared_ptr<string> instanceId, shared_ptr<string> type, shared_ptr<string> featureTableId);
  RollbackRankingSystemResponse rollbackRankingSystemWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> name,
                                                                 shared_ptr<RollbackRankingSystemRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RollbackRankingSystemResponse rollbackRankingSystem(shared_ptr<string> instanceId, shared_ptr<string> name, shared_ptr<RollbackRankingSystemRequest> request);
  RunInstanceResponse runInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunInstanceResponse runInstance(shared_ptr<string> instanceId);
  RunRankingModelTemplateResponse runRankingModelTemplateWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> templateId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunRankingModelTemplateResponse runRankingModelTemplate(shared_ptr<string> instanceId, shared_ptr<string> templateId);
  RunSampleFormatConfigResponse runSampleFormatConfigWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> sampleId,
                                                                 shared_ptr<RunSampleFormatConfigRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunSampleFormatConfigResponse runSampleFormatConfig(shared_ptr<string> instanceId, shared_ptr<string> sampleId, shared_ptr<RunSampleFormatConfigRequest> request);
  StopDataSetResponse stopDataSetWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> versionId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDataSetResponse stopDataSet(shared_ptr<string> instanceId, shared_ptr<string> versionId);
  StopFlowControlTaskResponse stopFlowControlTaskWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> taskId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopFlowControlTaskResponse stopFlowControlTask(shared_ptr<string> instanceId, shared_ptr<string> taskId);
  UnLockIndexVersionResponse unLockIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> algorithmId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnLockIndexVersionResponse unLockIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> algorithmId);
  UpdateExperimentBasicInfoResponse updateExperimentBasicInfoWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<string> sceneId,
                                                                         shared_ptr<string> experimentId,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentBasicInfoResponse updateExperimentBasicInfo(shared_ptr<string> instanceId, shared_ptr<string> sceneId, shared_ptr<string> experimentId);
  UpdateExperimentConfigResponse updateExperimentConfigWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> sceneId,
                                                                   shared_ptr<string> experimentId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentConfigResponse updateExperimentConfig(shared_ptr<string> instanceId, shared_ptr<string> sceneId, shared_ptr<string> experimentId);
  UpdateExperimentStatusResponse updateExperimentStatusWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> sceneId,
                                                                   shared_ptr<string> experimentId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentStatusResponse updateExperimentStatus(shared_ptr<string> instanceId, shared_ptr<string> sceneId, shared_ptr<string> experimentId);
  UpgradeInstanceResponse upgradeInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeInstanceResponse upgradeInstance(shared_ptr<string> instanceId);
  ValidateInstanceResponse validateInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateInstanceResponse validateInstance(shared_ptr<string> instanceId);
  VerifyRankingSystemResponse verifyRankingSystemWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> name,
                                                             shared_ptr<VerifyRankingSystemRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyRankingSystemResponse verifyRankingSystem(shared_ptr<string> instanceId, shared_ptr<string> name, shared_ptr<VerifyRankingSystemRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Airec20201126

#endif
