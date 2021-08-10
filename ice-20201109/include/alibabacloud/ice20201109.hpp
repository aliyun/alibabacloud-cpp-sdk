// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ICE20201109_H_
#define ALIBABACLOUD_ICE20201109_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ICE20201109 {
class ListSmartJobsRequest : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> jobType{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> jobState{};

  ListSmartJobsRequest() {}

  explicit ListSmartJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (jobState) {
      res["JobState"] = boost::any(*jobState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("JobState") != m.end() && !m["JobState"].empty()) {
      jobState = make_shared<string>(boost::any_cast<string>(m["JobState"]));
    }
  }


  virtual ~ListSmartJobsRequest() = default;
};
class ListSmartJobsResponseBodySmartJobListInputConfig : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> keyword{};

  ListSmartJobsResponseBodySmartJobListInputConfig() {}

  explicit ListSmartJobsResponseBodySmartJobListInputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
  }


  virtual ~ListSmartJobsResponseBodySmartJobListInputConfig() = default;
};
class ListSmartJobsResponseBodySmartJobListOutputConfig : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> object{};

  ListSmartJobsResponseBodySmartJobListOutputConfig() {}

  explicit ListSmartJobsResponseBodySmartJobListOutputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
  }


  virtual ~ListSmartJobsResponseBodySmartJobListOutputConfig() = default;
};
class ListSmartJobsResponseBodySmartJobList : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<long> userId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> editingConfig{};
  shared_ptr<string> userData{};
  shared_ptr<string> jobState{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<ListSmartJobsResponseBodySmartJobListInputConfig> inputConfig{};
  shared_ptr<ListSmartJobsResponseBodySmartJobListOutputConfig> outputConfig{};

  ListSmartJobsResponseBodySmartJobList() {}

  explicit ListSmartJobsResponseBodySmartJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (jobState) {
      res["JobState"] = boost::any(*jobState);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (inputConfig) {
      res["InputConfig"] = inputConfig ? boost::any(inputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputConfig) {
      res["OutputConfig"] = outputConfig ? boost::any(outputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("JobState") != m.end() && !m["JobState"].empty()) {
      jobState = make_shared<string>(boost::any_cast<string>(m["JobState"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InputConfig"].type()) {
        ListSmartJobsResponseBodySmartJobListInputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InputConfig"]));
        inputConfig = make_shared<ListSmartJobsResponseBodySmartJobListInputConfig>(model1);
      }
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OutputConfig"].type()) {
        ListSmartJobsResponseBodySmartJobListOutputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OutputConfig"]));
        outputConfig = make_shared<ListSmartJobsResponseBodySmartJobListOutputConfig>(model1);
      }
    }
  }


  virtual ~ListSmartJobsResponseBodySmartJobList() = default;
};
class ListSmartJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSmartJobsResponseBodySmartJobList>> smartJobList{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> totalCount{};

  ListSmartJobsResponseBody() {}

  explicit ListSmartJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smartJobList) {
      vector<boost::any> temp1;
      for(auto item1:*smartJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SmartJobList"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
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
    if (m.find("SmartJobList") != m.end() && !m["SmartJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["SmartJobList"].type()) {
        vector<ListSmartJobsResponseBodySmartJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SmartJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSmartJobsResponseBodySmartJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        smartJobList = make_shared<vector<ListSmartJobsResponseBodySmartJobList>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListSmartJobsResponseBody() = default;
};
class ListSmartJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSmartJobsResponseBody> body{};

  ListSmartJobsResponse() {}

  explicit ListSmartJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSmartJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSmartJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSmartJobsResponse() = default;
};
class DescribeRelatedAuthorizationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> OSSAuthorized{};
  shared_ptr<bool> MTSAuthorized{};
  shared_ptr<bool> MNSAuthorized{};
  shared_ptr<bool> authorized{};

  DescribeRelatedAuthorizationStatusResponseBody() {}

  explicit DescribeRelatedAuthorizationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (OSSAuthorized) {
      res["OSSAuthorized"] = boost::any(*OSSAuthorized);
    }
    if (MTSAuthorized) {
      res["MTSAuthorized"] = boost::any(*MTSAuthorized);
    }
    if (MNSAuthorized) {
      res["MNSAuthorized"] = boost::any(*MNSAuthorized);
    }
    if (authorized) {
      res["Authorized"] = boost::any(*authorized);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OSSAuthorized") != m.end() && !m["OSSAuthorized"].empty()) {
      OSSAuthorized = make_shared<bool>(boost::any_cast<bool>(m["OSSAuthorized"]));
    }
    if (m.find("MTSAuthorized") != m.end() && !m["MTSAuthorized"].empty()) {
      MTSAuthorized = make_shared<bool>(boost::any_cast<bool>(m["MTSAuthorized"]));
    }
    if (m.find("MNSAuthorized") != m.end() && !m["MNSAuthorized"].empty()) {
      MNSAuthorized = make_shared<bool>(boost::any_cast<bool>(m["MNSAuthorized"]));
    }
    if (m.find("Authorized") != m.end() && !m["Authorized"].empty()) {
      authorized = make_shared<bool>(boost::any_cast<bool>(m["Authorized"]));
    }
  }


  virtual ~DescribeRelatedAuthorizationStatusResponseBody() = default;
};
class DescribeRelatedAuthorizationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRelatedAuthorizationStatusResponseBody> body{};

  DescribeRelatedAuthorizationStatusResponse() {}

  explicit DescribeRelatedAuthorizationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRelatedAuthorizationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRelatedAuthorizationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRelatedAuthorizationStatusResponse() = default;
};
class DeleteSmartJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  DeleteSmartJobRequest() {}

  explicit DeleteSmartJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DeleteSmartJobRequest() = default;
};
class DeleteSmartJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> jobId{};

  DeleteSmartJobResponseBody() {}

  explicit DeleteSmartJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DeleteSmartJobResponseBody() = default;
};
class DeleteSmartJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSmartJobResponseBody> body{};

  DeleteSmartJobResponse() {}

  explicit DeleteSmartJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSmartJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSmartJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSmartJobResponse() = default;
};
class AddTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> config{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> status{};
  shared_ptr<string> source{};
  shared_ptr<string> relatedMediaids{};

  AddTemplateRequest() {}

  explicit AddTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (relatedMediaids) {
      res["RelatedMediaids"] = boost::any(*relatedMediaids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("RelatedMediaids") != m.end() && !m["RelatedMediaids"].empty()) {
      relatedMediaids = make_shared<string>(boost::any_cast<string>(m["RelatedMediaids"]));
    }
  }


  virtual ~AddTemplateRequest() = default;
};
class AddTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> config{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> status{};
  shared_ptr<string> createSource{};
  shared_ptr<string> modifiedSource{};

  AddTemplateResponseBodyTemplate() {}

  explicit AddTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
  }


  virtual ~AddTemplateResponseBodyTemplate() = default;
};
class AddTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddTemplateResponseBodyTemplate> template_{};

  AddTemplateResponseBody() {}

  explicit AddTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        AddTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<AddTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~AddTemplateResponseBody() = default;
};
class AddTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddTemplateResponseBody> body{};

  AddTemplateResponse() {}

  explicit AddTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddTemplateResponse() = default;
};
class UpdateEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> timeline{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> projectId{};

  UpdateEditingProjectRequest() {}

