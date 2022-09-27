// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MTS20210728_H_
#define ALIBABACLOUD_MTS20210728_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Mts20210728 {
class QueryCopyrightRequest : public Darabonba::Model {
public:
  shared_ptr<long> createTimeEnd{};
  shared_ptr<long> createTimeStart{};
  shared_ptr<string> jobId{};
  shared_ptr<long> level{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryCopyrightRequest() {}

  explicit QueryCopyrightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
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
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<long>(boost::any_cast<long>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<long>(boost::any_cast<long>(m["CreateTimeStart"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryCopyrightRequest() = default;
};
class QueryCopyrightResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> callback{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> input{};
  shared_ptr<string> jobId{};
  shared_ptr<long> level{};
  shared_ptr<string> message{};
  shared_ptr<long> messageId{};
  shared_ptr<string> output{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};
  shared_ptr<string> userData{};
  shared_ptr<long> userId{};

  QueryCopyrightResponseBodyData() {}

  explicit QueryCopyrightResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<long>(boost::any_cast<long>(m["MessageId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~QueryCopyrightResponseBodyData() = default;
};
class QueryCopyrightResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCopyrightResponseBodyData>> data{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  QueryCopyrightResponseBody() {}

  explicit QueryCopyrightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryCopyrightResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCopyrightResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryCopyrightResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~QueryCopyrightResponseBody() = default;
};
class QueryCopyrightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCopyrightResponseBody> body{};

  QueryCopyrightResponse() {}

  explicit QueryCopyrightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCopyrightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCopyrightResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCopyrightResponse() = default;
};
class QueryCopyrightExtractRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  QueryCopyrightExtractRequest() {}

  explicit QueryCopyrightExtractRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryCopyrightExtractRequest() = default;
};
class QueryCopyrightExtractResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> message{};

  QueryCopyrightExtractResponseBodyData() {}

  explicit QueryCopyrightExtractResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~QueryCopyrightExtractResponseBodyData() = default;
};
class QueryCopyrightExtractResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryCopyrightExtractResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  QueryCopyrightExtractResponseBody() {}

  explicit QueryCopyrightExtractResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCopyrightExtractResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCopyrightExtractResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~QueryCopyrightExtractResponseBody() = default;
};
class QueryCopyrightExtractResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCopyrightExtractResponseBody> body{};

  QueryCopyrightExtractResponse() {}

  explicit QueryCopyrightExtractResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCopyrightExtractResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCopyrightExtractResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCopyrightExtractResponse() = default;
};
class QueryTraceAbRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};

  QueryTraceAbRequest() {}

  explicit QueryTraceAbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~QueryTraceAbRequest() = default;
};
class QueryTraceAbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> callback{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> input{};
  shared_ptr<string> jobId{};
  shared_ptr<long> level{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> output{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};
  shared_ptr<string> userData{};
  shared_ptr<long> userId{};

  QueryTraceAbResponseBodyData() {}

  explicit QueryTraceAbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~QueryTraceAbResponseBodyData() = default;
};
class QueryTraceAbResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTraceAbResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  QueryTraceAbResponseBody() {}

  explicit QueryTraceAbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryTraceAbResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTraceAbResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryTraceAbResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~QueryTraceAbResponseBody() = default;
};
class QueryTraceAbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTraceAbResponseBody> body{};

  QueryTraceAbResponse() {}

  explicit QueryTraceAbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTraceAbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTraceAbResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTraceAbResponse() = default;
};
class QueryTraceExtractRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  QueryTraceExtractRequest() {}

  explicit QueryTraceExtractRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryTraceExtractRequest() = default;
};
class QueryTraceExtractResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> trace{};

  QueryTraceExtractResponseBodyData() {}

  explicit QueryTraceExtractResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trace) {
      res["Trace"] = boost::any(*trace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Trace") != m.end() && !m["Trace"].empty()) {
      trace = make_shared<string>(boost::any_cast<string>(m["Trace"]));
    }
  }


  virtual ~QueryTraceExtractResponseBodyData() = default;
};
class QueryTraceExtractResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryTraceExtractResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  QueryTraceExtractResponseBody() {}

  explicit QueryTraceExtractResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTraceExtractResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTraceExtractResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~QueryTraceExtractResponseBody() = default;
};
class QueryTraceExtractResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTraceExtractResponseBody> body{};

  QueryTraceExtractResponse() {}

  explicit QueryTraceExtractResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTraceExtractResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTraceExtractResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTraceExtractResponse() = default;
};
class QueryTraceMuRequest : public Darabonba::Model {
public:
  shared_ptr<long> createTimeEnd{};
  shared_ptr<long> createTimeStart{};
  shared_ptr<string> jobId{};
  shared_ptr<long> level{};
  shared_ptr<long> messageId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryTraceMuRequest() {}

