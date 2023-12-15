// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ACTIONTRAIL20150928_H_
#define ALIBABACLOUD_ACTIONTRAIL20150928_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Actiontrail20150928 {
class CreateTrailRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> roleName{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  CreateTrailRequest() {}

  explicit CreateTrailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateTrailRequest() = default;
};
class CreateTrailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> param{};
  shared_ptr<string> result{};
  shared_ptr<string> roleName{};

  CreateTrailResponseBody() {}

  explicit CreateTrailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateTrailResponseBody() = default;
};
class CreateTrailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrailResponseBody> body{};

  CreateTrailResponse() {}

  explicit CreateTrailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTrailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrailResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrailResponse() = default;
};
class DeleteTrailRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  DeleteTrailRequest() {}

  explicit DeleteTrailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DeleteTrailRequest() = default;
};
class DeleteTrailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> result{};

  DeleteTrailResponseBody() {}

  explicit DeleteTrailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~DeleteTrailResponseBody() = default;
};
class DeleteTrailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTrailResponseBody> body{};

  DeleteTrailResponse() {}

  explicit DeleteTrailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTrailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTrailResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTrailResponse() = default;
};
class DescribeTrailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  DescribeTrailsRequest() {}

  explicit DescribeTrailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeTrailsRequest() = default;
};
class DescribeTrailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> result{};
  shared_ptr<string> trailList{};

  DescribeTrailsResponseBody() {}

  explicit DescribeTrailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (trailList) {
      res["TrailList"] = boost::any(*trailList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("TrailList") != m.end() && !m["TrailList"].empty()) {
      trailList = make_shared<string>(boost::any_cast<string>(m["TrailList"]));
    }
  }


  virtual ~DescribeTrailsResponseBody() = default;
};
class DescribeTrailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrailsResponseBody> body{};

  DescribeTrailsResponse() {}

  explicit DescribeTrailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTrailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrailsResponse() = default;
};
class EchoRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> isLogging{};
  shared_ptr<string> keyPrefix{};
  shared_ptr<string> latestDeliveryError{};
  shared_ptr<string> latestDeliveryTime{};
  shared_ptr<string> name{};
  shared_ptr<string> startLoggingTime{};
  shared_ptr<string> status{};
  shared_ptr<string> stopLoggingTime{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  EchoRequest() {}

  explicit EchoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (isLogging) {
      res["IsLogging"] = boost::any(*isLogging);
    }
    if (keyPrefix) {
      res["KeyPrefix"] = boost::any(*keyPrefix);
    }
    if (latestDeliveryError) {
      res["LatestDeliveryError"] = boost::any(*latestDeliveryError);
    }
    if (latestDeliveryTime) {
      res["LatestDeliveryTime"] = boost::any(*latestDeliveryTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startLoggingTime) {
      res["StartLoggingTime"] = boost::any(*startLoggingTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stopLoggingTime) {
      res["StopLoggingTime"] = boost::any(*stopLoggingTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("IsLogging") != m.end() && !m["IsLogging"].empty()) {
      isLogging = make_shared<string>(boost::any_cast<string>(m["IsLogging"]));
    }
    if (m.find("KeyPrefix") != m.end() && !m["KeyPrefix"].empty()) {
      keyPrefix = make_shared<string>(boost::any_cast<string>(m["KeyPrefix"]));
    }
    if (m.find("LatestDeliveryError") != m.end() && !m["LatestDeliveryError"].empty()) {
      latestDeliveryError = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryError"]));
    }
    if (m.find("LatestDeliveryTime") != m.end() && !m["LatestDeliveryTime"].empty()) {
      latestDeliveryTime = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartLoggingTime") != m.end() && !m["StartLoggingTime"].empty()) {
      startLoggingTime = make_shared<string>(boost::any_cast<string>(m["StartLoggingTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StopLoggingTime") != m.end() && !m["StopLoggingTime"].empty()) {
      stopLoggingTime = make_shared<string>(boost::any_cast<string>(m["StopLoggingTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~EchoRequest() = default;
};
class EchoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> result{};
  shared_ptr<string> requestId{};

  EchoResponseBody() {}

  explicit EchoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~EchoResponseBody() = default;
};
class EchoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EchoResponseBody> body{};

  EchoResponse() {}

  explicit EchoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EchoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EchoResponseBody>(model1);
      }
    }
  }


  virtual ~EchoResponse() = default;
};
class GetTrailStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetTrailStatusRequest() {}

  explicit GetTrailStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetTrailStatusRequest() = default;
};
class GetTrailStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isLogging{};
  shared_ptr<string> latestDeliveryError{};
  shared_ptr<string> latestDeliveryTime{};
  shared_ptr<string> param{};
  shared_ptr<string> result{};
  shared_ptr<string> startLoggingTime{};
  shared_ptr<string> stopLoggingTime{};

  GetTrailStatusResponseBody() {}

  explicit GetTrailStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isLogging) {
      res["IsLogging"] = boost::any(*isLogging);
    }
    if (latestDeliveryError) {
      res["LatestDeliveryError"] = boost::any(*latestDeliveryError);
    }
    if (latestDeliveryTime) {
      res["LatestDeliveryTime"] = boost::any(*latestDeliveryTime);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (startLoggingTime) {
      res["StartLoggingTime"] = boost::any(*startLoggingTime);
    }
    if (stopLoggingTime) {
      res["StopLoggingTime"] = boost::any(*stopLoggingTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsLogging") != m.end() && !m["IsLogging"].empty()) {
      isLogging = make_shared<bool>(boost::any_cast<bool>(m["IsLogging"]));
    }
    if (m.find("LatestDeliveryError") != m.end() && !m["LatestDeliveryError"].empty()) {
      latestDeliveryError = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryError"]));
    }
    if (m.find("LatestDeliveryTime") != m.end() && !m["LatestDeliveryTime"].empty()) {
      latestDeliveryTime = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryTime"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("StartLoggingTime") != m.end() && !m["StartLoggingTime"].empty()) {
      startLoggingTime = make_shared<string>(boost::any_cast<string>(m["StartLoggingTime"]));
    }
    if (m.find("StopLoggingTime") != m.end() && !m["StopLoggingTime"].empty()) {
      stopLoggingTime = make_shared<string>(boost::any_cast<string>(m["StopLoggingTime"]));
    }
  }


  virtual ~GetTrailStatusResponseBody() = default;
};
class GetTrailStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrailStatusResponseBody> body{};

  GetTrailStatusResponse() {}

  explicit GetTrailStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrailStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrailStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrailStatusResponse() = default;
};
class HelpRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  HelpRequest() {}

  explicit HelpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~HelpRequest() = default;
};
class HelpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> param{};
  shared_ptr<string> result{};

  HelpResponseBody() {}

  explicit HelpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~HelpResponseBody() = default;
};
class HelpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HelpResponseBody> body{};

  HelpResponse() {}

  explicit HelpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HelpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HelpResponseBody>(model1);
      }
    }
  }


  virtual ~HelpResponse() = default;
};
class LookupEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> event{};
  shared_ptr<string> eventAccessKeyId{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventRW{};
  shared_ptr<string> eventType{};
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> request{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};
  shared_ptr<string> user{};
  shared_ptr<string> version{};

  LookupEventsRequest() {}

  explicit LookupEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (eventAccessKeyId) {
      res["EventAccessKeyId"] = boost::any(*eventAccessKeyId);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventRW) {
      res["EventRW"] = boost::any(*eventRW);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (request) {
      res["Request"] = boost::any(*request);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("EventAccessKeyId") != m.end() && !m["EventAccessKeyId"].empty()) {
      eventAccessKeyId = make_shared<string>(boost::any_cast<string>(m["EventAccessKeyId"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventRW") != m.end() && !m["EventRW"].empty()) {
      eventRW = make_shared<string>(boost::any_cast<string>(m["EventRW"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      request = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~LookupEventsRequest() = default;
};
class LookupEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> events{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> param{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<string> startTime{};

  LookupEventsResponseBody() {}

  explicit LookupEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
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
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      events = make_shared<string>(boost::any_cast<string>(m["Events"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~LookupEventsResponseBody() = default;
};
class LookupEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LookupEventsResponseBody> body{};

  LookupEventsResponse() {}

  explicit LookupEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LookupEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LookupEventsResponseBody>(model1);
      }
    }
  }


  virtual ~LookupEventsResponse() = default;
};
class StartLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  StartLoggingRequest() {}

  explicit StartLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~StartLoggingRequest() = default;
};
class StartLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> result{};

  StartLoggingResponseBody() {}

  explicit StartLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~StartLoggingResponseBody() = default;
};
class StartLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartLoggingResponseBody> body{};

  StartLoggingResponse() {}

  explicit StartLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~StartLoggingResponse() = default;
};
class StopLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  StopLoggingRequest() {}

  explicit StopLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~StopLoggingRequest() = default;
};
class StopLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> param{};
  shared_ptr<string> result{};

  StopLoggingResponseBody() {}

  explicit StopLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~StopLoggingResponseBody() = default;
};
class StopLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopLoggingResponseBody> body{};

  StopLoggingResponse() {}

  explicit StopLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~StopLoggingResponse() = default;
};
class UpdateTrailRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> help{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> roleName{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  UpdateTrailRequest() {}

  explicit UpdateTrailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~UpdateTrailRequest() = default;
};
class UpdateTrailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> param{};
  shared_ptr<string> result{};
  shared_ptr<string> roleName{};

  UpdateTrailResponseBody() {}

  explicit UpdateTrailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~UpdateTrailResponseBody() = default;
};
class UpdateTrailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTrailResponseBody> body{};

  UpdateTrailResponse() {}

  explicit UpdateTrailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTrailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTrailResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTrailResponse() = default;
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
  CreateTrailResponse createTrailWithOptions(shared_ptr<CreateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrailResponse createTrail(shared_ptr<CreateTrailRequest> request);
  DeleteTrailResponse deleteTrailWithOptions(shared_ptr<DeleteTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTrailResponse deleteTrail(shared_ptr<DeleteTrailRequest> request);
  DescribeTrailsResponse describeTrailsWithOptions(shared_ptr<DescribeTrailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrailsResponse describeTrails(shared_ptr<DescribeTrailsRequest> request);
  EchoResponse echoWithOptions(shared_ptr<EchoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EchoResponse echo(shared_ptr<EchoRequest> request);
  GetTrailStatusResponse getTrailStatusWithOptions(shared_ptr<GetTrailStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrailStatusResponse getTrailStatus(shared_ptr<GetTrailStatusRequest> request);
  HelpResponse helpWithOptions(shared_ptr<HelpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HelpResponse help(shared_ptr<HelpRequest> request);
  LookupEventsResponse lookupEventsWithOptions(shared_ptr<LookupEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LookupEventsResponse lookupEvents(shared_ptr<LookupEventsRequest> request);
  StartLoggingResponse startLoggingWithOptions(shared_ptr<StartLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartLoggingResponse startLogging(shared_ptr<StartLoggingRequest> request);
  StopLoggingResponse stopLoggingWithOptions(shared_ptr<StopLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLoggingResponse stopLogging(shared_ptr<StopLoggingRequest> request);
  UpdateTrailResponse updateTrailWithOptions(shared_ptr<UpdateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTrailResponse updateTrail(shared_ptr<UpdateTrailRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Actiontrail20150928

#endif