  explicit UpdateEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~UpdateEditingProjectRequest() = default;
};
class UpdateEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateEditingProjectResponseBody() {}

  explicit UpdateEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEditingProjectResponseBody() = default;
};
class UpdateEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEditingProjectResponseBody> body{};

  UpdateEditingProjectResponse() {}

  explicit UpdateEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEditingProjectResponse() = default;
};
class ListMediaProducingJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  ListMediaProducingJobsRequest() {}

  explicit ListMediaProducingJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListMediaProducingJobsRequest() = default;
};
class ListMediaProducingJobsResponseBodyMediaProducingJobList : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaURL{};
  shared_ptr<string> templateId{};
  shared_ptr<string> clipsParam{};
  shared_ptr<double> duration{};
  shared_ptr<string> createTime{};
  shared_ptr<string> completeTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  ListMediaProducingJobsResponseBodyMediaProducingJobList() {}

  explicit ListMediaProducingJobsResponseBodyMediaProducingJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaURL) {
      res["MediaURL"] = boost::any(*mediaURL);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaURL") != m.end() && !m["MediaURL"].empty()) {
      mediaURL = make_shared<string>(boost::any_cast<string>(m["MediaURL"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ListMediaProducingJobsResponseBodyMediaProducingJobList() = default;
};
class ListMediaProducingJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListMediaProducingJobsResponseBodyMediaProducingJobList>> mediaProducingJobList{};

  ListMediaProducingJobsResponseBody() {}

  explicit ListMediaProducingJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mediaProducingJobList) {
      vector<boost::any> temp1;
      for(auto item1:*mediaProducingJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaProducingJobList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MediaProducingJobList") != m.end() && !m["MediaProducingJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaProducingJobList"].type()) {
        vector<ListMediaProducingJobsResponseBodyMediaProducingJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaProducingJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMediaProducingJobsResponseBodyMediaProducingJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaProducingJobList = make_shared<vector<ListMediaProducingJobsResponseBodyMediaProducingJobList>>(expect1);
      }
    }
  }


  virtual ~ListMediaProducingJobsResponseBody() = default;
};
class ListMediaProducingJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMediaProducingJobsResponseBody> body{};

  ListMediaProducingJobsResponse() {}

  explicit ListMediaProducingJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMediaProducingJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMediaProducingJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMediaProducingJobsResponse() = default;
};
class GetEditingProjectMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  GetEditingProjectMaterialsRequest() {}

  explicit GetEditingProjectMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetEditingProjectMaterialsRequest() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> userData{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> status{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> spriteImages{};

  GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> region{};
  shared_ptr<string> formatName{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> width{};
  shared_ptr<string> height{};

  GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() = default;
};
class GetEditingProjectMaterialsResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<vector<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>> fileInfoList{};

  GetEditingProjectMaterialsResponseBodyMediaInfos() {}

  explicit GetEditingProjectMaterialsResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<GetEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<GetEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBodyMediaInfos() = default;
};
class GetEditingProjectMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<GetEditingProjectMaterialsResponseBodyMediaInfos>> mediaInfos{};

  GetEditingProjectMaterialsResponseBody() {}

  explicit GetEditingProjectMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<GetEditingProjectMaterialsResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEditingProjectMaterialsResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<GetEditingProjectMaterialsResponseBodyMediaInfos>>(expect1);
      }
    }
  }


  virtual ~GetEditingProjectMaterialsResponseBody() = default;
};
class GetEditingProjectMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEditingProjectMaterialsResponseBody> body{};

  GetEditingProjectMaterialsResponse() {}

  explicit GetEditingProjectMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEditingProjectMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEditingProjectMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~GetEditingProjectMaterialsResponse() = default;
};
class GetDefaultStorageLocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> storageType{};
  shared_ptr<string> bucket{};
  shared_ptr<string> path{};
  shared_ptr<string> status{};

  GetDefaultStorageLocationResponseBody() {}

  explicit GetDefaultStorageLocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDefaultStorageLocationResponseBody() = default;
};
class GetDefaultStorageLocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDefaultStorageLocationResponseBody> body{};

  GetDefaultStorageLocationResponse() {}

  explicit GetDefaultStorageLocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDefaultStorageLocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDefaultStorageLocationResponseBody>(model1);
      }
    }
  }


  virtual ~GetDefaultStorageLocationResponse() = default;
};
class DeleteMediaInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaIds{};
  shared_ptr<string> inputURLs{};

  DeleteMediaInfosRequest() {}

  explicit DeleteMediaInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaIds) {
      res["MediaIds"] = boost::any(*mediaIds);
    }
    if (inputURLs) {
      res["InputURLs"] = boost::any(*inputURLs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaIds") != m.end() && !m["MediaIds"].empty()) {
      mediaIds = make_shared<string>(boost::any_cast<string>(m["MediaIds"]));
    }
    if (m.find("InputURLs") != m.end() && !m["InputURLs"].empty()) {
      inputURLs = make_shared<string>(boost::any_cast<string>(m["InputURLs"]));
    }
  }


  virtual ~DeleteMediaInfosRequest() = default;
};
class DeleteMediaInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> ignoredList{};

  DeleteMediaInfosResponseBody() {}

  explicit DeleteMediaInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ignoredList) {
      res["IgnoredList"] = boost::any(*ignoredList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IgnoredList") != m.end() && !m["IgnoredList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IgnoredList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IgnoredList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ignoredList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteMediaInfosResponseBody() = default;
};
class DeleteMediaInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteMediaInfosResponseBody> body{};

  DeleteMediaInfosResponse() {}

  explicit DeleteMediaInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMediaInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMediaInfosResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMediaInfosResponse() = default;
};
class SetEventCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackQueueName{};
  shared_ptr<string> eventTypeList{};

  SetEventCallbackRequest() {}

  explicit SetEventCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackQueueName) {
      res["CallbackQueueName"] = boost::any(*callbackQueueName);
    }
    if (eventTypeList) {
      res["EventTypeList"] = boost::any(*eventTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackQueueName") != m.end() && !m["CallbackQueueName"].empty()) {
      callbackQueueName = make_shared<string>(boost::any_cast<string>(m["CallbackQueueName"]));
    }
    if (m.find("EventTypeList") != m.end() && !m["EventTypeList"].empty()) {
      eventTypeList = make_shared<string>(boost::any_cast<string>(m["EventTypeList"]));
    }
  }


  virtual ~SetEventCallbackRequest() = default;
};
class SetEventCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetEventCallbackResponseBody() {}

  explicit SetEventCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetEventCallbackResponseBody() = default;
};
class SetEventCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetEventCallbackResponseBody> body{};

  SetEventCallbackResponse() {}

  explicit SetEventCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetEventCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetEventCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~SetEventCallbackResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> config{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> status{};
  shared_ptr<string> createSource{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> previewMediaStatus{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> clipsParam{};

  GetTemplateResponseBodyTemplate() {}

  explicit GetTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (previewMediaStatus) {
      res["PreviewMediaStatus"] = boost::any(*previewMediaStatus);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("PreviewMediaStatus") != m.end() && !m["PreviewMediaStatus"].empty()) {
      previewMediaStatus = make_shared<string>(boost::any_cast<string>(m["PreviewMediaStatus"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
  }


  virtual ~GetTemplateResponseBodyTemplate() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTemplateResponseBodyTemplate> template_{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        GetTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<GetTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class RegisterMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> dynamicMetaDataList{};
  shared_ptr<string> userData{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> registerConfig{};

  RegisterMediaInfoRequest() {}

  explicit RegisterMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (dynamicMetaDataList) {
      res["DynamicMetaDataList"] = boost::any(*dynamicMetaDataList);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (registerConfig) {
      res["RegisterConfig"] = boost::any(*registerConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("DynamicMetaDataList") != m.end() && !m["DynamicMetaDataList"].empty()) {
      dynamicMetaDataList = make_shared<string>(boost::any_cast<string>(m["DynamicMetaDataList"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegisterConfig") != m.end() && !m["RegisterConfig"].empty()) {
      registerConfig = make_shared<string>(boost::any_cast<string>(m["RegisterConfig"]));
    }
  }


  virtual ~RegisterMediaInfoRequest() = default;
};
class RegisterMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> mediaId{};

  RegisterMediaInfoResponseBody() {}

  explicit RegisterMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~RegisterMediaInfoResponseBody() = default;
};
class RegisterMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterMediaInfoResponseBody> body{};

  RegisterMediaInfoResponse() {}

  explicit RegisterMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RegisterMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterMediaInfoResponse() = default;
};
class CreateEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> timeline{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> FEExtend{};

  CreateEditingProjectRequest() {}

  explicit CreateEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (FEExtend) {
      res["FEExtend"] = boost::any(*FEExtend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("FEExtend") != m.end() && !m["FEExtend"].empty()) {
      FEExtend = make_shared<string>(boost::any_cast<string>(m["FEExtend"]));
    }
  }


  virtual ~CreateEditingProjectRequest() = default;
};
class CreateEditingProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> timeline{};
  shared_ptr<string> coverURL{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<double> duration{};
  shared_ptr<string> createSource{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> templateType{};

  CreateEditingProjectResponseBodyProject() {}

  explicit CreateEditingProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateEditingProjectResponseBodyProject() = default;
};
class CreateEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateEditingProjectResponseBodyProject> project{};

  CreateEditingProjectResponseBody() {}

  explicit CreateEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        CreateEditingProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<CreateEditingProjectResponseBodyProject>(model1);
      }
    }
  }


  virtual ~CreateEditingProjectResponseBody() = default;
};
class CreateEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEditingProjectResponseBody> body{};

  CreateEditingProjectResponse() {}

  explicit CreateEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEditingProjectResponse() = default;
};
class BatchGetMediaInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaIds{};
  shared_ptr<string> additionType{};

  BatchGetMediaInfosRequest() {}

  explicit BatchGetMediaInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaIds) {
      res["MediaIds"] = boost::any(*mediaIds);
    }
    if (additionType) {
      res["AdditionType"] = boost::any(*additionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaIds") != m.end() && !m["MediaIds"].empty()) {
      mediaIds = make_shared<string>(boost::any_cast<string>(m["MediaIds"]));
    }
    if (m.find("AdditionType") != m.end() && !m["AdditionType"].empty()) {
      additionType = make_shared<string>(boost::any_cast<string>(m["AdditionType"]));
    }
  }


  virtual ~BatchGetMediaInfosRequest() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> userData{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> status{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> spriteImages{};

  BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> region{};
  shared_ptr<string> formatName{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> width{};
  shared_ptr<string> height{};

  BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  BatchGetMediaInfosResponseBodyMediaInfosFileInfoList() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<BatchGetMediaInfosResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfosFileInfoList() = default;
};
class BatchGetMediaInfosResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<vector<BatchGetMediaInfosResponseBodyMediaInfosFileInfoList>> fileInfoList{};

  BatchGetMediaInfosResponseBodyMediaInfos() {}

  explicit BatchGetMediaInfosResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<BatchGetMediaInfosResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<BatchGetMediaInfosResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetMediaInfosResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<BatchGetMediaInfosResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
  }


  virtual ~BatchGetMediaInfosResponseBodyMediaInfos() = default;
};
class BatchGetMediaInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchGetMediaInfosResponseBodyMediaInfos>> mediaInfos{};

  BatchGetMediaInfosResponseBody() {}

  explicit BatchGetMediaInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<BatchGetMediaInfosResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetMediaInfosResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<BatchGetMediaInfosResponseBodyMediaInfos>>(expect1);
      }
    }
  }


  virtual ~BatchGetMediaInfosResponseBody() = default;
};
class BatchGetMediaInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchGetMediaInfosResponseBody> body{};

  BatchGetMediaInfosResponse() {}

  explicit BatchGetMediaInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchGetMediaInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetMediaInfosResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetMediaInfosResponse() = default;
};
class SetDefaultStorageLocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> storageType{};
  shared_ptr<string> bucket{};
  shared_ptr<string> path{};

  SetDefaultStorageLocationRequest() {}

  explicit SetDefaultStorageLocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~SetDefaultStorageLocationRequest() = default;
};
class SetDefaultStorageLocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetDefaultStorageLocationResponseBody() {}

  explicit SetDefaultStorageLocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDefaultStorageLocationResponseBody() = default;
};
class SetDefaultStorageLocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDefaultStorageLocationResponseBody> body{};

  SetDefaultStorageLocationResponse() {}

  explicit SetDefaultStorageLocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDefaultStorageLocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultStorageLocationResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultStorageLocationResponse() = default;
};
class UpdateMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> businessType{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> dynamicMetaDataList{};
  shared_ptr<string> userData{};
  shared_ptr<bool> appendTags{};
  shared_ptr<bool> appendDynamicMeta{};