  explicit QueryTraceMuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<long>(boost::any_cast<long>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<long>(boost::any_cast<long>(m["CreateTimeStart"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<long>(boost::any_cast<long>(m["MessageId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryTraceMuRequest() = default;
};
class QueryTraceMuResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> output{};
  shared_ptr<string> status{};
  shared_ptr<string> trace{};
  shared_ptr<long> traceId{};
  shared_ptr<string> userData{};
  shared_ptr<long> userId{};

  QueryTraceMuResponseBodyData() {}

  explicit QueryTraceMuResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trace) {
      res["Trace"] = boost::any(*trace);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Trace") != m.end() && !m["Trace"].empty()) {
      trace = make_shared<string>(boost::any_cast<string>(m["Trace"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<long>(boost::any_cast<long>(m["TraceId"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~QueryTraceMuResponseBodyData() = default;
};
class QueryTraceMuResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTraceMuResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  QueryTraceMuResponseBody() {}

  explicit QueryTraceMuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryTraceMuResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTraceMuResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryTraceMuResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~QueryTraceMuResponseBody() = default;
};
class QueryTraceMuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTraceMuResponseBody> body{};

  QueryTraceMuResponse() {}

  explicit QueryTraceMuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTraceMuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTraceMuResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTraceMuResponse() = default;
};
class SubmitCopyrightExtractRequest : public Darabonba::Model {
public:
  shared_ptr<string> callBack{};
  shared_ptr<string> input{};
  shared_ptr<string> url{};
  shared_ptr<string> userData{};

  SubmitCopyrightExtractRequest() {}

  explicit SubmitCopyrightExtractRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitCopyrightExtractRequest() = default;
};
class SubmitCopyrightExtractResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  SubmitCopyrightExtractResponseBodyData() {}

  explicit SubmitCopyrightExtractResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitCopyrightExtractResponseBodyData() = default;
};
class SubmitCopyrightExtractResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitCopyrightExtractResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  SubmitCopyrightExtractResponseBody() {}

  explicit SubmitCopyrightExtractResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitCopyrightExtractResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitCopyrightExtractResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SubmitCopyrightExtractResponseBody() = default;
};
class SubmitCopyrightExtractResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitCopyrightExtractResponseBody> body{};

  SubmitCopyrightExtractResponse() {}

  explicit SubmitCopyrightExtractResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitCopyrightExtractResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitCopyrightExtractResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitCopyrightExtractResponse() = default;
};
class SubmitCopyrightJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> callBack{};
  shared_ptr<string> description{};
  shared_ptr<string> input{};
  shared_ptr<long> level{};
  shared_ptr<string> message{};
  shared_ptr<string> output{};
  shared_ptr<long> startTime{};
  shared_ptr<long> totalTime{};
  shared_ptr<string> url{};
  shared_ptr<string> userData{};
  shared_ptr<string> visibleMessage{};

  SubmitCopyrightJobRequest() {}

  explicit SubmitCopyrightJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (visibleMessage) {
      res["VisibleMessage"] = boost::any(*visibleMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["TotalTime"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("VisibleMessage") != m.end() && !m["VisibleMessage"].empty()) {
      visibleMessage = make_shared<string>(boost::any_cast<string>(m["VisibleMessage"]));
    }
  }


  virtual ~SubmitCopyrightJobRequest() = default;
};
class SubmitCopyrightJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  SubmitCopyrightJobResponseBodyData() {}

  explicit SubmitCopyrightJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitCopyrightJobResponseBodyData() = default;
};
class SubmitCopyrightJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitCopyrightJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  SubmitCopyrightJobResponseBody() {}

  explicit SubmitCopyrightJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitCopyrightJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitCopyrightJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SubmitCopyrightJobResponseBody() = default;
};
class SubmitCopyrightJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitCopyrightJobResponseBody> body{};

  SubmitCopyrightJobResponse() {}

  explicit SubmitCopyrightJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitCopyrightJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitCopyrightJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitCopyrightJobResponse() = default;
};
class SubmitImageCopyrightRequest : public Darabonba::Model {
public:
  shared_ptr<string> input{};
  shared_ptr<long> level{};
  shared_ptr<string> message{};
  shared_ptr<string> output{};
  shared_ptr<string> params{};
  shared_ptr<string> url{};

  SubmitImageCopyrightRequest() {}

  explicit SubmitImageCopyrightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~SubmitImageCopyrightRequest() = default;
};
class SubmitImageCopyrightResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  SubmitImageCopyrightResponseBodyData() {}

  explicit SubmitImageCopyrightResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitImageCopyrightResponseBodyData() = default;
};
class SubmitImageCopyrightResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitImageCopyrightResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  SubmitImageCopyrightResponseBody() {}

  explicit SubmitImageCopyrightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitImageCopyrightResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitImageCopyrightResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SubmitImageCopyrightResponseBody() = default;
};
class SubmitImageCopyrightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitImageCopyrightResponseBody> body{};

  SubmitImageCopyrightResponse() {}

  explicit SubmitImageCopyrightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitImageCopyrightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitImageCopyrightResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitImageCopyrightResponse() = default;
};
class SubmitTraceAbRequest : public Darabonba::Model {
public:
  shared_ptr<string> callBack{};
  shared_ptr<string> cipherBase64ed{};
  shared_ptr<string> input{};
  shared_ptr<long> level{};
  shared_ptr<string> output{};
  shared_ptr<long> startTime{};
  shared_ptr<long> totalTime{};
  shared_ptr<string> url{};
  shared_ptr<string> userData{};

