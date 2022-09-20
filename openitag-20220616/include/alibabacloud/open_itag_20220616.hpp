// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OPENITAG20220616_H_
#define ALIBABACLOUD_OPENITAG20220616_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_OpenITag20220616 {
class SimpleUser : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> accountType{};
  shared_ptr<string> role{};
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};

  SimpleUser() {}

  explicit SimpleUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~SimpleUser() = default;
};
class CreateTaskDetailAdmins : public Darabonba::Model {
public:
  shared_ptr<vector<SimpleUser>> users{};

  CreateTaskDetailAdmins() {}

  explicit CreateTaskDetailAdmins(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<SimpleUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<SimpleUser>>(expect1);
      }
    }
  }


  virtual ~CreateTaskDetailAdmins() = default;
};
class CreateTaskDetailTaskWorkflow : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};

  CreateTaskDetailTaskWorkflow() {}

  explicit CreateTaskDetailTaskWorkflow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~CreateTaskDetailTaskWorkflow() = default;
};
class TaskAssginConfig : public Darabonba::Model {
public:
  shared_ptr<long> assignCount{};
  shared_ptr<string> assignField{};
  shared_ptr<string> assignSubTaskCount{};
  shared_ptr<string> assignType{};

  TaskAssginConfig() {}

  explicit TaskAssginConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignCount) {
      res["AssignCount"] = boost::any(*assignCount);
    }
    if (assignField) {
      res["AssignField"] = boost::any(*assignField);
    }
    if (assignSubTaskCount) {
      res["AssignSubTaskCount"] = boost::any(*assignSubTaskCount);
    }
    if (assignType) {
      res["AssignType"] = boost::any(*assignType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssignCount") != m.end() && !m["AssignCount"].empty()) {
      assignCount = make_shared<long>(boost::any_cast<long>(m["AssignCount"]));
    }
    if (m.find("AssignField") != m.end() && !m["AssignField"].empty()) {
      assignField = make_shared<string>(boost::any_cast<string>(m["AssignField"]));
    }
    if (m.find("AssignSubTaskCount") != m.end() && !m["AssignSubTaskCount"].empty()) {
      assignSubTaskCount = make_shared<string>(boost::any_cast<string>(m["AssignSubTaskCount"]));
    }
    if (m.find("AssignType") != m.end() && !m["AssignType"].empty()) {
      assignType = make_shared<string>(boost::any_cast<string>(m["AssignType"]));
    }
  }


  virtual ~TaskAssginConfig() = default;
};
class DatasetProxyConfig : public Darabonba::Model {
public:
  shared_ptr<string> datasetType{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceDatasetId{};

  DatasetProxyConfig() {}

  explicit DatasetProxyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetType) {
      res["DatasetType"] = boost::any(*datasetType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetType") != m.end() && !m["DatasetType"].empty()) {
      datasetType = make_shared<string>(boost::any_cast<string>(m["DatasetType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
  }


  virtual ~DatasetProxyConfig() = default;
};
class QuestionOption : public Darabonba::Model {
public:
  shared_ptr<vector<QuestionOption>> children{};
  shared_ptr<string> color{};
  shared_ptr<string> key{};
  shared_ptr<string> label{};
  shared_ptr<string> remark{};
  shared_ptr<string> shortcut{};

  QuestionOption() {}

  explicit QuestionOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (children) {
      vector<boost::any> temp1;
      for(auto item1:*children){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Children"] = boost::any(temp1);
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (shortcut) {
      res["Shortcut"] = boost::any(*shortcut);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Children") != m.end() && !m["Children"].empty()) {
      if (typeid(vector<boost::any>) == m["Children"].type()) {
        vector<QuestionOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Children"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        children = make_shared<vector<QuestionOption>>(expect1);
      }
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Shortcut") != m.end() && !m["Shortcut"].empty()) {
      shortcut = make_shared<string>(boost::any_cast<string>(m["Shortcut"]));
    }
  }


  virtual ~QuestionOption() = default;
};
class TaskTemplateOptionConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultResult{};
  shared_ptr<vector<QuestionOption>> options{};
  shared_ptr<vector<string>> preOptions{};
  shared_ptr<string> rule{};

  TaskTemplateOptionConfig() {}

  explicit TaskTemplateOptionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultResult) {
      res["DefaultResult"] = boost::any(*defaultResult);
    }
    if (options) {
      vector<boost::any> temp1;
      for(auto item1:*options){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Options"] = boost::any(temp1);
    }
    if (preOptions) {
      res["PreOptions"] = boost::any(*preOptions);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultResult") != m.end() && !m["DefaultResult"].empty()) {
      defaultResult = make_shared<string>(boost::any_cast<string>(m["DefaultResult"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<QuestionOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Options"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        options = make_shared<vector<QuestionOption>>(expect1);
      }
    }
    if (m.find("PreOptions") != m.end() && !m["PreOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
  }


  virtual ~TaskTemplateOptionConfig() = default;
};
class TaskTemplateConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> exif{};
  shared_ptr<string> resourceKey{};
  shared_ptr<vector<string>> selectQuestions{};
  shared_ptr<map<string, TaskTemplateOptionConfig>> templateOptionMap{};
  shared_ptr<string> templateRelationId{};

  TaskTemplateConfig() {}

  explicit TaskTemplateConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (resourceKey) {
      res["ResourceKey"] = boost::any(*resourceKey);
    }
    if (selectQuestions) {
      res["SelectQuestions"] = boost::any(*selectQuestions);
    }
    if (templateOptionMap) {
      map<string, boost::any> temp1;
      for(auto item1:*templateOptionMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["TemplateOptionMap"] = boost::any(temp1);
    }
    if (templateRelationId) {
      res["TemplateRelationId"] = boost::any(*templateRelationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Exif"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ResourceKey") != m.end() && !m["ResourceKey"].empty()) {
      resourceKey = make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
    }
    if (m.find("SelectQuestions") != m.end() && !m["SelectQuestions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SelectQuestions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SelectQuestions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      selectQuestions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateOptionMap") != m.end() && !m["TemplateOptionMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateOptionMap"].type()) {
        map<string, TaskTemplateOptionConfig> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["TemplateOptionMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            TaskTemplateOptionConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        templateOptionMap = make_shared<map<string, TaskTemplateOptionConfig>>(expect1);
      }
    }
    if (m.find("TemplateRelationId") != m.end() && !m["TemplateRelationId"].empty()) {
      templateRelationId = make_shared<string>(boost::any_cast<string>(m["TemplateRelationId"]));
    }
  }


  virtual ~TaskTemplateConfig() = default;
};
class CreateTaskDetail : public Darabonba::Model {
public:
  shared_ptr<CreateTaskDetailAdmins> admins{};
  shared_ptr<bool> allowAppendData{};
  shared_ptr<TaskAssginConfig> assignConfig{};
  shared_ptr<vector<DatasetProxyConfig>> datasetProxyRelations{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> taskName{};
  shared_ptr<TaskTemplateConfig> taskTemplateConfig{};
  shared_ptr<vector<CreateTaskDetailTaskWorkflow>> taskWorkflow{};
  shared_ptr<string> templateId{};
  shared_ptr<string> UUID{};

  CreateTaskDetail() {}

  explicit CreateTaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (admins) {
      res["Admins"] = admins ? boost::any(admins->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (allowAppendData) {
      res["AllowAppendData"] = boost::any(*allowAppendData);
    }
    if (assignConfig) {
      res["AssignConfig"] = assignConfig ? boost::any(assignConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasetProxyRelations) {
      vector<boost::any> temp1;
      for(auto item1:*datasetProxyRelations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetProxyRelations"] = boost::any(temp1);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskTemplateConfig) {
      res["TaskTemplateConfig"] = taskTemplateConfig ? boost::any(taskTemplateConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskWorkflow) {
      vector<boost::any> temp1;
      for(auto item1:*taskWorkflow){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskWorkflow"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (UUID) {
      res["UUID"] = boost::any(*UUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Admins") != m.end() && !m["Admins"].empty()) {
      if (typeid(map<string, boost::any>) == m["Admins"].type()) {
        CreateTaskDetailAdmins model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Admins"]));
        admins = make_shared<CreateTaskDetailAdmins>(model1);
      }
    }
    if (m.find("AllowAppendData") != m.end() && !m["AllowAppendData"].empty()) {
      allowAppendData = make_shared<bool>(boost::any_cast<bool>(m["AllowAppendData"]));
    }
    if (m.find("AssignConfig") != m.end() && !m["AssignConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssignConfig"].type()) {
        TaskAssginConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssignConfig"]));
        assignConfig = make_shared<TaskAssginConfig>(model1);
      }
    }
    if (m.find("DatasetProxyRelations") != m.end() && !m["DatasetProxyRelations"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetProxyRelations"].type()) {
        vector<DatasetProxyConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetProxyRelations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetProxyConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetProxyRelations = make_shared<vector<DatasetProxyConfig>>(expect1);
      }
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskTemplateConfig") != m.end() && !m["TaskTemplateConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskTemplateConfig"].type()) {
        TaskTemplateConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskTemplateConfig"]));
        taskTemplateConfig = make_shared<TaskTemplateConfig>(model1);
      }
    }
    if (m.find("TaskWorkflow") != m.end() && !m["TaskWorkflow"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskWorkflow"].type()) {
        vector<CreateTaskDetailTaskWorkflow> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskWorkflow"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskDetailTaskWorkflow model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskWorkflow = make_shared<vector<CreateTaskDetailTaskWorkflow>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UUID") != m.end() && !m["UUID"].empty()) {
      UUID = make_shared<string>(boost::any_cast<string>(m["UUID"]));
    }
  }


  virtual ~CreateTaskDetail() = default;
};
class FlowJobInfo : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> messageId{};
  shared_ptr<string> processType{};
  shared_ptr<string> taskId{};

  FlowJobInfo() {}

  explicit FlowJobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (processType) {
      res["ProcessType"] = boost::any(*processType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["Display"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("ProcessType") != m.end() && !m["ProcessType"].empty()) {
      processType = make_shared<string>(boost::any_cast<string>(m["ProcessType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~FlowJobInfo() = default;
};
class JobJobResult : public Darabonba::Model {
public:
  shared_ptr<string> resultLink{};

  JobJobResult() {}

  explicit JobJobResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultLink) {
      res["ResultLink"] = boost::any(*resultLink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultLink") != m.end() && !m["ResultLink"].empty()) {
      resultLink = make_shared<string>(boost::any_cast<string>(m["ResultLink"]));
    }
  }


  virtual ~JobJobResult() = default;
};
class Job : public Darabonba::Model {
public:
  shared_ptr<SimpleUser> creator{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> jobId{};
  shared_ptr<JobJobResult> jobResult{};
  shared_ptr<string> jobType{};
  shared_ptr<string> status{};

  Job() {}

  explicit Job(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobResult) {
      res["JobResult"] = jobResult ? boost::any(jobResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobResult") != m.end() && !m["JobResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobResult"].type()) {
        JobJobResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobResult"]));
        jobResult = make_shared<JobJobResult>(model1);
      }
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~Job() = default;
};
class MarkResult : public Darabonba::Model {
public:
  shared_ptr<bool> isNeedVoteJudge{};
  shared_ptr<string> markResult{};
  shared_ptr<string> markResultId{};
  shared_ptr<string> markTime{};
  shared_ptr<string> markTitle{};
  shared_ptr<string> progress{};
  shared_ptr<string> questionId{};
  shared_ptr<string> resultType{};
  shared_ptr<string> userMarkResultId{};
  shared_ptr<string> version{};

  MarkResult() {}

  explicit MarkResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isNeedVoteJudge) {
      res["IsNeedVoteJudge"] = boost::any(*isNeedVoteJudge);
    }
    if (markResult) {
      res["MarkResult"] = boost::any(*markResult);
    }
    if (markResultId) {
      res["MarkResultId"] = boost::any(*markResultId);
    }
    if (markTime) {
      res["MarkTime"] = boost::any(*markTime);
    }
    if (markTitle) {
      res["MarkTitle"] = boost::any(*markTitle);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (questionId) {
      res["QuestionId"] = boost::any(*questionId);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (userMarkResultId) {
      res["UserMarkResultId"] = boost::any(*userMarkResultId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsNeedVoteJudge") != m.end() && !m["IsNeedVoteJudge"].empty()) {
      isNeedVoteJudge = make_shared<bool>(boost::any_cast<bool>(m["IsNeedVoteJudge"]));
    }
    if (m.find("MarkResult") != m.end() && !m["MarkResult"].empty()) {
      markResult = make_shared<string>(boost::any_cast<string>(m["MarkResult"]));
    }
    if (m.find("MarkResultId") != m.end() && !m["MarkResultId"].empty()) {
      markResultId = make_shared<string>(boost::any_cast<string>(m["MarkResultId"]));
    }
    if (m.find("MarkTime") != m.end() && !m["MarkTime"].empty()) {
      markTime = make_shared<string>(boost::any_cast<string>(m["MarkTime"]));
    }
    if (m.find("MarkTitle") != m.end() && !m["MarkTitle"].empty()) {
      markTitle = make_shared<string>(boost::any_cast<string>(m["MarkTitle"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("QuestionId") != m.end() && !m["QuestionId"].empty()) {
      questionId = make_shared<string>(boost::any_cast<string>(m["QuestionId"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("UserMarkResultId") != m.end() && !m["UserMarkResultId"].empty()) {
      userMarkResultId = make_shared<string>(boost::any_cast<string>(m["UserMarkResultId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~MarkResult() = default;
};
class QuestionPlugin : public Darabonba::Model {
public:
  shared_ptr<bool> canSelect{};
  shared_ptr<vector<QuestionPlugin>> children{};
  shared_ptr<string> defaultResult{};
  shared_ptr<bool> display{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<string> hotKeyMap{};
  shared_ptr<string> markTitle{};
  shared_ptr<string> markTitleAlias{};
  shared_ptr<bool> mustFill{};
  shared_ptr<vector<QuestionOption>> options{};
  shared_ptr<vector<string>> preOptions{};
  shared_ptr<string> questionId{};
  shared_ptr<string> rule{};
  shared_ptr<string> selectGroup{};
  shared_ptr<bool> selected{};
  shared_ptr<string> type{};

  QuestionPlugin() {}

  explicit QuestionPlugin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSelect) {
      res["CanSelect"] = boost::any(*canSelect);
    }
    if (children) {
      vector<boost::any> temp1;
      for(auto item1:*children){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Children"] = boost::any(temp1);
    }
    if (defaultResult) {
      res["DefaultResult"] = boost::any(*defaultResult);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (hotKeyMap) {
      res["HotKeyMap"] = boost::any(*hotKeyMap);
    }
    if (markTitle) {
      res["MarkTitle"] = boost::any(*markTitle);
    }
    if (markTitleAlias) {
      res["MarkTitleAlias"] = boost::any(*markTitleAlias);
    }
    if (mustFill) {
      res["MustFill"] = boost::any(*mustFill);
    }
    if (options) {
      vector<boost::any> temp1;
      for(auto item1:*options){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Options"] = boost::any(temp1);
    }
    if (preOptions) {
      res["PreOptions"] = boost::any(*preOptions);
    }
    if (questionId) {
      res["QuestionId"] = boost::any(*questionId);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    if (selectGroup) {
      res["SelectGroup"] = boost::any(*selectGroup);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanSelect") != m.end() && !m["CanSelect"].empty()) {
      canSelect = make_shared<bool>(boost::any_cast<bool>(m["CanSelect"]));
    }
    if (m.find("Children") != m.end() && !m["Children"].empty()) {
      if (typeid(vector<boost::any>) == m["Children"].type()) {
        vector<QuestionPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Children"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        children = make_shared<vector<QuestionPlugin>>(expect1);
      }
    }
    if (m.find("DefaultResult") != m.end() && !m["DefaultResult"].empty()) {
      defaultResult = make_shared<string>(boost::any_cast<string>(m["DefaultResult"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["Display"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("HotKeyMap") != m.end() && !m["HotKeyMap"].empty()) {
      hotKeyMap = make_shared<string>(boost::any_cast<string>(m["HotKeyMap"]));
    }
    if (m.find("MarkTitle") != m.end() && !m["MarkTitle"].empty()) {
      markTitle = make_shared<string>(boost::any_cast<string>(m["MarkTitle"]));
    }
    if (m.find("MarkTitleAlias") != m.end() && !m["MarkTitleAlias"].empty()) {
      markTitleAlias = make_shared<string>(boost::any_cast<string>(m["MarkTitleAlias"]));
    }
    if (m.find("MustFill") != m.end() && !m["MustFill"].empty()) {
      mustFill = make_shared<bool>(boost::any_cast<bool>(m["MustFill"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<QuestionOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Options"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        options = make_shared<vector<QuestionOption>>(expect1);
      }
    }
    if (m.find("PreOptions") != m.end() && !m["PreOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QuestionId") != m.end() && !m["QuestionId"].empty()) {
      questionId = make_shared<string>(boost::any_cast<string>(m["QuestionId"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
    if (m.find("SelectGroup") != m.end() && !m["SelectGroup"].empty()) {
      selectGroup = make_shared<string>(boost::any_cast<string>(m["SelectGroup"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QuestionPlugin() = default;
};
class SimpleSubtaskItems : public Darabonba::Model {
public:
  shared_ptr<bool> abandonFlag{};
  shared_ptr<string> abandonRemark{};
  shared_ptr<string> dataId{};
  shared_ptr<bool> feedbackFlag{};
  shared_ptr<string> feedbackRemark{};
  shared_ptr<bool> fixedFlag{};
  shared_ptr<long> itemId{};
  shared_ptr<long> mine{};
  shared_ptr<bool> rejectFlag{};
  shared_ptr<string> state{};
  shared_ptr<long> weight{};

  SimpleSubtaskItems() {}

  explicit SimpleSubtaskItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonFlag) {
      res["AbandonFlag"] = boost::any(*abandonFlag);
    }
    if (abandonRemark) {
      res["AbandonRemark"] = boost::any(*abandonRemark);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (feedbackFlag) {
      res["FeedbackFlag"] = boost::any(*feedbackFlag);
    }
    if (feedbackRemark) {
      res["FeedbackRemark"] = boost::any(*feedbackRemark);
    }
    if (fixedFlag) {
      res["FixedFlag"] = boost::any(*fixedFlag);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (mine) {
      res["Mine"] = boost::any(*mine);
    }
    if (rejectFlag) {
      res["RejectFlag"] = boost::any(*rejectFlag);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonFlag") != m.end() && !m["AbandonFlag"].empty()) {
      abandonFlag = make_shared<bool>(boost::any_cast<bool>(m["AbandonFlag"]));
    }
    if (m.find("AbandonRemark") != m.end() && !m["AbandonRemark"].empty()) {
      abandonRemark = make_shared<string>(boost::any_cast<string>(m["AbandonRemark"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("FeedbackFlag") != m.end() && !m["FeedbackFlag"].empty()) {
      feedbackFlag = make_shared<bool>(boost::any_cast<bool>(m["FeedbackFlag"]));
    }
    if (m.find("FeedbackRemark") != m.end() && !m["FeedbackRemark"].empty()) {
      feedbackRemark = make_shared<string>(boost::any_cast<string>(m["FeedbackRemark"]));
    }
    if (m.find("FixedFlag") != m.end() && !m["FixedFlag"].empty()) {
      fixedFlag = make_shared<bool>(boost::any_cast<bool>(m["FixedFlag"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Mine") != m.end() && !m["Mine"].empty()) {
      mine = make_shared<long>(boost::any_cast<long>(m["Mine"]));
    }
    if (m.find("RejectFlag") != m.end() && !m["RejectFlag"].empty()) {
      rejectFlag = make_shared<bool>(boost::any_cast<bool>(m["RejectFlag"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~SimpleSubtaskItems() = default;
};
class SimpleSubtask : public Darabonba::Model {
public:
  shared_ptr<vector<SimpleSubtaskItems>> items{};
  shared_ptr<string> status{};
  shared_ptr<long> subtaskId{};

  SimpleSubtask() {}

  explicit SimpleSubtask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subtaskId) {
      res["SubtaskId"] = boost::any(*subtaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<SimpleSubtaskItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleSubtaskItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<SimpleSubtaskItems>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubtaskId") != m.end() && !m["SubtaskId"].empty()) {
      subtaskId = make_shared<long>(boost::any_cast<long>(m["SubtaskId"]));
    }
  }


  virtual ~SimpleSubtask() = default;
};
class SimpleTask : public Darabonba::Model {
public:
  shared_ptr<bool> archived{};
  shared_ptr<string> archivedInfos{};
  shared_ptr<SimpleUser> creator{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> labelStyle{};
  shared_ptr<SimpleUser> modifier{};
  shared_ptr<string> refTaskId{};
  shared_ptr<string> remark{};
  shared_ptr<string> stage{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskType{};
  shared_ptr<string> templateId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> UUID{};
  shared_ptr<vector<string>> workflowNodes{};

  SimpleTask() {}

  explicit SimpleTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archived) {
      res["Archived"] = boost::any(*archived);
    }
    if (archivedInfos) {
      res["ArchivedInfos"] = boost::any(*archivedInfos);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labelStyle) {
      res["LabelStyle"] = boost::any(*labelStyle);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refTaskId) {
      res["RefTaskId"] = boost::any(*refTaskId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (UUID) {
      res["UUID"] = boost::any(*UUID);
    }
    if (workflowNodes) {
      res["WorkflowNodes"] = boost::any(*workflowNodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Archived") != m.end() && !m["Archived"].empty()) {
      archived = make_shared<bool>(boost::any_cast<bool>(m["Archived"]));
    }
    if (m.find("ArchivedInfos") != m.end() && !m["ArchivedInfos"].empty()) {
      archivedInfos = make_shared<string>(boost::any_cast<string>(m["ArchivedInfos"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LabelStyle") != m.end() && !m["LabelStyle"].empty()) {
      labelStyle = make_shared<string>(boost::any_cast<string>(m["LabelStyle"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("RefTaskId") != m.end() && !m["RefTaskId"].empty()) {
      refTaskId = make_shared<string>(boost::any_cast<string>(m["RefTaskId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UUID") != m.end() && !m["UUID"].empty()) {
      UUID = make_shared<string>(boost::any_cast<string>(m["UUID"]));
    }
    if (m.find("WorkflowNodes") != m.end() && !m["WorkflowNodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WorkflowNodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WorkflowNodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workflowNodes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SimpleTask() = default;
};
class SimpleTemplate : public Darabonba::Model {
public:
  shared_ptr<string> abandonReasons{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> sharedMode{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};

  SimpleTemplate() {}

  explicit SimpleTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonReasons) {
      res["AbandonReasons"] = boost::any(*abandonReasons);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (sharedMode) {
      res["SharedMode"] = boost::any(*sharedMode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonReasons") != m.end() && !m["AbandonReasons"].empty()) {
      abandonReasons = make_shared<string>(boost::any_cast<string>(m["AbandonReasons"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("SharedMode") != m.end() && !m["SharedMode"].empty()) {
      sharedMode = make_shared<string>(boost::any_cast<string>(m["SharedMode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SimpleTemplate() = default;
};
class SimpleTenant : public Darabonba::Model {
public:
  shared_ptr<SimpleUser> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<SimpleUser> modifier{};
  shared_ptr<string> role{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> tenantName{};
  shared_ptr<string> UUID{};

  SimpleTenant() {}

  explicit SimpleTenant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (UUID) {
      res["UUID"] = boost::any(*UUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("UUID") != m.end() && !m["UUID"].empty()) {
      UUID = make_shared<string>(boost::any_cast<string>(m["UUID"]));
    }
  }


  virtual ~SimpleTenant() = default;
};
class SimpleWorkforce : public Darabonba::Model {
public:
  shared_ptr<vector<long>> userIds{};
  shared_ptr<long> workNodeId{};

  SimpleWorkforce() {}

  explicit SimpleWorkforce(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    if (workNodeId) {
      res["WorkNodeId"] = boost::any(*workNodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      userIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("WorkNodeId") != m.end() && !m["WorkNodeId"].empty()) {
      workNodeId = make_shared<long>(boost::any_cast<long>(m["WorkNodeId"]));
    }
  }


  virtual ~SimpleWorkforce() = default;
};
class SingleTenant : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> tenantName{};
  shared_ptr<string> UUID{};

  SingleTenant() {}

  explicit SingleTenant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (UUID) {
      res["UUID"] = boost::any(*UUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("UUID") != m.end() && !m["UUID"].empty()) {
      UUID = make_shared<string>(boost::any_cast<string>(m["UUID"]));
    }
  }


  virtual ~SingleTenant() = default;
};
class SubtaskDetailItems : public Darabonba::Model {
public:
  shared_ptr<bool> abandonFlag{};
  shared_ptr<string> abandonRemark{};
  shared_ptr<string> dataId{};
  shared_ptr<bool> feedbackFlag{};
  shared_ptr<string> feedbackRemark{};
  shared_ptr<bool> fixedFlag{};
  shared_ptr<long> mine{};
  shared_ptr<bool> rejectFlag{};
  shared_ptr<string> state{};
  shared_ptr<long> weight{};

  SubtaskDetailItems() {}

  explicit SubtaskDetailItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonFlag) {
      res["AbandonFlag"] = boost::any(*abandonFlag);
    }
    if (abandonRemark) {
      res["AbandonRemark"] = boost::any(*abandonRemark);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (feedbackFlag) {
      res["FeedbackFlag"] = boost::any(*feedbackFlag);
    }
    if (feedbackRemark) {
      res["FeedbackRemark"] = boost::any(*feedbackRemark);
    }
    if (fixedFlag) {
      res["FixedFlag"] = boost::any(*fixedFlag);
    }
    if (mine) {
      res["Mine"] = boost::any(*mine);
    }
    if (rejectFlag) {
      res["RejectFlag"] = boost::any(*rejectFlag);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonFlag") != m.end() && !m["AbandonFlag"].empty()) {
      abandonFlag = make_shared<bool>(boost::any_cast<bool>(m["AbandonFlag"]));
    }
    if (m.find("AbandonRemark") != m.end() && !m["AbandonRemark"].empty()) {
      abandonRemark = make_shared<string>(boost::any_cast<string>(m["AbandonRemark"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("FeedbackFlag") != m.end() && !m["FeedbackFlag"].empty()) {
      feedbackFlag = make_shared<bool>(boost::any_cast<bool>(m["FeedbackFlag"]));
    }
    if (m.find("FeedbackRemark") != m.end() && !m["FeedbackRemark"].empty()) {
      feedbackRemark = make_shared<string>(boost::any_cast<string>(m["FeedbackRemark"]));
    }
    if (m.find("FixedFlag") != m.end() && !m["FixedFlag"].empty()) {
      fixedFlag = make_shared<bool>(boost::any_cast<bool>(m["FixedFlag"]));
    }
    if (m.find("Mine") != m.end() && !m["Mine"].empty()) {
      mine = make_shared<long>(boost::any_cast<long>(m["Mine"]));
    }
    if (m.find("RejectFlag") != m.end() && !m["RejectFlag"].empty()) {
      rejectFlag = make_shared<bool>(boost::any_cast<bool>(m["RejectFlag"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~SubtaskDetailItems() = default;
};
class Workforce : public Darabonba::Model {
public:
  shared_ptr<string> nodeType{};
  shared_ptr<vector<SimpleUser>> users{};
  shared_ptr<long> workNodeId{};

  Workforce() {}

  explicit Workforce(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    if (workNodeId) {
      res["WorkNodeId"] = boost::any(*workNodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<SimpleUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<SimpleUser>>(expect1);
      }
    }
    if (m.find("WorkNodeId") != m.end() && !m["WorkNodeId"].empty()) {
      workNodeId = make_shared<long>(boost::any_cast<long>(m["WorkNodeId"]));
    }
  }


  virtual ~Workforce() = default;
};
class SubtaskDetail : public Darabonba::Model {
public:
  shared_ptr<bool> canDiscard{};
  shared_ptr<bool> canReassign{};
  shared_ptr<bool> canRelease{};
  shared_ptr<string> currentWorkNode{};
  shared_ptr<string> extConfigs{};
  shared_ptr<vector<SubtaskDetailItems>> items{};
  shared_ptr<string> status{};
  shared_ptr<string> subtaskId{};
  shared_ptr<string> taskId{};
  shared_ptr<long> weight{};
  shared_ptr<string> workNodeState{};
  shared_ptr<vector<Workforce>> workforce{};

  SubtaskDetail() {}

  explicit SubtaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canDiscard) {
      res["CanDiscard"] = boost::any(*canDiscard);
    }
    if (canReassign) {
      res["CanReassign"] = boost::any(*canReassign);
    }
    if (canRelease) {
      res["CanRelease"] = boost::any(*canRelease);
    }
    if (currentWorkNode) {
      res["CurrentWorkNode"] = boost::any(*currentWorkNode);
    }
    if (extConfigs) {
      res["ExtConfigs"] = boost::any(*extConfigs);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subtaskId) {
      res["SubtaskId"] = boost::any(*subtaskId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (workNodeState) {
      res["WorkNodeState"] = boost::any(*workNodeState);
    }
    if (workforce) {
      vector<boost::any> temp1;
      for(auto item1:*workforce){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workforce"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanDiscard") != m.end() && !m["CanDiscard"].empty()) {
      canDiscard = make_shared<bool>(boost::any_cast<bool>(m["CanDiscard"]));
    }
    if (m.find("CanReassign") != m.end() && !m["CanReassign"].empty()) {
      canReassign = make_shared<bool>(boost::any_cast<bool>(m["CanReassign"]));
    }
    if (m.find("CanRelease") != m.end() && !m["CanRelease"].empty()) {
      canRelease = make_shared<bool>(boost::any_cast<bool>(m["CanRelease"]));
    }
    if (m.find("CurrentWorkNode") != m.end() && !m["CurrentWorkNode"].empty()) {
      currentWorkNode = make_shared<string>(boost::any_cast<string>(m["CurrentWorkNode"]));
    }
    if (m.find("ExtConfigs") != m.end() && !m["ExtConfigs"].empty()) {
      extConfigs = make_shared<string>(boost::any_cast<string>(m["ExtConfigs"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<SubtaskDetailItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubtaskDetailItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<SubtaskDetailItems>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubtaskId") != m.end() && !m["SubtaskId"].empty()) {
      subtaskId = make_shared<string>(boost::any_cast<string>(m["SubtaskId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("WorkNodeState") != m.end() && !m["WorkNodeState"].empty()) {
      workNodeState = make_shared<string>(boost::any_cast<string>(m["WorkNodeState"]));
    }
    if (m.find("Workforce") != m.end() && !m["Workforce"].empty()) {
      if (typeid(vector<boost::any>) == m["Workforce"].type()) {
        vector<Workforce> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workforce"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Workforce model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workforce = make_shared<vector<Workforce>>(expect1);
      }
    }
  }


  virtual ~SubtaskDetail() = default;
};
class SubtaskItemDetailAnnotations : public Darabonba::Model {
public:
  shared_ptr<bool> abandonFlag{};
  shared_ptr<string> abandonRemark{};
  shared_ptr<string> dataId{};
  shared_ptr<bool> feedbackFlag{};
  shared_ptr<string> feedbackRemark{};
  shared_ptr<bool> fixedFlag{};
  shared_ptr<long> mine{};
  shared_ptr<bool> rejectFlag{};
  shared_ptr<string> state{};
  shared_ptr<long> weight{};

  SubtaskItemDetailAnnotations() {}

  explicit SubtaskItemDetailAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonFlag) {
      res["AbandonFlag"] = boost::any(*abandonFlag);
    }
    if (abandonRemark) {
      res["AbandonRemark"] = boost::any(*abandonRemark);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (feedbackFlag) {
      res["FeedbackFlag"] = boost::any(*feedbackFlag);
    }
    if (feedbackRemark) {
      res["FeedbackRemark"] = boost::any(*feedbackRemark);
    }
    if (fixedFlag) {
      res["FixedFlag"] = boost::any(*fixedFlag);
    }
    if (mine) {
      res["Mine"] = boost::any(*mine);
    }
    if (rejectFlag) {
      res["RejectFlag"] = boost::any(*rejectFlag);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonFlag") != m.end() && !m["AbandonFlag"].empty()) {
      abandonFlag = make_shared<bool>(boost::any_cast<bool>(m["AbandonFlag"]));
    }
    if (m.find("AbandonRemark") != m.end() && !m["AbandonRemark"].empty()) {
      abandonRemark = make_shared<string>(boost::any_cast<string>(m["AbandonRemark"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("FeedbackFlag") != m.end() && !m["FeedbackFlag"].empty()) {
      feedbackFlag = make_shared<bool>(boost::any_cast<bool>(m["FeedbackFlag"]));
    }
    if (m.find("FeedbackRemark") != m.end() && !m["FeedbackRemark"].empty()) {
      feedbackRemark = make_shared<string>(boost::any_cast<string>(m["FeedbackRemark"]));
    }
    if (m.find("FixedFlag") != m.end() && !m["FixedFlag"].empty()) {
      fixedFlag = make_shared<bool>(boost::any_cast<bool>(m["FixedFlag"]));
    }
    if (m.find("Mine") != m.end() && !m["Mine"].empty()) {
      mine = make_shared<long>(boost::any_cast<long>(m["Mine"]));
    }
    if (m.find("RejectFlag") != m.end() && !m["RejectFlag"].empty()) {
      rejectFlag = make_shared<bool>(boost::any_cast<bool>(m["RejectFlag"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~SubtaskItemDetailAnnotations() = default;
};
class SubtaskItemDetail : public Darabonba::Model {
public:
  shared_ptr<vector<SubtaskItemDetailAnnotations>> annotations{};
  shared_ptr<map<string, boost::any>> dataSource{};
  shared_ptr<long> itemId{};

  SubtaskItemDetail() {}

  explicit SubtaskItemDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Annotations"] = boost::any(temp1);
    }
    if (dataSource) {
      res["DataSource"] = boost::any(*dataSource);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["Annotations"].type()) {
        vector<SubtaskItemDetailAnnotations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubtaskItemDetailAnnotations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<SubtaskItemDetailAnnotations>>(expect1);
      }
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DataSource"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dataSource = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
  }


  virtual ~SubtaskItemDetail() = default;
};
class TaskDetailDatasetProxyRelations : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetType{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceBizId{};
  shared_ptr<string> sourceDatasetId{};

  TaskDetailDatasetProxyRelations() {}

  explicit TaskDetailDatasetProxyRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetType) {
      res["DatasetType"] = boost::any(*datasetType);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceBizId) {
      res["SourceBizId"] = boost::any(*sourceBizId);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetType") != m.end() && !m["DatasetType"].empty()) {
      datasetType = make_shared<string>(boost::any_cast<string>(m["DatasetType"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceBizId") != m.end() && !m["SourceBizId"].empty()) {
      sourceBizId = make_shared<string>(boost::any_cast<string>(m["SourceBizId"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
  }


  virtual ~TaskDetailDatasetProxyRelations() = default;
};
class TaskDetailTaskTemplateConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<string> resourceKey{};
  shared_ptr<map<string, boost::any>> robotConfig{};
  shared_ptr<vector<string>> selectQuestions{};
  shared_ptr<map<string, boost::any>> templateOptionMap{};
  shared_ptr<string> templateRelationId{};

  TaskDetailTaskTemplateConfig() {}

  explicit TaskDetailTaskTemplateConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (resourceKey) {
      res["ResourceKey"] = boost::any(*resourceKey);
    }
    if (robotConfig) {
      res["RobotConfig"] = boost::any(*robotConfig);
    }
    if (selectQuestions) {
      res["SelectQuestions"] = boost::any(*selectQuestions);
    }
    if (templateOptionMap) {
      res["TemplateOptionMap"] = boost::any(*templateOptionMap);
    }
    if (templateRelationId) {
      res["TemplateRelationId"] = boost::any(*templateRelationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceKey") != m.end() && !m["ResourceKey"].empty()) {
      resourceKey = make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
    }
    if (m.find("RobotConfig") != m.end() && !m["RobotConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RobotConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      robotConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SelectQuestions") != m.end() && !m["SelectQuestions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SelectQuestions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SelectQuestions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      selectQuestions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateOptionMap") != m.end() && !m["TemplateOptionMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TemplateOptionMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateOptionMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateRelationId") != m.end() && !m["TemplateRelationId"].empty()) {
      templateRelationId = make_shared<string>(boost::any_cast<string>(m["TemplateRelationId"]));
    }
  }


  virtual ~TaskDetailTaskTemplateConfig() = default;
};
class TaskDetailTaskWorkflow : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<vector<string>> groups{};
  shared_ptr<string> nodeName{};
  shared_ptr<vector<SimpleUser>> users{};

  TaskDetailTaskWorkflow() {}

  explicit TaskDetailTaskWorkflow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Groups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<SimpleUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<SimpleUser>>(expect1);
      }
    }
  }


  virtual ~TaskDetailTaskWorkflow() = default;
};
class TaskDetail : public Darabonba::Model {
public:
  shared_ptr<vector<SimpleUser>> admins{};
  shared_ptr<long> alertTime{};
  shared_ptr<bool> allowAppendData{};
  shared_ptr<bool> archived{};
  shared_ptr<string> archivedInfos{};
  shared_ptr<map<string, boost::any>> assignConfig{};
  shared_ptr<SimpleUser> creator{};
  shared_ptr<vector<TaskDetailDatasetProxyRelations>> datasetProxyRelations{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> labelStyle{};
  shared_ptr<map<string, boost::any>> mineConfigs{};
  shared_ptr<SimpleUser> modifier{};
  shared_ptr<map<string, boost::any>> noticeConfig{};
  shared_ptr<map<string, boost::any>> periodConfig{};
  shared_ptr<string> refTaskId{};
  shared_ptr<map<string, boost::any>> relateTaskConfig{};
  shared_ptr<string> remark{};
  shared_ptr<map<string, boost::any>> resultCallbackConfig{};
  shared_ptr<string> stage{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<TaskDetailTaskTemplateConfig> taskTemplateConfig{};
  shared_ptr<string> taskType{};
  shared_ptr<vector<TaskDetailTaskWorkflow>> taskWorkflow{};
  shared_ptr<string> templateId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> tenantName{};
  shared_ptr<string> UUID{};
  shared_ptr<map<string, boost::any>> voteConfigs{};
  shared_ptr<vector<string>> workflowNodes{};
  shared_ptr<string> runMsg{};

  TaskDetail() {}

  explicit TaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (admins) {
      vector<boost::any> temp1;
      for(auto item1:*admins){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Admins"] = boost::any(temp1);
    }
    if (alertTime) {
      res["AlertTime"] = boost::any(*alertTime);
    }
    if (allowAppendData) {
      res["AllowAppendData"] = boost::any(*allowAppendData);
    }
    if (archived) {
      res["Archived"] = boost::any(*archived);
    }
    if (archivedInfos) {
      res["ArchivedInfos"] = boost::any(*archivedInfos);
    }
    if (assignConfig) {
      res["AssignConfig"] = boost::any(*assignConfig);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasetProxyRelations) {
      vector<boost::any> temp1;
      for(auto item1:*datasetProxyRelations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetProxyRelations"] = boost::any(temp1);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labelStyle) {
      res["LabelStyle"] = boost::any(*labelStyle);
    }
    if (mineConfigs) {
      res["MineConfigs"] = boost::any(*mineConfigs);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (noticeConfig) {
      res["NoticeConfig"] = boost::any(*noticeConfig);
    }
    if (periodConfig) {
      res["PeriodConfig"] = boost::any(*periodConfig);
    }
    if (refTaskId) {
      res["RefTaskId"] = boost::any(*refTaskId);
    }
    if (relateTaskConfig) {
      res["RelateTaskConfig"] = boost::any(*relateTaskConfig);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resultCallbackConfig) {
      res["ResultCallbackConfig"] = boost::any(*resultCallbackConfig);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskTemplateConfig) {
      res["TaskTemplateConfig"] = taskTemplateConfig ? boost::any(taskTemplateConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskWorkflow) {
      vector<boost::any> temp1;
      for(auto item1:*taskWorkflow){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskWorkflow"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (UUID) {
      res["UUID"] = boost::any(*UUID);
    }
    if (voteConfigs) {
      res["VoteConfigs"] = boost::any(*voteConfigs);
    }
    if (workflowNodes) {
      res["WorkflowNodes"] = boost::any(*workflowNodes);
    }
    if (runMsg) {
      res["runMsg"] = boost::any(*runMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Admins") != m.end() && !m["Admins"].empty()) {
      if (typeid(vector<boost::any>) == m["Admins"].type()) {
        vector<SimpleUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Admins"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        admins = make_shared<vector<SimpleUser>>(expect1);
      }
    }
    if (m.find("AlertTime") != m.end() && !m["AlertTime"].empty()) {
      alertTime = make_shared<long>(boost::any_cast<long>(m["AlertTime"]));
    }
    if (m.find("AllowAppendData") != m.end() && !m["AllowAppendData"].empty()) {
      allowAppendData = make_shared<bool>(boost::any_cast<bool>(m["AllowAppendData"]));
    }
    if (m.find("Archived") != m.end() && !m["Archived"].empty()) {
      archived = make_shared<bool>(boost::any_cast<bool>(m["Archived"]));
    }
    if (m.find("ArchivedInfos") != m.end() && !m["ArchivedInfos"].empty()) {
      archivedInfos = make_shared<string>(boost::any_cast<string>(m["ArchivedInfos"]));
    }
    if (m.find("AssignConfig") != m.end() && !m["AssignConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AssignConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      assignConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("DatasetProxyRelations") != m.end() && !m["DatasetProxyRelations"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetProxyRelations"].type()) {
        vector<TaskDetailDatasetProxyRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetProxyRelations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskDetailDatasetProxyRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetProxyRelations = make_shared<vector<TaskDetailDatasetProxyRelations>>(expect1);
      }
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LabelStyle") != m.end() && !m["LabelStyle"].empty()) {
      labelStyle = make_shared<string>(boost::any_cast<string>(m["LabelStyle"]));
    }
    if (m.find("MineConfigs") != m.end() && !m["MineConfigs"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["MineConfigs"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      mineConfigs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("NoticeConfig") != m.end() && !m["NoticeConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["NoticeConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      noticeConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PeriodConfig") != m.end() && !m["PeriodConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PeriodConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      periodConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RefTaskId") != m.end() && !m["RefTaskId"].empty()) {
      refTaskId = make_shared<string>(boost::any_cast<string>(m["RefTaskId"]));
    }
    if (m.find("RelateTaskConfig") != m.end() && !m["RelateTaskConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RelateTaskConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      relateTaskConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResultCallbackConfig") != m.end() && !m["ResultCallbackConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResultCallbackConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resultCallbackConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskTemplateConfig") != m.end() && !m["TaskTemplateConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskTemplateConfig"].type()) {
        TaskDetailTaskTemplateConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskTemplateConfig"]));
        taskTemplateConfig = make_shared<TaskDetailTaskTemplateConfig>(model1);
      }
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskWorkflow") != m.end() && !m["TaskWorkflow"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskWorkflow"].type()) {
        vector<TaskDetailTaskWorkflow> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskWorkflow"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskDetailTaskWorkflow model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskWorkflow = make_shared<vector<TaskDetailTaskWorkflow>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("UUID") != m.end() && !m["UUID"].empty()) {
      UUID = make_shared<string>(boost::any_cast<string>(m["UUID"]));
    }
    if (m.find("VoteConfigs") != m.end() && !m["VoteConfigs"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["VoteConfigs"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      voteConfigs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("WorkflowNodes") != m.end() && !m["WorkflowNodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WorkflowNodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WorkflowNodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workflowNodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("runMsg") != m.end() && !m["runMsg"].empty()) {
      runMsg = make_shared<string>(boost::any_cast<string>(m["runMsg"]));
    }
  }


  virtual ~TaskDetail() = default;
};
class TaskStatistic : public Darabonba::Model {
public:
  shared_ptr<double> acceptItemCount{};
  shared_ptr<double> checkAbandon{};
  shared_ptr<double> checkAccuracy{};
  shared_ptr<double> checkEfficiency{};
  shared_ptr<double> checkedAccuracy{};
  shared_ptr<double> checkedError{};
  shared_ptr<double> checkedRejectCount{};
  shared_ptr<double> finalAbandonCount{};
  shared_ptr<long> finishedItemCount{};
  shared_ptr<long> finishedSubtaskCount{};
  shared_ptr<double> markEfficiency{};
  shared_ptr<double> preMarkFixedCount{};
  shared_ptr<double> sampledAccuracy{};
  shared_ptr<double> sampledErrorCount{};
  shared_ptr<double> sampledRejectCount{};
  shared_ptr<double> samplingAccuracy{};
  shared_ptr<double> totalCheckCount{};
  shared_ptr<double> totalCheckTime{};
  shared_ptr<double> totalCheckedCount{};
  shared_ptr<long> totalItemCount{};
  shared_ptr<double> totalMarkTime{};
  shared_ptr<double> totalSampledCount{};
  shared_ptr<double> totalSamplingCount{};
  shared_ptr<long> totalSubtaskCount{};
  shared_ptr<double> totalWorkTime{};

  TaskStatistic() {}

  explicit TaskStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptItemCount) {
      res["AcceptItemCount"] = boost::any(*acceptItemCount);
    }
    if (checkAbandon) {
      res["CheckAbandon"] = boost::any(*checkAbandon);
    }
    if (checkAccuracy) {
      res["CheckAccuracy"] = boost::any(*checkAccuracy);
    }
    if (checkEfficiency) {
      res["CheckEfficiency"] = boost::any(*checkEfficiency);
    }
    if (checkedAccuracy) {
      res["CheckedAccuracy"] = boost::any(*checkedAccuracy);
    }
    if (checkedError) {
      res["CheckedError"] = boost::any(*checkedError);
    }
    if (checkedRejectCount) {
      res["CheckedRejectCount"] = boost::any(*checkedRejectCount);
    }
    if (finalAbandonCount) {
      res["FinalAbandonCount"] = boost::any(*finalAbandonCount);
    }
    if (finishedItemCount) {
      res["FinishedItemCount"] = boost::any(*finishedItemCount);
    }
    if (finishedSubtaskCount) {
      res["FinishedSubtaskCount"] = boost::any(*finishedSubtaskCount);
    }
    if (markEfficiency) {
      res["MarkEfficiency"] = boost::any(*markEfficiency);
    }
    if (preMarkFixedCount) {
      res["PreMarkFixedCount"] = boost::any(*preMarkFixedCount);
    }
    if (sampledAccuracy) {
      res["SampledAccuracy"] = boost::any(*sampledAccuracy);
    }
    if (sampledErrorCount) {
      res["SampledErrorCount"] = boost::any(*sampledErrorCount);
    }
    if (sampledRejectCount) {
      res["SampledRejectCount"] = boost::any(*sampledRejectCount);
    }
    if (samplingAccuracy) {
      res["SamplingAccuracy"] = boost::any(*samplingAccuracy);
    }
    if (totalCheckCount) {
      res["TotalCheckCount"] = boost::any(*totalCheckCount);
    }
    if (totalCheckTime) {
      res["TotalCheckTime"] = boost::any(*totalCheckTime);
    }
    if (totalCheckedCount) {
      res["TotalCheckedCount"] = boost::any(*totalCheckedCount);
    }
    if (totalItemCount) {
      res["TotalItemCount"] = boost::any(*totalItemCount);
    }
    if (totalMarkTime) {
      res["TotalMarkTime"] = boost::any(*totalMarkTime);
    }
    if (totalSampledCount) {
      res["TotalSampledCount"] = boost::any(*totalSampledCount);
    }
    if (totalSamplingCount) {
      res["TotalSamplingCount"] = boost::any(*totalSamplingCount);
    }
    if (totalSubtaskCount) {
      res["TotalSubtaskCount"] = boost::any(*totalSubtaskCount);
    }
    if (totalWorkTime) {
      res["TotalWorkTime"] = boost::any(*totalWorkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptItemCount") != m.end() && !m["AcceptItemCount"].empty()) {
      acceptItemCount = make_shared<double>(boost::any_cast<double>(m["AcceptItemCount"]));
    }
    if (m.find("CheckAbandon") != m.end() && !m["CheckAbandon"].empty()) {
      checkAbandon = make_shared<double>(boost::any_cast<double>(m["CheckAbandon"]));
    }
    if (m.find("CheckAccuracy") != m.end() && !m["CheckAccuracy"].empty()) {
      checkAccuracy = make_shared<double>(boost::any_cast<double>(m["CheckAccuracy"]));
    }
    if (m.find("CheckEfficiency") != m.end() && !m["CheckEfficiency"].empty()) {
      checkEfficiency = make_shared<double>(boost::any_cast<double>(m["CheckEfficiency"]));
    }
    if (m.find("CheckedAccuracy") != m.end() && !m["CheckedAccuracy"].empty()) {
      checkedAccuracy = make_shared<double>(boost::any_cast<double>(m["CheckedAccuracy"]));
    }
    if (m.find("CheckedError") != m.end() && !m["CheckedError"].empty()) {
      checkedError = make_shared<double>(boost::any_cast<double>(m["CheckedError"]));
    }
    if (m.find("CheckedRejectCount") != m.end() && !m["CheckedRejectCount"].empty()) {
      checkedRejectCount = make_shared<double>(boost::any_cast<double>(m["CheckedRejectCount"]));
    }
    if (m.find("FinalAbandonCount") != m.end() && !m["FinalAbandonCount"].empty()) {
      finalAbandonCount = make_shared<double>(boost::any_cast<double>(m["FinalAbandonCount"]));
    }
    if (m.find("FinishedItemCount") != m.end() && !m["FinishedItemCount"].empty()) {
      finishedItemCount = make_shared<long>(boost::any_cast<long>(m["FinishedItemCount"]));
    }
    if (m.find("FinishedSubtaskCount") != m.end() && !m["FinishedSubtaskCount"].empty()) {
      finishedSubtaskCount = make_shared<long>(boost::any_cast<long>(m["FinishedSubtaskCount"]));
    }
    if (m.find("MarkEfficiency") != m.end() && !m["MarkEfficiency"].empty()) {
      markEfficiency = make_shared<double>(boost::any_cast<double>(m["MarkEfficiency"]));
    }
    if (m.find("PreMarkFixedCount") != m.end() && !m["PreMarkFixedCount"].empty()) {
      preMarkFixedCount = make_shared<double>(boost::any_cast<double>(m["PreMarkFixedCount"]));
    }
    if (m.find("SampledAccuracy") != m.end() && !m["SampledAccuracy"].empty()) {
      sampledAccuracy = make_shared<double>(boost::any_cast<double>(m["SampledAccuracy"]));
    }
    if (m.find("SampledErrorCount") != m.end() && !m["SampledErrorCount"].empty()) {
      sampledErrorCount = make_shared<double>(boost::any_cast<double>(m["SampledErrorCount"]));
    }
    if (m.find("SampledRejectCount") != m.end() && !m["SampledRejectCount"].empty()) {
      sampledRejectCount = make_shared<double>(boost::any_cast<double>(m["SampledRejectCount"]));
    }
    if (m.find("SamplingAccuracy") != m.end() && !m["SamplingAccuracy"].empty()) {
      samplingAccuracy = make_shared<double>(boost::any_cast<double>(m["SamplingAccuracy"]));
    }
    if (m.find("TotalCheckCount") != m.end() && !m["TotalCheckCount"].empty()) {
      totalCheckCount = make_shared<double>(boost::any_cast<double>(m["TotalCheckCount"]));
    }
    if (m.find("TotalCheckTime") != m.end() && !m["TotalCheckTime"].empty()) {
      totalCheckTime = make_shared<double>(boost::any_cast<double>(m["TotalCheckTime"]));
    }
    if (m.find("TotalCheckedCount") != m.end() && !m["TotalCheckedCount"].empty()) {
      totalCheckedCount = make_shared<double>(boost::any_cast<double>(m["TotalCheckedCount"]));
    }
    if (m.find("TotalItemCount") != m.end() && !m["TotalItemCount"].empty()) {
      totalItemCount = make_shared<long>(boost::any_cast<long>(m["TotalItemCount"]));
    }
    if (m.find("TotalMarkTime") != m.end() && !m["TotalMarkTime"].empty()) {
      totalMarkTime = make_shared<double>(boost::any_cast<double>(m["TotalMarkTime"]));
    }
    if (m.find("TotalSampledCount") != m.end() && !m["TotalSampledCount"].empty()) {
      totalSampledCount = make_shared<double>(boost::any_cast<double>(m["TotalSampledCount"]));
    }
    if (m.find("TotalSamplingCount") != m.end() && !m["TotalSamplingCount"].empty()) {
      totalSamplingCount = make_shared<double>(boost::any_cast<double>(m["TotalSamplingCount"]));
    }
    if (m.find("TotalSubtaskCount") != m.end() && !m["TotalSubtaskCount"].empty()) {
      totalSubtaskCount = make_shared<long>(boost::any_cast<long>(m["TotalSubtaskCount"]));
    }
    if (m.find("TotalWorkTime") != m.end() && !m["TotalWorkTime"].empty()) {
      totalWorkTime = make_shared<double>(boost::any_cast<double>(m["TotalWorkTime"]));
    }
  }


  virtual ~TaskStatistic() = default;
};
class ViewPluginVisitInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> aftsConf{};
  shared_ptr<map<string, boost::any>> ossConf{};

  ViewPluginVisitInfo() {}

  explicit ViewPluginVisitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aftsConf) {
      res["aftsConf"] = boost::any(*aftsConf);
    }
    if (ossConf) {
      res["ossConf"] = boost::any(*ossConf);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aftsConf") != m.end() && !m["aftsConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["aftsConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      aftsConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ossConf") != m.end() && !m["ossConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ossConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ossConf = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ViewPluginVisitInfo() = default;
};
class ViewPlugin : public Darabonba::Model {
public:
  shared_ptr<string> bindField{};
  shared_ptr<string> convertor{};
  shared_ptr<bool> corsProxy{};
  shared_ptr<bool> displayOriImg{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<bool> hide{};
  shared_ptr<map<string, boost::any>> plugins{};
  shared_ptr<vector<string>> relationQuestionIds{};
  shared_ptr<string> type{};
  shared_ptr<ViewPluginVisitInfo> visitInfo{};

  ViewPlugin() {}

  explicit ViewPlugin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindField) {
      res["BindField"] = boost::any(*bindField);
    }
    if (convertor) {
      res["Convertor"] = boost::any(*convertor);
    }
    if (corsProxy) {
      res["CorsProxy"] = boost::any(*corsProxy);
    }
    if (displayOriImg) {
      res["DisplayOriImg"] = boost::any(*displayOriImg);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (hide) {
      res["Hide"] = boost::any(*hide);
    }
    if (plugins) {
      res["Plugins"] = boost::any(*plugins);
    }
    if (relationQuestionIds) {
      res["RelationQuestionIds"] = boost::any(*relationQuestionIds);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (visitInfo) {
      res["VisitInfo"] = visitInfo ? boost::any(visitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindField") != m.end() && !m["BindField"].empty()) {
      bindField = make_shared<string>(boost::any_cast<string>(m["BindField"]));
    }
    if (m.find("Convertor") != m.end() && !m["Convertor"].empty()) {
      convertor = make_shared<string>(boost::any_cast<string>(m["Convertor"]));
    }
    if (m.find("CorsProxy") != m.end() && !m["CorsProxy"].empty()) {
      corsProxy = make_shared<bool>(boost::any_cast<bool>(m["CorsProxy"]));
    }
    if (m.find("DisplayOriImg") != m.end() && !m["DisplayOriImg"].empty()) {
      displayOriImg = make_shared<bool>(boost::any_cast<bool>(m["DisplayOriImg"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Hide") != m.end() && !m["Hide"].empty()) {
      hide = make_shared<bool>(boost::any_cast<bool>(m["Hide"]));
    }
    if (m.find("Plugins") != m.end() && !m["Plugins"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Plugins"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      plugins = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RelationQuestionIds") != m.end() && !m["RelationQuestionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelationQuestionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelationQuestionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relationQuestionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VisitInfo") != m.end() && !m["VisitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VisitInfo"].type()) {
        ViewPluginVisitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VisitInfo"]));
        visitInfo = make_shared<ViewPluginVisitInfo>(model1);
      }
    }
  }


  virtual ~ViewPlugin() = default;
};
class TemplateDTOViewConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<ViewPlugin>> viewPlugins{};

  TemplateDTOViewConfigs() {}

  explicit TemplateDTOViewConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (viewPlugins) {
      vector<boost::any> temp1;
      for(auto item1:*viewPlugins){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ViewPlugins"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ViewPlugins") != m.end() && !m["ViewPlugins"].empty()) {
      if (typeid(vector<boost::any>) == m["ViewPlugins"].type()) {
        vector<ViewPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ViewPlugins"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ViewPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        viewPlugins = make_shared<vector<ViewPlugin>>(expect1);
      }
    }
  }


  virtual ~TemplateDTOViewConfigs() = default;
};
class TemplateDTO : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<vector<QuestionPlugin>> questionConfigs{};
  shared_ptr<vector<map<string, boost::any>>> robotConfigs{};
  shared_ptr<string> sharedMode{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<TemplateDTOViewConfigs> viewConfigs{};

  TemplateDTO() {}

  explicit TemplateDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (questionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*questionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuestionConfigs"] = boost::any(temp1);
    }
    if (robotConfigs) {
      res["RobotConfigs"] = boost::any(*robotConfigs);
    }
    if (sharedMode) {
      res["SharedMode"] = boost::any(*sharedMode);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (viewConfigs) {
      res["ViewConfigs"] = viewConfigs ? boost::any(viewConfigs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("QuestionConfigs") != m.end() && !m["QuestionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["QuestionConfigs"].type()) {
        vector<QuestionPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuestionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questionConfigs = make_shared<vector<QuestionPlugin>>(expect1);
      }
    }
    if (m.find("RobotConfigs") != m.end() && !m["RobotConfigs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["RobotConfigs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RobotConfigs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      robotConfigs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("SharedMode") != m.end() && !m["SharedMode"].empty()) {
      sharedMode = make_shared<string>(boost::any_cast<string>(m["SharedMode"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("ViewConfigs") != m.end() && !m["ViewConfigs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ViewConfigs"].type()) {
        TemplateDTOViewConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ViewConfigs"]));
        viewConfigs = make_shared<TemplateDTOViewConfigs>(model1);
      }
    }
  }


  virtual ~TemplateDTO() = default;
};
class TemplateDetailViewConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<ViewPlugin>> viewPlugins{};

  TemplateDetailViewConfigs() {}

  explicit TemplateDetailViewConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (viewPlugins) {
      vector<boost::any> temp1;
      for(auto item1:*viewPlugins){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ViewPlugins"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ViewPlugins") != m.end() && !m["ViewPlugins"].empty()) {
      if (typeid(vector<boost::any>) == m["ViewPlugins"].type()) {
        vector<ViewPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ViewPlugins"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ViewPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        viewPlugins = make_shared<vector<ViewPlugin>>(expect1);
      }
    }
  }


  virtual ~TemplateDetailViewConfigs() = default;
};
class TemplateDetail : public Darabonba::Model {
public:
  shared_ptr<vector<string>> abandonReasons{};
  shared_ptr<string> classify{};
  shared_ptr<SimpleUser> creator{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<SimpleUser> modifier{};
  shared_ptr<vector<QuestionPlugin>> questionConfigs{};
  shared_ptr<string> sharedMode{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<TemplateDetailViewConfigs> viewConfigs{};

  TemplateDetail() {}

  explicit TemplateDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonReasons) {
      res["AbandonReasons"] = boost::any(*abandonReasons);
    }
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (questionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*questionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuestionConfigs"] = boost::any(temp1);
    }
    if (sharedMode) {
      res["SharedMode"] = boost::any(*sharedMode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (viewConfigs) {
      res["ViewConfigs"] = viewConfigs ? boost::any(viewConfigs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonReasons") != m.end() && !m["AbandonReasons"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AbandonReasons"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AbandonReasons"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      abandonReasons = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<SimpleUser>(model1);
      }
    }
    if (m.find("QuestionConfigs") != m.end() && !m["QuestionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["QuestionConfigs"].type()) {
        vector<QuestionPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuestionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questionConfigs = make_shared<vector<QuestionPlugin>>(expect1);
      }
    }
    if (m.find("SharedMode") != m.end() && !m["SharedMode"].empty()) {
      sharedMode = make_shared<string>(boost::any_cast<string>(m["SharedMode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ViewConfigs") != m.end() && !m["ViewConfigs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ViewConfigs"].type()) {
        TemplateDetailViewConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ViewConfigs"]));
        viewConfigs = make_shared<TemplateDetailViewConfigs>(model1);
      }
    }
  }


  virtual ~TemplateDetail() = default;
};
class TemplateQuestion : public Darabonba::Model {
public:
  shared_ptr<vector<TemplateQuestion>> children{};
  shared_ptr<map<string, boost::any>> exif{};
  shared_ptr<string> markTitle{};
  shared_ptr<vector<QuestionOption>> options{};
  shared_ptr<vector<string>> preOptions{};
  shared_ptr<long> questionId{};
  shared_ptr<string> type{};

  TemplateQuestion() {}

  explicit TemplateQuestion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (children) {
      vector<boost::any> temp1;
      for(auto item1:*children){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Children"] = boost::any(temp1);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (markTitle) {
      res["MarkTitle"] = boost::any(*markTitle);
    }
    if (options) {
      vector<boost::any> temp1;
      for(auto item1:*options){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Options"] = boost::any(temp1);
    }
    if (preOptions) {
      res["PreOptions"] = boost::any(*preOptions);
    }
    if (questionId) {
      res["QuestionId"] = boost::any(*questionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Children") != m.end() && !m["Children"].empty()) {
      if (typeid(vector<boost::any>) == m["Children"].type()) {
        vector<TemplateQuestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Children"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TemplateQuestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        children = make_shared<vector<TemplateQuestion>>(expect1);
      }
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Exif"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MarkTitle") != m.end() && !m["MarkTitle"].empty()) {
      markTitle = make_shared<string>(boost::any_cast<string>(m["MarkTitle"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<QuestionOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Options"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        options = make_shared<vector<QuestionOption>>(expect1);
      }
    }
    if (m.find("PreOptions") != m.end() && !m["PreOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QuestionId") != m.end() && !m["QuestionId"].empty()) {
      questionId = make_shared<long>(boost::any_cast<long>(m["QuestionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~TemplateQuestion() = default;
};
class TemplateViewFieldsVisitInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> aftsConf{};
  shared_ptr<map<string, boost::any>> ossConf{};

  TemplateViewFieldsVisitInfo() {}

  explicit TemplateViewFieldsVisitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aftsConf) {
      res["AftsConf"] = boost::any(*aftsConf);
    }
    if (ossConf) {
      res["OssConf"] = boost::any(*ossConf);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AftsConf") != m.end() && !m["AftsConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AftsConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      aftsConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OssConf") != m.end() && !m["OssConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OssConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ossConf = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~TemplateViewFieldsVisitInfo() = default;
};
class TemplateViewFields : public Darabonba::Model {
public:
  shared_ptr<bool> displayOriImg{};
  shared_ptr<string> fieldName{};
  shared_ptr<string> type{};
  shared_ptr<TemplateViewFieldsVisitInfo> visitInfo{};

  TemplateViewFields() {}

  explicit TemplateViewFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayOriImg) {
      res["DisplayOriImg"] = boost::any(*displayOriImg);
    }
    if (fieldName) {
      res["FieldName"] = boost::any(*fieldName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (visitInfo) {
      res["VisitInfo"] = visitInfo ? boost::any(visitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayOriImg") != m.end() && !m["DisplayOriImg"].empty()) {
      displayOriImg = make_shared<bool>(boost::any_cast<bool>(m["DisplayOriImg"]));
    }
    if (m.find("FieldName") != m.end() && !m["FieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["FieldName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VisitInfo") != m.end() && !m["VisitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VisitInfo"].type()) {
        TemplateViewFieldsVisitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VisitInfo"]));
        visitInfo = make_shared<TemplateViewFieldsVisitInfo>(model1);
      }
    }
  }


  virtual ~TemplateViewFields() = default;
};
class TemplateView : public Darabonba::Model {
public:
  shared_ptr<vector<TemplateViewFields>> fields{};

  TemplateView() {}

  explicit TemplateView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<TemplateViewFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TemplateViewFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<TemplateViewFields>>(expect1);
      }
    }
  }


  virtual ~TemplateView() = default;
};
class UpdateTaskDTO : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> exif{};
  shared_ptr<string> remark{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> taskName{};

  UpdateTaskDTO() {}

  explicit UpdateTaskDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Exif"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      exif = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~UpdateTaskDTO() = default;
};
class UserStatistic : public Darabonba::Model {
public:
  shared_ptr<double> acceptedMarkItemsCount{};
  shared_ptr<double> checkCount{};
  shared_ptr<double> checkedAcceptedCount{};
  shared_ptr<double> checkedAccuracy{};
  shared_ptr<double> markEfficiency{};
  shared_ptr<double> markTime{};
  shared_ptr<double> samplingAccuracy{};
  shared_ptr<double> samplingCount{};
  shared_ptr<double> samplingErrorCount{};
  shared_ptr<double> totalMarkItemsCount{};
  shared_ptr<string> userId{};

  UserStatistic() {}

  explicit UserStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptedMarkItemsCount) {
      res["AcceptedMarkItemsCount"] = boost::any(*acceptedMarkItemsCount);
    }
    if (checkCount) {
      res["CheckCount"] = boost::any(*checkCount);
    }
    if (checkedAcceptedCount) {
      res["CheckedAcceptedCount"] = boost::any(*checkedAcceptedCount);
    }
    if (checkedAccuracy) {
      res["CheckedAccuracy"] = boost::any(*checkedAccuracy);
    }
    if (markEfficiency) {
      res["MarkEfficiency"] = boost::any(*markEfficiency);
    }
    if (markTime) {
      res["MarkTime"] = boost::any(*markTime);
    }
    if (samplingAccuracy) {
      res["SamplingAccuracy"] = boost::any(*samplingAccuracy);
    }
    if (samplingCount) {
      res["SamplingCount"] = boost::any(*samplingCount);
    }
    if (samplingErrorCount) {
      res["SamplingErrorCount"] = boost::any(*samplingErrorCount);
    }
    if (totalMarkItemsCount) {
      res["TotalMarkItemsCount"] = boost::any(*totalMarkItemsCount);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptedMarkItemsCount") != m.end() && !m["AcceptedMarkItemsCount"].empty()) {
      acceptedMarkItemsCount = make_shared<double>(boost::any_cast<double>(m["AcceptedMarkItemsCount"]));
    }
    if (m.find("CheckCount") != m.end() && !m["CheckCount"].empty()) {
      checkCount = make_shared<double>(boost::any_cast<double>(m["CheckCount"]));
    }
    if (m.find("CheckedAcceptedCount") != m.end() && !m["CheckedAcceptedCount"].empty()) {
      checkedAcceptedCount = make_shared<double>(boost::any_cast<double>(m["CheckedAcceptedCount"]));
    }
    if (m.find("CheckedAccuracy") != m.end() && !m["CheckedAccuracy"].empty()) {
      checkedAccuracy = make_shared<double>(boost::any_cast<double>(m["CheckedAccuracy"]));
    }
    if (m.find("MarkEfficiency") != m.end() && !m["MarkEfficiency"].empty()) {
      markEfficiency = make_shared<double>(boost::any_cast<double>(m["MarkEfficiency"]));
    }
    if (m.find("MarkTime") != m.end() && !m["MarkTime"].empty()) {
      markTime = make_shared<double>(boost::any_cast<double>(m["MarkTime"]));
    }
    if (m.find("SamplingAccuracy") != m.end() && !m["SamplingAccuracy"].empty()) {
      samplingAccuracy = make_shared<double>(boost::any_cast<double>(m["SamplingAccuracy"]));
    }
    if (m.find("SamplingCount") != m.end() && !m["SamplingCount"].empty()) {
      samplingCount = make_shared<double>(boost::any_cast<double>(m["SamplingCount"]));
    }
    if (m.find("SamplingErrorCount") != m.end() && !m["SamplingErrorCount"].empty()) {
      samplingErrorCount = make_shared<double>(boost::any_cast<double>(m["SamplingErrorCount"]));
    }
    if (m.find("TotalMarkItemsCount") != m.end() && !m["TotalMarkItemsCount"].empty()) {
      totalMarkItemsCount = make_shared<double>(boost::any_cast<double>(m["TotalMarkItemsCount"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UserStatistic() = default;
};
class AddWorkNodeWorkforceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> userIds{};

  AddWorkNodeWorkforceRequest() {}

  explicit AddWorkNodeWorkforceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      userIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~AddWorkNodeWorkforceRequest() = default;
};
class AddWorkNodeWorkforceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddWorkNodeWorkforceResponseBody() {}

  explicit AddWorkNodeWorkforceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddWorkNodeWorkforceResponseBody() = default;
};
class AddWorkNodeWorkforceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddWorkNodeWorkforceResponseBody> body{};

  AddWorkNodeWorkforceResponse() {}

  explicit AddWorkNodeWorkforceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddWorkNodeWorkforceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddWorkNodeWorkforceResponseBody>(model1);
      }
    }
  }


  virtual ~AddWorkNodeWorkforceResponse() = default;
};
class CreateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CreateTaskDetail> body{};

  CreateTaskRequest() {}

  explicit CreateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskDetail>(model1);
      }
    }
  }


  virtual ~CreateTaskRequest() = default;
};
class CreateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateTaskResponseBody() {}

  explicit CreateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateTaskResponseBody() = default;
};
class CreateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTaskResponseBody> body{};

  CreateTaskResponse() {}

  explicit CreateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskResponse() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<TemplateDTO> body{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TemplateDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TemplateDTO>(model1);
      }
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> templateId{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateTemplateResponseBody() = default;
};
class CreateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> accountType{};
  shared_ptr<string> role{};
  shared_ptr<string> userName{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> userId{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~CreateUserResponseBody() = default;
};
class CreateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserResponseBody> body{};

  CreateUserResponse() {}

  explicit CreateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserResponse() = default;
};
class DeleteTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteTaskResponseBody() {}

  explicit DeleteTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteTaskResponseBody() = default;
};
class DeleteTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTaskResponseBody> body{};

  DeleteTaskResponse() {}

  explicit DeleteTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTaskResponse() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> templateId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteTemplateResponseBody() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUserResponseBody() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserResponse() = default;
};
class ExportAnnotationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ossPath{};
  shared_ptr<string> registerDataset{};
  shared_ptr<string> target{};

  ExportAnnotationsRequest() {}

  explicit ExportAnnotationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    if (registerDataset) {
      res["RegisterDataset"] = boost::any(*registerDataset);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
    if (m.find("RegisterDataset") != m.end() && !m["RegisterDataset"].empty()) {
      registerDataset = make_shared<string>(boost::any_cast<string>(m["RegisterDataset"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~ExportAnnotationsRequest() = default;
};
class ExportAnnotationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<FlowJobInfo> flowJob{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportAnnotationsResponseBody() {}

  explicit ExportAnnotationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (flowJob) {
      res["FlowJob"] = flowJob ? boost::any(flowJob->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("FlowJob") != m.end() && !m["FlowJob"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowJob"].type()) {
        FlowJobInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowJob"]));
        flowJob = make_shared<FlowJobInfo>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportAnnotationsResponseBody() = default;
};
class ExportAnnotationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportAnnotationsResponseBody> body{};

  ExportAnnotationsResponse() {}

  explicit ExportAnnotationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportAnnotationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportAnnotationsResponseBody>(model1);
      }
    }
  }


  virtual ~ExportAnnotationsResponse() = default;
};
class GetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobType{};

  GetJobRequest() {}

  explicit GetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
  }


  virtual ~GetJobRequest() = default;
};
class GetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<Job> job{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetJobResponseBody() {}

  explicit GetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (job) {
      res["Job"] = job ? boost::any(job->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Job") != m.end() && !m["Job"].empty()) {
      if (typeid(map<string, boost::any>) == m["Job"].type()) {
        Job model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Job"]));
        job = make_shared<Job>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class GetSubtaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<SimpleSubtask> subtask{};
  shared_ptr<bool> success{};

  GetSubtaskResponseBody() {}

  explicit GetSubtaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subtask) {
      res["Subtask"] = subtask ? boost::any(subtask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Subtask") != m.end() && !m["Subtask"].empty()) {
      if (typeid(map<string, boost::any>) == m["Subtask"].type()) {
        SimpleSubtask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Subtask"]));
        subtask = make_shared<SimpleSubtask>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSubtaskResponseBody() = default;
};
class GetSubtaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubtaskResponseBody> body{};

  GetSubtaskResponse() {}

  explicit GetSubtaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubtaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubtaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubtaskResponse() = default;
};
class GetSubtaskItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<SubtaskItemDetail> item{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSubtaskItemResponseBody() {}

  explicit GetSubtaskItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (item) {
      res["Item"] = item ? boost::any(item->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(map<string, boost::any>) == m["Item"].type()) {
        SubtaskItemDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Item"]));
        item = make_shared<SubtaskItemDetail>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSubtaskItemResponseBody() = default;
};
class GetSubtaskItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubtaskItemResponseBody> body{};

  GetSubtaskItemResponse() {}

  explicit GetSubtaskItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubtaskItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubtaskItemResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubtaskItemResponse() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<TaskDetail> task{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        TaskDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<TaskDetail>(model1);
      }
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetTaskStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> statType{};

  GetTaskStatisticsRequest() {}

  explicit GetTaskStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statType) {
      res["StatType"] = boost::any(*statType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StatType") != m.end() && !m["StatType"].empty()) {
      statType = make_shared<string>(boost::any_cast<string>(m["StatType"]));
    }
  }


  virtual ~GetTaskStatisticsRequest() = default;
};
class GetTaskStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<TaskStatistic> taskStatistics{};

  GetTaskStatisticsResponseBody() {}

  explicit GetTaskStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskStatistics) {
      res["TaskStatistics"] = taskStatistics ? boost::any(taskStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskStatistics") != m.end() && !m["TaskStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskStatistics"].type()) {
        TaskStatistic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskStatistics"]));
        taskStatistics = make_shared<TaskStatistic>(model1);
      }
    }
  }


  virtual ~GetTaskStatisticsResponseBody() = default;
};
class GetTaskStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskStatisticsResponseBody> body{};

  GetTaskStatisticsResponse() {}

  explicit GetTaskStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatisticsResponse() = default;
};
class GetTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskStatus{};

  GetTaskStatusResponseBody() {}

  explicit GetTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GetTaskStatusResponseBody() = default;
};
class GetTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskStatusResponseBody> body{};

  GetTaskStatusResponse() {}

  explicit GetTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatusResponse() = default;
};
class GetTaskTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<TemplateDetail> template_{};

  GetTaskTemplateResponseBody() {}

  explicit GetTaskTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        TemplateDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<TemplateDetail>(model1);
      }
    }
  }


  virtual ~GetTaskTemplateResponseBody() = default;
};
class GetTaskTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskTemplateResponseBody> body{};

  GetTaskTemplateResponse() {}

  explicit GetTaskTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskTemplateResponse() = default;
};
class GetTaskTemplateQuestionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<QuestionPlugin>> questions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTaskTemplateQuestionsResponseBody() {}

  explicit GetTaskTemplateQuestionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (questions) {
      vector<boost::any> temp1;
      for(auto item1:*questions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Questions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Questions") != m.end() && !m["Questions"].empty()) {
      if (typeid(vector<boost::any>) == m["Questions"].type()) {
        vector<QuestionPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Questions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questions = make_shared<vector<QuestionPlugin>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTaskTemplateQuestionsResponseBody() = default;
};
class GetTaskTemplateQuestionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskTemplateQuestionsResponseBody> body{};

  GetTaskTemplateQuestionsResponse() {}

  explicit GetTaskTemplateQuestionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskTemplateQuestionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskTemplateQuestionsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskTemplateQuestionsResponse() = default;
};
class GetTaskTemplateViewsResponseBodyViews : public Darabonba::Model {
public:
  shared_ptr<vector<ViewPlugin>> viewPlugins{};

  GetTaskTemplateViewsResponseBodyViews() {}

  explicit GetTaskTemplateViewsResponseBodyViews(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (viewPlugins) {
      vector<boost::any> temp1;
      for(auto item1:*viewPlugins){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ViewPlugins"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ViewPlugins") != m.end() && !m["ViewPlugins"].empty()) {
      if (typeid(vector<boost::any>) == m["ViewPlugins"].type()) {
        vector<ViewPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ViewPlugins"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ViewPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        viewPlugins = make_shared<vector<ViewPlugin>>(expect1);
      }
    }
  }


  virtual ~GetTaskTemplateViewsResponseBodyViews() = default;
};
class GetTaskTemplateViewsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetTaskTemplateViewsResponseBodyViews> views{};

  GetTaskTemplateViewsResponseBody() {}

  explicit GetTaskTemplateViewsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (views) {
      res["Views"] = views ? boost::any(views->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Views") != m.end() && !m["Views"].empty()) {
      if (typeid(map<string, boost::any>) == m["Views"].type()) {
        GetTaskTemplateViewsResponseBodyViews model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Views"]));
        views = make_shared<GetTaskTemplateViewsResponseBodyViews>(model1);
      }
    }
  }


  virtual ~GetTaskTemplateViewsResponseBody() = default;
};
class GetTaskTemplateViewsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskTemplateViewsResponseBody> body{};

  GetTaskTemplateViewsResponse() {}

  explicit GetTaskTemplateViewsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskTemplateViewsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskTemplateViewsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskTemplateViewsResponse() = default;
};
class GetTaskWorkforceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<Workforce>> workforce{};

  GetTaskWorkforceResponseBody() {}

  explicit GetTaskWorkforceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (workforce) {
      vector<boost::any> temp1;
      for(auto item1:*workforce){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workforce"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Workforce") != m.end() && !m["Workforce"].empty()) {
      if (typeid(vector<boost::any>) == m["Workforce"].type()) {
        vector<Workforce> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workforce"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Workforce model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workforce = make_shared<vector<Workforce>>(expect1);
      }
    }
  }


  virtual ~GetTaskWorkforceResponseBody() = default;
};
class GetTaskWorkforceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskWorkforceResponseBody> body{};

  GetTaskWorkforceResponse() {}

  explicit GetTaskWorkforceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskWorkforceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskWorkforceResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskWorkforceResponse() = default;
};
class GetTaskWorkforceStatisticRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> statType{};

  GetTaskWorkforceStatisticRequest() {}

  explicit GetTaskWorkforceStatisticRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (statType) {
      res["StatType"] = boost::any(*statType);
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
    if (m.find("StatType") != m.end() && !m["StatType"].empty()) {
      statType = make_shared<string>(boost::any_cast<string>(m["StatType"]));
    }
  }


  virtual ~GetTaskWorkforceStatisticRequest() = default;
};
class GetTaskWorkforceStatisticResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};
  shared_ptr<vector<UserStatistic>> usersStatistic{};

  GetTaskWorkforceStatisticResponseBody() {}

  explicit GetTaskWorkforceStatisticResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (usersStatistic) {
      vector<boost::any> temp1;
      for(auto item1:*usersStatistic){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsersStatistic"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("UsersStatistic") != m.end() && !m["UsersStatistic"].empty()) {
      if (typeid(vector<boost::any>) == m["UsersStatistic"].type()) {
        vector<UserStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsersStatistic"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UserStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usersStatistic = make_shared<vector<UserStatistic>>(expect1);
      }
    }
  }


  virtual ~GetTaskWorkforceStatisticResponseBody() = default;
};
class GetTaskWorkforceStatisticResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskWorkforceStatisticResponseBody> body{};

  GetTaskWorkforceStatisticResponse() {}

  explicit GetTaskWorkforceStatisticResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskWorkforceStatisticResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskWorkforceStatisticResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskWorkforceStatisticResponse() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<TemplateDetail> template_{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        TemplateDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<TemplateDetail>(model1);
      }
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class GetTemplateQuestionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<QuestionPlugin>> questionConfigs{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTemplateQuestionsResponseBody() {}

  explicit GetTemplateQuestionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (questionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*questionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuestionConfigs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("QuestionConfigs") != m.end() && !m["QuestionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["QuestionConfigs"].type()) {
        vector<QuestionPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuestionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuestionPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questionConfigs = make_shared<vector<QuestionPlugin>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTemplateQuestionsResponseBody() = default;
};
class GetTemplateQuestionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateQuestionsResponseBody> body{};

  GetTemplateQuestionsResponse() {}

  explicit GetTemplateQuestionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateQuestionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateQuestionsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateQuestionsResponse() = default;
};
class GetTemplateViewResponseBodyViewConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<ViewPlugin>> viewPlugins{};

  GetTemplateViewResponseBodyViewConfigs() {}

  explicit GetTemplateViewResponseBodyViewConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (viewPlugins) {
      vector<boost::any> temp1;
      for(auto item1:*viewPlugins){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ViewPlugins"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ViewPlugins") != m.end() && !m["ViewPlugins"].empty()) {
      if (typeid(vector<boost::any>) == m["ViewPlugins"].type()) {
        vector<ViewPlugin> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ViewPlugins"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ViewPlugin model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        viewPlugins = make_shared<vector<ViewPlugin>>(expect1);
      }
    }
  }


  virtual ~GetTemplateViewResponseBodyViewConfigs() = default;
};
class GetTemplateViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetTemplateViewResponseBodyViewConfigs> viewConfigs{};

  GetTemplateViewResponseBody() {}

  explicit GetTemplateViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (viewConfigs) {
      res["ViewConfigs"] = viewConfigs ? boost::any(viewConfigs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ViewConfigs") != m.end() && !m["ViewConfigs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ViewConfigs"].type()) {
        GetTemplateViewResponseBodyViewConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ViewConfigs"]));
        viewConfigs = make_shared<GetTemplateViewResponseBodyViewConfigs>(model1);
      }
    }
  }


  virtual ~GetTemplateViewResponseBody() = default;
};
class GetTemplateViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateViewResponseBody> body{};

  GetTemplateViewResponse() {}

  explicit GetTemplateViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateViewResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateViewResponse() = default;
};
class GetTenantResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<SingleTenant> tenant{};

  GetTenantResponseBody() {}

  explicit GetTenantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tenant) {
      res["Tenant"] = tenant ? boost::any(tenant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Tenant") != m.end() && !m["Tenant"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tenant"].type()) {
        SingleTenant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tenant"]));
        tenant = make_shared<SingleTenant>(model1);
      }
    }
  }


  virtual ~GetTenantResponseBody() = default;
};
class GetTenantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTenantResponseBody> body{};

  GetTenantResponse() {}

  explicit GetTenantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTenantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTenantResponseBody>(model1);
      }
    }
  }


  virtual ~GetTenantResponse() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<SimpleUser> user{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        SimpleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<SimpleUser>(model1);
      }
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<Job>> jobs{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<Job> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Job model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<Job>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
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
class ListSubtaskItemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSubtaskItemsRequest() {}

  explicit ListSubtaskItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSubtaskItemsRequest() = default;
};
class ListSubtaskItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<SubtaskItemDetail>> items{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ListSubtaskItemsResponseBody() {}

  explicit ListSubtaskItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<SubtaskItemDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubtaskItemDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<SubtaskItemDetail>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListSubtaskItemsResponseBody() = default;
};
class ListSubtaskItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubtaskItemsResponseBody> body{};

  ListSubtaskItemsResponse() {}

  explicit ListSubtaskItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubtaskItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubtaskItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubtaskItemsResponse() = default;
};
class ListSubtasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSubtasksRequest() {}

  explicit ListSubtasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSubtasksRequest() = default;
};
class ListSubtasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SubtaskDetail>> subtasks{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ListSubtasksResponseBody() {}

  explicit ListSubtasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subtasks) {
      vector<boost::any> temp1;
      for(auto item1:*subtasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subtasks"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Subtasks") != m.end() && !m["Subtasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Subtasks"].type()) {
        vector<SubtaskDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subtasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubtaskDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtasks = make_shared<vector<SubtaskDetail>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListSubtasksResponseBody() = default;
};
class ListSubtasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubtasksResponseBody> body{};

  ListSubtasksResponse() {}

  explicit ListSubtasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubtasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubtasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubtasksResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTasksRequest() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<SimpleTask>> tasks{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<SimpleTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<SimpleTask>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};
  shared_ptr<vector<string>> types{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (types) {
      res["Types"] = boost::any(*types);
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
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      types = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> typesShrink{};

  ListTemplatesShrinkRequest() {}

  explicit ListTemplatesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (typesShrink) {
      res["Types"] = boost::any(*typesShrink);
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
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      typesShrink = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~ListTemplatesShrinkRequest() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<SimpleTemplate>> templates{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<SimpleTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<SimpleTemplate>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListTemplatesResponseBody() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplatesResponse() = default;
};
class ListTenantsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTenantsRequest() {}

  explicit ListTenantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTenantsRequest() = default;
};
class ListTenantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<SimpleTenant>> tenants{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  ListTenantsResponseBody() {}

  explicit ListTenantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tenants) {
      vector<boost::any> temp1;
      for(auto item1:*tenants){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tenants"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Tenants") != m.end() && !m["Tenants"].empty()) {
      if (typeid(vector<boost::any>) == m["Tenants"].type()) {
        vector<SimpleTenant> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tenants"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleTenant model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tenants = make_shared<vector<SimpleTenant>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListTenantsResponseBody() = default;
};
class ListTenantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTenantsResponseBody> body{};

  ListTenantsResponse() {}

  explicit ListTenantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTenantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTenantsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTenantsResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};
  shared_ptr<vector<SimpleUser>> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<SimpleUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<SimpleUser>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class RemoveWorkNodeWorkforceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> userIds{};

  RemoveWorkNodeWorkforceRequest() {}

  explicit RemoveWorkNodeWorkforceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      userIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RemoveWorkNodeWorkforceRequest() = default;
};
class RemoveWorkNodeWorkforceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveWorkNodeWorkforceResponseBody() {}

  explicit RemoveWorkNodeWorkforceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveWorkNodeWorkforceResponseBody() = default;
};
class RemoveWorkNodeWorkforceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveWorkNodeWorkforceResponseBody> body{};

  RemoveWorkNodeWorkforceResponse() {}

  explicit RemoveWorkNodeWorkforceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveWorkNodeWorkforceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveWorkNodeWorkforceResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveWorkNodeWorkforceResponse() = default;
};
class UpdateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateTaskDTO> body{};

  UpdateTaskRequest() {}

  explicit UpdateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTaskDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskDTO>(model1);
      }
    }
  }


  virtual ~UpdateTaskRequest() = default;
};
class UpdateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTaskResponseBody() {}

  explicit UpdateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateTaskResponseBody() = default;
};
class UpdateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTaskResponseBody> body{};

  UpdateTaskResponse() {}

  explicit UpdateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTaskResponse() = default;
};
class UpdateTaskWorkforceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SimpleWorkforce>> workforce{};

  UpdateTaskWorkforceRequest() {}

  explicit UpdateTaskWorkforceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workforce) {
      vector<boost::any> temp1;
      for(auto item1:*workforce){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workforce"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Workforce") != m.end() && !m["Workforce"].empty()) {
      if (typeid(vector<boost::any>) == m["Workforce"].type()) {
        vector<SimpleWorkforce> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workforce"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleWorkforce model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workforce = make_shared<vector<SimpleWorkforce>>(expect1);
      }
    }
  }


  virtual ~UpdateTaskWorkforceRequest() = default;
};
class UpdateTaskWorkforceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTaskWorkforceResponseBody() {}

  explicit UpdateTaskWorkforceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateTaskWorkforceResponseBody() = default;
};
class UpdateTaskWorkforceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTaskWorkforceResponseBody> body{};

  UpdateTaskWorkforceResponse() {}

  explicit UpdateTaskWorkforceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTaskWorkforceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskWorkforceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTaskWorkforceResponse() = default;
};
class UpdateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<TemplateDTO> body{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TemplateDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TemplateDTO>(model1);
      }
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> templateId{};

  UpdateTemplateResponseBody() {}

  explicit UpdateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateTemplateResponseBody() = default;
};
class UpdateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTemplateResponseBody> body{};

  UpdateTemplateResponse() {}

  explicit UpdateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTemplateResponse() = default;
};
class UpdateTenantRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> tenantName{};

  UpdateTenantRequest() {}

  explicit UpdateTenantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
  }


  virtual ~UpdateTenantRequest() = default;
};
class UpdateTenantResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTenantResponseBody() {}

  explicit UpdateTenantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateTenantResponseBody() = default;
};
class UpdateTenantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTenantResponseBody> body{};

  UpdateTenantResponse() {}

  explicit UpdateTenantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTenantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTenantResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTenantResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> role{};
  shared_ptr<string> userName{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> details{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> userId{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserResponse() = default;
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
  AddWorkNodeWorkforceResponse addWorkNodeWorkforce(shared_ptr<string> TenantId,
                                                    shared_ptr<string> TaskId,
                                                    shared_ptr<string> WorkNodeId,
                                                    shared_ptr<AddWorkNodeWorkforceRequest> request);
  AddWorkNodeWorkforceResponse addWorkNodeWorkforceWithOptions(shared_ptr<string> TenantId,
                                                               shared_ptr<string> TaskId,
                                                               shared_ptr<string> WorkNodeId,
                                                               shared_ptr<AddWorkNodeWorkforceRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<string> TenantId, shared_ptr<CreateTaskRequest> request);
  CreateTaskResponse createTaskWithOptions(shared_ptr<string> TenantId,
                                           shared_ptr<CreateTaskRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<string> TenantId, shared_ptr<CreateTemplateRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<string> TenantId,
                                                   shared_ptr<CreateTemplateRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<string> TenantId, shared_ptr<CreateUserRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<string> TenantId,
                                           shared_ptr<CreateUserRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTaskResponse deleteTask(shared_ptr<string> TenantId, shared_ptr<string> TaskId);
  DeleteTaskResponse deleteTaskWithOptions(shared_ptr<string> TenantId,
                                           shared_ptr<string> TaskId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<string> TenantId, shared_ptr<string> TemplateId);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<string> TenantId,
                                                   shared_ptr<string> TemplateId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<string> TenantId, shared_ptr<string> UserId);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<string> TenantId,
                                           shared_ptr<string> UserId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportAnnotationsResponse exportAnnotations(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<ExportAnnotationsRequest> request);
  ExportAnnotationsResponse exportAnnotationsWithOptions(shared_ptr<string> TenantId,
                                                         shared_ptr<string> TaskId,
                                                         shared_ptr<ExportAnnotationsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<string> TenantId, shared_ptr<string> JobId, shared_ptr<GetJobRequest> request);
  GetJobResponse getJobWithOptions(shared_ptr<string> TenantId,
                                   shared_ptr<string> JobId,
                                   shared_ptr<GetJobRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubtaskResponse getSubtask(shared_ptr<string> TenantId, shared_ptr<string> TaskID, shared_ptr<string> SubtaskId);
  GetSubtaskResponse getSubtaskWithOptions(shared_ptr<string> TenantId,
                                           shared_ptr<string> TaskID,
                                           shared_ptr<string> SubtaskId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubtaskItemResponse getSubtaskItem(shared_ptr<string> TenantId,
                                        shared_ptr<string> TaskId,
                                        shared_ptr<string> SubtaskId,
                                        shared_ptr<string> ItemId);
  GetSubtaskItemResponse getSubtaskItemWithOptions(shared_ptr<string> TenantId,
                                                   shared_ptr<string> TaskId,
                                                   shared_ptr<string> SubtaskId,
                                                   shared_ptr<string> ItemId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> TenantId, shared_ptr<string> TaskId);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> TenantId,
                                     shared_ptr<string> TaskId,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatisticsResponse getTaskStatistics(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<GetTaskStatisticsRequest> request);
  GetTaskStatisticsResponse getTaskStatisticsWithOptions(shared_ptr<string> TenantId,
                                                         shared_ptr<string> TaskId,
                                                         shared_ptr<GetTaskStatisticsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatusResponse getTaskStatus(shared_ptr<string> TenantId, shared_ptr<string> TaskId);
  GetTaskStatusResponse getTaskStatusWithOptions(shared_ptr<string> TenantId,
                                                 shared_ptr<string> TaskId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskTemplateResponse getTaskTemplate(shared_ptr<string> TenantId, shared_ptr<string> TaskId);
  GetTaskTemplateResponse getTaskTemplateWithOptions(shared_ptr<string> TenantId,
                                                     shared_ptr<string> TaskId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskTemplateQuestionsResponse getTaskTemplateQuestions(shared_ptr<string> TenantId, shared_ptr<string> TaskId);
  GetTaskTemplateQuestionsResponse getTaskTemplateQuestionsWithOptions(shared_ptr<string> TenantId,
                                                                       shared_ptr<string> TaskId,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskTemplateViewsResponse getTaskTemplateViews(shared_ptr<string> TenantId, shared_ptr<string> TaskId);
  GetTaskTemplateViewsResponse getTaskTemplateViewsWithOptions(shared_ptr<string> TenantId,
                                                               shared_ptr<string> TaskId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskWorkforceResponse getTaskWorkforce(shared_ptr<string> TenantId, shared_ptr<string> TaskId);
  GetTaskWorkforceResponse getTaskWorkforceWithOptions(shared_ptr<string> TenantId,
                                                       shared_ptr<string> TaskId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskWorkforceStatisticResponse getTaskWorkforceStatistic(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<GetTaskWorkforceStatisticRequest> request);
  GetTaskWorkforceStatisticResponse getTaskWorkforceStatisticWithOptions(shared_ptr<string> TenantId,
                                                                         shared_ptr<string> TaskId,
                                                                         shared_ptr<GetTaskWorkforceStatisticRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<string> TenantId, shared_ptr<string> TemplateId);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<string> TenantId,
                                             shared_ptr<string> TemplateId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateQuestionsResponse getTemplateQuestions(shared_ptr<string> TenantId, shared_ptr<string> TemplateId);
  GetTemplateQuestionsResponse getTemplateQuestionsWithOptions(shared_ptr<string> TenantId,
                                                               shared_ptr<string> TemplateId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateViewResponse getTemplateView(shared_ptr<string> TenantId, shared_ptr<string> TemplateId);
  GetTemplateViewResponse getTemplateViewWithOptions(shared_ptr<string> TenantId,
                                                     shared_ptr<string> TemplateId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTenantResponse getTenant(shared_ptr<string> TenantId);
  GetTenantResponse getTenantWithOptions(shared_ptr<string> TenantId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<string> TenantId, shared_ptr<string> UserId);
  GetUserResponse getUserWithOptions(shared_ptr<string> TenantId,
                                     shared_ptr<string> UserId,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<string> TenantId, shared_ptr<ListJobsRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<string> TenantId,
                                       shared_ptr<ListJobsRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubtaskItemsResponse listSubtaskItems(shared_ptr<string> TenantId,
                                            shared_ptr<string> TaskID,
                                            shared_ptr<string> SubtaskId,
                                            shared_ptr<ListSubtaskItemsRequest> request);
  ListSubtaskItemsResponse listSubtaskItemsWithOptions(shared_ptr<string> TenantId,
                                                       shared_ptr<string> TaskID,
                                                       shared_ptr<string> SubtaskId,
                                                       shared_ptr<ListSubtaskItemsRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubtasksResponse listSubtasks(shared_ptr<string> TenantId, shared_ptr<string> TaskID, shared_ptr<ListSubtasksRequest> request);
  ListSubtasksResponse listSubtasksWithOptions(shared_ptr<string> TenantId,
                                               shared_ptr<string> TaskID,
                                               shared_ptr<ListSubtasksRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<string> TenantId, shared_ptr<ListTasksRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<string> TenantId,
                                         shared_ptr<ListTasksRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<string> TenantId, shared_ptr<ListTemplatesRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<string> TenantId,
                                                 shared_ptr<ListTemplatesRequest> tmpReq,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTenantsResponse listTenants(shared_ptr<ListTenantsRequest> request);
  ListTenantsResponse listTenantsWithOptions(shared_ptr<ListTenantsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<string> TenantId, shared_ptr<ListUsersRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<string> TenantId,
                                         shared_ptr<ListUsersRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveWorkNodeWorkforceResponse removeWorkNodeWorkforce(shared_ptr<string> TenantId,
                                                          shared_ptr<string> TaskId,
                                                          shared_ptr<string> WorkNodeId,
                                                          shared_ptr<RemoveWorkNodeWorkforceRequest> request);
  RemoveWorkNodeWorkforceResponse removeWorkNodeWorkforceWithOptions(shared_ptr<string> TenantId,
                                                                     shared_ptr<string> TaskId,
                                                                     shared_ptr<string> WorkNodeId,
                                                                     shared_ptr<RemoveWorkNodeWorkforceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskResponse updateTask(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<UpdateTaskRequest> request);
  UpdateTaskResponse updateTaskWithOptions(shared_ptr<string> TenantId,
                                           shared_ptr<string> TaskId,
                                           shared_ptr<UpdateTaskRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskWorkforceResponse updateTaskWorkforce(shared_ptr<string> TenantId, shared_ptr<string> TaskId, shared_ptr<UpdateTaskWorkforceRequest> request);
  UpdateTaskWorkforceResponse updateTaskWorkforceWithOptions(shared_ptr<string> TenantId,
                                                             shared_ptr<string> TaskId,
                                                             shared_ptr<UpdateTaskWorkforceRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateResponse updateTemplate(shared_ptr<string> TenantId, shared_ptr<string> TemplateId, shared_ptr<UpdateTemplateRequest> request);
  UpdateTemplateResponse updateTemplateWithOptions(shared_ptr<string> TenantId,
                                                   shared_ptr<string> TemplateId,
                                                   shared_ptr<UpdateTemplateRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTenantResponse updateTenant(shared_ptr<string> TenantId, shared_ptr<UpdateTenantRequest> request);
  UpdateTenantResponse updateTenantWithOptions(shared_ptr<string> TenantId,
                                               shared_ptr<UpdateTenantRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<string> TenantId, shared_ptr<string> UserId, shared_ptr<UpdateUserRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<string> TenantId,
                                           shared_ptr<string> UserId,
                                           shared_ptr<UpdateUserRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_OpenITag20220616

#endif