  UpdateMediaInfoRequest() {}

  explicit UpdateMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (dynamicMetaDataList) {
      res["DynamicMetaDataList"] = boost::any(*dynamicMetaDataList);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (appendTags) {
      res["AppendTags"] = boost::any(*appendTags);
    }
    if (appendDynamicMeta) {
      res["AppendDynamicMeta"] = boost::any(*appendDynamicMeta);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("DynamicMetaDataList") != m.end() && !m["DynamicMetaDataList"].empty()) {
      dynamicMetaDataList = make_shared<string>(boost::any_cast<string>(m["DynamicMetaDataList"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("AppendTags") != m.end() && !m["AppendTags"].empty()) {
      appendTags = make_shared<bool>(boost::any_cast<bool>(m["AppendTags"]));
    }
    if (m.find("AppendDynamicMeta") != m.end() && !m["AppendDynamicMeta"].empty()) {
      appendDynamicMeta = make_shared<bool>(boost::any_cast<bool>(m["AppendDynamicMeta"]));
    }
  }


  virtual ~UpdateMediaInfoRequest() = default;
};
class UpdateMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> mediaId{};

  UpdateMediaInfoResponseBody() {}

  explicit UpdateMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~UpdateMediaInfoResponseBody() = default;
};
class UpdateMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMediaInfoResponseBody> body{};

  UpdateMediaInfoResponse() {}

  explicit UpdateMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMediaInfoResponse() = default;
};
class GetMediaProducingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetMediaProducingJobRequest() {}

  explicit GetMediaProducingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetMediaProducingJobRequest() = default;
};
class GetMediaProducingJobResponseBodyMediaProducingJob : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> mediaURL{};
  shared_ptr<string> timeline{};
  shared_ptr<string> templateId{};
  shared_ptr<string> clipsParam{};
  shared_ptr<double> duration{};
  shared_ptr<string> createTime{};
  shared_ptr<string> completeTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  GetMediaProducingJobResponseBodyMediaProducingJob() {}

  explicit GetMediaProducingJobResponseBodyMediaProducingJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaURL) {
      res["MediaURL"] = boost::any(*mediaURL);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaURL") != m.end() && !m["MediaURL"].empty()) {
      mediaURL = make_shared<string>(boost::any_cast<string>(m["MediaURL"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetMediaProducingJobResponseBodyMediaProducingJob() = default;
};
class GetMediaProducingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetMediaProducingJobResponseBodyMediaProducingJob> mediaProducingJob{};

  GetMediaProducingJobResponseBody() {}

  explicit GetMediaProducingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mediaProducingJob) {
      res["MediaProducingJob"] = mediaProducingJob ? boost::any(mediaProducingJob->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MediaProducingJob") != m.end() && !m["MediaProducingJob"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaProducingJob"].type()) {
        GetMediaProducingJobResponseBodyMediaProducingJob model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaProducingJob"]));
        mediaProducingJob = make_shared<GetMediaProducingJobResponseBodyMediaProducingJob>(model1);
      }
    }
  }


  virtual ~GetMediaProducingJobResponseBody() = default;
};
class GetMediaProducingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMediaProducingJobResponseBody> body{};

  GetMediaProducingJobResponse() {}

  explicit GetMediaProducingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMediaProducingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaProducingJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaProducingJobResponse() = default;
};
class DescribeIceProductStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> ICEServiceAvaliable{};

  DescribeIceProductStatusResponseBody() {}

  explicit DescribeIceProductStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ICEServiceAvaliable) {
      res["ICEServiceAvaliable"] = boost::any(*ICEServiceAvaliable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ICEServiceAvaliable") != m.end() && !m["ICEServiceAvaliable"].empty()) {
      ICEServiceAvaliable = make_shared<bool>(boost::any_cast<bool>(m["ICEServiceAvaliable"]));
    }
  }


  virtual ~DescribeIceProductStatusResponseBody() = default;
};
class DescribeIceProductStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIceProductStatusResponseBody> body{};

  DescribeIceProductStatusResponse() {}

  explicit DescribeIceProductStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeIceProductStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIceProductStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIceProductStatusResponse() = default;
};
class ListMediaBasicInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> category{};
  shared_ptr<string> status{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> includeFileBasicInfo{};

  ListMediaBasicInfosRequest() {}

  explicit ListMediaBasicInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (includeFileBasicInfo) {
      res["IncludeFileBasicInfo"] = boost::any(*includeFileBasicInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("IncludeFileBasicInfo") != m.end() && !m["IncludeFileBasicInfo"].empty()) {
      includeFileBasicInfo = make_shared<bool>(boost::any_cast<bool>(m["IncludeFileBasicInfo"]));
    }
  }


  virtual ~ListMediaBasicInfosRequest() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> userData{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> status{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> spriteImages{};

  ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> region{};
  shared_ptr<string> formatName{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> width{};
  shared_ptr<string> height{};

  ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  ListMediaBasicInfosResponseBodyMediaInfosFileInfoList() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<ListMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default;
};
class ListMediaBasicInfosResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<vector<ListMediaBasicInfosResponseBodyMediaInfosFileInfoList>> fileInfoList{};

  ListMediaBasicInfosResponseBodyMediaInfos() {}

  explicit ListMediaBasicInfosResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<ListMediaBasicInfosResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMediaBasicInfosResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<ListMediaBasicInfosResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
  }


  virtual ~ListMediaBasicInfosResponseBodyMediaInfos() = default;
};
class ListMediaBasicInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListMediaBasicInfosResponseBodyMediaInfos>> mediaInfos{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListMediaBasicInfosResponseBody() {}

  explicit ListMediaBasicInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
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
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<ListMediaBasicInfosResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMediaBasicInfosResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<ListMediaBasicInfosResponseBodyMediaInfos>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListMediaBasicInfosResponseBody() = default;
};
class ListMediaBasicInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMediaBasicInfosResponseBody> body{};

  ListMediaBasicInfosResponse() {}

  explicit ListMediaBasicInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMediaBasicInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMediaBasicInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListMediaBasicInfosResponse() = default;
};
class SubmitSubtitleProduceJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> editingConfig{};
  shared_ptr<string> type{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> inputConfig{};
  shared_ptr<long> isAsync{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> userData{};

  SubmitSubtitleProduceJobRequest() {}

  explicit SubmitSubtitleProduceJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (inputConfig) {
      res["InputConfig"] = boost::any(*inputConfig);
    }
    if (isAsync) {
      res["IsAsync"] = boost::any(*isAsync);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      inputConfig = make_shared<string>(boost::any_cast<string>(m["InputConfig"]));
    }
    if (m.find("IsAsync") != m.end() && !m["IsAsync"].empty()) {
      isAsync = make_shared<long>(boost::any_cast<long>(m["IsAsync"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitSubtitleProduceJobRequest() = default;
};
class SubmitSubtitleProduceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};

  SubmitSubtitleProduceJobResponseBody() {}

  explicit SubmitSubtitleProduceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~SubmitSubtitleProduceJobResponseBody() = default;
};
class SubmitSubtitleProduceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSubtitleProduceJobResponseBody> body{};

  SubmitSubtitleProduceJobResponse() {}

  explicit SubmitSubtitleProduceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitSubtitleProduceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSubtitleProduceJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSubtitleProduceJobResponse() = default;
};
class SubmitKeyWordCutJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};

  SubmitKeyWordCutJobRequest() {}

  explicit SubmitKeyWordCutJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~SubmitKeyWordCutJobRequest() = default;
};
class SubmitKeyWordCutJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitKeyWordCutJobResponseBody() {}

  explicit SubmitKeyWordCutJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitKeyWordCutJobResponseBody() = default;
};
class SubmitKeyWordCutJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitKeyWordCutJobResponseBody> body{};

  SubmitKeyWordCutJobResponse() {}

  explicit SubmitKeyWordCutJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitKeyWordCutJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitKeyWordCutJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitKeyWordCutJobResponse() = default;
};
class AddEditingProjectMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> materialMaps{};

  AddEditingProjectMaterialsRequest() {}

  explicit AddEditingProjectMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (materialMaps) {
      res["MaterialMaps"] = boost::any(*materialMaps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("MaterialMaps") != m.end() && !m["MaterialMaps"].empty()) {
      materialMaps = make_shared<string>(boost::any_cast<string>(m["MaterialMaps"]));
    }
  }


  virtual ~AddEditingProjectMaterialsRequest() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> userData{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> status{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> spriteImages{};

  AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> region{};
  shared_ptr<string> formatName{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> width{};
  shared_ptr<string> height{};

  AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() = default;
};
class AddEditingProjectMaterialsResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<vector<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>> fileInfoList{};

  AddEditingProjectMaterialsResponseBodyMediaInfos() {}

  explicit AddEditingProjectMaterialsResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBodyMediaInfos() = default;
};
class AddEditingProjectMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<AddEditingProjectMaterialsResponseBodyMediaInfos>> mediaInfos{};

  AddEditingProjectMaterialsResponseBody() {}

  explicit AddEditingProjectMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<AddEditingProjectMaterialsResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEditingProjectMaterialsResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<AddEditingProjectMaterialsResponseBodyMediaInfos>>(expect1);
      }
    }
  }


  virtual ~AddEditingProjectMaterialsResponseBody() = default;
};
class AddEditingProjectMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddEditingProjectMaterialsResponseBody> body{};

  AddEditingProjectMaterialsResponse() {}

  explicit AddEditingProjectMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddEditingProjectMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEditingProjectMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~AddEditingProjectMaterialsResponse() = default;
};
class SubmitASRJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> startTime{};
  shared_ptr<string> duration{};

  SubmitASRJobRequest() {}

  explicit SubmitASRJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
  }


  virtual ~SubmitASRJobRequest() = default;
};
class SubmitASRJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitASRJobResponseBody() {}

  explicit SubmitASRJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitASRJobResponseBody() = default;
};
class SubmitASRJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitASRJobResponseBody> body{};

  SubmitASRJobResponse() {}

  explicit SubmitASRJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitASRJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitASRJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitASRJobResponse() = default;
};
class GetEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  GetEditingProjectRequest() {}

  explicit GetEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetEditingProjectRequest() = default;
};
class GetEditingProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> title{};
  shared_ptr<string> timeline{};
  shared_ptr<string> description{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<long> duration{};
  shared_ptr<string> status{};
  shared_ptr<string> createSource{};
  shared_ptr<string> templateType{};
  shared_ptr<string> modifiedSource{};

  GetEditingProjectResponseBodyProject() {}

  explicit GetEditingProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
  }


  virtual ~GetEditingProjectResponseBodyProject() = default;
};
class GetEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetEditingProjectResponseBodyProject> project{};

  GetEditingProjectResponseBody() {}

  explicit GetEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        GetEditingProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<GetEditingProjectResponseBodyProject>(model1);
      }
    }
  }


  virtual ~GetEditingProjectResponseBody() = default;
};
class GetEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEditingProjectResponseBody> body{};

  GetEditingProjectResponse() {}

  explicit GetEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetEditingProjectResponse() = default;
};
class ListSysTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> type{};

  ListSysTemplatesRequest() {}

  explicit ListSysTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListSysTemplatesRequest() = default;
};
class ListSysTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> config{};

  ListSysTemplatesResponseBodyTemplates() {}

  explicit ListSysTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
  }


  virtual ~ListSysTemplatesResponseBodyTemplates() = default;
};
class ListSysTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListSysTemplatesResponseBodyTemplates>> templates{};

  ListSysTemplatesResponseBody() {}

  explicit ListSysTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListSysTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSysTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListSysTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~ListSysTemplatesResponseBody() = default;
};
class ListSysTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSysTemplatesResponseBody> body{};

  ListSysTemplatesResponse() {}

  explicit ListSysTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSysTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSysTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSysTemplatesResponse() = default;
};
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateIds{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      templateIds = make_shared<string>(boost::any_cast<string>(m["TemplateIds"]));
    }
  }


  virtual ~DeleteTemplateRequest() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTemplateResponseBody() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class SubmitIRJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};

  SubmitIRJobRequest() {}

  explicit SubmitIRJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~SubmitIRJobRequest() = default;
};
class SubmitIRJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitIRJobResponseBody() {}

  explicit SubmitIRJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitIRJobResponseBody() = default;
};
class SubmitIRJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitIRJobResponseBody> body{};

  SubmitIRJobResponse() {}

  explicit SubmitIRJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitIRJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitIRJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitIRJobResponse() = default;
};
class DeleteEditingProjectMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> materialIds{};
  shared_ptr<string> materialType{};

  DeleteEditingProjectMaterialsRequest() {}

  explicit DeleteEditingProjectMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (materialIds) {
      res["MaterialIds"] = boost::any(*materialIds);
    }
    if (materialType) {
      res["MaterialType"] = boost::any(*materialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("MaterialIds") != m.end() && !m["MaterialIds"].empty()) {
      materialIds = make_shared<string>(boost::any_cast<string>(m["MaterialIds"]));
    }
    if (m.find("MaterialType") != m.end() && !m["MaterialType"].empty()) {
      materialType = make_shared<string>(boost::any_cast<string>(m["MaterialType"]));
    }
  }


  virtual ~DeleteEditingProjectMaterialsRequest() = default;
};
class DeleteEditingProjectMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEditingProjectMaterialsResponseBody() {}

  explicit DeleteEditingProjectMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEditingProjectMaterialsResponseBody() = default;
};
class DeleteEditingProjectMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEditingProjectMaterialsResponseBody> body{};

  DeleteEditingProjectMaterialsResponse() {}

  explicit DeleteEditingProjectMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEditingProjectMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEditingProjectMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEditingProjectMaterialsResponse() = default;
};
class SearchEditingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> status{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> createSource{};
  shared_ptr<string> templateType{};