  SubmitTraceAbRequest() {}

  explicit SubmitTraceAbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (cipherBase64ed) {
      res["CipherBase64ed"] = boost::any(*cipherBase64ed);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("CipherBase64ed") != m.end() && !m["CipherBase64ed"].empty()) {
      cipherBase64ed = make_shared<string>(boost::any_cast<string>(m["CipherBase64ed"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["TotalTime"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitTraceAbRequest() = default;
};
class SubmitTraceAbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> mediaId{};

  SubmitTraceAbResponseBodyData() {}

  explicit SubmitTraceAbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
  }


  virtual ~SubmitTraceAbResponseBodyData() = default;
};
class SubmitTraceAbResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitTraceAbResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  SubmitTraceAbResponseBody() {}

  explicit SubmitTraceAbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitTraceAbResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitTraceAbResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SubmitTraceAbResponseBody() = default;
};
class SubmitTraceAbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitTraceAbResponseBody> body{};

  SubmitTraceAbResponse() {}

  explicit SubmitTraceAbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitTraceAbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTraceAbResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTraceAbResponse() = default;
};
class SubmitTraceExtractRequest : public Darabonba::Model {
public:
  shared_ptr<string> callBack{};
  shared_ptr<string> input{};
  shared_ptr<string> url{};
  shared_ptr<string> userData{};

  SubmitTraceExtractRequest() {}

  explicit SubmitTraceExtractRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~SubmitTraceExtractRequest() = default;
};
class SubmitTraceExtractResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  SubmitTraceExtractResponseBodyData() {}

  explicit SubmitTraceExtractResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitTraceExtractResponseBodyData() = default;
};
class SubmitTraceExtractResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitTraceExtractResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  SubmitTraceExtractResponseBody() {}

