// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAIPLUGIN20220112_H_
#define ALIBABACLOUD_PAIPLUGIN20220112_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PaiPlugin20220112 {
class CreateCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> remark{};

  CreateCampaignRequest() {}

  explicit CreateCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~CreateCampaignRequest() = default;
};
class CreateCampaignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> updatedTime{};

  CreateCampaignResponseBodyData() {}

  explicit CreateCampaignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~CreateCampaignResponseBodyData() = default;
};
class CreateCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateCampaignResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  CreateCampaignResponseBody() {}

  explicit CreateCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateCampaignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateCampaignResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCampaignResponseBody() = default;
};
class CreateCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCampaignResponseBody> body{};

  CreateCampaignResponse() {}

  explicit CreateCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCampaignResponse() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> column{};
  shared_ptr<string> filter{};
  shared_ptr<string> inferenceJobId{};
  shared_ptr<string> name{};
  shared_ptr<bool> phoneNumber{};
  shared_ptr<string> project{};
  shared_ptr<string> remark{};
  shared_ptr<long> source{};
  shared_ptr<string> table{};
  shared_ptr<string> text{};
  shared_ptr<string> uri{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (inferenceJobId) {
      res["InferenceJobId"] = boost::any(*inferenceJobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InferenceJobId") != m.end() && !m["InferenceJobId"].empty()) {
      inferenceJobId = make_shared<string>(boost::any_cast<string>(m["InferenceJobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumber"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> amount{};
  shared_ptr<string> column{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> filter{};
  shared_ptr<string> id{};
  shared_ptr<string> inferenceJobId{};
  shared_ptr<string> name{};
  shared_ptr<bool> phoneNumber{};
  shared_ptr<string> project{};
  shared_ptr<string> remark{};
  shared_ptr<long> source{};
  shared_ptr<long> status{};
  shared_ptr<string> table{};
  shared_ptr<string> text{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> uri{};

  CreateGroupResponseBodyData() {}

  explicit CreateGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inferenceJobId) {
      res["InferenceJobId"] = boost::any(*inferenceJobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InferenceJobId") != m.end() && !m["InferenceJobId"].empty()) {
      inferenceJobId = make_shared<string>(boost::any_cast<string>(m["InferenceJobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumber"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CreateGroupResponseBodyData() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateGroupResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateGroupResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class CreateInferenceJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> userConfig{};

  CreateInferenceJobRequest() {}

  explicit CreateInferenceJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~CreateInferenceJobRequest() = default;
};
class CreateInferenceJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> groupId{};
  shared_ptr<string> history{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> userConfig{};

  CreateInferenceJobResponseBodyData() {}

  explicit CreateInferenceJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<string>(boost::any_cast<string>(m["History"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~CreateInferenceJobResponseBodyData() = default;
};
class CreateInferenceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateInferenceJobResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  CreateInferenceJobResponseBody() {}

  explicit CreateInferenceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateInferenceJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateInferenceJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInferenceJobResponseBody() = default;
};
class CreateInferenceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInferenceJobResponseBody> body{};

  CreateInferenceJobResponse() {}

  explicit CreateInferenceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInferenceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInferenceJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInferenceJobResponse() = default;
};
class CreateScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> name{};
  shared_ptr<long> repeatCycle{};
  shared_ptr<long> repeatCycleUnit{};
  shared_ptr<long> repeatTimes{};
  shared_ptr<string> signName{};
  shared_ptr<string> signatureId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateId{};

  CreateScheduleRequest() {}

  explicit CreateScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repeatCycle) {
      res["RepeatCycle"] = boost::any(*repeatCycle);
    }
    if (repeatCycleUnit) {
      res["RepeatCycleUnit"] = boost::any(*repeatCycleUnit);
    }
    if (repeatTimes) {
      res["RepeatTimes"] = boost::any(*repeatTimes);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RepeatCycle") != m.end() && !m["RepeatCycle"].empty()) {
      repeatCycle = make_shared<long>(boost::any_cast<long>(m["RepeatCycle"]));
    }
    if (m.find("RepeatCycleUnit") != m.end() && !m["RepeatCycleUnit"].empty()) {
      repeatCycleUnit = make_shared<long>(boost::any_cast<long>(m["RepeatCycleUnit"]));
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      repeatTimes = make_shared<long>(boost::any_cast<long>(m["RepeatTimes"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateScheduleRequest() = default;
};
class CreateScheduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> repeatCycle{};
  shared_ptr<long> repeatCycleUnit{};
  shared_ptr<long> repeatTimes{};
  shared_ptr<string> signName{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateId{};
  shared_ptr<string> updatedTime{};

  CreateScheduleResponseBodyData() {}

  explicit CreateScheduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repeatCycle) {
      res["RepeatCycle"] = boost::any(*repeatCycle);
    }
    if (repeatCycleUnit) {
      res["RepeatCycleUnit"] = boost::any(*repeatCycleUnit);
    }
    if (repeatTimes) {
      res["RepeatTimes"] = boost::any(*repeatTimes);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RepeatCycle") != m.end() && !m["RepeatCycle"].empty()) {
      repeatCycle = make_shared<long>(boost::any_cast<long>(m["RepeatCycle"]));
    }
    if (m.find("RepeatCycleUnit") != m.end() && !m["RepeatCycleUnit"].empty()) {
      repeatCycleUnit = make_shared<long>(boost::any_cast<long>(m["RepeatCycleUnit"]));
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      repeatTimes = make_shared<long>(boost::any_cast<long>(m["RepeatTimes"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~CreateScheduleResponseBodyData() = default;
};
class CreateScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateScheduleResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  CreateScheduleResponseBody() {}

  explicit CreateScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateScheduleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateScheduleResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateScheduleResponseBody() = default;
};
class CreateScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScheduleResponseBody> body{};

  CreateScheduleResponse() {}

  explicit CreateScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScheduleResponse() = default;
};
class CreateSignatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateSignatureRequest() {}

  explicit CreateSignatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateSignatureRequest() = default;
};
class CreateSignatureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<string> updatedTime{};

  CreateSignatureResponseBodyData() {}

  explicit CreateSignatureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~CreateSignatureResponseBodyData() = default;
};
class CreateSignatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateSignatureResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  CreateSignatureResponseBody() {}

  explicit CreateSignatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateSignatureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateSignatureResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSignatureResponseBody() = default;
};
class CreateSignatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSignatureResponseBody> body{};

  CreateSignatureResponse() {}

  explicit CreateSignatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSignatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSignatureResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSignatureResponse() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> signature{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> type{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<long> type{};
  shared_ptr<string> updatedTime{};

  CreateTemplateResponseBodyData() {}

  explicit CreateTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~CreateTemplateResponseBodyData() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateTemplateResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class CreateTrainingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> userConfig{};

  CreateTrainingJobRequest() {}

  explicit CreateTrainingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~CreateTrainingJobRequest() = default;
};
class CreateTrainingJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> history{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> userConfig{};

  CreateTrainingJobResponseBodyData() {}

  explicit CreateTrainingJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<string>(boost::any_cast<string>(m["History"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~CreateTrainingJobResponseBodyData() = default;
};
class CreateTrainingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateTrainingJobResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  CreateTrainingJobResponseBody() {}

  explicit CreateTrainingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateTrainingJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTrainingJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DeleteCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DeleteCampaignResponseBody() {}

  explicit DeleteCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCampaignResponseBody() = default;
};
class DeleteCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCampaignResponseBody> body{};

  DeleteCampaignResponse() {}

  explicit DeleteCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCampaignResponse() = default;
};
class DeleteGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DeleteGroupResponseBody() {}

  explicit DeleteGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteGroupResponseBody() = default;
};
class DeleteGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupResponse() = default;
};
class DeleteInferenceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DeleteInferenceJobResponseBody() {}

  explicit DeleteInferenceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteInferenceJobResponseBody() = default;
};
class DeleteInferenceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInferenceJobResponseBody> body{};

  DeleteInferenceJobResponse() {}

  explicit DeleteInferenceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInferenceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInferenceJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInferenceJobResponse() = default;
};
class DeleteScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DeleteScheduleResponseBody() {}

  explicit DeleteScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteScheduleResponseBody() = default;
};
class DeleteScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScheduleResponseBody> body{};

  DeleteScheduleResponse() {}

  explicit DeleteScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScheduleResponse() = default;
};
class DeleteSignatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DeleteSignatureResponseBody() {}

  explicit DeleteSignatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSignatureResponseBody() = default;
};
class DeleteSignatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSignatureResponseBody> body{};

  DeleteSignatureResponse() {}

  explicit DeleteSignatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSignatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSignatureResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSignatureResponse() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DeleteTrainingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  DeleteTrainingJobResponseBody() {}

  explicit DeleteTrainingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTrainingJobResponseBody() = default;
};
class DeleteTrainingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTrainingJobResponseBody> body{};

  DeleteTrainingJobResponse() {}

  explicit DeleteTrainingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTrainingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTrainingJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTrainingJobResponse() = default;
};
class GetAlgorithmResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> inferUserConfigMap{};
  shared_ptr<string> name{};
  shared_ptr<string> trainUserConfigMap{};

  GetAlgorithmResponseBodyData() {}

  explicit GetAlgorithmResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inferUserConfigMap) {
      res["InferUserConfigMap"] = boost::any(*inferUserConfigMap);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (trainUserConfigMap) {
      res["TrainUserConfigMap"] = boost::any(*trainUserConfigMap);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InferUserConfigMap") != m.end() && !m["InferUserConfigMap"].empty()) {
      inferUserConfigMap = make_shared<string>(boost::any_cast<string>(m["InferUserConfigMap"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TrainUserConfigMap") != m.end() && !m["TrainUserConfigMap"].empty()) {
      trainUserConfigMap = make_shared<string>(boost::any_cast<string>(m["TrainUserConfigMap"]));
    }
  }


  virtual ~GetAlgorithmResponseBodyData() = default;
};
class GetAlgorithmResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAlgorithmResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetAlgorithmResponseBody() {}

  explicit GetAlgorithmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAlgorithmResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAlgorithmResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class GetCampaignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> updatedTime{};

  GetCampaignResponseBodyData() {}

  explicit GetCampaignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~GetCampaignResponseBodyData() = default;
};
class GetCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCampaignResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetCampaignResponseBody() {}

  explicit GetCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCampaignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCampaignResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCampaignResponseBody() = default;
};
class GetCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCampaignResponseBody> body{};

  GetCampaignResponse() {}

  explicit GetCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~GetCampaignResponse() = default;
};
class GetGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> amount{};
  shared_ptr<string> column{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> filter{};
  shared_ptr<string> id{};
  shared_ptr<string> inferenceJobId{};
  shared_ptr<string> name{};
  shared_ptr<bool> phoneNumber{};
  shared_ptr<string> project{};
  shared_ptr<string> remark{};
  shared_ptr<long> source{};
  shared_ptr<long> status{};
  shared_ptr<string> table{};
  shared_ptr<string> text{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> uri{};

  GetGroupResponseBodyData() {}

  explicit GetGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inferenceJobId) {
      res["InferenceJobId"] = boost::any(*inferenceJobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InferenceJobId") != m.end() && !m["InferenceJobId"].empty()) {
      inferenceJobId = make_shared<string>(boost::any_cast<string>(m["InferenceJobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumber"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~GetGroupResponseBodyData() = default;
};
class GetGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGroupResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetGroupResponseBody() {}

  explicit GetGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGroupResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGroupResponseBody() = default;
};
class GetGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupResponseBody> body{};

  GetGroupResponse() {}

  explicit GetGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupResponse() = default;
};
class GetInferenceJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> groupId{};
  shared_ptr<string> history{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> userConfig{};

  GetInferenceJobResponseBodyData() {}

  explicit GetInferenceJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<string>(boost::any_cast<string>(m["History"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~GetInferenceJobResponseBodyData() = default;
};
class GetInferenceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInferenceJobResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetInferenceJobResponseBody() {}

  explicit GetInferenceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetInferenceJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetInferenceJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInferenceJobResponseBody() = default;
};
class GetInferenceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInferenceJobResponseBody> body{};

  GetInferenceJobResponse() {}

  explicit GetInferenceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInferenceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInferenceJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetInferenceJobResponse() = default;
};
class GetMessageConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> smsReportUrl{};
  shared_ptr<string> smsUpUrl{};

  GetMessageConfigResponseBodyData() {}

  explicit GetMessageConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (smsReportUrl) {
      res["SmsReportUrl"] = boost::any(*smsReportUrl);
    }
    if (smsUpUrl) {
      res["SmsUpUrl"] = boost::any(*smsUpUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SmsReportUrl") != m.end() && !m["SmsReportUrl"].empty()) {
      smsReportUrl = make_shared<string>(boost::any_cast<string>(m["SmsReportUrl"]));
    }
    if (m.find("SmsUpUrl") != m.end() && !m["SmsUpUrl"].empty()) {
      smsUpUrl = make_shared<string>(boost::any_cast<string>(m["SmsUpUrl"]));
    }
  }


  virtual ~GetMessageConfigResponseBodyData() = default;
};
class GetMessageConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMessageConfigResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetMessageConfigResponseBody() {}

  explicit GetMessageConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMessageConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMessageConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMessageConfigResponseBody() = default;
};
class GetMessageConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMessageConfigResponseBody> body{};

  GetMessageConfigResponse() {}

  explicit GetMessageConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMessageConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMessageConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetMessageConfigResponse() = default;
};
class GetScheduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> history{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> repeatCycle{};
  shared_ptr<long> repeatCycleUnit{};
  shared_ptr<long> repeatTimes{};
  shared_ptr<string> signName{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateId{};
  shared_ptr<string> updatedTime{};

  GetScheduleResponseBodyData() {}

  explicit GetScheduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repeatCycle) {
      res["RepeatCycle"] = boost::any(*repeatCycle);
    }
    if (repeatCycleUnit) {
      res["RepeatCycleUnit"] = boost::any(*repeatCycleUnit);
    }
    if (repeatTimes) {
      res["RepeatTimes"] = boost::any(*repeatTimes);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<string>(boost::any_cast<string>(m["History"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RepeatCycle") != m.end() && !m["RepeatCycle"].empty()) {
      repeatCycle = make_shared<long>(boost::any_cast<long>(m["RepeatCycle"]));
    }
    if (m.find("RepeatCycleUnit") != m.end() && !m["RepeatCycleUnit"].empty()) {
      repeatCycleUnit = make_shared<long>(boost::any_cast<long>(m["RepeatCycleUnit"]));
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      repeatTimes = make_shared<long>(boost::any_cast<long>(m["RepeatTimes"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~GetScheduleResponseBodyData() = default;
};
class GetScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetScheduleResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetScheduleResponseBody() {}

  explicit GetScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetScheduleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetScheduleResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetScheduleResponseBody() = default;
};
class GetScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetScheduleResponseBody> body{};

  GetScheduleResponse() {}

  explicit GetScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~GetScheduleResponse() = default;
};
class GetSignatureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<long> status{};
  shared_ptr<string> updatedTime{};

  GetSignatureResponseBodyData() {}

  explicit GetSignatureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~GetSignatureResponseBodyData() = default;
};
class GetSignatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSignatureResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetSignatureResponseBody() {}

  explicit GetSignatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSignatureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSignatureResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSignatureResponseBody() = default;
};
class GetSignatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSignatureResponseBody> body{};

  GetSignatureResponse() {}

  explicit GetSignatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSignatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSignatureResponseBody>(model1);
      }
    }
  }


  virtual ~GetSignatureResponse() = default;
};
class GetTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<long> type{};
  shared_ptr<string> updatedTime{};

  GetTemplateResponseBodyData() {}

  explicit GetTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~GetTemplateResponseBodyData() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTemplateResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class GetTrainingJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> history{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> userConfig{};

  GetTrainingJobResponseBodyData() {}

  explicit GetTrainingJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<string>(boost::any_cast<string>(m["History"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~GetTrainingJobResponseBodyData() = default;
};
class GetTrainingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTrainingJobResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetTrainingJobResponseBody() {}

  explicit GetTrainingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTrainingJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTrainingJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class GetUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> accountStatus{};

  GetUserResponseBodyData() {}

  explicit GetUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<long>(boost::any_cast<long>(m["AccountStatus"]));
    }
  }


  virtual ~GetUserResponseBodyData() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUserResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ListAlgorithmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAlgorithmsRequest() {}

  explicit ListAlgorithmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAlgorithmsRequest() = default;
};
class ListAlgorithmsResponseBodyDataAlgorithms : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListAlgorithmsResponseBodyDataAlgorithms() {}

  explicit ListAlgorithmsResponseBodyDataAlgorithms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListAlgorithmsResponseBodyDataAlgorithms() = default;
};
class ListAlgorithmsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlgorithmsResponseBodyDataAlgorithms>> algorithms{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAlgorithmsResponseBodyData() {}

  explicit ListAlgorithmsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Algorithms") != m.end() && !m["Algorithms"].empty()) {
      if (typeid(vector<boost::any>) == m["Algorithms"].type()) {
        vector<ListAlgorithmsResponseBodyDataAlgorithms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Algorithms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlgorithmsResponseBodyDataAlgorithms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        algorithms = make_shared<vector<ListAlgorithmsResponseBodyDataAlgorithms>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlgorithmsResponseBodyData() = default;
};
class ListAlgorithmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAlgorithmsResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListAlgorithmsResponseBody() {}

  explicit ListAlgorithmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAlgorithmsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAlgorithmsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ListCampaignsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> remark{};

  ListCampaignsRequest() {}

  explicit ListCampaignsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ListCampaignsRequest() = default;
};
class ListCampaignsResponseBodyDataCampaigns : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> updatedTime{};

  ListCampaignsResponseBodyDataCampaigns() {}

  explicit ListCampaignsResponseBodyDataCampaigns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~ListCampaignsResponseBodyDataCampaigns() = default;
};
class ListCampaignsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListCampaignsResponseBodyDataCampaigns>> campaigns{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCampaignsResponseBodyData() {}

  explicit ListCampaignsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaigns) {
      vector<boost::any> temp1;
      for(auto item1:*campaigns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Campaigns"] = boost::any(temp1);
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
    if (m.find("Campaigns") != m.end() && !m["Campaigns"].empty()) {
      if (typeid(vector<boost::any>) == m["Campaigns"].type()) {
        vector<ListCampaignsResponseBodyDataCampaigns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Campaigns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCampaignsResponseBodyDataCampaigns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        campaigns = make_shared<vector<ListCampaignsResponseBodyDataCampaigns>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCampaignsResponseBodyData() = default;
};
class ListCampaignsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCampaignsResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListCampaignsResponseBody() {}

  explicit ListCampaignsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListCampaignsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCampaignsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCampaignsResponseBody() = default;
};
class ListCampaignsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCampaignsResponseBody> body{};

  ListCampaignsResponse() {}

  explicit ListCampaignsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCampaignsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCampaignsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCampaignsResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> phoneNumber{};
  shared_ptr<string> remark{};
  shared_ptr<long> source{};
  shared_ptr<long> status{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (source) {
      res["Source"] = boost::any(*source);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumber"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyDataGroups : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> amount{};
  shared_ptr<string> column{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> filter{};
  shared_ptr<string> id{};
  shared_ptr<string> inferenceJobId{};
  shared_ptr<string> name{};
  shared_ptr<bool> phoneNumber{};
  shared_ptr<string> project{};
  shared_ptr<string> remark{};
  shared_ptr<long> source{};
  shared_ptr<long> status{};
  shared_ptr<string> table{};
  shared_ptr<string> text{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> uri{};

  ListGroupsResponseBodyDataGroups() {}

  explicit ListGroupsResponseBodyDataGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inferenceJobId) {
      res["InferenceJobId"] = boost::any(*inferenceJobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InferenceJobId") != m.end() && !m["InferenceJobId"].empty()) {
      inferenceJobId = make_shared<string>(boost::any_cast<string>(m["InferenceJobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<bool>(boost::any_cast<bool>(m["PhoneNumber"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<long>(boost::any_cast<long>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~ListGroupsResponseBodyDataGroups() = default;
};
class ListGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsResponseBodyDataGroups>> groups{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListGroupsResponseBodyData() {}

  explicit ListGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
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
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<ListGroupsResponseBodyDataGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsResponseBodyDataGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<ListGroupsResponseBodyDataGroups>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGroupsResponseBodyData() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListGroupsResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGroupsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGroupsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsResponse() = default;
};
class ListInferenceJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};

  ListInferenceJobsRequest() {}

  explicit ListInferenceJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListInferenceJobsRequest() = default;
};
class ListInferenceJobsResponseBodyDataInferenceJobs : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> groupId{};
  shared_ptr<string> history{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> trainingJobId{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> userConfig{};

  ListInferenceJobsResponseBodyDataInferenceJobs() {}

  explicit ListInferenceJobsResponseBodyDataInferenceJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (trainingJobId) {
      res["TrainingJobId"] = boost::any(*trainingJobId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<string>(boost::any_cast<string>(m["History"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TrainingJobId") != m.end() && !m["TrainingJobId"].empty()) {
      trainingJobId = make_shared<string>(boost::any_cast<string>(m["TrainingJobId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~ListInferenceJobsResponseBodyDataInferenceJobs() = default;
};
class ListInferenceJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListInferenceJobsResponseBodyDataInferenceJobs>> inferenceJobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListInferenceJobsResponseBodyData() {}

  explicit ListInferenceJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inferenceJobs) {
      vector<boost::any> temp1;
      for(auto item1:*inferenceJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InferenceJobs"] = boost::any(temp1);
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
    if (m.find("InferenceJobs") != m.end() && !m["InferenceJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["InferenceJobs"].type()) {
        vector<ListInferenceJobsResponseBodyDataInferenceJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InferenceJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInferenceJobsResponseBodyDataInferenceJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inferenceJobs = make_shared<vector<ListInferenceJobsResponseBodyDataInferenceJobs>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInferenceJobsResponseBodyData() = default;
};
class ListInferenceJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInferenceJobsResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListInferenceJobsResponseBody() {}

  explicit ListInferenceJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListInferenceJobsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListInferenceJobsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInferenceJobsResponseBody() = default;
};
class ListInferenceJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInferenceJobsResponseBody> body{};

  ListInferenceJobsResponse() {}

  explicit ListInferenceJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInferenceJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInferenceJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInferenceJobsResponse() = default;
};
class ListMessageMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> signature{};
  shared_ptr<string> signatureId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateId{};
  shared_ptr<long> templateType{};

  ListMessageMetricsRequest() {}

  explicit ListMessageMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~ListMessageMetricsRequest() = default;
};
class ListMessageMetricsResponseBodyDataMetrics : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> fail{};
  shared_ptr<long> pending{};
  shared_ptr<double> rate{};
  shared_ptr<long> success{};
  shared_ptr<long> total{};

  ListMessageMetricsResponseBodyDataMetrics() {}

  explicit ListMessageMetricsResponseBodyDataMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (fail) {
      res["Fail"] = boost::any(*fail);
    }
    if (pending) {
      res["Pending"] = boost::any(*pending);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("Fail") != m.end() && !m["Fail"].empty()) {
      fail = make_shared<long>(boost::any_cast<long>(m["Fail"]));
    }
    if (m.find("Pending") != m.end() && !m["Pending"].empty()) {
      pending = make_shared<long>(boost::any_cast<long>(m["Pending"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListMessageMetricsResponseBodyDataMetrics() = default;
};
class ListMessageMetricsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMessageMetricsResponseBodyDataMetrics>> metrics{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListMessageMetricsResponseBodyData() {}

  explicit ListMessageMetricsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<ListMessageMetricsResponseBodyDataMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMessageMetricsResponseBodyDataMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<ListMessageMetricsResponseBodyDataMetrics>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMessageMetricsResponseBodyData() = default;
};
class ListMessageMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMessageMetricsResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListMessageMetricsResponseBody() {}

  explicit ListMessageMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListMessageMetricsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListMessageMetricsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMessageMetricsResponseBody() = default;
};
class ListMessageMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMessageMetricsResponseBody> body{};

  ListMessageMetricsResponse() {}

  explicit ListMessageMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMessageMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMessageMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMessageMetricsResponse() = default;
};
class ListMessagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> datetime{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> groupId{};
  shared_ptr<string> messageId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> signature{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateId{};
  shared_ptr<long> templateType{};

  ListMessagesRequest() {}

  explicit ListMessagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datetime) {
      res["Datetime"] = boost::any(*datetime);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Datetime") != m.end() && !m["Datetime"].empty()) {
      datetime = make_shared<string>(boost::any_cast<string>(m["Datetime"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~ListMessagesRequest() = default;
};
class ListMessagesResponseBodyDataMessages : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> groupId{};
  shared_ptr<string> id{};
  shared_ptr<string> outId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> signature{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParams{};
  shared_ptr<long> templateType{};

  ListMessagesResponseBodyDataMessages() {}

  explicit ListMessagesResponseBodyDataMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParams) {
      res["TemplateParams"] = boost::any(*templateParams);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      templateParams = make_shared<string>(boost::any_cast<string>(m["TemplateParams"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~ListMessagesResponseBodyDataMessages() = default;
};
class ListMessagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMessagesResponseBodyDataMessages>> messages{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListMessagesResponseBodyData() {}

  explicit ListMessagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Messages"] = boost::any(temp1);
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
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<ListMessagesResponseBodyDataMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMessagesResponseBodyDataMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<ListMessagesResponseBodyDataMessages>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMessagesResponseBodyData() = default;
};
class ListMessagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListMessagesResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListMessagesResponseBody() {}

  explicit ListMessagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListMessagesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListMessagesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMessagesResponseBody() = default;
};
class ListMessagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMessagesResponseBody> body{};

  ListMessagesResponse() {}

  explicit ListMessagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMessagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMessagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMessagesResponse() = default;
};
class ListSchedulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};

  ListSchedulesRequest() {}

  explicit ListSchedulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListSchedulesRequest() = default;
};
class ListSchedulesResponseBodyDataSchedules : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> repeatCycle{};
  shared_ptr<long> repeatCycleUnit{};
  shared_ptr<long> repeatTimes{};
  shared_ptr<string> signName{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateId{};
  shared_ptr<string> updatedTime{};

  ListSchedulesResponseBodyDataSchedules() {}

  explicit ListSchedulesResponseBodyDataSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repeatCycle) {
      res["RepeatCycle"] = boost::any(*repeatCycle);
    }
    if (repeatCycleUnit) {
      res["RepeatCycleUnit"] = boost::any(*repeatCycleUnit);
    }
    if (repeatTimes) {
      res["RepeatTimes"] = boost::any(*repeatTimes);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RepeatCycle") != m.end() && !m["RepeatCycle"].empty()) {
      repeatCycle = make_shared<long>(boost::any_cast<long>(m["RepeatCycle"]));
    }
    if (m.find("RepeatCycleUnit") != m.end() && !m["RepeatCycleUnit"].empty()) {
      repeatCycleUnit = make_shared<long>(boost::any_cast<long>(m["RepeatCycleUnit"]));
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      repeatTimes = make_shared<long>(boost::any_cast<long>(m["RepeatTimes"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~ListSchedulesResponseBodyDataSchedules() = default;
};
class ListSchedulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListSchedulesResponseBodyDataSchedules>> schedules{};
  shared_ptr<long> totalCount{};

  ListSchedulesResponseBodyData() {}

  explicit ListSchedulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (schedules) {
      vector<boost::any> temp1;
      for(auto item1:*schedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schedules"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Schedules") != m.end() && !m["Schedules"].empty()) {
      if (typeid(vector<boost::any>) == m["Schedules"].type()) {
        vector<ListSchedulesResponseBodyDataSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSchedulesResponseBodyDataSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedules = make_shared<vector<ListSchedulesResponseBodyDataSchedules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSchedulesResponseBodyData() = default;
};
class ListSchedulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSchedulesResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListSchedulesResponseBody() {}

  explicit ListSchedulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListSchedulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSchedulesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSchedulesResponseBody() = default;
};
class ListSchedulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSchedulesResponseBody> body{};

  ListSchedulesResponse() {}

  explicit ListSchedulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSchedulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSchedulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSchedulesResponse() = default;
};
class ListSignaturesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};

  ListSignaturesRequest() {}

  explicit ListSignaturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListSignaturesRequest() = default;
};
class ListSignaturesResponseBodyDataSignatures : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<string> updatedTime{};

  ListSignaturesResponseBodyDataSignatures() {}

  explicit ListSignaturesResponseBodyDataSignatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~ListSignaturesResponseBodyDataSignatures() = default;
};
class ListSignaturesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListSignaturesResponseBodyDataSignatures>> signatures{};
  shared_ptr<long> totalCount{};

  ListSignaturesResponseBodyData() {}

  explicit ListSignaturesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (signatures) {
      vector<boost::any> temp1;
      for(auto item1:*signatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Signatures"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Signatures") != m.end() && !m["Signatures"].empty()) {
      if (typeid(vector<boost::any>) == m["Signatures"].type()) {
        vector<ListSignaturesResponseBodyDataSignatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Signatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSignaturesResponseBodyDataSignatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        signatures = make_shared<vector<ListSignaturesResponseBodyDataSignatures>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSignaturesResponseBodyData() = default;
};
class ListSignaturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSignaturesResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListSignaturesResponseBody() {}

  explicit ListSignaturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListSignaturesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSignaturesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSignaturesResponseBody() = default;
};
class ListSignaturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSignaturesResponseBody> body{};

  ListSignaturesResponse() {}

  explicit ListSignaturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSignaturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSignaturesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSignaturesResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<long> type{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponseBodyDataTemplates : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<string> signatureId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateCode{};
  shared_ptr<long> type{};
  shared_ptr<string> updatedTime{};

  ListTemplatesResponseBodyDataTemplates() {}

  explicit ListTemplatesResponseBodyDataTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~ListTemplatesResponseBodyDataTemplates() = default;
};
class ListTemplatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListTemplatesResponseBodyDataTemplates>> templates{};
  shared_ptr<long> totalCount{};

  ListTemplatesResponseBodyData() {}

  explicit ListTemplatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListTemplatesResponseBodyDataTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyDataTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListTemplatesResponseBodyDataTemplates>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTemplatesResponseBodyData() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTemplatesResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTemplatesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTemplatesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ListTrainingJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};

  ListTrainingJobsRequest() {}

  explicit ListTrainingJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListTrainingJobsRequest() = default;
};
class ListTrainingJobsResponseBodyDataTrainingJobs : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dataPath{};
  shared_ptr<string> history{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> userConfig{};

  ListTrainingJobsResponseBodyDataTrainingJobs() {}

  explicit ListTrainingJobsResponseBodyDataTrainingJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<string>(boost::any_cast<string>(m["History"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~ListTrainingJobsResponseBodyDataTrainingJobs() = default;
};
class ListTrainingJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTrainingJobsResponseBodyDataTrainingJobs>> trainingJobs{};

  ListTrainingJobsResponseBodyData() {}

  explicit ListTrainingJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TrainingJobs") != m.end() && !m["TrainingJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["TrainingJobs"].type()) {
        vector<ListTrainingJobsResponseBodyDataTrainingJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrainingJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrainingJobsResponseBodyDataTrainingJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trainingJobs = make_shared<vector<ListTrainingJobsResponseBodyDataTrainingJobs>>(expect1);
      }
    }
  }


  virtual ~ListTrainingJobsResponseBodyData() = default;
};
class ListTrainingJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTrainingJobsResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ListTrainingJobsResponseBody() {}

  explicit ListTrainingJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTrainingJobsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTrainingJobsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class SendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<vector<string>> outIds{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> signName{};
  shared_ptr<string> signatureId{};
  shared_ptr<vector<string>> smsUpExtendCodes{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<string>> templateParams{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (outIds) {
      res["OutIds"] = boost::any(*outIds);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signatureId) {
      res["SignatureId"] = boost::any(*signatureId);
    }
    if (smsUpExtendCodes) {
      res["SmsUpExtendCodes"] = boost::any(*smsUpExtendCodes);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateParams) {
      res["TemplateParams"] = boost::any(*templateParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("OutIds") != m.end() && !m["OutIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      outIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignatureId") != m.end() && !m["SignatureId"].empty()) {
      signatureId = make_shared<string>(boost::any_cast<string>(m["SignatureId"]));
    }
    if (m.find("SmsUpExtendCodes") != m.end() && !m["SmsUpExtendCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SmsUpExtendCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SmsUpExtendCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      smsUpExtendCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateParams"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateParams"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateParams = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageResponseBodyDataMessages : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};

  SendMessageResponseBodyDataMessages() {}

  explicit SendMessageResponseBodyDataMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~SendMessageResponseBodyDataMessages() = default;
};
class SendMessageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SendMessageResponseBodyDataMessages>> messages{};
  shared_ptr<string> requestId{};

  SendMessageResponseBodyData() {}

  explicit SendMessageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Messages"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<SendMessageResponseBodyDataMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendMessageResponseBodyDataMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<SendMessageResponseBodyDataMessages>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendMessageResponseBodyData() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<SendMessageResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  SendMessageResponseBody() {}

  explicit SendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendMessageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendMessageResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendMessageResponseBody() = default;
};
class SendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageResponseBody> body{};

  SendMessageResponse() {}

  explicit SendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageResponse() = default;
};
class SmsReportRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> messageId{};
  shared_ptr<string> outId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> reportTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sendTime{};
  shared_ptr<string> signName{};
  shared_ptr<string> smsSize{};
  shared_ptr<bool> success{};
  shared_ptr<string> templateCode{};

  SmsReportRequestBody() {}

  explicit SmsReportRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["biz_id"] = boost::any(*bizId);
    }
    if (errCode) {
      res["err_code"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["err_msg"] = boost::any(*errMsg);
    }
    if (messageId) {
      res["message_id"] = boost::any(*messageId);
    }
    if (outId) {
      res["out_id"] = boost::any(*outId);
    }
    if (phoneNumber) {
      res["phone_number"] = boost::any(*phoneNumber);
    }
    if (reportTime) {
      res["report_time"] = boost::any(*reportTime);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (sendTime) {
      res["send_time"] = boost::any(*sendTime);
    }
    if (signName) {
      res["sign_name"] = boost::any(*signName);
    }
    if (smsSize) {
      res["sms_size"] = boost::any(*smsSize);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (templateCode) {
      res["template_code"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("biz_id") != m.end() && !m["biz_id"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["biz_id"]));
    }
    if (m.find("err_code") != m.end() && !m["err_code"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["err_code"]));
    }
    if (m.find("err_msg") != m.end() && !m["err_msg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["err_msg"]));
    }
    if (m.find("message_id") != m.end() && !m["message_id"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["message_id"]));
    }
    if (m.find("out_id") != m.end() && !m["out_id"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["out_id"]));
    }
    if (m.find("phone_number") != m.end() && !m["phone_number"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phone_number"]));
    }
    if (m.find("report_time") != m.end() && !m["report_time"].empty()) {
      reportTime = make_shared<string>(boost::any_cast<string>(m["report_time"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("send_time") != m.end() && !m["send_time"].empty()) {
      sendTime = make_shared<string>(boost::any_cast<string>(m["send_time"]));
    }
    if (m.find("sign_name") != m.end() && !m["sign_name"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["sign_name"]));
    }
    if (m.find("sms_size") != m.end() && !m["sms_size"].empty()) {
      smsSize = make_shared<string>(boost::any_cast<string>(m["sms_size"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("template_code") != m.end() && !m["template_code"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["template_code"]));
    }
  }


  virtual ~SmsReportRequestBody() = default;
};
class SmsReportRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SmsReportRequestBody>> body{};

  SmsReportRequest() {}

  explicit SmsReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SmsReportRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SmsReportRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<SmsReportRequestBody>>(expect1);
      }
    }
  }


  virtual ~SmsReportRequest() = default;
};
class SmsReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> msg{};

  SmsReportResponseBody() {}

  explicit SmsReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~SmsReportResponseBody() = default;
};
class SmsReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmsReportResponseBody> body{};

  SmsReportResponse() {}

  explicit SmsReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SmsReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmsReportResponseBody>(model1);
      }
    }
  }


  virtual ~SmsReportResponse() = default;
};
class SmsUpRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> destCode{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> sendTime{};
  shared_ptr<long> sequenceId{};
  shared_ptr<string> signName{};

  SmsUpRequestBody() {}

  explicit SmsUpRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (destCode) {
      res["dest_code"] = boost::any(*destCode);
    }
    if (phoneNumber) {
      res["phone_number"] = boost::any(*phoneNumber);
    }
    if (sendTime) {
      res["send_time"] = boost::any(*sendTime);
    }
    if (sequenceId) {
      res["sequence_id"] = boost::any(*sequenceId);
    }
    if (signName) {
      res["sign_name"] = boost::any(*signName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("dest_code") != m.end() && !m["dest_code"].empty()) {
      destCode = make_shared<string>(boost::any_cast<string>(m["dest_code"]));
    }
    if (m.find("phone_number") != m.end() && !m["phone_number"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phone_number"]));
    }
    if (m.find("send_time") != m.end() && !m["send_time"].empty()) {
      sendTime = make_shared<string>(boost::any_cast<string>(m["send_time"]));
    }
    if (m.find("sequence_id") != m.end() && !m["sequence_id"].empty()) {
      sequenceId = make_shared<long>(boost::any_cast<long>(m["sequence_id"]));
    }
    if (m.find("sign_name") != m.end() && !m["sign_name"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["sign_name"]));
    }
  }


  virtual ~SmsUpRequestBody() = default;
};
class SmsUpRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SmsUpRequestBody>> body{};

  SmsUpRequest() {}

  explicit SmsUpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SmsUpRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SmsUpRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<SmsUpRequestBody>>(expect1);
      }
    }
  }


  virtual ~SmsUpRequest() = default;
};
class SmsUpResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> msg{};

  SmsUpResponseBody() {}

  explicit SmsUpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~SmsUpResponseBody() = default;
};
class SmsUpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmsUpResponseBody> body{};

  SmsUpResponse() {}

  explicit SmsUpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SmsUpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmsUpResponseBody>(model1);
      }
    }
  }


  virtual ~SmsUpResponse() = default;
};
class UpdateCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> remark{};

  UpdateCampaignRequest() {}

  explicit UpdateCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~UpdateCampaignRequest() = default;
};
class UpdateCampaignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> updatedTime{};

  UpdateCampaignResponseBodyData() {}

  explicit UpdateCampaignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~UpdateCampaignResponseBodyData() = default;
};
class UpdateCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateCampaignResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  UpdateCampaignResponseBody() {}

  explicit UpdateCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateCampaignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateCampaignResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateCampaignResponseBody() = default;
};
class UpdateCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCampaignResponseBody> body{};

  UpdateCampaignResponse() {}

  explicit UpdateCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCampaignResponse() = default;
};
class UpdateReportUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  UpdateReportUrlRequest() {}

  explicit UpdateReportUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateReportUrlRequest() = default;
};
class UpdateReportUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  UpdateReportUrlResponseBody() {}

  explicit UpdateReportUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateReportUrlResponseBody() = default;
};
class UpdateReportUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateReportUrlResponseBody> body{};

  UpdateReportUrlResponse() {}

  explicit UpdateReportUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateReportUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateReportUrlResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateReportUrlResponse() = default;
};
class UpdateUploadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  UpdateUploadUrlRequest() {}

  explicit UpdateUploadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateUploadUrlRequest() = default;
};
class UpdateUploadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  UpdateUploadUrlResponseBody() {}

  explicit UpdateUploadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateUploadUrlResponseBody() = default;
};
class UpdateUploadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUploadUrlResponseBody> body{};

  UpdateUploadUrlResponse() {}

  explicit UpdateUploadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUploadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUploadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUploadUrlResponse() = default;
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
  CreateCampaignResponse createCampaign(shared_ptr<CreateCampaignRequest> request);
  CreateCampaignResponse createCampaignWithOptions(shared_ptr<CreateCampaignRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInferenceJobResponse createInferenceJob(shared_ptr<CreateInferenceJobRequest> request);
  CreateInferenceJobResponse createInferenceJobWithOptions(shared_ptr<CreateInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduleResponse createSchedule(shared_ptr<CreateScheduleRequest> request);
  CreateScheduleResponse createScheduleWithOptions(shared_ptr<CreateScheduleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSignatureResponse createSignature(shared_ptr<CreateSignatureRequest> request);
  CreateSignatureResponse createSignatureWithOptions(shared_ptr<CreateSignatureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrainingJobResponse createTrainingJob(shared_ptr<CreateTrainingJobRequest> request);
  CreateTrainingJobResponse createTrainingJobWithOptions(shared_ptr<CreateTrainingJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCampaignResponse deleteCampaign(shared_ptr<string> Id);
  DeleteCampaignResponse deleteCampaignWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<string> Id);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInferenceJobResponse deleteInferenceJob(shared_ptr<string> Id);
  DeleteInferenceJobResponse deleteInferenceJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScheduleResponse deleteSchedule(shared_ptr<string> Id);
  DeleteScheduleResponse deleteScheduleWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSignatureResponse deleteSignature(shared_ptr<string> Id);
  DeleteSignatureResponse deleteSignatureWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<string> Id);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTrainingJobResponse deleteTrainingJob(shared_ptr<string> Id);
  DeleteTrainingJobResponse deleteTrainingJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlgorithmResponse getAlgorithm(shared_ptr<string> Id);
  GetAlgorithmResponse getAlgorithmWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCampaignResponse getCampaign(shared_ptr<string> Id);
  GetCampaignResponse getCampaignWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<string> Id);
  GetGroupResponse getGroupWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInferenceJobResponse getInferenceJob(shared_ptr<string> Id);
  GetInferenceJobResponse getInferenceJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMessageConfigResponse getMessageConfig();
  GetMessageConfigResponse getMessageConfigWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScheduleResponse getSchedule(shared_ptr<string> Id);
  GetScheduleResponse getScheduleWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSignatureResponse getSignature(shared_ptr<string> Id);
  GetSignatureResponse getSignatureWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<string> Id);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrainingJobResponse getTrainingJob(shared_ptr<string> Id);
  GetTrainingJobResponse getTrainingJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser();
  GetUserResponse getUserWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlgorithmsResponse listAlgorithms(shared_ptr<ListAlgorithmsRequest> request);
  ListAlgorithmsResponse listAlgorithmsWithOptions(shared_ptr<ListAlgorithmsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCampaignsResponse listCampaigns(shared_ptr<ListCampaignsRequest> request);
  ListCampaignsResponse listCampaignsWithOptions(shared_ptr<ListCampaignsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInferenceJobsResponse listInferenceJobs(shared_ptr<ListInferenceJobsRequest> request);
  ListInferenceJobsResponse listInferenceJobsWithOptions(shared_ptr<ListInferenceJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMessageMetricsResponse listMessageMetrics(shared_ptr<ListMessageMetricsRequest> request);
  ListMessageMetricsResponse listMessageMetricsWithOptions(shared_ptr<ListMessageMetricsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMessagesResponse listMessages(shared_ptr<ListMessagesRequest> request);
  ListMessagesResponse listMessagesWithOptions(shared_ptr<ListMessagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSchedulesResponse listSchedules(shared_ptr<ListSchedulesRequest> request);
  ListSchedulesResponse listSchedulesWithOptions(shared_ptr<ListSchedulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSignaturesResponse listSignatures(shared_ptr<ListSignaturesRequest> request);
  ListSignaturesResponse listSignaturesWithOptions(shared_ptr<ListSignaturesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrainingJobsResponse listTrainingJobs(shared_ptr<ListTrainingJobsRequest> request);
  ListTrainingJobsResponse listTrainingJobsWithOptions(shared_ptr<ListTrainingJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmsReportResponse smsReport(shared_ptr<SmsReportRequest> request);
  SmsReportResponse smsReportWithOptions(shared_ptr<SmsReportRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmsUpResponse smsUp(shared_ptr<SmsUpRequest> request);
  SmsUpResponse smsUpWithOptions(shared_ptr<SmsUpRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCampaignResponse updateCampaign(shared_ptr<string> Id, shared_ptr<UpdateCampaignRequest> request);
  UpdateCampaignResponse updateCampaignWithOptions(shared_ptr<string> Id,
                                                   shared_ptr<UpdateCampaignRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateReportUrlResponse updateReportUrl(shared_ptr<UpdateReportUrlRequest> request);
  UpdateReportUrlResponse updateReportUrlWithOptions(shared_ptr<UpdateReportUrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUploadUrlResponse updateUploadUrl(shared_ptr<UpdateUploadUrlRequest> request);
  UpdateUploadUrlResponse updateUploadUrlWithOptions(shared_ptr<UpdateUploadUrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PaiPlugin20220112

#endif