  SearchEditingProjectRequest() {}

  explicit SearchEditingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~SearchEditingProjectRequest() = default;
};
class SearchEditingProjectResponseBodyProjectList : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> title{};
  shared_ptr<string> timeline{};
  shared_ptr<string> description{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<long> duration{};
  shared_ptr<string> status{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> createSource{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> templateType{};

  SearchEditingProjectResponseBodyProjectList() {}

  explicit SearchEditingProjectResponseBodyProjectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~SearchEditingProjectResponseBodyProjectList() = default;
};
class SearchEditingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchEditingProjectResponseBodyProjectList>> projectList{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};

  SearchEditingProjectResponseBody() {}

  explicit SearchEditingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (projectList) {
      vector<boost::any> temp1;
      for(auto item1:*projectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ProjectList") != m.end() && !m["ProjectList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectList"].type()) {
        vector<SearchEditingProjectResponseBodyProjectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchEditingProjectResponseBodyProjectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectList = make_shared<vector<SearchEditingProjectResponseBodyProjectList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~SearchEditingProjectResponseBody() = default;
};
class SearchEditingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchEditingProjectResponseBody> body{};

  SearchEditingProjectResponse() {}

  explicit SearchEditingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchEditingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchEditingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~SearchEditingProjectResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> status{};
  shared_ptr<string> createSource{};
  shared_ptr<string> keyword{};
  shared_ptr<string> sortType{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> config{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> status{};
  shared_ptr<string> createSource{};
  shared_ptr<string> modifiedSource{};
  shared_ptr<string> previewMediaStatus{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> clipsParam{};

  ListTemplatesResponseBodyTemplates() {}

  explicit ListTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createSource) {
      res["CreateSource"] = boost::any(*createSource);
    }
    if (modifiedSource) {
      res["ModifiedSource"] = boost::any(*modifiedSource);
    }
    if (previewMediaStatus) {
      res["PreviewMediaStatus"] = boost::any(*previewMediaStatus);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateSource") != m.end() && !m["CreateSource"].empty()) {
      createSource = make_shared<string>(boost::any_cast<string>(m["CreateSource"]));
    }
    if (m.find("ModifiedSource") != m.end() && !m["ModifiedSource"].empty()) {
      modifiedSource = make_shared<string>(boost::any_cast<string>(m["ModifiedSource"]));
    }
    if (m.find("PreviewMediaStatus") != m.end() && !m["PreviewMediaStatus"].empty()) {
      previewMediaStatus = make_shared<string>(boost::any_cast<string>(m["PreviewMediaStatus"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplates() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplates>> templates{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
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
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~ListTemplatesResponseBody() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteEditingProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectIds{};

  DeleteEditingProjectsRequest() {}

  explicit DeleteEditingProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      projectIds = make_shared<string>(boost::any_cast<string>(m["ProjectIds"]));
    }
  }


  virtual ~DeleteEditingProjectsRequest() = default;
};
class DeleteEditingProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ignoredList{};

  DeleteEditingProjectsResponseBody() {}

  explicit DeleteEditingProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ignoredList) {
      res["IgnoredList"] = boost::any(*ignoredList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IgnoredList") != m.end() && !m["IgnoredList"].empty()) {
      ignoredList = make_shared<string>(boost::any_cast<string>(m["IgnoredList"]));
    }
  }


  virtual ~DeleteEditingProjectsResponseBody() = default;
};
class DeleteEditingProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEditingProjectsResponseBody> body{};

  DeleteEditingProjectsResponse() {}

  explicit DeleteEditingProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEditingProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEditingProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEditingProjectsResponse() = default;
};
class GetMediaInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> outputType{};

  GetMediaInfoRequest() {}

  explicit GetMediaInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (outputType) {
      res["OutputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("OutputType") != m.end() && !m["OutputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["OutputType"]));
    }
  }


  virtual ~GetMediaInfoRequest() = default;
};
class GetMediaInfoResponseBodyMediaInfoMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> userData{};
  shared_ptr<string> status{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> deletedTime{};
  shared_ptr<string> spriteImages{};

  GetMediaInfoResponseBodyMediaInfoMediaBasicInfo() {}

  explicit GetMediaInfoResponseBodyMediaInfoMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (spriteImages) {
      res["SpriteImages"] = boost::any(*spriteImages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("SpriteImages") != m.end() && !m["SpriteImages"].empty()) {
      spriteImages = make_shared<string>(boost::any_cast<string>(m["SpriteImages"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoMediaBasicInfo() = default;
};
class GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList : public Darabonba::Model {
public:
  shared_ptr<double> in{};
  shared_ptr<double> out{};
  shared_ptr<string> type{};
  shared_ptr<string> data{};

  GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList() {}

  explicit GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (in) {
      res["In"] = boost::any(*in);
    }
    if (out) {
      res["Out"] = boost::any(*out);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("In") != m.end() && !m["In"].empty()) {
      in = make_shared<double>(boost::any_cast<double>(m["In"]));
    }
    if (m.find("Out") != m.end() && !m["Out"].empty()) {
      out = make_shared<double>(boost::any_cast<double>(m["Out"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList() = default;
};
class GetMediaInfoResponseBodyMediaInfoAiRoughDataList : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> result{};

  GetMediaInfoResponseBodyMediaInfoAiRoughDataList() {}

  explicit GetMediaInfoResponseBodyMediaInfoAiRoughDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoAiRoughDataList() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> region{};
  shared_ptr<string> formatName{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> width{};
  shared_ptr<string> height{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> index{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> profile{};
  shared_ptr<string> sampleFmt{};
  shared_ptr<string> sampleRate{};
  shared_ptr<string> channels{};
  shared_ptr<string> channelLayout{};
  shared_ptr<string> timebase{};
  shared_ptr<string> startTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> fps{};
  shared_ptr<string> numFrames{};
  shared_ptr<string> lang{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (sampleFmt) {
      res["SampleFmt"] = boost::any(*sampleFmt);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    if (channelLayout) {
      res["ChannelLayout"] = boost::any(*channelLayout);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (numFrames) {
      res["NumFrames"] = boost::any(*numFrames);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("SampleFmt") != m.end() && !m["SampleFmt"].empty()) {
      sampleFmt = make_shared<string>(boost::any_cast<string>(m["SampleFmt"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["Channels"]));
    }
    if (m.find("ChannelLayout") != m.end() && !m["ChannelLayout"].empty()) {
      channelLayout = make_shared<string>(boost::any_cast<string>(m["ChannelLayout"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<string>(boost::any_cast<string>(m["Fps"]));
    }
    if (m.find("NumFrames") != m.end() && !m["NumFrames"].empty()) {
      numFrames = make_shared<string>(boost::any_cast<string>(m["NumFrames"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> index{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> profile{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> width{};
  shared_ptr<string> height{};
  shared_ptr<string> hasBFrames{};
  shared_ptr<string> sar{};
  shared_ptr<string> dar{};
  shared_ptr<string> pixFmt{};
  shared_ptr<string> level{};
  shared_ptr<string> fps{};
  shared_ptr<string> avgFPS{};
  shared_ptr<string> timebase{};
  shared_ptr<string> startTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> numFrames{};
  shared_ptr<string> lang{};
  shared_ptr<string> rotate{};
  shared_ptr<string> nbFrames{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (hasBFrames) {
      res["HasBFrames"] = boost::any(*hasBFrames);
    }
    if (sar) {
      res["Sar"] = boost::any(*sar);
    }
    if (dar) {
      res["Dar"] = boost::any(*dar);
    }
    if (pixFmt) {
      res["PixFmt"] = boost::any(*pixFmt);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (avgFPS) {
      res["AvgFPS"] = boost::any(*avgFPS);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (numFrames) {
      res["NumFrames"] = boost::any(*numFrames);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (rotate) {
      res["Rotate"] = boost::any(*rotate);
    }
    if (nbFrames) {
      res["Nb_frames"] = boost::any(*nbFrames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("HasBFrames") != m.end() && !m["HasBFrames"].empty()) {
      hasBFrames = make_shared<string>(boost::any_cast<string>(m["HasBFrames"]));
    }
    if (m.find("Sar") != m.end() && !m["Sar"].empty()) {
      sar = make_shared<string>(boost::any_cast<string>(m["Sar"]));
    }
    if (m.find("Dar") != m.end() && !m["Dar"].empty()) {
      dar = make_shared<string>(boost::any_cast<string>(m["Dar"]));
    }
    if (m.find("PixFmt") != m.end() && !m["PixFmt"].empty()) {
      pixFmt = make_shared<string>(boost::any_cast<string>(m["PixFmt"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<string>(boost::any_cast<string>(m["Fps"]));
    }
    if (m.find("AvgFPS") != m.end() && !m["AvgFPS"].empty()) {
      avgFPS = make_shared<string>(boost::any_cast<string>(m["AvgFPS"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("NumFrames") != m.end() && !m["NumFrames"].empty()) {
      numFrames = make_shared<string>(boost::any_cast<string>(m["NumFrames"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Rotate") != m.end() && !m["Rotate"].empty()) {
      rotate = make_shared<string>(boost::any_cast<string>(m["Rotate"]));
    }
    if (m.find("Nb_frames") != m.end() && !m["Nb_frames"].empty()) {
      nbFrames = make_shared<string>(boost::any_cast<string>(m["Nb_frames"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList : public Darabonba::Model {
public:
  shared_ptr<string> index{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> timebase{};
  shared_ptr<string> startTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> lang{};

  GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (timebase) {
      res["Timebase"] = boost::any(*timebase);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("Timebase") != m.end() && !m["Timebase"].empty()) {
      timebase = make_shared<string>(boost::any_cast<string>(m["Timebase"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfoFileInfoList : public Darabonba::Model {
public:
  shared_ptr<GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo> fileBasicInfo{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>> audioStreamInfoList{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>> videoStreamInfoList{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>> subtitleStreamInfoList{};

  GetMediaInfoResponseBodyMediaInfoFileInfoList() {}

  explicit GetMediaInfoResponseBodyMediaInfoFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audioStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*audioStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioStreamInfoList"] = boost::any(temp1);
    }
    if (videoStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*videoStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoStreamInfoList"] = boost::any(temp1);
    }
    if (subtitleStreamInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subtitleStreamInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubtitleStreamInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<GetMediaInfoResponseBodyMediaInfoFileInfoListFileBasicInfo>(model1);
      }
    }
    if (m.find("AudioStreamInfoList") != m.end() && !m["AudioStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioStreamInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioStreamInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList>>(expect1);
      }
    }
    if (m.find("VideoStreamInfoList") != m.end() && !m["VideoStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoStreamInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoStreamInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList>>(expect1);
      }
    }
    if (m.find("SubtitleStreamInfoList") != m.end() && !m["SubtitleStreamInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubtitleStreamInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubtitleStreamInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtitleStreamInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList>>(expect1);
      }
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoList() = default;
};
class GetMediaInfoResponseBodyMediaInfo : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<GetMediaInfoResponseBodyMediaInfoMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList>> dynamicMetaDataList{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoAiRoughDataList>> aiRoughDataList{};
  shared_ptr<vector<GetMediaInfoResponseBodyMediaInfoFileInfoList>> fileInfoList{};

  GetMediaInfoResponseBodyMediaInfo() {}

  explicit GetMediaInfoResponseBodyMediaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicMetaDataList) {
      vector<boost::any> temp1;
      for(auto item1:*dynamicMetaDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DynamicMetaDataList"] = boost::any(temp1);
    }
    if (aiRoughDataList) {
      vector<boost::any> temp1;
      for(auto item1:*aiRoughDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AiRoughDataList"] = boost::any(temp1);
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        GetMediaInfoResponseBodyMediaInfoMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<GetMediaInfoResponseBodyMediaInfoMediaBasicInfo>(model1);
      }
    }
    if (m.find("DynamicMetaDataList") != m.end() && !m["DynamicMetaDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DynamicMetaDataList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DynamicMetaDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dynamicMetaDataList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoDynamicMetaDataList>>(expect1);
      }
    }
    if (m.find("AiRoughDataList") != m.end() && !m["AiRoughDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["AiRoughDataList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoAiRoughDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AiRoughDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoAiRoughDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aiRoughDataList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoAiRoughDataList>>(expect1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<GetMediaInfoResponseBodyMediaInfoFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaInfoResponseBodyMediaInfoFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<GetMediaInfoResponseBodyMediaInfoFileInfoList>>(expect1);
      }
    }
  }


  virtual ~GetMediaInfoResponseBodyMediaInfo() = default;
};
class GetMediaInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetMediaInfoResponseBodyMediaInfo> mediaInfo{};

  GetMediaInfoResponseBody() {}

  explicit GetMediaInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mediaInfo) {
      res["MediaInfo"] = mediaInfo ? boost::any(mediaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MediaInfo") != m.end() && !m["MediaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaInfo"].type()) {
        GetMediaInfoResponseBodyMediaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaInfo"]));
        mediaInfo = make_shared<GetMediaInfoResponseBodyMediaInfo>(model1);
      }
    }
  }


  virtual ~GetMediaInfoResponseBody() = default;
};
class GetMediaInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMediaInfoResponseBody> body{};

  GetMediaInfoResponse() {}

  explicit GetMediaInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMediaInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaInfoResponse() = default;
};
class SubmitSmartJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> editingConfig{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> inputConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> userData{};
  shared_ptr<string> jobType{};

  SubmitSmartJobRequest() {}

  explicit SubmitSmartJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (inputConfig) {
      res["InputConfig"] = boost::any(*inputConfig);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      inputConfig = make_shared<string>(boost::any_cast<string>(m["InputConfig"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
  }


  virtual ~SubmitSmartJobRequest() = default;
};
class SubmitSmartJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};

  SubmitSmartJobResponseBody() {}

  explicit SubmitSmartJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~SubmitSmartJobResponseBody() = default;
};
class SubmitSmartJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSmartJobResponseBody> body{};

  SubmitSmartJobResponse() {}

  explicit SubmitSmartJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitSmartJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSmartJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSmartJobResponse() = default;
};
class SubmitDelogoJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> inputType{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> outputMediaTarget{};

  SubmitDelogoJobRequest() {}

  explicit SubmitDelogoJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (inputType) {
      res["InputType"] = boost::any(*inputType);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("InputType") != m.end() && !m["InputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["InputType"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
  }


  virtual ~SubmitDelogoJobRequest() = default;
};
class SubmitDelogoJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitDelogoJobResponseBody() {}

  explicit SubmitDelogoJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitDelogoJobResponseBody() = default;
};
class SubmitDelogoJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitDelogoJobResponseBody> body{};

  SubmitDelogoJobResponse() {}

  explicit SubmitDelogoJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitDelogoJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDelogoJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDelogoJobResponse() = default;
};
class UpdateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};
  shared_ptr<string> name{};
  shared_ptr<string> config{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> previewMedia{};
  shared_ptr<string> status{};
  shared_ptr<string> source{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (previewMedia) {
      res["PreviewMedia"] = boost::any(*previewMedia);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("PreviewMedia") != m.end() && !m["PreviewMedia"].empty()) {
      previewMedia = make_shared<string>(boost::any_cast<string>(m["PreviewMedia"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTemplateResponseBody() {}

  explicit UpdateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTemplateResponseBody() = default;
};
class UpdateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTemplateResponseBody> body{};

  UpdateTemplateResponse() {}

  explicit UpdateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class SubmitAudioProduceJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> editingConfig{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> inputConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> userData{};
  shared_ptr<bool> overwrite{};

  SubmitAudioProduceJobRequest() {}

  explicit SubmitAudioProduceJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (inputConfig) {
      res["InputConfig"] = boost::any(*inputConfig);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      inputConfig = make_shared<string>(boost::any_cast<string>(m["InputConfig"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
  }


  virtual ~SubmitAudioProduceJobRequest() = default;
};
class SubmitAudioProduceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> state{};

  SubmitAudioProduceJobResponseBody() {}

  explicit SubmitAudioProduceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~SubmitAudioProduceJobResponseBody() = default;
};
class SubmitAudioProduceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitAudioProduceJobResponseBody> body{};

  SubmitAudioProduceJobResponse() {}

  explicit SubmitAudioProduceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitAudioProduceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitAudioProduceJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitAudioProduceJobResponse() = default;
};
class SubmitMediaProducingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> timeline{};
  shared_ptr<string> templateId{};
  shared_ptr<string> clipsParam{};
  shared_ptr<string> projectMetadata{};
  shared_ptr<string> outputMediaTarget{};
  shared_ptr<string> outputMediaConfig{};
  shared_ptr<string> userData{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> source{};

  SubmitMediaProducingJobRequest() {}

  explicit SubmitMediaProducingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (timeline) {
      res["Timeline"] = boost::any(*timeline);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (clipsParam) {
      res["ClipsParam"] = boost::any(*clipsParam);
    }
    if (projectMetadata) {
      res["ProjectMetadata"] = boost::any(*projectMetadata);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    if (outputMediaConfig) {
      res["OutputMediaConfig"] = boost::any(*outputMediaConfig);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Timeline") != m.end() && !m["Timeline"].empty()) {
      timeline = make_shared<string>(boost::any_cast<string>(m["Timeline"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ClipsParam") != m.end() && !m["ClipsParam"].empty()) {
      clipsParam = make_shared<string>(boost::any_cast<string>(m["ClipsParam"]));
    }
    if (m.find("ProjectMetadata") != m.end() && !m["ProjectMetadata"].empty()) {
      projectMetadata = make_shared<string>(boost::any_cast<string>(m["ProjectMetadata"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
    if (m.find("OutputMediaConfig") != m.end() && !m["OutputMediaConfig"].empty()) {
      outputMediaConfig = make_shared<string>(boost::any_cast<string>(m["OutputMediaConfig"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~SubmitMediaProducingJobRequest() = default;
};
class SubmitMediaProducingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};

  SubmitMediaProducingJobResponseBody() {}

  explicit SubmitMediaProducingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~SubmitMediaProducingJobResponseBody() = default;
};
class SubmitMediaProducingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitMediaProducingJobResponseBody> body{};

  SubmitMediaProducingJobResponse() {}

  explicit SubmitMediaProducingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitMediaProducingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitMediaProducingJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitMediaProducingJobResponse() = default;
};
class UpdateSmartJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> FEExtend{};

  UpdateSmartJobRequest() {}

  explicit UpdateSmartJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (FEExtend) {
      res["FEExtend"] = boost::any(*FEExtend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("FEExtend") != m.end() && !m["FEExtend"].empty()) {
      FEExtend = make_shared<string>(boost::any_cast<string>(m["FEExtend"]));
    }
  }


  virtual ~UpdateSmartJobRequest() = default;
};
class UpdateSmartJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> FEExtend{};

  UpdateSmartJobResponseBody() {}

  explicit UpdateSmartJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (FEExtend) {
      res["FEExtend"] = boost::any(*FEExtend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("FEExtend") != m.end() && !m["FEExtend"].empty()) {
      FEExtend = make_shared<string>(boost::any_cast<string>(m["FEExtend"]));
    }
  }


  virtual ~UpdateSmartJobResponseBody() = default;
};
class UpdateSmartJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSmartJobResponseBody> body{};

  UpdateSmartJobResponse() {}

  explicit UpdateSmartJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSmartJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSmartJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSmartJobResponse() = default;
};
class ListAllPublicMediaTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};

  ListAllPublicMediaTagsRequest() {}

  explicit ListAllPublicMediaTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
  }


  virtual ~ListAllPublicMediaTagsRequest() = default;
};
class ListAllPublicMediaTagsResponseBodyMediaTagList : public Darabonba::Model {
public:
  shared_ptr<string> mediaTagId{};
  shared_ptr<string> mediaTagNameChinese{};
  shared_ptr<string> mediaTagNameEnglish{};

  ListAllPublicMediaTagsResponseBodyMediaTagList() {}

  explicit ListAllPublicMediaTagsResponseBodyMediaTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaTagId) {
      res["MediaTagId"] = boost::any(*mediaTagId);
    }
    if (mediaTagNameChinese) {
      res["MediaTagNameChinese"] = boost::any(*mediaTagNameChinese);
    }
    if (mediaTagNameEnglish) {
      res["MediaTagNameEnglish"] = boost::any(*mediaTagNameEnglish);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaTagId") != m.end() && !m["MediaTagId"].empty()) {
      mediaTagId = make_shared<string>(boost::any_cast<string>(m["MediaTagId"]));
    }
    if (m.find("MediaTagNameChinese") != m.end() && !m["MediaTagNameChinese"].empty()) {
      mediaTagNameChinese = make_shared<string>(boost::any_cast<string>(m["MediaTagNameChinese"]));
    }
    if (m.find("MediaTagNameEnglish") != m.end() && !m["MediaTagNameEnglish"].empty()) {
      mediaTagNameEnglish = make_shared<string>(boost::any_cast<string>(m["MediaTagNameEnglish"]));
    }
  }


  virtual ~ListAllPublicMediaTagsResponseBodyMediaTagList() = default;
};
class ListAllPublicMediaTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAllPublicMediaTagsResponseBodyMediaTagList>> mediaTagList{};

  ListAllPublicMediaTagsResponseBody() {}

  explicit ListAllPublicMediaTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (mediaTagList) {
      vector<boost::any> temp1;
      for(auto item1:*mediaTagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaTagList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MediaTagList") != m.end() && !m["MediaTagList"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaTagList"].type()) {
        vector<ListAllPublicMediaTagsResponseBodyMediaTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaTagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAllPublicMediaTagsResponseBodyMediaTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaTagList = make_shared<vector<ListAllPublicMediaTagsResponseBodyMediaTagList>>(expect1);
      }
    }
  }


  virtual ~ListAllPublicMediaTagsResponseBody() = default;
};
class ListAllPublicMediaTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAllPublicMediaTagsResponseBody> body{};

  ListAllPublicMediaTagsResponse() {}

  explicit ListAllPublicMediaTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAllPublicMediaTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAllPublicMediaTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAllPublicMediaTagsResponse() = default;
};
class SubmitMattingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> inputType{};
  shared_ptr<string> overwrite{};
  shared_ptr<string> outputMediaTarget{};

  SubmitMattingJobRequest() {}

  explicit SubmitMattingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (inputType) {
      res["InputType"] = boost::any(*inputType);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("InputType") != m.end() && !m["InputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["InputType"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<string>(boost::any_cast<string>(m["Overwrite"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
  }


  virtual ~SubmitMattingJobRequest() = default;
};
class SubmitMattingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitMattingJobResponseBody() {}

  explicit SubmitMattingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitMattingJobResponseBody() = default;
};
class SubmitMattingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitMattingJobResponseBody> body{};

  SubmitMattingJobResponse() {}

  explicit SubmitMattingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitMattingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitMattingJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitMattingJobResponse() = default;
};
class GetEventCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> callbackQueueName{};
  shared_ptr<string> eventTypeList{};

  GetEventCallbackResponseBody() {}

  explicit GetEventCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (callbackQueueName) {
      res["CallbackQueueName"] = boost::any(*callbackQueueName);
    }
    if (eventTypeList) {
      res["EventTypeList"] = boost::any(*eventTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CallbackQueueName") != m.end() && !m["CallbackQueueName"].empty()) {
      callbackQueueName = make_shared<string>(boost::any_cast<string>(m["CallbackQueueName"]));
    }
    if (m.find("EventTypeList") != m.end() && !m["EventTypeList"].empty()) {
      eventTypeList = make_shared<string>(boost::any_cast<string>(m["EventTypeList"]));
    }
  }


  virtual ~GetEventCallbackResponseBody() = default;
};
class GetEventCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEventCallbackResponseBody> body{};

  GetEventCallbackResponse() {}

  explicit GetEventCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEventCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEventCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~GetEventCallbackResponse() = default;
};
class ListPublicMediaBasicInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaTagId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<bool> includeFileBasicInfo{};

  ListPublicMediaBasicInfosRequest() {}

  explicit ListPublicMediaBasicInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaTagId) {
      res["MediaTagId"] = boost::any(*mediaTagId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (includeFileBasicInfo) {
      res["IncludeFileBasicInfo"] = boost::any(*includeFileBasicInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaTagId") != m.end() && !m["MediaTagId"].empty()) {
      mediaTagId = make_shared<string>(boost::any_cast<string>(m["MediaTagId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("IncludeFileBasicInfo") != m.end() && !m["IncludeFileBasicInfo"].empty()) {
      includeFileBasicInfo = make_shared<bool>(boost::any_cast<bool>(m["IncludeFileBasicInfo"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosRequest() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<string> inputURL{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> businessType{};
  shared_ptr<string> source{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> category{};
  shared_ptr<string> mediaTags{};
  shared_ptr<string> coverURL{};
  shared_ptr<string> userData{};
  shared_ptr<string> snapshots{};
  shared_ptr<string> status{};
  shared_ptr<string> transcodeStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> deletedTime{};

  ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (inputURL) {
      res["InputURL"] = boost::any(*inputURL);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (mediaTags) {
      res["MediaTags"] = boost::any(*mediaTags);
    }
    if (coverURL) {
      res["CoverURL"] = boost::any(*coverURL);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (snapshots) {
      res["Snapshots"] = boost::any(*snapshots);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transcodeStatus) {
      res["TranscodeStatus"] = boost::any(*transcodeStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("InputURL") != m.end() && !m["InputURL"].empty()) {
      inputURL = make_shared<string>(boost::any_cast<string>(m["InputURL"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("MediaTags") != m.end() && !m["MediaTags"].empty()) {
      mediaTags = make_shared<string>(boost::any_cast<string>(m["MediaTags"]));
    }
    if (m.find("CoverURL") != m.end() && !m["CoverURL"].empty()) {
      coverURL = make_shared<string>(boost::any_cast<string>(m["CoverURL"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      snapshots = make_shared<string>(boost::any_cast<string>(m["Snapshots"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TranscodeStatus") != m.end() && !m["TranscodeStatus"].empty()) {
      transcodeStatus = make_shared<string>(boost::any_cast<string>(m["TranscodeStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileStatus{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> region{};
  shared_ptr<string> formatName{};
  shared_ptr<string> duration{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> width{};
  shared_ptr<string> height{};

  ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStatus) {
      res["FileStatus"] = boost::any(*fileStatus);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStatus") != m.end() && !m["FileStatus"].empty()) {
      fileStatus = make_shared<string>(boost::any_cast<string>(m["FileStatus"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
public:
  shared_ptr<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo{};

  ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileBasicInfo) {
      res["FileBasicInfo"] = fileBasicInfo ? boost::any(fileBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileBasicInfo") != m.end() && !m["FileBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileBasicInfo"].type()) {
        ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileBasicInfo"]));
        fileBasicInfo = make_shared<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoListFileBasicInfo>(model1);
      }
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList() = default;
};
class ListPublicMediaBasicInfosResponseBodyMediaInfos : public Darabonba::Model {
public:
  shared_ptr<string> mediaId{};
  shared_ptr<ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo{};
  shared_ptr<vector<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList>> fileInfoList{};

  ListPublicMediaBasicInfosResponseBodyMediaInfos() {}

  explicit ListPublicMediaBasicInfosResponseBodyMediaInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (mediaBasicInfo) {
      res["MediaBasicInfo"] = mediaBasicInfo ? boost::any(mediaBasicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*fileInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("MediaBasicInfo") != m.end() && !m["MediaBasicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaBasicInfo"].type()) {
        ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaBasicInfo"]));
        mediaBasicInfo = make_shared<ListPublicMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo>(model1);
      }
    }
    if (m.find("FileInfoList") != m.end() && !m["FileInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileInfoList"].type()) {
        vector<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileInfoList = make_shared<vector<ListPublicMediaBasicInfosResponseBodyMediaInfosFileInfoList>>(expect1);
      }
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBodyMediaInfos() = default;
};
class ListPublicMediaBasicInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListPublicMediaBasicInfosResponseBodyMediaInfos>> mediaInfos{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  ListPublicMediaBasicInfosResponseBody() {}

  explicit ListPublicMediaBasicInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (mediaInfos) {
      vector<boost::any> temp1;
      for(auto item1:*mediaInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MediaInfos"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
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
    if (m.find("MediaInfos") != m.end() && !m["MediaInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MediaInfos"].type()) {
        vector<ListPublicMediaBasicInfosResponseBodyMediaInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MediaInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicMediaBasicInfosResponseBodyMediaInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mediaInfos = make_shared<vector<ListPublicMediaBasicInfosResponseBodyMediaInfos>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListPublicMediaBasicInfosResponseBody() = default;
};
class ListPublicMediaBasicInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPublicMediaBasicInfosResponseBody> body{};

  ListPublicMediaBasicInfosResponse() {}

  explicit ListPublicMediaBasicInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPublicMediaBasicInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicMediaBasicInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicMediaBasicInfosResponse() = default;
};
class SubmitCoverJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> outputConfig{};

  SubmitCoverJobRequest() {}

  explicit SubmitCoverJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
  }


  virtual ~SubmitCoverJobRequest() = default;
};
class SubmitCoverJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitCoverJobResponseBody() {}

  explicit SubmitCoverJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitCoverJobResponseBody() = default;
};
class SubmitCoverJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitCoverJobResponseBody> body{};

  SubmitCoverJobResponse() {}

  explicit SubmitCoverJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitCoverJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitCoverJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitCoverJobResponse() = default;
};
class GetSmartHandleJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> withAiResult{};

  GetSmartHandleJobRequest() {}

  explicit GetSmartHandleJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (withAiResult) {
      res["WithAiResult"] = boost::any(*withAiResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("WithAiResult") != m.end() && !m["WithAiResult"].empty()) {
      withAiResult = make_shared<string>(boost::any_cast<string>(m["WithAiResult"]));
    }
  }


  virtual ~GetSmartHandleJobRequest() = default;
};
class GetSmartHandleJobResponseBodySmartJobInfoInputConfig : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> jobParameters{};

  GetSmartHandleJobResponseBodySmartJobInfoInputConfig() {}

  explicit GetSmartHandleJobResponseBodySmartJobInfoInputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (jobParameters) {
      res["JobParameters"] = boost::any(*jobParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("JobParameters") != m.end() && !m["JobParameters"].empty()) {
      jobParameters = make_shared<string>(boost::any_cast<string>(m["JobParameters"]));
    }
  }


  virtual ~GetSmartHandleJobResponseBodySmartJobInfoInputConfig() = default;
};
class GetSmartHandleJobResponseBodySmartJobInfo : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> userId{};
  shared_ptr<string> editingConfig{};
  shared_ptr<GetSmartHandleJobResponseBodySmartJobInfoInputConfig> inputConfig{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> jobType{};

  GetSmartHandleJobResponseBodySmartJobInfo() {}

  explicit GetSmartHandleJobResponseBodySmartJobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (editingConfig) {
      res["EditingConfig"] = boost::any(*editingConfig);
    }
    if (inputConfig) {
      res["InputConfig"] = inputConfig ? boost::any(inputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputConfig) {
      res["outputConfig"] = boost::any(*outputConfig);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("EditingConfig") != m.end() && !m["EditingConfig"].empty()) {
      editingConfig = make_shared<string>(boost::any_cast<string>(m["EditingConfig"]));
    }
    if (m.find("InputConfig") != m.end() && !m["InputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["InputConfig"].type()) {
        GetSmartHandleJobResponseBodySmartJobInfoInputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InputConfig"]));
        inputConfig = make_shared<GetSmartHandleJobResponseBodySmartJobInfoInputConfig>(model1);
      }
    }
    if (m.find("outputConfig") != m.end() && !m["outputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["outputConfig"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
  }


  virtual ~GetSmartHandleJobResponseBodySmartJobInfo() = default;
};
class GetSmartHandleJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};
  shared_ptr<string> FEExtend{};
  shared_ptr<GetSmartHandleJobResponseBodySmartJobInfo> smartJobInfo{};

  GetSmartHandleJobResponseBody() {}

  explicit GetSmartHandleJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (FEExtend) {
      res["FEExtend"] = boost::any(*FEExtend);
    }
    if (smartJobInfo) {
      res["SmartJobInfo"] = smartJobInfo ? boost::any(smartJobInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("FEExtend") != m.end() && !m["FEExtend"].empty()) {
      FEExtend = make_shared<string>(boost::any_cast<string>(m["FEExtend"]));
    }
    if (m.find("SmartJobInfo") != m.end() && !m["SmartJobInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SmartJobInfo"].type()) {
        GetSmartHandleJobResponseBodySmartJobInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SmartJobInfo"]));
        smartJobInfo = make_shared<GetSmartHandleJobResponseBodySmartJobInfo>(model1);
      }
    }
  }


  virtual ~GetSmartHandleJobResponseBody() = default;
};
class GetSmartHandleJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSmartHandleJobResponseBody> body{};

  GetSmartHandleJobResponse() {}

  explicit GetSmartHandleJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSmartHandleJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSmartHandleJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetSmartHandleJobResponse() = default;
};
class SubmitH2VJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> inputType{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> outputMediaTarget{};

  SubmitH2VJobRequest() {}

  explicit SubmitH2VJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (inputType) {
      res["InputType"] = boost::any(*inputType);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (outputMediaTarget) {
      res["OutputMediaTarget"] = boost::any(*outputMediaTarget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("InputType") != m.end() && !m["InputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["InputType"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("OutputMediaTarget") != m.end() && !m["OutputMediaTarget"].empty()) {
      outputMediaTarget = make_shared<string>(boost::any_cast<string>(m["OutputMediaTarget"]));
    }
  }


  virtual ~SubmitH2VJobRequest() = default;
};
class SubmitH2VJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitH2VJobResponseBody() {}

  explicit SubmitH2VJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitH2VJobResponseBody() = default;
};
class SubmitH2VJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitH2VJobResponseBody> body{};

  SubmitH2VJobResponse() {}

  explicit SubmitH2VJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitH2VJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitH2VJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitH2VJobResponse() = default;
};
class SubmitPPTCutJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputFile{};
  shared_ptr<string> userData{};
  shared_ptr<string> title{};
  shared_ptr<string> description{};

  SubmitPPTCutJobRequest() {}

  explicit SubmitPPTCutJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~SubmitPPTCutJobRequest() = default;
};
class SubmitPPTCutJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> output{};
  shared_ptr<string> state{};
  shared_ptr<string> userData{};

  SubmitPPTCutJobResponseBody() {}

  explicit SubmitPPTCutJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitPPTCutJobResponseBody() = default;
};
class SubmitPPTCutJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitPPTCutJobResponseBody> body{};

  SubmitPPTCutJobResponse() {}

  explicit SubmitPPTCutJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitPPTCutJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitPPTCutJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitPPTCutJobResponse() = default;
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
  ListSmartJobsResponse listSmartJobsWithOptions(shared_ptr<ListSmartJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSmartJobsResponse listSmartJobs(shared_ptr<ListSmartJobsRequest> request);
  DescribeRelatedAuthorizationStatusResponse describeRelatedAuthorizationStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRelatedAuthorizationStatusResponse describeRelatedAuthorizationStatus();
  DeleteSmartJobResponse deleteSmartJobWithOptions(shared_ptr<DeleteSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSmartJobResponse deleteSmartJob(shared_ptr<DeleteSmartJobRequest> request);
  AddTemplateResponse addTemplateWithOptions(shared_ptr<AddTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTemplateResponse addTemplate(shared_ptr<AddTemplateRequest> request);
  UpdateEditingProjectResponse updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEditingProjectResponse updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request);
  ListMediaProducingJobsResponse listMediaProducingJobsWithOptions(shared_ptr<ListMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMediaProducingJobsResponse listMediaProducingJobs(shared_ptr<ListMediaProducingJobsRequest> request);
  GetEditingProjectMaterialsResponse getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEditingProjectMaterialsResponse getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request);
  GetDefaultStorageLocationResponse getDefaultStorageLocationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDefaultStorageLocationResponse getDefaultStorageLocation();
  DeleteMediaInfosResponse deleteMediaInfosWithOptions(shared_ptr<DeleteMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMediaInfosResponse deleteMediaInfos(shared_ptr<DeleteMediaInfosRequest> request);
  SetEventCallbackResponse setEventCallbackWithOptions(shared_ptr<SetEventCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetEventCallbackResponse setEventCallback(shared_ptr<SetEventCallbackRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<GetTemplateRequest> request);
  RegisterMediaInfoResponse registerMediaInfoWithOptions(shared_ptr<RegisterMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterMediaInfoResponse registerMediaInfo(shared_ptr<RegisterMediaInfoRequest> request);
  CreateEditingProjectResponse createEditingProjectWithOptions(shared_ptr<CreateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEditingProjectResponse createEditingProject(shared_ptr<CreateEditingProjectRequest> request);
  BatchGetMediaInfosResponse batchGetMediaInfosWithOptions(shared_ptr<BatchGetMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetMediaInfosResponse batchGetMediaInfos(shared_ptr<BatchGetMediaInfosRequest> request);
  SetDefaultStorageLocationResponse setDefaultStorageLocationWithOptions(shared_ptr<SetDefaultStorageLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultStorageLocationResponse setDefaultStorageLocation(shared_ptr<SetDefaultStorageLocationRequest> request);
  UpdateMediaInfoResponse updateMediaInfoWithOptions(shared_ptr<UpdateMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMediaInfoResponse updateMediaInfo(shared_ptr<UpdateMediaInfoRequest> request);
  GetMediaProducingJobResponse getMediaProducingJobWithOptions(shared_ptr<GetMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaProducingJobResponse getMediaProducingJob(shared_ptr<GetMediaProducingJobRequest> request);
  DescribeIceProductStatusResponse describeIceProductStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIceProductStatusResponse describeIceProductStatus();
  ListMediaBasicInfosResponse listMediaBasicInfosWithOptions(shared_ptr<ListMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMediaBasicInfosResponse listMediaBasicInfos(shared_ptr<ListMediaBasicInfosRequest> request);
  SubmitSubtitleProduceJobResponse submitSubtitleProduceJobWithOptions(shared_ptr<SubmitSubtitleProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSubtitleProduceJobResponse submitSubtitleProduceJob(shared_ptr<SubmitSubtitleProduceJobRequest> request);
  SubmitKeyWordCutJobResponse submitKeyWordCutJobWithOptions(shared_ptr<SubmitKeyWordCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitKeyWordCutJobResponse submitKeyWordCutJob(shared_ptr<SubmitKeyWordCutJobRequest> request);
  AddEditingProjectMaterialsResponse addEditingProjectMaterialsWithOptions(shared_ptr<AddEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEditingProjectMaterialsResponse addEditingProjectMaterials(shared_ptr<AddEditingProjectMaterialsRequest> request);
  SubmitASRJobResponse submitASRJobWithOptions(shared_ptr<SubmitASRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitASRJobResponse submitASRJob(shared_ptr<SubmitASRJobRequest> request);
  GetEditingProjectResponse getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEditingProjectResponse getEditingProject(shared_ptr<GetEditingProjectRequest> request);
  ListSysTemplatesResponse listSysTemplatesWithOptions(shared_ptr<ListSysTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSysTemplatesResponse listSysTemplates(shared_ptr<ListSysTemplatesRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<DeleteTemplateRequest> request);
  SubmitIRJobResponse submitIRJobWithOptions(shared_ptr<SubmitIRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitIRJobResponse submitIRJob(shared_ptr<SubmitIRJobRequest> request);
  DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterialsWithOptions(shared_ptr<DeleteEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterials(shared_ptr<DeleteEditingProjectMaterialsRequest> request);
  SearchEditingProjectResponse searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchEditingProjectResponse searchEditingProject(shared_ptr<SearchEditingProjectRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  DeleteEditingProjectsResponse deleteEditingProjectsWithOptions(shared_ptr<DeleteEditingProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEditingProjectsResponse deleteEditingProjects(shared_ptr<DeleteEditingProjectsRequest> request);
  GetMediaInfoResponse getMediaInfoWithOptions(shared_ptr<GetMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaInfoResponse getMediaInfo(shared_ptr<GetMediaInfoRequest> request);
  SubmitSmartJobResponse submitSmartJobWithOptions(shared_ptr<SubmitSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSmartJobResponse submitSmartJob(shared_ptr<SubmitSmartJobRequest> request);
  SubmitDelogoJobResponse submitDelogoJobWithOptions(shared_ptr<SubmitDelogoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDelogoJobResponse submitDelogoJob(shared_ptr<SubmitDelogoJobRequest> request);
  UpdateTemplateResponse updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateResponse updateTemplate(shared_ptr<UpdateTemplateRequest> request);
  SubmitAudioProduceJobResponse submitAudioProduceJobWithOptions(shared_ptr<SubmitAudioProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitAudioProduceJobResponse submitAudioProduceJob(shared_ptr<SubmitAudioProduceJobRequest> request);
  SubmitMediaProducingJobResponse submitMediaProducingJobWithOptions(shared_ptr<SubmitMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitMediaProducingJobResponse submitMediaProducingJob(shared_ptr<SubmitMediaProducingJobRequest> request);
  UpdateSmartJobResponse updateSmartJobWithOptions(shared_ptr<UpdateSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSmartJobResponse updateSmartJob(shared_ptr<UpdateSmartJobRequest> request);
  ListAllPublicMediaTagsResponse listAllPublicMediaTagsWithOptions(shared_ptr<ListAllPublicMediaTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAllPublicMediaTagsResponse listAllPublicMediaTags(shared_ptr<ListAllPublicMediaTagsRequest> request);
  SubmitMattingJobResponse submitMattingJobWithOptions(shared_ptr<SubmitMattingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitMattingJobResponse submitMattingJob(shared_ptr<SubmitMattingJobRequest> request);
  GetEventCallbackResponse getEventCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventCallbackResponse getEventCallback();
  ListPublicMediaBasicInfosResponse listPublicMediaBasicInfosWithOptions(shared_ptr<ListPublicMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicMediaBasicInfosResponse listPublicMediaBasicInfos(shared_ptr<ListPublicMediaBasicInfosRequest> request);
  SubmitCoverJobResponse submitCoverJobWithOptions(shared_ptr<SubmitCoverJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitCoverJobResponse submitCoverJob(shared_ptr<SubmitCoverJobRequest> request);
  GetSmartHandleJobResponse getSmartHandleJobWithOptions(shared_ptr<GetSmartHandleJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSmartHandleJobResponse getSmartHandleJob(shared_ptr<GetSmartHandleJobRequest> request);
  SubmitH2VJobResponse submitH2VJobWithOptions(shared_ptr<SubmitH2VJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitH2VJobResponse submitH2VJob(shared_ptr<SubmitH2VJobRequest> request);
  SubmitPPTCutJobResponse submitPPTCutJobWithOptions(shared_ptr<SubmitPPTCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitPPTCutJobResponse submitPPTCutJob(shared_ptr<SubmitPPTCutJobRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ICE20201109

#endif
