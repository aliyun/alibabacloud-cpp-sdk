// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VCS20190430_H_
#define ALIBABACLOUD_VCS20190430_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Vcs20190430 {
class CreateComputeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmCodeList{};
  shared_ptr<string> deviceCodeList{};
  shared_ptr<string> projectId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> vcsId{};

  CreateComputeTaskRequest() {}

  explicit CreateComputeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmCodeList) {
      res["AlgorithmCodeList"] = boost::any(*algorithmCodeList);
    }
    if (deviceCodeList) {
      res["DeviceCodeList"] = boost::any(*deviceCodeList);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (vcsId) {
      res["VcsId"] = boost::any(*vcsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmCodeList") != m.end() && !m["AlgorithmCodeList"].empty()) {
      algorithmCodeList = make_shared<string>(boost::any_cast<string>(m["AlgorithmCodeList"]));
    }
    if (m.find("DeviceCodeList") != m.end() && !m["DeviceCodeList"].empty()) {
      deviceCodeList = make_shared<string>(boost::any_cast<string>(m["DeviceCodeList"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VcsId") != m.end() && !m["VcsId"].empty()) {
      vcsId = make_shared<string>(boost::any_cast<string>(m["VcsId"]));
    }
  }


  virtual ~CreateComputeTaskRequest() = default;
};
class CreateComputeTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  CreateComputeTaskResponseBodyData() {}

  explicit CreateComputeTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateComputeTaskResponseBodyData() = default;
};
class CreateComputeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateComputeTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateComputeTaskResponseBody() {}

  explicit CreateComputeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateComputeTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateComputeTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateComputeTaskResponseBody() = default;
};
class CreateComputeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateComputeTaskResponseBody> body{};

  CreateComputeTaskResponse() {}

  explicit CreateComputeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateComputeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateComputeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateComputeTaskResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> areaCode{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> timeZoneCode{};
  shared_ptr<string> vcsId{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaCode) {
      res["AreaCode"] = boost::any(*areaCode);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (timeZoneCode) {
      res["TimeZoneCode"] = boost::any(*timeZoneCode);
    }
    if (vcsId) {
      res["VcsId"] = boost::any(*vcsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaCode") != m.end() && !m["AreaCode"].empty()) {
      areaCode = make_shared<string>(boost::any_cast<string>(m["AreaCode"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TimeZoneCode") != m.end() && !m["TimeZoneCode"].empty()) {
      timeZoneCode = make_shared<string>(boost::any_cast<string>(m["TimeZoneCode"]));
    }
    if (m.find("VcsId") != m.end() && !m["VcsId"].empty()) {
      vcsId = make_shared<string>(boost::any_cast<string>(m["VcsId"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  CreateProjectResponseBodyData() {}

  explicit CreateProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateProjectResponseBodyData() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateProjectResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class DescribeComputeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> vcsId{};

  DescribeComputeTasksRequest() {}

  explicit DescribeComputeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (vcsId) {
      res["VcsId"] = boost::any(*vcsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("VcsId") != m.end() && !m["VcsId"].empty()) {
      vcsId = make_shared<string>(boost::any_cast<string>(m["VcsId"]));
    }
  }


  virtual ~DescribeComputeTasksRequest() = default;
};
class DescribeComputeTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<long> deviceNum{};
  shared_ptr<double> imageSize{};
  shared_ptr<string> runtime{};
  shared_ptr<double> structuredSize{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskStatus{};
  shared_ptr<double> vectorSize{};

  DescribeComputeTasksResponseBodyData() {}

  explicit DescribeComputeTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (deviceNum) {
      res["DeviceNum"] = boost::any(*deviceNum);
    }
    if (imageSize) {
      res["ImageSize"] = boost::any(*imageSize);
    }
    if (runtime) {
      res["Runtime"] = boost::any(*runtime);
    }
    if (structuredSize) {
      res["StructuredSize"] = boost::any(*structuredSize);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (vectorSize) {
      res["VectorSize"] = boost::any(*vectorSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("DeviceNum") != m.end() && !m["DeviceNum"].empty()) {
      deviceNum = make_shared<long>(boost::any_cast<long>(m["DeviceNum"]));
    }
    if (m.find("ImageSize") != m.end() && !m["ImageSize"].empty()) {
      imageSize = make_shared<double>(boost::any_cast<double>(m["ImageSize"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["Runtime"]));
    }
    if (m.find("StructuredSize") != m.end() && !m["StructuredSize"].empty()) {
      structuredSize = make_shared<double>(boost::any_cast<double>(m["StructuredSize"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("VectorSize") != m.end() && !m["VectorSize"].empty()) {
      vectorSize = make_shared<double>(boost::any_cast<double>(m["VectorSize"]));
    }
  }


  virtual ~DescribeComputeTasksResponseBodyData() = default;
};
class DescribeComputeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeComputeTasksResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeComputeTasksResponseBody() {}

  explicit DescribeComputeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeComputeTasksResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeComputeTasksResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeComputeTasksResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeComputeTasksResponseBody() = default;
};
class DescribeComputeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeComputeTasksResponseBody> body{};

  DescribeComputeTasksResponse() {}

  explicit DescribeComputeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComputeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComputeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComputeTasksResponse() = default;
};
class DescribeDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterKey{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> vcsId{};

  DescribeDevicesRequest() {}

  explicit DescribeDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterKey) {
      res["FilterKey"] = boost::any(*filterKey);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (vcsId) {
      res["VcsId"] = boost::any(*vcsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterKey") != m.end() && !m["FilterKey"].empty()) {
      filterKey = make_shared<string>(boost::any_cast<string>(m["FilterKey"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("VcsId") != m.end() && !m["VcsId"].empty()) {
      vcsId = make_shared<string>(boost::any_cast<string>(m["VcsId"]));
    }
  }


  virtual ~DescribeDevicesRequest() = default;
};
class DescribeDevicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceCode{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> frameRate{};
  shared_ptr<double> imageSize{};
  shared_ptr<string> location{};
  shared_ptr<string> owner{};
  shared_ptr<string> pullStreamStatus{};
  shared_ptr<string> realTimeDataRate{};
  shared_ptr<double> structuredSize{};
  shared_ptr<double> vectorSize{};

  DescribeDevicesResponseBodyData() {}

  explicit DescribeDevicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCode) {
      res["DeviceCode"] = boost::any(*deviceCode);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (imageSize) {
      res["ImageSize"] = boost::any(*imageSize);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pullStreamStatus) {
      res["PullStreamStatus"] = boost::any(*pullStreamStatus);
    }
    if (realTimeDataRate) {
      res["RealTimeDataRate"] = boost::any(*realTimeDataRate);
    }
    if (structuredSize) {
      res["StructuredSize"] = boost::any(*structuredSize);
    }
    if (vectorSize) {
      res["VectorSize"] = boost::any(*vectorSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCode") != m.end() && !m["DeviceCode"].empty()) {
      deviceCode = make_shared<string>(boost::any_cast<string>(m["DeviceCode"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<string>(boost::any_cast<string>(m["FrameRate"]));
    }
    if (m.find("ImageSize") != m.end() && !m["ImageSize"].empty()) {
      imageSize = make_shared<double>(boost::any_cast<double>(m["ImageSize"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PullStreamStatus") != m.end() && !m["PullStreamStatus"].empty()) {
      pullStreamStatus = make_shared<string>(boost::any_cast<string>(m["PullStreamStatus"]));
    }
    if (m.find("RealTimeDataRate") != m.end() && !m["RealTimeDataRate"].empty()) {
      realTimeDataRate = make_shared<string>(boost::any_cast<string>(m["RealTimeDataRate"]));
    }
    if (m.find("StructuredSize") != m.end() && !m["StructuredSize"].empty()) {
      structuredSize = make_shared<double>(boost::any_cast<double>(m["StructuredSize"]));
    }
    if (m.find("VectorSize") != m.end() && !m["VectorSize"].empty()) {
      vectorSize = make_shared<double>(boost::any_cast<double>(m["VectorSize"]));
    }
  }


  virtual ~DescribeDevicesResponseBodyData() = default;
};
class DescribeDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeDevicesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDevicesResponseBody() {}

  explicit DescribeDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDevicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDevicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDevicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDevicesResponseBody() = default;
};
class DescribeDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDevicesResponseBody> body{};

  DescribeDevicesResponse() {}

  explicit DescribeDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDevicesResponse() = default;
};
class DescribeProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vcsId{};

  DescribeProjectsRequest() {}

  explicit DescribeProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vcsId) {
      res["VcsId"] = boost::any(*vcsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VcsId") != m.end() && !m["VcsId"].empty()) {
      vcsId = make_shared<string>(boost::any_cast<string>(m["VcsId"]));
    }
  }


  virtual ~DescribeProjectsRequest() = default;
};
class DescribeProjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> gbId{};
  shared_ptr<string> gbIp{};
  shared_ptr<string> gbPort{};
  shared_ptr<double> imageSize{};
  shared_ptr<string> packagePattern{};
  shared_ptr<string> projectCode{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<double> structuredSize{};
  shared_ptr<double> vectorSize{};

  DescribeProjectsResponseBodyData() {}

  explicit DescribeProjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (gbIp) {
      res["GbIp"] = boost::any(*gbIp);
    }
    if (gbPort) {
      res["GbPort"] = boost::any(*gbPort);
    }
    if (imageSize) {
      res["ImageSize"] = boost::any(*imageSize);
    }
    if (packagePattern) {
      res["PackagePattern"] = boost::any(*packagePattern);
    }
    if (projectCode) {
      res["ProjectCode"] = boost::any(*projectCode);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (structuredSize) {
      res["StructuredSize"] = boost::any(*structuredSize);
    }
    if (vectorSize) {
      res["VectorSize"] = boost::any(*vectorSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("GbIp") != m.end() && !m["GbIp"].empty()) {
      gbIp = make_shared<string>(boost::any_cast<string>(m["GbIp"]));
    }
    if (m.find("GbPort") != m.end() && !m["GbPort"].empty()) {
      gbPort = make_shared<string>(boost::any_cast<string>(m["GbPort"]));
    }
    if (m.find("ImageSize") != m.end() && !m["ImageSize"].empty()) {
      imageSize = make_shared<double>(boost::any_cast<double>(m["ImageSize"]));
    }
    if (m.find("PackagePattern") != m.end() && !m["PackagePattern"].empty()) {
      packagePattern = make_shared<string>(boost::any_cast<string>(m["PackagePattern"]));
    }
    if (m.find("ProjectCode") != m.end() && !m["ProjectCode"].empty()) {
      projectCode = make_shared<string>(boost::any_cast<string>(m["ProjectCode"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StructuredSize") != m.end() && !m["StructuredSize"].empty()) {
      structuredSize = make_shared<double>(boost::any_cast<double>(m["StructuredSize"]));
    }
    if (m.find("VectorSize") != m.end() && !m["VectorSize"].empty()) {
      vectorSize = make_shared<double>(boost::any_cast<double>(m["VectorSize"]));
    }
  }


  virtual ~DescribeProjectsResponseBodyData() = default;
};
class DescribeProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeProjectsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeProjectsResponseBody() {}

  explicit DescribeProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeProjectsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProjectsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeProjectsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeProjectsResponseBody() = default;
};
class DescribeProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProjectsResponseBody> body{};

  DescribeProjectsResponse() {}

  explicit DescribeProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProjectsResponse() = default;
};
class GetPictureSearchResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithmType{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> deviceList{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> pictureContents{};
  shared_ptr<string> regionId{};
  shared_ptr<long> topNum{};
  shared_ptr<string> vcsId{};

  GetPictureSearchResultsRequest() {}

  explicit GetPictureSearchResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmType) {
      res["AlgorithmType"] = boost::any(*algorithmType);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pictureContents) {
      res["PictureContents"] = boost::any(*pictureContents);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topNum) {
      res["TopNum"] = boost::any(*topNum);
    }
    if (vcsId) {
      res["VcsId"] = boost::any(*vcsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmType") != m.end() && !m["AlgorithmType"].empty()) {
      algorithmType = make_shared<string>(boost::any_cast<string>(m["AlgorithmType"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PictureContents") != m.end() && !m["PictureContents"].empty()) {
      pictureContents = make_shared<string>(boost::any_cast<string>(m["PictureContents"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopNum") != m.end() && !m["TopNum"].empty()) {
      topNum = make_shared<long>(boost::any_cast<long>(m["TopNum"]));
    }
    if (m.find("VcsId") != m.end() && !m["VcsId"].empty()) {
      vcsId = make_shared<string>(boost::any_cast<string>(m["VcsId"]));
    }
  }


  virtual ~GetPictureSearchResultsRequest() = default;
};
class GetPictureSearchResultsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> leftUpperCornerXCoordinate{};
  shared_ptr<string> leftUpperCornerYCoordinate{};
  shared_ptr<string> locationMarkTime{};
  shared_ptr<string> pictureId1{};
  shared_ptr<string> pictureId2{};
  shared_ptr<string> pictureUrl1{};
  shared_ptr<string> pictureUrl2{};
  shared_ptr<string> rightLowerCornerXCoordinate{};
  shared_ptr<string> rightLowerCornerYCoordinate{};
  shared_ptr<double> similarity{};

  GetPictureSearchResultsResponseBodyData() {}

  explicit GetPictureSearchResultsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (leftUpperCornerXCoordinate) {
      res["LeftUpperCornerXCoordinate"] = boost::any(*leftUpperCornerXCoordinate);
    }
    if (leftUpperCornerYCoordinate) {
      res["LeftUpperCornerYCoordinate"] = boost::any(*leftUpperCornerYCoordinate);
    }
    if (locationMarkTime) {
      res["LocationMarkTime"] = boost::any(*locationMarkTime);
    }
    if (pictureId1) {
      res["PictureId1"] = boost::any(*pictureId1);
    }
    if (pictureId2) {
      res["PictureId2"] = boost::any(*pictureId2);
    }
    if (pictureUrl1) {
      res["PictureUrl1"] = boost::any(*pictureUrl1);
    }
    if (pictureUrl2) {
      res["PictureUrl2"] = boost::any(*pictureUrl2);
    }
    if (rightLowerCornerXCoordinate) {
      res["RightLowerCornerXCoordinate"] = boost::any(*rightLowerCornerXCoordinate);
    }
    if (rightLowerCornerYCoordinate) {
      res["RightLowerCornerYCoordinate"] = boost::any(*rightLowerCornerYCoordinate);
    }
    if (similarity) {
      res["Similarity"] = boost::any(*similarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("LeftUpperCornerXCoordinate") != m.end() && !m["LeftUpperCornerXCoordinate"].empty()) {
      leftUpperCornerXCoordinate = make_shared<string>(boost::any_cast<string>(m["LeftUpperCornerXCoordinate"]));
    }
    if (m.find("LeftUpperCornerYCoordinate") != m.end() && !m["LeftUpperCornerYCoordinate"].empty()) {
      leftUpperCornerYCoordinate = make_shared<string>(boost::any_cast<string>(m["LeftUpperCornerYCoordinate"]));
    }
    if (m.find("LocationMarkTime") != m.end() && !m["LocationMarkTime"].empty()) {
      locationMarkTime = make_shared<string>(boost::any_cast<string>(m["LocationMarkTime"]));
    }
    if (m.find("PictureId1") != m.end() && !m["PictureId1"].empty()) {
      pictureId1 = make_shared<string>(boost::any_cast<string>(m["PictureId1"]));
    }
    if (m.find("PictureId2") != m.end() && !m["PictureId2"].empty()) {
      pictureId2 = make_shared<string>(boost::any_cast<string>(m["PictureId2"]));
    }
    if (m.find("PictureUrl1") != m.end() && !m["PictureUrl1"].empty()) {
      pictureUrl1 = make_shared<string>(boost::any_cast<string>(m["PictureUrl1"]));
    }
    if (m.find("PictureUrl2") != m.end() && !m["PictureUrl2"].empty()) {
      pictureUrl2 = make_shared<string>(boost::any_cast<string>(m["PictureUrl2"]));
    }
    if (m.find("RightLowerCornerXCoordinate") != m.end() && !m["RightLowerCornerXCoordinate"].empty()) {
      rightLowerCornerXCoordinate = make_shared<string>(boost::any_cast<string>(m["RightLowerCornerXCoordinate"]));
    }
    if (m.find("RightLowerCornerYCoordinate") != m.end() && !m["RightLowerCornerYCoordinate"].empty()) {
      rightLowerCornerYCoordinate = make_shared<string>(boost::any_cast<string>(m["RightLowerCornerYCoordinate"]));
    }
    if (m.find("Similarity") != m.end() && !m["Similarity"].empty()) {
      similarity = make_shared<double>(boost::any_cast<double>(m["Similarity"]));
    }
  }


  virtual ~GetPictureSearchResultsResponseBodyData() = default;
};
class GetPictureSearchResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetPictureSearchResultsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPictureSearchResultsResponseBody() {}

  explicit GetPictureSearchResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetPictureSearchResultsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPictureSearchResultsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetPictureSearchResultsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPictureSearchResultsResponseBody() = default;
};
class GetPictureSearchResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPictureSearchResultsResponseBody> body{};

  GetPictureSearchResultsResponse() {}

  explicit GetPictureSearchResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPictureSearchResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPictureSearchResultsResponseBody>(model1);
      }
    }
  }


  virtual ~GetPictureSearchResultsResponse() = default;
};
class ImportDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceList{};
  shared_ptr<string> projectId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vcsId{};

  ImportDevicesRequest() {}

  explicit ImportDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vcsId) {
      res["VcsId"] = boost::any(*vcsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      deviceList = make_shared<string>(boost::any_cast<string>(m["DeviceList"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VcsId") != m.end() && !m["VcsId"].empty()) {
      vcsId = make_shared<string>(boost::any_cast<string>(m["VcsId"]));
    }
  }


  virtual ~ImportDevicesRequest() = default;
};
class ImportDevicesResponseBodyDataFailure : public Darabonba::Model {
public:
  shared_ptr<string> deviceCode{};
  shared_ptr<string> deviceId{};

  ImportDevicesResponseBodyDataFailure() {}

  explicit ImportDevicesResponseBodyDataFailure(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCode) {
      res["DeviceCode"] = boost::any(*deviceCode);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCode") != m.end() && !m["DeviceCode"].empty()) {
      deviceCode = make_shared<string>(boost::any_cast<string>(m["DeviceCode"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~ImportDevicesResponseBodyDataFailure() = default;
};
class ImportDevicesResponseBodyDataSuccess : public Darabonba::Model {
public:
  shared_ptr<string> deviceCode{};
  shared_ptr<string> deviceId{};

  ImportDevicesResponseBodyDataSuccess() {}

  explicit ImportDevicesResponseBodyDataSuccess(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCode) {
      res["DeviceCode"] = boost::any(*deviceCode);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCode") != m.end() && !m["DeviceCode"].empty()) {
      deviceCode = make_shared<string>(boost::any_cast<string>(m["DeviceCode"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~ImportDevicesResponseBodyDataSuccess() = default;
};
class ImportDevicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ImportDevicesResponseBodyDataFailure>> failure{};
  shared_ptr<vector<ImportDevicesResponseBodyDataSuccess>> success{};

  ImportDevicesResponseBodyData() {}

  explicit ImportDevicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failure) {
      vector<boost::any> temp1;
      for(auto item1:*failure){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Failure"] = boost::any(temp1);
    }
    if (success) {
      vector<boost::any> temp1;
      for(auto item1:*success){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Success"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Failure") != m.end() && !m["Failure"].empty()) {
      if (typeid(vector<boost::any>) == m["Failure"].type()) {
        vector<ImportDevicesResponseBodyDataFailure> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Failure"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportDevicesResponseBodyDataFailure model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failure = make_shared<vector<ImportDevicesResponseBodyDataFailure>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      if (typeid(vector<boost::any>) == m["Success"].type()) {
        vector<ImportDevicesResponseBodyDataSuccess> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Success"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportDevicesResponseBodyDataSuccess model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        success = make_shared<vector<ImportDevicesResponseBodyDataSuccess>>(expect1);
      }
    }
  }


  virtual ~ImportDevicesResponseBodyData() = default;
};
class ImportDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ImportDevicesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ImportDevicesResponseBody() {}

  explicit ImportDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ImportDevicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImportDevicesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImportDevicesResponseBody() = default;
};
class ImportDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportDevicesResponseBody> body{};

  ImportDevicesResponse() {}

  explicit ImportDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~ImportDevicesResponse() = default;
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
  CreateComputeTaskResponse createComputeTaskWithOptions(shared_ptr<CreateComputeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateComputeTaskResponse createComputeTask(shared_ptr<CreateComputeTaskRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  DescribeComputeTasksResponse describeComputeTasksWithOptions(shared_ptr<DescribeComputeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComputeTasksResponse describeComputeTasks(shared_ptr<DescribeComputeTasksRequest> request);
  DescribeDevicesResponse describeDevicesWithOptions(shared_ptr<DescribeDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDevicesResponse describeDevices(shared_ptr<DescribeDevicesRequest> request);
  DescribeProjectsResponse describeProjectsWithOptions(shared_ptr<DescribeProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProjectsResponse describeProjects(shared_ptr<DescribeProjectsRequest> request);
  GetPictureSearchResultsResponse getPictureSearchResultsWithOptions(shared_ptr<GetPictureSearchResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPictureSearchResultsResponse getPictureSearchResults(shared_ptr<GetPictureSearchResultsRequest> request);
  ImportDevicesResponse importDevicesWithOptions(shared_ptr<ImportDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportDevicesResponse importDevices(shared_ptr<ImportDevicesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Vcs20190430

#endif