  explicit SubmitTraceExtractResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitTraceExtractResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitTraceExtractResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SubmitTraceExtractResponseBody() = default;
};
class SubmitTraceExtractResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitTraceExtractResponseBody> body{};

  SubmitTraceExtractResponse() {}

  explicit SubmitTraceExtractResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitTraceExtractResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTraceExtractResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTraceExtractResponse() = default;
};
class SubmitTracemuRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyUri{};
  shared_ptr<string> mediaId{};
  shared_ptr<string> output{};
  shared_ptr<string> trace{};

  SubmitTracemuRequest() {}

  explicit SubmitTracemuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyUri) {
      res["KeyUri"] = boost::any(*keyUri);
    }
    if (mediaId) {
      res["MediaId"] = boost::any(*mediaId);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (trace) {
      res["Trace"] = boost::any(*trace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyUri") != m.end() && !m["KeyUri"].empty()) {
      keyUri = make_shared<string>(boost::any_cast<string>(m["KeyUri"]));
    }
    if (m.find("MediaId") != m.end() && !m["MediaId"].empty()) {
      mediaId = make_shared<string>(boost::any_cast<string>(m["MediaId"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Trace") != m.end() && !m["Trace"].empty()) {
      trace = make_shared<string>(boost::any_cast<string>(m["Trace"]));
    }
  }


  virtual ~SubmitTracemuRequest() = default;
};
class SubmitTracemuResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> jobId{};

  SubmitTracemuResponseBodyData() {}

  explicit SubmitTracemuResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~SubmitTracemuResponseBodyData() = default;
};
class SubmitTracemuResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitTracemuResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestID{};
  shared_ptr<long> statusCode{};

  SubmitTracemuResponseBody() {}

  explicit SubmitTracemuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitTracemuResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitTracemuResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SubmitTracemuResponseBody() = default;
};
class SubmitTracemuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitTracemuResponseBody> body{};

  SubmitTracemuResponse() {}

  explicit SubmitTracemuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitTracemuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTracemuResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTracemuResponse() = default;
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
  QueryCopyrightResponse queryCopyright(shared_ptr<QueryCopyrightRequest> request);
  QueryCopyrightResponse queryCopyrightWithOptions(shared_ptr<QueryCopyrightRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCopyrightExtractResponse queryCopyrightExtract(shared_ptr<QueryCopyrightExtractRequest> request);
  QueryCopyrightExtractResponse queryCopyrightExtractWithOptions(shared_ptr<QueryCopyrightExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTraceAbResponse queryTraceAb(shared_ptr<QueryTraceAbRequest> request);
  QueryTraceAbResponse queryTraceAbWithOptions(shared_ptr<QueryTraceAbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTraceExtractResponse queryTraceExtract(shared_ptr<QueryTraceExtractRequest> request);
  QueryTraceExtractResponse queryTraceExtractWithOptions(shared_ptr<QueryTraceExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTraceMuResponse queryTraceMu(shared_ptr<QueryTraceMuRequest> request);
  QueryTraceMuResponse queryTraceMuWithOptions(shared_ptr<QueryTraceMuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitCopyrightExtractResponse submitCopyrightExtract(shared_ptr<SubmitCopyrightExtractRequest> request);
  SubmitCopyrightExtractResponse submitCopyrightExtractWithOptions(shared_ptr<SubmitCopyrightExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitCopyrightJobResponse submitCopyrightJob(shared_ptr<SubmitCopyrightJobRequest> request);
  SubmitCopyrightJobResponse submitCopyrightJobWithOptions(shared_ptr<SubmitCopyrightJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitImageCopyrightResponse submitImageCopyright(shared_ptr<SubmitImageCopyrightRequest> request);
  SubmitImageCopyrightResponse submitImageCopyrightWithOptions(shared_ptr<SubmitImageCopyrightRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTraceAbResponse submitTraceAb(shared_ptr<SubmitTraceAbRequest> request);
  SubmitTraceAbResponse submitTraceAbWithOptions(shared_ptr<SubmitTraceAbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTraceExtractResponse submitTraceExtract(shared_ptr<SubmitTraceExtractRequest> request);
  SubmitTraceExtractResponse submitTraceExtractWithOptions(shared_ptr<SubmitTraceExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTracemuResponse submitTracemu(shared_ptr<SubmitTracemuRequest> request);
  SubmitTracemuResponse submitTracemuWithOptions(shared_ptr<SubmitTracemuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mts20210728

#endif
